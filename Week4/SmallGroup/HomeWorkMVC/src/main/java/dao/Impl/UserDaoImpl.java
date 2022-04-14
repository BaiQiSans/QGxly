package dao.Impl;

import dao.UserDao;
import po.User;
import utils.JDBCUtils;

//import javax.xml.namespace.QName;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;
//import java.util.List;

public class UserDaoImpl implements UserDao {
    static JDBCUtils jdbcUtils = new JDBCUtils();
    static ResultSet rs = null;
    static Connection conn = null;
    static PreparedStatement ps =null;//预编译的数据库操作对象
    boolean Success = false;

    static {
        try {
            conn = JDBCUtils.getConnection();
        } catch (SQLException throwables) {
            throwables.printStackTrace();
        }
    }

    @Override
    public List<User> selectCondition(User user) {
        return null;
    }



    @Override
    public List<User> selectAll() {
        String sql = "select * from user";//创建sql语句
        List<User> users = new ArrayList<>();
        User user = new User();
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
                user.setId(Integer.parseInt(rs.getString("id")));
                user.setUsername(rs.getString("username"));
                user.setPassword(rs.getString("password"));
                users.add(user);
            }
        } catch (SQLException throwables) {
            throwables.printStackTrace();
        }
        return users;
    }

    @Override
    public User selectById(Integer id) {
        return null;
    }

    public boolean insert (User user){
        try {
            String sql = "insert into user(id,name,password) values(" + user.getId() + "," + user.getUsername() + "," + user.getPassword() + ")";
            System.out.println(sql);
            ps = conn.prepareStatement(sql);
            int result = ps.executeUpdate();
            if (result != 0) {
                Success = true;
            }
        } catch (Throwable e) {
            e.printStackTrace();
        }
        return Success;
    }

    public boolean update(User user){
        int num=0;
        try {
            String sql = "update user SET  id = "+user.getId()+",username = '"+user.getUsername()+"',password='"+user.getPassword()+"' where id ="+user.getId();//创建sql语句
            ps=conn.prepareStatement(sql);
            num=ps.executeUpdate();
            if(num!=0)
                Success =true;
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return Success;
    }

    public boolean delete(Integer id){
        int num = 0;
        try {
            String sql = "delete from user where id = "+id;//创建sql语句
            ps=conn.prepareStatement(sql);
            num = ps.executeUpdate();
            if(num!=0)
                Success =true;
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return Success;
    }

    @Override
    public User selectByName(String name) {
        try {
            String querySQL = "SELECT * FROM user WHERE username = ?";
            PreparedStatement preparedStatement = conn.prepareStatement(querySQL);
            preparedStatement.setString(1, name);
            ResultSet resultSet = preparedStatement.executeQuery();
            if (resultSet.next()) return User.initialize(resultSet); else return null;
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }


//    public ResultSet find (String str){

//    }
}
