
// catalog.hpp
// CSUF CPSC 131, Fall 2016, Project 1
//
// Classes that define a catalog of supermarket products.

#pragma once

#include <stdexcept>
#include <string>

// A product represents one particular kind of product, such as apples
// or cereal.
class Product {
public:
  // Create a product with a given code, name, and price.
  //
  // code is intended to be a UPC code (bar code) or PLU code in a
  // string.
  //
  // name may be any string.
  //
  // price is in units of dollars. It must be positive, or else this
  // function throws std::invalid_argument.
  Product(const std::string& code,
          const std::string& name,
          double price) {
    // TODO: implement this function properly
    this.code = code;
    this.name = name;
    this.price = price;
    throw std::logic_error("not implemented yet");
  }

  ~Product() { }

  // Accessors.
  const std::string& getCode() const { return code; }
  const std::string& getName() const { return name; }
  double getPrice() const { return price; }
  
private:
  std::string code, name;
  double price;
};

// A catalog represents a collection of all of the products available
// at a store.
class Catalog {
public:
  // Create a new catalog.
  //
  // maxProducts is the maximum number of products that can be
  // stored. It must be positive, or else this function throws
  // std::invalid_argument.
  Catalog(int maxProducts) {
    // TODO: implement this function properly
    this.maxProducts = maxProducts;
    list = new array();
    throw std::logic_error("not implemented yet");
  }
  
  ~Catalog() {
    // TODO: implement this function properly
    delete [] list;
    throw std::logic_error("not implemented yet");
  }

  // Accessors.
  int getMaxProducts() const {
    // TODO: implement this function properly
    if(maxProducts > 0)
     return maxProducts;
    else
     throw std::logic_error("not implemented yet");
  }
  
  int getNumProducts() const {
    // TODO: implement this function properly
    if(list.size() == 0)
      throw std::logic_error("not implemented yet");
    else
     return list.size();
  }

  // Return true when the catalog cannot fit any more products.
  bool isFull() const {
    // TODO: implement this function properly
    if(maxProducts == 0)
    throw std::logic_error("not implemented yet");
    if(list.size() == maxProducts)
      return true;
    return false;
  }

  // Add a new product to the catalog with a given code and name.
  //
  // code, name, and price have the same meaning as in a Product. If
  // price is invalid, throw std::invalid_argument.
  //
  // If this catalog is already full, throw overflow_error.
  //
  // Code must be different from all the product codes already in the
  // database. If it's not, throw std::invalid_argument.
  void addProduct(const std::string& code,
                  const std::string& name,
                  double price) {
    // TODO: implement this function properly
    for (int i = 0; i < list.size(); i++)
    {
      if (code == list[i].findCode
    }
    throw std::logic_error("not implemented yet");
    list.add(new Product(code, name, price);
  }

  // Find a product by its code.
  //
  // code is a product code.
  //
  // Returns a const reference to the product with the matching code.
  //
  // Throw std::invalid_argument if no product with that code exists
  // in the catalog.
  const Product& findCode(const std::string& code) const {
    // TODO: implement this function properly
    throw std::logic_error("not implemented yet");
  }

private:
  // TODO: add data members
  int maxProducts;
  array<Product> list;
};
