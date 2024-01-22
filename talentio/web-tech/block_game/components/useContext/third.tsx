import { useUserContext } from "./context";

const Profile = () => {
  const user = useUserContext();
  return (
    <div>
      name : {user.name}
      <br></br>
      Attendence: {user.present && "Present"}
    </div>
  );
};

export default Profile;
