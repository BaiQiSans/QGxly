package com.example.demo1;

import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.annotation.*;
import java.io.IOException;

@WebServlet("/Demo01")
public class ServletDemo01 extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
            response.setContentType("text/html;charset=utf-8");
            response.getWriter().write("我是GET方法哦！");
            try
            {
                //int code = Integer.parseInt(request.getParameter("code"));
                response.setStatus(404);
            } catch (NumberFormatException ignore) { }
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
            response.setContentType("text/html;charset=utf-8");
            response.getWriter().write("我是POST方法哦！");
        try
        {
            //int code = Integer.parseInt(request.getParameter("code"));
            response.setStatus(302);
        } catch (NumberFormatException ignore) { }
    }

    @Override
    protected void doDelete(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        resp.setContentType("text/html;charset=utf-8");
        resp.getWriter().write("不支持这个方法哦" );
        try
        {
            //int code = Integer.parseInt(request.getParameter("code"));
            resp.setStatus(502);
        } catch (NumberFormatException ignore) { }
    }

    @Override
    protected void doOptions(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        resp.setContentType("text/html;charset=utf-8");
        resp.getWriter().write("不支持这个方法哦");
        try
        {
            //int code = Integer.parseInt(request.getParameter("code"));
            resp.setStatus(501);
        } catch (NumberFormatException ignore) { }
    }

    @Override
    protected void doHead(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {

    }

    @Override
    protected void doPut(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        resp.setContentType("text/html;charset=utf-8");
        resp.getWriter().write("不支持这个方法哦");
        try
        {
            //int code = Integer.parseInt(request.getParameter("code"));
            resp.setStatus(400);
        } catch (NumberFormatException ignore) { }
    }

    @Override
    protected void doTrace(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {

    }
}
