package po;

import java.sql.ResultSet;
import java.sql.SQLException;

public class User {
    private int id;
    private String username;
    private String password;

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getUsername() {
        return username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    @Override
    public String toString() {
        return "User{" +
                "id=" + id +
                ", username='" + username + '\'' +
                ", password='" + password + '\'' +
                '}';
    }

    public static User initialize(ResultSet resultSet)
    {
        try {
            User user = new User();
            user.id = resultSet.getInt("id");
            user.username = resultSet.getString("username");
            user.password = resultSet.getString("password");
            return user;
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }
}
