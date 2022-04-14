package controller;

import com.fasterxml.jackson.databind.ObjectMapper;
import po.User;
import service.Impl.UserServiceImpl;
import service.UserService;

import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.annotation.*;
import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.HashMap;
import java.util.Objects;

@WebServlet("/baseServlet")
public class BaseServlet extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        request.setCharacterEncoding("utf-8");
        response.setCharacterEncoding("utf-8");//设置编码

        try {
            String methodName = request.getParameter("method");//从前端获取目标方法
            Class<? extends BaseServlet> aClass = this.getClass();//利用反射获取当前类
            Method method = aClass.getMethod(methodName, HttpServletRequest.class, HttpServletResponse.class);
            method.invoke(this,request,response);
        } catch (NoSuchMethodException ex)
        {

            response.getWriter().write("方法未找到");
        } catch (InvocationTargetException | IllegalAccessException ignore) { }
    }

    public void login(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        int flag = 0;
        String username = request.getParameter("username");
        String password = request.getParameter("password");
        response.setContentType("application/json;charset=utf-8");
        UserService userService = new UserServiceImpl();
        User u = userService.selectByName(username);
        ObjectMapper mapper = new ObjectMapper();
        mapper.writeValue(response.getWriter(), new HashMap<String, Boolean>() {{
            put("loginSuccess", u != null && Objects.equals(u.getPassword(), password));
        }});
    }

}
