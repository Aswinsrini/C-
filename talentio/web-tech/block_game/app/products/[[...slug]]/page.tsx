import React from "react";
interface props {
  params: { slug: String[] };
}
const Products = ({ params: { slug } }: props) => {
  console.log(slug);
  return (
    <div>
      Products
      {slug.map((s, index) => (
        <div key={index}>{s}</div>
      ))}
    </div>
  );
};

export default Products;
