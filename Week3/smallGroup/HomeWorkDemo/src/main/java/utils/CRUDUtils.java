package utils;

import po.User;

import javax.xml.namespace.QName;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.List;

public class CRUDUtils {
    static JDBCUtils jdbcUtils = new JDBCUtils();
    static ResultSet rs = null;
    static Connection conn = null;
    static PreparedStatement ps =null;//预编译的数据库操作对象
    boolean deleteSuccess = false;

    static {
        try {
            conn = JDBCUtils.getConnection();
        } catch (SQLException throwables) {
            throwables.printStackTrace();
        }
    }

    public boolean insert (User user){
        try {
            String sql = "insert into user(id,name,password) values(" + user.getId() + "," + user.getUsername() + "," + user.getPassword() + ")";
            System.out.println(sql);
            ps = conn.prepareStatement(sql);
            int result = ps.executeUpdate();
            if (result != 0) {
                deleteSuccess = true;
            }
        } catch (Throwable e) {
            e.printStackTrace();
        }
        return deleteSuccess;
    }

    public boolean update(User user){
        int num=0;
        try {
            String sql = "update user SET  id = "+user.getId()+",username = '"+user.getUsername()+"',password='"+user.getPassword()+"' where id ="+user.getId();//创建sql语句
            ps=conn.prepareStatement(sql);
            num=ps.executeUpdate();
            if(num!=0)
                deleteSuccess=true;
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return deleteSuccess;
    }

    public boolean delete(Integer id){
        int num = 0;
        try {
            String sql = "delete from user where id = "+id;//创建sql语句
            ps=conn.prepareStatement(sql);
            num = ps.executeUpdate();
            if(num!=0)
                deleteSuccess=true;
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return deleteSuccess;
    }


    public ResultSet find (String str){
        String sql = "select "+str+" from user";//创建sql语句
        try {
            ps=conn.prepareStatement(sql);
        } catch (SQLException throwables) {
            throwables.printStackTrace();
        }
        try {
            rs = ps.executeQuery();
        } catch (SQLException throwables) {
            throwables.printStackTrace();
        }try {
            while (rs.next()){
                System.out.print(rs.getString("id")+" ");
                System.out.print(rs.getString("name")+" ");
                System.out.println(rs.getString("password"));
            }
        } catch (SQLException throwables) {
            throwables.printStackTrace();
        }

        return rs;
    }

    public static void main(String[] args) {
        CRUDUtils crudUtils = new CRUDUtils();
        ResultSet resultSet = crudUtils.find("*");
//        System.out.println(crudUtils.delete(6));
 //       System.out.println(crudUtils.insert(new User(11, "555", "123")));

//        System.out.println(crudUtils.update(new User(6, "555", "123")));


    }

}
