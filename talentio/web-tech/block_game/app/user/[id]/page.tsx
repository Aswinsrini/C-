import React from "react";

interface Aswin {
  params: { id: number };
}
const UserDetail = ({ params: { id } }: Aswin) => {
  return <div>UserDetail {id}</div>;
};

export default UserDetail;
