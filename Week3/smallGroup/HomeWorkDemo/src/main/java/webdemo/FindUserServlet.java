package webdemo;

import com.fasterxml.jackson.databind.ObjectMapper;

import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.annotation.*;
import java.io.IOException;
import java.util.HashMap;
import java.util.Map;

@WebServlet("/findUserServlet")
public class FindUserServlet extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        //获取用户名
        String username = request.getParameter("username");
        response.setContentType("application/json;charset=utf-8");
        Map<String,Object> map = new HashMap<String,Object>();
        //调用service层判断用户名是否存在。
        if("QG".equals(username)){
            //注册失败
            map.put("userExist",true);
            map.put("msg","已经存在该用户名啦，请换一个哦");
        }else {
            //成功
            map.put("userExist",false);
            map.put("msg","该用户名可用");
        }
        ObjectMapper mapper = new ObjectMapper();//将mapper转为json，并且传递给客户端
        mapper.writeValue(response.getWriter(),map);
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        this.doGet(request, response);
    }
}
