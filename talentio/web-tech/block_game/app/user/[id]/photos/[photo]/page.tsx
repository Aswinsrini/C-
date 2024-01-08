import React from "react";

interface Photo {
  params: { id: number; photo: number };
}
const PhotoId = ({ params: { id, photo } }: Photo) => {
  return (
    <div>
      userid {id}
      PhotoId {photo}
    </div>
  );
};

export default PhotoId;
