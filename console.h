/*
 * Written by Matthew Weir (mweir-mcst)
 * Some code taken from Darryl DiGiovanna
 */

#ifndef CONSOLE_H
#define CONSOLE_H
#include <string>
#include <vector>
#pragma once

bool stoi_if_valid(std::string, int &);
bool stod_if_valid(std::string, double &);

int prompt_int(const std::string &);
int prompt_int_min_max(const std::string &, int, int);
int prompt_int_min(const std::string &, int);
int prompt_int_max(const std::string &, int);

double prompt_double(const std::string &);
double prompt_double_min_max(const std::string &, double, double);
double prompt_double_min(const std::string &, double);
double prompt_double_max(const std::string &, double);

std::string prompt_string(const std::string &);
std::string prompt_string_choices(const std::string &, std::initializer_list<std::string>);

#endif
