// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

// "%code top" blocks.
#line 41 "parser.ypp"

#include "stdinc.hpp"
#include "parser.hpp"
#include "preprocessor.hpp"
using namespace xsk::gsc;
namespace xsk::gsc
{ 
    auto GSClex(context const* ctx_, preprocessor& ppr) -> parser::symbol_type;
    auto parse_switch(stmt_switch& stm) -> void;
    auto check_decl_modifier(location const& loc, std::string const& name) -> void;
    auto check_include_as(location const& loc, std::string const& name) -> void;
}

#line 53 "parser.cpp"

// Take the name prefix into account.
#define yylex   GSClex



#include "parser.hpp"




#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if GSCDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !GSCDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !GSCDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 13 "parser.ypp"
namespace xsk { namespace gsc {
#line 155 "parser.cpp"

  /// Build a parser object.
  parser::parser (xsk::gsc::context const* ctx__yyarg, xsk::gsc::preprocessor& ppr_yyarg, xsk::gsc::program::ptr& ast_yyarg, std::uint32_t index_yyarg)
#if GSCDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      yy_lac_established_ (false),
      ctx_ (ctx__yyarg),
      ppr (ppr_yyarg),
      ast (ast_yyarg),
      index (index_yyarg)
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_pointer: // expr_pointer
        value.YY_MOVE_OR_COPY< call > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_declaration: // declaration
        value.YY_MOVE_OR_COPY< decl > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_decl_constant: // decl_constant
        value.YY_MOVE_OR_COPY< decl_constant::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_decl_function: // decl_function
        value.YY_MOVE_OR_COPY< decl_function::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_decl_usingtree: // decl_usingtree
        value.YY_MOVE_OR_COPY< decl_usingtree::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_or_empty: // expr_or_empty
      case symbol_kind::S_expr_assign: // expr_assign
      case symbol_kind::S_expr_increment: // expr_increment
      case symbol_kind::S_expr_decrement: // expr_decrement
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
      case symbol_kind::S_expr_tuple: // expr_tuple
      case symbol_kind::S_expr_tuple_types: // expr_tuple_types
      case symbol_kind::S_expr_object: // expr_object
        value.YY_MOVE_OR_COPY< expr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_add_array: // expr_add_array
        value.YY_MOVE_OR_COPY< expr_add_array::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_anim: // expr_anim
        value.YY_MOVE_OR_COPY< expr_anim::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_animation: // expr_animation
        value.YY_MOVE_OR_COPY< expr_animation::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_animtree: // expr_animtree
        value.YY_MOVE_OR_COPY< expr_animtree::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
      case symbol_kind::S_expr_arguments_no_empty: // expr_arguments_no_empty
        value.YY_MOVE_OR_COPY< expr_arguments::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_array: // expr_array
        value.YY_MOVE_OR_COPY< expr_array::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_call: // expr_call
        value.YY_MOVE_OR_COPY< expr_call::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_complement: // expr_complement
        value.YY_MOVE_OR_COPY< expr_complement::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_empty_array: // expr_empty_array
        value.YY_MOVE_OR_COPY< expr_empty_array::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_false: // expr_false
        value.YY_MOVE_OR_COPY< expr_false::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_field: // expr_field
        value.YY_MOVE_OR_COPY< expr_field::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_float: // expr_float
        value.YY_MOVE_OR_COPY< expr_float::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_game: // expr_game
        value.YY_MOVE_OR_COPY< expr_game::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_identifier_nosize: // expr_identifier_nosize
      case symbol_kind::S_expr_identifier: // expr_identifier
        value.YY_MOVE_OR_COPY< expr_identifier::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_integer: // expr_integer
        value.YY_MOVE_OR_COPY< expr_integer::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_isdefined: // expr_isdefined
        value.YY_MOVE_OR_COPY< expr_isdefined::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_istring: // expr_istring
        value.YY_MOVE_OR_COPY< expr_istring::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_istrue: // expr_istrue
        value.YY_MOVE_OR_COPY< expr_istrue::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_level: // expr_level
        value.YY_MOVE_OR_COPY< expr_level::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_method: // expr_method
        value.YY_MOVE_OR_COPY< expr_method::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_negate: // expr_negate
        value.YY_MOVE_OR_COPY< expr_negate::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_not: // expr_not
        value.YY_MOVE_OR_COPY< expr_not::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_parameters: // expr_parameters
        value.YY_MOVE_OR_COPY< expr_parameters::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_paren: // expr_paren
        value.YY_MOVE_OR_COPY< expr_paren::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_path: // expr_path
        value.YY_MOVE_OR_COPY< expr_path::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_reference: // expr_reference
        value.YY_MOVE_OR_COPY< expr_reference::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_self: // expr_self
        value.YY_MOVE_OR_COPY< expr_self::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_size: // expr_size
        value.YY_MOVE_OR_COPY< expr_size::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_string: // expr_string
        value.YY_MOVE_OR_COPY< expr_string::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_thisthread: // expr_thisthread
        value.YY_MOVE_OR_COPY< expr_thisthread::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_true: // expr_true
        value.YY_MOVE_OR_COPY< expr_true::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_tuple_arguments: // expr_tuple_arguments
        value.YY_MOVE_OR_COPY< expr_tuple::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_undefined: // expr_undefined
        value.YY_MOVE_OR_COPY< expr_undefined::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_vector: // expr_vector
        value.YY_MOVE_OR_COPY< expr_vector::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_include: // include
        value.YY_MOVE_OR_COPY< include::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_program: // program
        value.YY_MOVE_OR_COPY< program::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_PATH: // "path"
      case symbol_kind::S_IDENTIFIER: // "identifier"
      case symbol_kind::S_STRING: // "string literal"
      case symbol_kind::S_ISTRING: // "localized string"
      case symbol_kind::S_FLOAT: // "float"
      case symbol_kind::S_INTEGER: // "integer"
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_stmt_or_dev: // stmt_or_dev
        value.YY_MOVE_OR_COPY< stmt > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_assert: // stmt_assert
        value.YY_MOVE_OR_COPY< stmt_assert::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_assertex: // stmt_assertex
        value.YY_MOVE_OR_COPY< stmt_assertex::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_assertmsg: // stmt_assertmsg
        value.YY_MOVE_OR_COPY< stmt_assertmsg::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.YY_MOVE_OR_COPY< stmt_assign::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.YY_MOVE_OR_COPY< stmt_break::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_breakpoint: // stmt_breakpoint
        value.YY_MOVE_OR_COPY< stmt_breakpoint::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.YY_MOVE_OR_COPY< stmt_call::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.YY_MOVE_OR_COPY< stmt_case::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_comp: // stmt_comp
        value.YY_MOVE_OR_COPY< stmt_comp::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.YY_MOVE_OR_COPY< stmt_continue::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.YY_MOVE_OR_COPY< stmt_default::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_dev: // stmt_dev
        value.YY_MOVE_OR_COPY< stmt_dev::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_dowhile: // stmt_dowhile
        value.YY_MOVE_OR_COPY< stmt_dowhile::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.YY_MOVE_OR_COPY< stmt_endon::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_expr: // stmt_expr
        value.YY_MOVE_OR_COPY< stmt_expr::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.YY_MOVE_OR_COPY< stmt_for::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.YY_MOVE_OR_COPY< stmt_foreach::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.YY_MOVE_OR_COPY< stmt_if::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.YY_MOVE_OR_COPY< stmt_ifelse::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_list: // stmt_list
      case symbol_kind::S_stmt_or_dev_list: // stmt_or_dev_list
        value.YY_MOVE_OR_COPY< stmt_list::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.YY_MOVE_OR_COPY< stmt_notify::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_prof_begin: // stmt_prof_begin
        value.YY_MOVE_OR_COPY< stmt_prof_begin::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_prof_end: // stmt_prof_end
        value.YY_MOVE_OR_COPY< stmt_prof_end::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.YY_MOVE_OR_COPY< stmt_return::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.YY_MOVE_OR_COPY< stmt_switch::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.YY_MOVE_OR_COPY< stmt_wait::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waitframe: // stmt_waitframe
        value.YY_MOVE_OR_COPY< stmt_waitframe::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.YY_MOVE_OR_COPY< stmt_waittill::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.YY_MOVE_OR_COPY< stmt_waittillframeend::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.YY_MOVE_OR_COPY< stmt_waittillmatch::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.YY_MOVE_OR_COPY< stmt_while::ptr > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_pointer: // expr_pointer
        value.move< call > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_declaration: // declaration
        value.move< decl > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_decl_constant: // decl_constant
        value.move< decl_constant::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_decl_function: // decl_function
        value.move< decl_function::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_decl_usingtree: // decl_usingtree
        value.move< decl_usingtree::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_or_empty: // expr_or_empty
      case symbol_kind::S_expr_assign: // expr_assign
      case symbol_kind::S_expr_increment: // expr_increment
      case symbol_kind::S_expr_decrement: // expr_decrement
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
      case symbol_kind::S_expr_tuple: // expr_tuple
      case symbol_kind::S_expr_tuple_types: // expr_tuple_types
      case symbol_kind::S_expr_object: // expr_object
        value.move< expr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_add_array: // expr_add_array
        value.move< expr_add_array::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_anim: // expr_anim
        value.move< expr_anim::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_animation: // expr_animation
        value.move< expr_animation::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_animtree: // expr_animtree
        value.move< expr_animtree::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
      case symbol_kind::S_expr_arguments_no_empty: // expr_arguments_no_empty
        value.move< expr_arguments::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_array: // expr_array
        value.move< expr_array::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_call: // expr_call
        value.move< expr_call::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_complement: // expr_complement
        value.move< expr_complement::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_empty_array: // expr_empty_array
        value.move< expr_empty_array::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_false: // expr_false
        value.move< expr_false::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_field: // expr_field
        value.move< expr_field::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_float: // expr_float
        value.move< expr_float::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_game: // expr_game
        value.move< expr_game::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_identifier_nosize: // expr_identifier_nosize
      case symbol_kind::S_expr_identifier: // expr_identifier
        value.move< expr_identifier::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_integer: // expr_integer
        value.move< expr_integer::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_isdefined: // expr_isdefined
        value.move< expr_isdefined::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_istring: // expr_istring
        value.move< expr_istring::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_istrue: // expr_istrue
        value.move< expr_istrue::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_level: // expr_level
        value.move< expr_level::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_method: // expr_method
        value.move< expr_method::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_negate: // expr_negate
        value.move< expr_negate::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_not: // expr_not
        value.move< expr_not::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_parameters: // expr_parameters
        value.move< expr_parameters::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_paren: // expr_paren
        value.move< expr_paren::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_path: // expr_path
        value.move< expr_path::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_reference: // expr_reference
        value.move< expr_reference::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_self: // expr_self
        value.move< expr_self::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_size: // expr_size
        value.move< expr_size::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_string: // expr_string
        value.move< expr_string::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_thisthread: // expr_thisthread
        value.move< expr_thisthread::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_true: // expr_true
        value.move< expr_true::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_tuple_arguments: // expr_tuple_arguments
        value.move< expr_tuple::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_undefined: // expr_undefined
        value.move< expr_undefined::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_vector: // expr_vector
        value.move< expr_vector::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_include: // include
        value.move< include::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_program: // program
        value.move< program::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_PATH: // "path"
      case symbol_kind::S_IDENTIFIER: // "identifier"
      case symbol_kind::S_STRING: // "string literal"
      case symbol_kind::S_ISTRING: // "localized string"
      case symbol_kind::S_FLOAT: // "float"
      case symbol_kind::S_INTEGER: // "integer"
        value.move< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_stmt_or_dev: // stmt_or_dev
        value.move< stmt > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_assert: // stmt_assert
        value.move< stmt_assert::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_assertex: // stmt_assertex
        value.move< stmt_assertex::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_assertmsg: // stmt_assertmsg
        value.move< stmt_assertmsg::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.move< stmt_assign::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.move< stmt_break::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_breakpoint: // stmt_breakpoint
        value.move< stmt_breakpoint::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.move< stmt_call::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.move< stmt_case::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_comp: // stmt_comp
        value.move< stmt_comp::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.move< stmt_continue::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.move< stmt_default::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_dev: // stmt_dev
        value.move< stmt_dev::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_dowhile: // stmt_dowhile
        value.move< stmt_dowhile::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.move< stmt_endon::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_expr: // stmt_expr
        value.move< stmt_expr::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.move< stmt_for::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.move< stmt_foreach::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.move< stmt_if::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.move< stmt_ifelse::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_list: // stmt_list
      case symbol_kind::S_stmt_or_dev_list: // stmt_or_dev_list
        value.move< stmt_list::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.move< stmt_notify::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_prof_begin: // stmt_prof_begin
        value.move< stmt_prof_begin::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_prof_end: // stmt_prof_end
        value.move< stmt_prof_end::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.move< stmt_return::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.move< stmt_switch::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.move< stmt_wait::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waitframe: // stmt_waitframe
        value.move< stmt_waitframe::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.move< stmt_waittill::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.move< stmt_waittillframeend::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.move< stmt_waittillmatch::ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.move< stmt_while::ptr > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_pointer: // expr_pointer
        value.copy< call > (that.value);
        break;

      case symbol_kind::S_declaration: // declaration
        value.copy< decl > (that.value);
        break;

      case symbol_kind::S_decl_constant: // decl_constant
        value.copy< decl_constant::ptr > (that.value);
        break;

      case symbol_kind::S_decl_function: // decl_function
        value.copy< decl_function::ptr > (that.value);
        break;

      case symbol_kind::S_decl_usingtree: // decl_usingtree
        value.copy< decl_usingtree::ptr > (that.value);
        break;

      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_or_empty: // expr_or_empty
      case symbol_kind::S_expr_assign: // expr_assign
      case symbol_kind::S_expr_increment: // expr_increment
      case symbol_kind::S_expr_decrement: // expr_decrement
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
      case symbol_kind::S_expr_tuple: // expr_tuple
      case symbol_kind::S_expr_tuple_types: // expr_tuple_types
      case symbol_kind::S_expr_object: // expr_object
        value.copy< expr > (that.value);
        break;

      case symbol_kind::S_expr_add_array: // expr_add_array
        value.copy< expr_add_array::ptr > (that.value);
        break;

      case symbol_kind::S_expr_anim: // expr_anim
        value.copy< expr_anim::ptr > (that.value);
        break;

      case symbol_kind::S_expr_animation: // expr_animation
        value.copy< expr_animation::ptr > (that.value);
        break;

      case symbol_kind::S_expr_animtree: // expr_animtree
        value.copy< expr_animtree::ptr > (that.value);
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
      case symbol_kind::S_expr_arguments_no_empty: // expr_arguments_no_empty
        value.copy< expr_arguments::ptr > (that.value);
        break;

      case symbol_kind::S_expr_array: // expr_array
        value.copy< expr_array::ptr > (that.value);
        break;

      case symbol_kind::S_expr_call: // expr_call
        value.copy< expr_call::ptr > (that.value);
        break;

      case symbol_kind::S_expr_complement: // expr_complement
        value.copy< expr_complement::ptr > (that.value);
        break;

      case symbol_kind::S_expr_empty_array: // expr_empty_array
        value.copy< expr_empty_array::ptr > (that.value);
        break;

      case symbol_kind::S_expr_false: // expr_false
        value.copy< expr_false::ptr > (that.value);
        break;

      case symbol_kind::S_expr_field: // expr_field
        value.copy< expr_field::ptr > (that.value);
        break;

      case symbol_kind::S_expr_float: // expr_float
        value.copy< expr_float::ptr > (that.value);
        break;

      case symbol_kind::S_expr_game: // expr_game
        value.copy< expr_game::ptr > (that.value);
        break;

      case symbol_kind::S_expr_identifier_nosize: // expr_identifier_nosize
      case symbol_kind::S_expr_identifier: // expr_identifier
        value.copy< expr_identifier::ptr > (that.value);
        break;

      case symbol_kind::S_expr_integer: // expr_integer
        value.copy< expr_integer::ptr > (that.value);
        break;

      case symbol_kind::S_expr_isdefined: // expr_isdefined
        value.copy< expr_isdefined::ptr > (that.value);
        break;

      case symbol_kind::S_expr_istring: // expr_istring
        value.copy< expr_istring::ptr > (that.value);
        break;

      case symbol_kind::S_expr_istrue: // expr_istrue
        value.copy< expr_istrue::ptr > (that.value);
        break;

      case symbol_kind::S_expr_level: // expr_level
        value.copy< expr_level::ptr > (that.value);
        break;

      case symbol_kind::S_expr_method: // expr_method
        value.copy< expr_method::ptr > (that.value);
        break;

      case symbol_kind::S_expr_negate: // expr_negate
        value.copy< expr_negate::ptr > (that.value);
        break;

      case symbol_kind::S_expr_not: // expr_not
        value.copy< expr_not::ptr > (that.value);
        break;

      case symbol_kind::S_expr_parameters: // expr_parameters
        value.copy< expr_parameters::ptr > (that.value);
        break;

      case symbol_kind::S_expr_paren: // expr_paren
        value.copy< expr_paren::ptr > (that.value);
        break;

      case symbol_kind::S_expr_path: // expr_path
        value.copy< expr_path::ptr > (that.value);
        break;

      case symbol_kind::S_expr_reference: // expr_reference
        value.copy< expr_reference::ptr > (that.value);
        break;

      case symbol_kind::S_expr_self: // expr_self
        value.copy< expr_self::ptr > (that.value);
        break;

      case symbol_kind::S_expr_size: // expr_size
        value.copy< expr_size::ptr > (that.value);
        break;

      case symbol_kind::S_expr_string: // expr_string
        value.copy< expr_string::ptr > (that.value);
        break;

      case symbol_kind::S_expr_thisthread: // expr_thisthread
        value.copy< expr_thisthread::ptr > (that.value);
        break;

      case symbol_kind::S_expr_true: // expr_true
        value.copy< expr_true::ptr > (that.value);
        break;

      case symbol_kind::S_expr_tuple_arguments: // expr_tuple_arguments
        value.copy< expr_tuple::ptr > (that.value);
        break;

      case symbol_kind::S_expr_undefined: // expr_undefined
        value.copy< expr_undefined::ptr > (that.value);
        break;

      case symbol_kind::S_expr_vector: // expr_vector
        value.copy< expr_vector::ptr > (that.value);
        break;

      case symbol_kind::S_include: // include
        value.copy< include::ptr > (that.value);
        break;

      case symbol_kind::S_program: // program
        value.copy< program::ptr > (that.value);
        break;

      case symbol_kind::S_PATH: // "path"
      case symbol_kind::S_IDENTIFIER: // "identifier"
      case symbol_kind::S_STRING: // "string literal"
      case symbol_kind::S_ISTRING: // "localized string"
      case symbol_kind::S_FLOAT: // "float"
      case symbol_kind::S_INTEGER: // "integer"
        value.copy< std::string > (that.value);
        break;

      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_stmt_or_dev: // stmt_or_dev
        value.copy< stmt > (that.value);
        break;

      case symbol_kind::S_stmt_assert: // stmt_assert
        value.copy< stmt_assert::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_assertex: // stmt_assertex
        value.copy< stmt_assertex::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_assertmsg: // stmt_assertmsg
        value.copy< stmt_assertmsg::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.copy< stmt_assign::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.copy< stmt_break::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_breakpoint: // stmt_breakpoint
        value.copy< stmt_breakpoint::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.copy< stmt_call::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.copy< stmt_case::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_comp: // stmt_comp
        value.copy< stmt_comp::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.copy< stmt_continue::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.copy< stmt_default::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_dev: // stmt_dev
        value.copy< stmt_dev::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_dowhile: // stmt_dowhile
        value.copy< stmt_dowhile::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.copy< stmt_endon::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_expr: // stmt_expr
        value.copy< stmt_expr::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.copy< stmt_for::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.copy< stmt_foreach::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.copy< stmt_if::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.copy< stmt_ifelse::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_list: // stmt_list
      case symbol_kind::S_stmt_or_dev_list: // stmt_or_dev_list
        value.copy< stmt_list::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.copy< stmt_notify::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_prof_begin: // stmt_prof_begin
        value.copy< stmt_prof_begin::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_prof_end: // stmt_prof_end
        value.copy< stmt_prof_end::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.copy< stmt_return::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.copy< stmt_switch::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.copy< stmt_wait::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waitframe: // stmt_waitframe
        value.copy< stmt_waitframe::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.copy< stmt_waittill::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.copy< stmt_waittillframeend::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.copy< stmt_waittillmatch::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.copy< stmt_while::ptr > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_pointer: // expr_pointer
        value.move< call > (that.value);
        break;

      case symbol_kind::S_declaration: // declaration
        value.move< decl > (that.value);
        break;

      case symbol_kind::S_decl_constant: // decl_constant
        value.move< decl_constant::ptr > (that.value);
        break;

      case symbol_kind::S_decl_function: // decl_function
        value.move< decl_function::ptr > (that.value);
        break;

      case symbol_kind::S_decl_usingtree: // decl_usingtree
        value.move< decl_usingtree::ptr > (that.value);
        break;

      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_or_empty: // expr_or_empty
      case symbol_kind::S_expr_assign: // expr_assign
      case symbol_kind::S_expr_increment: // expr_increment
      case symbol_kind::S_expr_decrement: // expr_decrement
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
      case symbol_kind::S_expr_tuple: // expr_tuple
      case symbol_kind::S_expr_tuple_types: // expr_tuple_types
      case symbol_kind::S_expr_object: // expr_object
        value.move< expr > (that.value);
        break;

      case symbol_kind::S_expr_add_array: // expr_add_array
        value.move< expr_add_array::ptr > (that.value);
        break;

      case symbol_kind::S_expr_anim: // expr_anim
        value.move< expr_anim::ptr > (that.value);
        break;

      case symbol_kind::S_expr_animation: // expr_animation
        value.move< expr_animation::ptr > (that.value);
        break;

      case symbol_kind::S_expr_animtree: // expr_animtree
        value.move< expr_animtree::ptr > (that.value);
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
      case symbol_kind::S_expr_arguments_no_empty: // expr_arguments_no_empty
        value.move< expr_arguments::ptr > (that.value);
        break;

      case symbol_kind::S_expr_array: // expr_array
        value.move< expr_array::ptr > (that.value);
        break;

      case symbol_kind::S_expr_call: // expr_call
        value.move< expr_call::ptr > (that.value);
        break;

      case symbol_kind::S_expr_complement: // expr_complement
        value.move< expr_complement::ptr > (that.value);
        break;

      case symbol_kind::S_expr_empty_array: // expr_empty_array
        value.move< expr_empty_array::ptr > (that.value);
        break;

      case symbol_kind::S_expr_false: // expr_false
        value.move< expr_false::ptr > (that.value);
        break;

      case symbol_kind::S_expr_field: // expr_field
        value.move< expr_field::ptr > (that.value);
        break;

      case symbol_kind::S_expr_float: // expr_float
        value.move< expr_float::ptr > (that.value);
        break;

      case symbol_kind::S_expr_game: // expr_game
        value.move< expr_game::ptr > (that.value);
        break;

      case symbol_kind::S_expr_identifier_nosize: // expr_identifier_nosize
      case symbol_kind::S_expr_identifier: // expr_identifier
        value.move< expr_identifier::ptr > (that.value);
        break;

      case symbol_kind::S_expr_integer: // expr_integer
        value.move< expr_integer::ptr > (that.value);
        break;

      case symbol_kind::S_expr_isdefined: // expr_isdefined
        value.move< expr_isdefined::ptr > (that.value);
        break;

      case symbol_kind::S_expr_istring: // expr_istring
        value.move< expr_istring::ptr > (that.value);
        break;

      case symbol_kind::S_expr_istrue: // expr_istrue
        value.move< expr_istrue::ptr > (that.value);
        break;

      case symbol_kind::S_expr_level: // expr_level
        value.move< expr_level::ptr > (that.value);
        break;

      case symbol_kind::S_expr_method: // expr_method
        value.move< expr_method::ptr > (that.value);
        break;

      case symbol_kind::S_expr_negate: // expr_negate
        value.move< expr_negate::ptr > (that.value);
        break;

      case symbol_kind::S_expr_not: // expr_not
        value.move< expr_not::ptr > (that.value);
        break;

      case symbol_kind::S_expr_parameters: // expr_parameters
        value.move< expr_parameters::ptr > (that.value);
        break;

      case symbol_kind::S_expr_paren: // expr_paren
        value.move< expr_paren::ptr > (that.value);
        break;

      case symbol_kind::S_expr_path: // expr_path
        value.move< expr_path::ptr > (that.value);
        break;

      case symbol_kind::S_expr_reference: // expr_reference
        value.move< expr_reference::ptr > (that.value);
        break;

      case symbol_kind::S_expr_self: // expr_self
        value.move< expr_self::ptr > (that.value);
        break;

      case symbol_kind::S_expr_size: // expr_size
        value.move< expr_size::ptr > (that.value);
        break;

      case symbol_kind::S_expr_string: // expr_string
        value.move< expr_string::ptr > (that.value);
        break;

      case symbol_kind::S_expr_thisthread: // expr_thisthread
        value.move< expr_thisthread::ptr > (that.value);
        break;

      case symbol_kind::S_expr_true: // expr_true
        value.move< expr_true::ptr > (that.value);
        break;

      case symbol_kind::S_expr_tuple_arguments: // expr_tuple_arguments
        value.move< expr_tuple::ptr > (that.value);
        break;

      case symbol_kind::S_expr_undefined: // expr_undefined
        value.move< expr_undefined::ptr > (that.value);
        break;

      case symbol_kind::S_expr_vector: // expr_vector
        value.move< expr_vector::ptr > (that.value);
        break;

      case symbol_kind::S_include: // include
        value.move< include::ptr > (that.value);
        break;

      case symbol_kind::S_program: // program
        value.move< program::ptr > (that.value);
        break;

      case symbol_kind::S_PATH: // "path"
      case symbol_kind::S_IDENTIFIER: // "identifier"
      case symbol_kind::S_STRING: // "string literal"
      case symbol_kind::S_ISTRING: // "localized string"
      case symbol_kind::S_FLOAT: // "float"
      case symbol_kind::S_INTEGER: // "integer"
        value.move< std::string > (that.value);
        break;

      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_stmt_or_dev: // stmt_or_dev
        value.move< stmt > (that.value);
        break;

      case symbol_kind::S_stmt_assert: // stmt_assert
        value.move< stmt_assert::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_assertex: // stmt_assertex
        value.move< stmt_assertex::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_assertmsg: // stmt_assertmsg
        value.move< stmt_assertmsg::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.move< stmt_assign::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.move< stmt_break::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_breakpoint: // stmt_breakpoint
        value.move< stmt_breakpoint::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.move< stmt_call::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.move< stmt_case::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_comp: // stmt_comp
        value.move< stmt_comp::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.move< stmt_continue::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.move< stmt_default::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_dev: // stmt_dev
        value.move< stmt_dev::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_dowhile: // stmt_dowhile
        value.move< stmt_dowhile::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.move< stmt_endon::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_expr: // stmt_expr
        value.move< stmt_expr::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.move< stmt_for::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.move< stmt_foreach::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.move< stmt_if::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.move< stmt_ifelse::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_list: // stmt_list
      case symbol_kind::S_stmt_or_dev_list: // stmt_or_dev_list
        value.move< stmt_list::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.move< stmt_notify::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_prof_begin: // stmt_prof_begin
        value.move< stmt_prof_begin::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_prof_end: // stmt_prof_end
        value.move< stmt_prof_end::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.move< stmt_return::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.move< stmt_switch::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.move< stmt_wait::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waitframe: // stmt_waitframe
        value.move< stmt_waitframe::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.move< stmt_waittill::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.move< stmt_waittillframeend::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.move< stmt_waittillmatch::ptr > (that.value);
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.move< stmt_while::ptr > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if GSCDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if GSCDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // GSCDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // Discard the LAC context in case there still is one left from a
    // previous invocation.
    yy_lac_discard_ ("init");

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (ctx_, ppr));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        if (!yy_lac_establish_ (yyla.kind ()))
          goto yyerrlab;
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        if (!yy_lac_establish_ (yyla.kind ()))
          goto yyerrlab;

        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    yy_lac_discard_ ("shift");
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_pointer: // expr_pointer
        yylhs.value.emplace< call > ();
        break;

      case symbol_kind::S_declaration: // declaration
        yylhs.value.emplace< decl > ();
        break;

      case symbol_kind::S_decl_constant: // decl_constant
        yylhs.value.emplace< decl_constant::ptr > ();
        break;

      case symbol_kind::S_decl_function: // decl_function
        yylhs.value.emplace< decl_function::ptr > ();
        break;

      case symbol_kind::S_decl_usingtree: // decl_usingtree
        yylhs.value.emplace< decl_usingtree::ptr > ();
        break;

      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_or_empty: // expr_or_empty
      case symbol_kind::S_expr_assign: // expr_assign
      case symbol_kind::S_expr_increment: // expr_increment
      case symbol_kind::S_expr_decrement: // expr_decrement
      case symbol_kind::S_expr_ternary: // expr_ternary
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
      case symbol_kind::S_expr_tuple: // expr_tuple
      case symbol_kind::S_expr_tuple_types: // expr_tuple_types
      case symbol_kind::S_expr_object: // expr_object
        yylhs.value.emplace< expr > ();
        break;

      case symbol_kind::S_expr_add_array: // expr_add_array
        yylhs.value.emplace< expr_add_array::ptr > ();
        break;

      case symbol_kind::S_expr_anim: // expr_anim
        yylhs.value.emplace< expr_anim::ptr > ();
        break;

      case symbol_kind::S_expr_animation: // expr_animation
        yylhs.value.emplace< expr_animation::ptr > ();
        break;

      case symbol_kind::S_expr_animtree: // expr_animtree
        yylhs.value.emplace< expr_animtree::ptr > ();
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
      case symbol_kind::S_expr_arguments_no_empty: // expr_arguments_no_empty
        yylhs.value.emplace< expr_arguments::ptr > ();
        break;

      case symbol_kind::S_expr_array: // expr_array
        yylhs.value.emplace< expr_array::ptr > ();
        break;

      case symbol_kind::S_expr_call: // expr_call
        yylhs.value.emplace< expr_call::ptr > ();
        break;

      case symbol_kind::S_expr_complement: // expr_complement
        yylhs.value.emplace< expr_complement::ptr > ();
        break;

      case symbol_kind::S_expr_empty_array: // expr_empty_array
        yylhs.value.emplace< expr_empty_array::ptr > ();
        break;

      case symbol_kind::S_expr_false: // expr_false
        yylhs.value.emplace< expr_false::ptr > ();
        break;

      case symbol_kind::S_expr_field: // expr_field
        yylhs.value.emplace< expr_field::ptr > ();
        break;

      case symbol_kind::S_expr_float: // expr_float
        yylhs.value.emplace< expr_float::ptr > ();
        break;

      case symbol_kind::S_expr_game: // expr_game
        yylhs.value.emplace< expr_game::ptr > ();
        break;

      case symbol_kind::S_expr_identifier_nosize: // expr_identifier_nosize
      case symbol_kind::S_expr_identifier: // expr_identifier
        yylhs.value.emplace< expr_identifier::ptr > ();
        break;

      case symbol_kind::S_expr_integer: // expr_integer
        yylhs.value.emplace< expr_integer::ptr > ();
        break;

      case symbol_kind::S_expr_isdefined: // expr_isdefined
        yylhs.value.emplace< expr_isdefined::ptr > ();
        break;

      case symbol_kind::S_expr_istring: // expr_istring
        yylhs.value.emplace< expr_istring::ptr > ();
        break;

      case symbol_kind::S_expr_istrue: // expr_istrue
        yylhs.value.emplace< expr_istrue::ptr > ();
        break;

      case symbol_kind::S_expr_level: // expr_level
        yylhs.value.emplace< expr_level::ptr > ();
        break;

      case symbol_kind::S_expr_method: // expr_method
        yylhs.value.emplace< expr_method::ptr > ();
        break;

      case symbol_kind::S_expr_negate: // expr_negate
        yylhs.value.emplace< expr_negate::ptr > ();
        break;

      case symbol_kind::S_expr_not: // expr_not
        yylhs.value.emplace< expr_not::ptr > ();
        break;

      case symbol_kind::S_expr_parameters: // expr_parameters
        yylhs.value.emplace< expr_parameters::ptr > ();
        break;

      case symbol_kind::S_expr_paren: // expr_paren
        yylhs.value.emplace< expr_paren::ptr > ();
        break;

      case symbol_kind::S_expr_path: // expr_path
        yylhs.value.emplace< expr_path::ptr > ();
        break;

      case symbol_kind::S_expr_reference: // expr_reference
        yylhs.value.emplace< expr_reference::ptr > ();
        break;

      case symbol_kind::S_expr_self: // expr_self
        yylhs.value.emplace< expr_self::ptr > ();
        break;

      case symbol_kind::S_expr_size: // expr_size
        yylhs.value.emplace< expr_size::ptr > ();
        break;

      case symbol_kind::S_expr_string: // expr_string
        yylhs.value.emplace< expr_string::ptr > ();
        break;

      case symbol_kind::S_expr_thisthread: // expr_thisthread
        yylhs.value.emplace< expr_thisthread::ptr > ();
        break;

      case symbol_kind::S_expr_true: // expr_true
        yylhs.value.emplace< expr_true::ptr > ();
        break;

      case symbol_kind::S_expr_tuple_arguments: // expr_tuple_arguments
        yylhs.value.emplace< expr_tuple::ptr > ();
        break;

      case symbol_kind::S_expr_undefined: // expr_undefined
        yylhs.value.emplace< expr_undefined::ptr > ();
        break;

      case symbol_kind::S_expr_vector: // expr_vector
        yylhs.value.emplace< expr_vector::ptr > ();
        break;

      case symbol_kind::S_include: // include
        yylhs.value.emplace< include::ptr > ();
        break;

      case symbol_kind::S_program: // program
        yylhs.value.emplace< program::ptr > ();
        break;

      case symbol_kind::S_PATH: // "path"
      case symbol_kind::S_IDENTIFIER: // "identifier"
      case symbol_kind::S_STRING: // "string literal"
      case symbol_kind::S_ISTRING: // "localized string"
      case symbol_kind::S_FLOAT: // "float"
      case symbol_kind::S_INTEGER: // "integer"
        yylhs.value.emplace< std::string > ();
        break;

      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_stmt_or_dev: // stmt_or_dev
        yylhs.value.emplace< stmt > ();
        break;

      case symbol_kind::S_stmt_assert: // stmt_assert
        yylhs.value.emplace< stmt_assert::ptr > ();
        break;

      case symbol_kind::S_stmt_assertex: // stmt_assertex
        yylhs.value.emplace< stmt_assertex::ptr > ();
        break;

      case symbol_kind::S_stmt_assertmsg: // stmt_assertmsg
        yylhs.value.emplace< stmt_assertmsg::ptr > ();
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        yylhs.value.emplace< stmt_assign::ptr > ();
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        yylhs.value.emplace< stmt_break::ptr > ();
        break;

      case symbol_kind::S_stmt_breakpoint: // stmt_breakpoint
        yylhs.value.emplace< stmt_breakpoint::ptr > ();
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        yylhs.value.emplace< stmt_call::ptr > ();
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        yylhs.value.emplace< stmt_case::ptr > ();
        break;

      case symbol_kind::S_stmt_comp: // stmt_comp
        yylhs.value.emplace< stmt_comp::ptr > ();
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        yylhs.value.emplace< stmt_continue::ptr > ();
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        yylhs.value.emplace< stmt_default::ptr > ();
        break;

      case symbol_kind::S_stmt_dev: // stmt_dev
        yylhs.value.emplace< stmt_dev::ptr > ();
        break;

      case symbol_kind::S_stmt_dowhile: // stmt_dowhile
        yylhs.value.emplace< stmt_dowhile::ptr > ();
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        yylhs.value.emplace< stmt_endon::ptr > ();
        break;

      case symbol_kind::S_stmt_expr: // stmt_expr
        yylhs.value.emplace< stmt_expr::ptr > ();
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        yylhs.value.emplace< stmt_for::ptr > ();
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        yylhs.value.emplace< stmt_foreach::ptr > ();
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        yylhs.value.emplace< stmt_if::ptr > ();
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        yylhs.value.emplace< stmt_ifelse::ptr > ();
        break;

      case symbol_kind::S_stmt_list: // stmt_list
      case symbol_kind::S_stmt_or_dev_list: // stmt_or_dev_list
        yylhs.value.emplace< stmt_list::ptr > ();
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        yylhs.value.emplace< stmt_notify::ptr > ();
        break;

      case symbol_kind::S_stmt_prof_begin: // stmt_prof_begin
        yylhs.value.emplace< stmt_prof_begin::ptr > ();
        break;

      case symbol_kind::S_stmt_prof_end: // stmt_prof_end
        yylhs.value.emplace< stmt_prof_end::ptr > ();
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        yylhs.value.emplace< stmt_return::ptr > ();
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        yylhs.value.emplace< stmt_switch::ptr > ();
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        yylhs.value.emplace< stmt_wait::ptr > ();
        break;

      case symbol_kind::S_stmt_waitframe: // stmt_waitframe
        yylhs.value.emplace< stmt_waitframe::ptr > ();
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        yylhs.value.emplace< stmt_waittill::ptr > ();
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        yylhs.value.emplace< stmt_waittillframeend::ptr > ();
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        yylhs.value.emplace< stmt_waittillmatch::ptr > ();
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        yylhs.value.emplace< stmt_while::ptr > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // root: program
#line 277 "parser.ypp"
              { ast = std::move(yystack_[0].value.as < program::ptr > ()); }
#line 2163 "parser.cpp"
    break;

  case 3: // root: %empty
#line 278 "parser.ypp"
              { ast = make_program(yylhs.location); }
#line 2169 "parser.cpp"
    break;

  case 4: // program: program ";"
#line 283 "parser.ypp"
        { yylhs.value.as < program::ptr > () = std::move(yystack_[1].value.as < program::ptr > ()); }
#line 2175 "parser.cpp"
    break;

  case 5: // program: program inline
#line 285 "parser.ypp"
        { yylhs.value.as < program::ptr > () = std::move(yystack_[1].value.as < program::ptr > ()); }
#line 2181 "parser.cpp"
    break;

  case 6: // program: program include
#line 287 "parser.ypp"
        { yylhs.value.as < program::ptr > () = std::move(yystack_[1].value.as < program::ptr > ()); yylhs.value.as < program::ptr > ()->includes.push_back(std::move(yystack_[0].value.as < include::ptr > ())); }
#line 2187 "parser.cpp"
    break;

  case 7: // program: program declaration
#line 289 "parser.ypp"
        { yylhs.value.as < program::ptr > () = std::move(yystack_[1].value.as < program::ptr > ()); yylhs.value.as < program::ptr > ()->declarations.push_back(std::move(yystack_[0].value.as < decl > ())); }
#line 2193 "parser.cpp"
    break;

  case 8: // program: ";"
#line 291 "parser.ypp"
        { yylhs.value.as < program::ptr > () = make_program(yylhs.location); }
#line 2199 "parser.cpp"
    break;

  case 9: // program: inline
#line 293 "parser.ypp"
        { yylhs.value.as < program::ptr > () = make_program(yylhs.location); }
#line 2205 "parser.cpp"
    break;

  case 10: // program: include
#line 295 "parser.ypp"
        { yylhs.value.as < program::ptr > () = make_program(yylhs.location); yylhs.value.as < program::ptr > ()->includes.push_back(std::move(yystack_[0].value.as < include::ptr > ())); }
#line 2211 "parser.cpp"
    break;

  case 11: // program: declaration
#line 297 "parser.ypp"
        { yylhs.value.as < program::ptr > () = make_program(yylhs.location); yylhs.value.as < program::ptr > ()->declarations.push_back(std::move(yystack_[0].value.as < decl > ())); }
#line 2217 "parser.cpp"
    break;

  case 12: // inline: "#inline" expr_path ";"
#line 301 "parser.ypp"
                                 { ppr.push_header(yystack_[1].value.as < expr_path::ptr > ()->value); }
#line 2223 "parser.cpp"
    break;

  case 13: // include: "#include" expr_path ";"
#line 306 "parser.ypp"
        { yylhs.value.as < include::ptr > () = make_include(yylhs.location, std::move(yystack_[1].value.as < expr_path::ptr > ())); }
#line 2229 "parser.cpp"
    break;

  case 14: // include: "#include" expr_path expr_identifier expr_identifier ";"
#line 310 "parser.ypp"
        {
            check_include_as(yystack_[2].location, yystack_[2].value.as < expr_identifier::ptr > ()->value);
            yylhs.value.as < include::ptr > () = std::make_unique<include>(yylhs.location, std::move(yystack_[3].value.as < expr_path::ptr > ()), std::move(yystack_[1].value.as < expr_identifier::ptr > ()));
        }
#line 2238 "parser.cpp"
    break;

  case 15: // declaration: "/#"
#line 317 "parser.ypp"
                        { yylhs.value.as < decl > ().as_dev_begin = make_decl_dev_begin(yylhs.location); }
#line 2244 "parser.cpp"
    break;

  case 16: // declaration: "#/"
#line 318 "parser.ypp"
                        { yylhs.value.as < decl > ().as_dev_end = make_decl_dev_end(yylhs.location); }
#line 2250 "parser.cpp"
    break;

  case 17: // declaration: decl_usingtree
#line 319 "parser.ypp"
                        { yylhs.value.as < decl > ().as_usingtree = std::move(yystack_[0].value.as < decl_usingtree::ptr > ()); }
#line 2256 "parser.cpp"
    break;

  case 18: // declaration: decl_constant
#line 320 "parser.ypp"
                        { yylhs.value.as < decl > ().as_constant = std::move(yystack_[0].value.as < decl_constant::ptr > ()); }
#line 2262 "parser.cpp"
    break;

  case 19: // declaration: decl_function
#line 321 "parser.ypp"
                        { yylhs.value.as < decl > ().as_function = std::move(yystack_[0].value.as < decl_function::ptr > ()); }
#line 2268 "parser.cpp"
    break;

  case 20: // decl_usingtree: "#using_animtree" "(" expr_string ")" ";"
#line 326 "parser.ypp"
        { ppr.ban_header(yylhs.location); yylhs.value.as < decl_usingtree::ptr > () = make_decl_usingtree(yylhs.location, std::move(yystack_[2].value.as < expr_string::ptr > ())); }
#line 2274 "parser.cpp"
    break;

  case 21: // decl_constant: expr_identifier "=" expr ";"
#line 331 "parser.ypp"
        {
            ppr.ban_header(yylhs.location); yylhs.value.as < decl_constant::ptr > () = make_decl_constant(yylhs.location, std::move(yystack_[3].value.as < expr_identifier::ptr > ()), std::move(yystack_[1].value.as < expr > ())); 
            printf("%s" , fmt::format("{}: constants deprecated, use #define instead\n", yylhs.location.print()).data());
        }
#line 2283 "parser.cpp"
    break;

  case 22: // decl_function: expr_identifier "(" expr_parameters ")" stmt_comp
#line 339 "parser.ypp"
        { ppr.ban_header(yylhs.location); yylhs.value.as < decl_function::ptr > () = make_decl_function(yylhs.location, std::move(yystack_[4].value.as < expr_identifier::ptr > ()), std::move(yystack_[2].value.as < expr_parameters::ptr > ()), std::move(yystack_[0].value.as < stmt_comp::ptr > ())); }
#line 2289 "parser.cpp"
    break;

  case 23: // decl_function: expr_identifier expr_identifier "(" expr_parameters ")" stmt_comp
#line 344 "parser.ypp"
        {
            ppr.ban_header(yylhs.location);
            check_decl_modifier(yystack_[5].location, yystack_[5].value.as < expr_identifier::ptr > ()->value);
            yylhs.value.as < decl_function::ptr > () = make_decl_function(yylhs.location, std::move(yystack_[4].value.as < expr_identifier::ptr > ()), std::move(yystack_[2].value.as < expr_parameters::ptr > ()), std::move(yystack_[0].value.as < stmt_comp::ptr > ()));
        }
#line 2299 "parser.cpp"
    break;

  case 24: // decl_function: expr_identifier expr_identifier expr_identifier "(" expr_parameters ")" stmt_comp
#line 350 "parser.ypp"
        {
            ppr.ban_header(yylhs.location);
            check_decl_modifier(yystack_[6].location, yystack_[6].value.as < expr_identifier::ptr > ()->value);
            check_decl_modifier(yystack_[5].location, yystack_[5].value.as < expr_identifier::ptr > ()->value);
            yylhs.value.as < decl_function::ptr > () = make_decl_function(yylhs.location, std::move(yystack_[4].value.as < expr_identifier::ptr > ()), std::move(yystack_[2].value.as < expr_parameters::ptr > ()), std::move(yystack_[0].value.as < stmt_comp::ptr > ()));
        }
#line 2310 "parser.cpp"
    break;

  case 25: // stmt: stmt_comp
#line 359 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_comp = std::move(yystack_[0].value.as < stmt_comp::ptr > ()); }
#line 2316 "parser.cpp"
    break;

  case 26: // stmt: stmt_call
#line 360 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_call = std::move(yystack_[0].value.as < stmt_call::ptr > ()); }
#line 2322 "parser.cpp"
    break;

  case 27: // stmt: stmt_assign
#line 361 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_assign = std::move(yystack_[0].value.as < stmt_assign::ptr > ()); }
#line 2328 "parser.cpp"
    break;

  case 28: // stmt: stmt_endon
#line 362 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_endon = std::move(yystack_[0].value.as < stmt_endon::ptr > ()); }
#line 2334 "parser.cpp"
    break;

  case 29: // stmt: stmt_notify
#line 363 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_notify = std::move(yystack_[0].value.as < stmt_notify::ptr > ()); }
#line 2340 "parser.cpp"
    break;

  case 30: // stmt: stmt_wait
#line 364 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_wait = std::move(yystack_[0].value.as < stmt_wait::ptr > ()); }
#line 2346 "parser.cpp"
    break;

  case 31: // stmt: stmt_waittill
#line 365 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_waittill = std::move(yystack_[0].value.as < stmt_waittill::ptr > ()); }
#line 2352 "parser.cpp"
    break;

  case 32: // stmt: stmt_waittillmatch
#line 366 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_waittillmatch = std::move(yystack_[0].value.as < stmt_waittillmatch::ptr > ()); }
#line 2358 "parser.cpp"
    break;

  case 33: // stmt: stmt_waittillframeend
#line 367 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_waittillframeend = std::move(yystack_[0].value.as < stmt_waittillframeend::ptr > ()); }
#line 2364 "parser.cpp"
    break;

  case 34: // stmt: stmt_waitframe
#line 368 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_waitframe = std::move(yystack_[0].value.as < stmt_waitframe::ptr > ()); }
#line 2370 "parser.cpp"
    break;

  case 35: // stmt: stmt_if
#line 369 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_if = std::move(yystack_[0].value.as < stmt_if::ptr > ()); }
#line 2376 "parser.cpp"
    break;

  case 36: // stmt: stmt_ifelse
#line 370 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_ifelse = std::move(yystack_[0].value.as < stmt_ifelse::ptr > ()); }
#line 2382 "parser.cpp"
    break;

  case 37: // stmt: stmt_while
#line 371 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_while = std::move(yystack_[0].value.as < stmt_while::ptr > ()); }
#line 2388 "parser.cpp"
    break;

  case 38: // stmt: stmt_dowhile
#line 372 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_dowhile = std::move(yystack_[0].value.as < stmt_dowhile::ptr > ()); }
#line 2394 "parser.cpp"
    break;

  case 39: // stmt: stmt_for
#line 373 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_for = std::move(yystack_[0].value.as < stmt_for::ptr > ()); }
#line 2400 "parser.cpp"
    break;

  case 40: // stmt: stmt_foreach
#line 374 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_foreach = std::move(yystack_[0].value.as < stmt_foreach::ptr > ()); }
#line 2406 "parser.cpp"
    break;

  case 41: // stmt: stmt_switch
#line 375 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_switch = std::move(yystack_[0].value.as < stmt_switch::ptr > ()); }
#line 2412 "parser.cpp"
    break;

  case 42: // stmt: stmt_case
#line 376 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_case = std::move(yystack_[0].value.as < stmt_case::ptr > ()); }
#line 2418 "parser.cpp"
    break;

  case 43: // stmt: stmt_default
#line 377 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_default = std::move(yystack_[0].value.as < stmt_default::ptr > ()); }
#line 2424 "parser.cpp"
    break;

  case 44: // stmt: stmt_break
#line 378 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_break = std::move(yystack_[0].value.as < stmt_break::ptr > ()); }
#line 2430 "parser.cpp"
    break;

  case 45: // stmt: stmt_continue
#line 379 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_continue = std::move(yystack_[0].value.as < stmt_continue::ptr > ()); }
#line 2436 "parser.cpp"
    break;

  case 46: // stmt: stmt_return
#line 380 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_return = std::move(yystack_[0].value.as < stmt_return::ptr > ()); }
#line 2442 "parser.cpp"
    break;

  case 47: // stmt: stmt_breakpoint
#line 381 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_breakpoint = std::move(yystack_[0].value.as < stmt_breakpoint::ptr > ()); }
#line 2448 "parser.cpp"
    break;

  case 48: // stmt: stmt_prof_begin
#line 382 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_prof_begin = std::move(yystack_[0].value.as < stmt_prof_begin::ptr > ()); }
#line 2454 "parser.cpp"
    break;

  case 49: // stmt: stmt_prof_end
#line 383 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_prof_end = std::move(yystack_[0].value.as < stmt_prof_end::ptr > ()); }
#line 2460 "parser.cpp"
    break;

  case 50: // stmt: stmt_assert
#line 384 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_assert = std::move(yystack_[0].value.as < stmt_assert::ptr > ()); }
#line 2466 "parser.cpp"
    break;

  case 51: // stmt: stmt_assertex
#line 385 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_assertex = std::move(yystack_[0].value.as < stmt_assertex::ptr > ()); }
#line 2472 "parser.cpp"
    break;

  case 52: // stmt: stmt_assertmsg
#line 386 "parser.ypp"
                             { yylhs.value.as < stmt > ().as_assertmsg = std::move(yystack_[0].value.as < stmt_assertmsg::ptr > ()); }
#line 2478 "parser.cpp"
    break;

  case 53: // stmt_or_dev: stmt
#line 390 "parser.ypp"
               { yylhs.value.as < stmt > () = std::move(yystack_[0].value.as < stmt > ()); }
#line 2484 "parser.cpp"
    break;

  case 54: // stmt_or_dev: stmt_dev
#line 391 "parser.ypp"
               { yylhs.value.as < stmt > ().as_dev = std::move(yystack_[0].value.as < stmt_dev::ptr > ()); }
#line 2490 "parser.cpp"
    break;

  case 55: // stmt_list: stmt_list stmt
#line 396 "parser.ypp"
        { yylhs.value.as < stmt_list::ptr > () = std::move(yystack_[1].value.as < stmt_list::ptr > ()); yylhs.value.as < stmt_list::ptr > ()->list.push_back(std::move(yystack_[0].value.as < stmt > ())); }
#line 2496 "parser.cpp"
    break;

  case 56: // stmt_list: stmt
#line 398 "parser.ypp"
        { yylhs.value.as < stmt_list::ptr > () = make_stmt_list(yylhs.location); yylhs.value.as < stmt_list::ptr > ()->list.push_back(std::move(yystack_[0].value.as < stmt > ())); }
#line 2502 "parser.cpp"
    break;

  case 57: // stmt_list: stmt_list ";"
#line 400 "parser.ypp"
        { yylhs.value.as < stmt_list::ptr > () = std::move(yystack_[1].value.as < stmt_list::ptr > ()); }
#line 2508 "parser.cpp"
    break;

  case 58: // stmt_list: ";"
#line 402 "parser.ypp"
        { yylhs.value.as < stmt_list::ptr > () = make_stmt_list(yylhs.location); }
#line 2514 "parser.cpp"
    break;

  case 59: // stmt_or_dev_list: stmt_or_dev_list stmt_or_dev
#line 407 "parser.ypp"
        { yylhs.value.as < stmt_list::ptr > () = std::move(yystack_[1].value.as < stmt_list::ptr > ()); yylhs.value.as < stmt_list::ptr > ()->list.push_back(std::move(yystack_[0].value.as < stmt > ())); }
#line 2520 "parser.cpp"
    break;

  case 60: // stmt_or_dev_list: stmt_or_dev
#line 409 "parser.ypp"
        { yylhs.value.as < stmt_list::ptr > () = make_stmt_list(yylhs.location); yylhs.value.as < stmt_list::ptr > ()->list.push_back(std::move(yystack_[0].value.as < stmt > ())); }
#line 2526 "parser.cpp"
    break;

  case 61: // stmt_or_dev_list: stmt_or_dev_list ";"
#line 411 "parser.ypp"
        { yylhs.value.as < stmt_list::ptr > () = std::move(yystack_[1].value.as < stmt_list::ptr > ()); }
#line 2532 "parser.cpp"
    break;

  case 62: // stmt_or_dev_list: ";"
#line 413 "parser.ypp"
        { yylhs.value.as < stmt_list::ptr > () = make_stmt_list(yylhs.location); }
#line 2538 "parser.cpp"
    break;

  case 63: // stmt_dev: "/#" stmt_list "#/"
#line 417 "parser.ypp"
                                { yylhs.value.as < stmt_dev::ptr > () = make_stmt_dev(yylhs.location, std::move(yystack_[1].value.as < stmt_list::ptr > ())); }
#line 2544 "parser.cpp"
    break;

  case 64: // stmt_dev: "/#" "#/"
#line 418 "parser.ypp"
                      { yylhs.value.as < stmt_dev::ptr > () = make_stmt_dev(yylhs.location, make_stmt_list(yylhs.location)); }
#line 2550 "parser.cpp"
    break;

  case 65: // stmt_comp: "{" stmt_or_dev_list "}"
#line 422 "parser.ypp"
                                     { yylhs.value.as < stmt_comp::ptr > () = make_stmt_comp(yylhs.location, std::move(yystack_[1].value.as < stmt_list::ptr > ())); }
#line 2556 "parser.cpp"
    break;

  case 66: // stmt_comp: "{" "}"
#line 423 "parser.ypp"
                    { yylhs.value.as < stmt_comp::ptr > () = make_stmt_comp(yylhs.location, make_stmt_list(yylhs.location)); }
#line 2562 "parser.cpp"
    break;

  case 67: // stmt_expr: expr_assign
#line 428 "parser.ypp"
        { yylhs.value.as < stmt_expr::ptr > () = make_stmt_expr(yylhs.location, std::move(yystack_[0].value.as < expr > ())); }
#line 2568 "parser.cpp"
    break;

  case 68: // stmt_expr: expr_increment
#line 430 "parser.ypp"
        { yylhs.value.as < stmt_expr::ptr > () = make_stmt_expr(yylhs.location, std::move(yystack_[0].value.as < expr > ())); }
#line 2574 "parser.cpp"
    break;

  case 69: // stmt_expr: expr_decrement
#line 432 "parser.ypp"
        { yylhs.value.as < stmt_expr::ptr > () = make_stmt_expr(yylhs.location, std::move(yystack_[0].value.as < expr > ())); }
#line 2580 "parser.cpp"
    break;

  case 70: // stmt_expr: %empty
#line 434 "parser.ypp"
        { yylhs.value.as < stmt_expr::ptr > () = make_stmt_expr(yylhs.location, make_node(yylhs.location)); }
#line 2586 "parser.cpp"
    break;

  case 71: // stmt_call: expr_call ";"
#line 439 "parser.ypp"
        { yylhs.value.as < stmt_call::ptr > () = make_stmt_call(yylhs.location, expr{ std::move(yystack_[1].value.as < expr_call::ptr > ()) }); }
#line 2592 "parser.cpp"
    break;

  case 72: // stmt_call: expr_method ";"
#line 441 "parser.ypp"
        { yylhs.value.as < stmt_call::ptr > () = make_stmt_call(yylhs.location, expr{ std::move(yystack_[1].value.as < expr_method::ptr > ()) }); }
#line 2598 "parser.cpp"
    break;

  case 73: // stmt_assign: expr_assign ";"
#line 446 "parser.ypp"
        { yylhs.value.as < stmt_assign::ptr > () = make_stmt_assign(yylhs.location, std::move(yystack_[1].value.as < expr > ())); }
#line 2604 "parser.cpp"
    break;

  case 74: // stmt_assign: expr_increment ";"
#line 448 "parser.ypp"
        { yylhs.value.as < stmt_assign::ptr > () = make_stmt_assign(yylhs.location, std::move(yystack_[1].value.as < expr > ())); }
#line 2610 "parser.cpp"
    break;

  case 75: // stmt_assign: expr_decrement ";"
#line 450 "parser.ypp"
        { yylhs.value.as < stmt_assign::ptr > () = make_stmt_assign(yylhs.location, std::move(yystack_[1].value.as < expr > ())); }
#line 2616 "parser.cpp"
    break;

  case 76: // stmt_endon: expr_object "endon" "(" expr ")" ";"
#line 455 "parser.ypp"
        { yylhs.value.as < stmt_endon::ptr > () = make_stmt_endon(yylhs.location, std::move(yystack_[5].value.as < expr > ()), std::move(yystack_[2].value.as < expr > ())); }
#line 2622 "parser.cpp"
    break;

  case 77: // stmt_notify: expr_object "notify" "(" expr "," expr_arguments_no_empty ")" ";"
#line 460 "parser.ypp"
        { yylhs.value.as < stmt_notify::ptr > () = make_stmt_notify(yylhs.location, std::move(yystack_[7].value.as < expr > ()), std::move(yystack_[4].value.as < expr > ()), std::move(yystack_[2].value.as < expr_arguments::ptr > ())); }
#line 2628 "parser.cpp"
    break;

  case 78: // stmt_notify: expr_object "notify" "(" expr ")" ";"
#line 462 "parser.ypp"
        { yylhs.value.as < stmt_notify::ptr > () = make_stmt_notify(yylhs.location, std::move(yystack_[5].value.as < expr > ()), std::move(yystack_[2].value.as < expr > ()), make_expr_arguments(yylhs.location)); }
#line 2634 "parser.cpp"
    break;

  case 79: // stmt_wait: "wait" expr ";"
#line 467 "parser.ypp"
        { yylhs.value.as < stmt_wait::ptr > () = make_stmt_wait(yylhs.location, std::move(yystack_[1].value.as < expr > ())); }
#line 2640 "parser.cpp"
    break;

  case 80: // stmt_waittill: expr_object "waittill" "(" expr "," expr_arguments_no_empty ")" ";"
#line 472 "parser.ypp"
        { yylhs.value.as < stmt_waittill::ptr > () = make_stmt_waittill(yylhs.location, std::move(yystack_[7].value.as < expr > ()), std::move(yystack_[4].value.as < expr > ()), std::move(yystack_[2].value.as < expr_arguments::ptr > ())); }
#line 2646 "parser.cpp"
    break;

  case 81: // stmt_waittill: expr_object "waittill" "(" expr ")" ";"
#line 474 "parser.ypp"
        { yylhs.value.as < stmt_waittill::ptr > () = make_stmt_waittill(yylhs.location, std::move(yystack_[5].value.as < expr > ()), std::move(yystack_[2].value.as < expr > ()), make_expr_arguments(yylhs.location)); }
#line 2652 "parser.cpp"
    break;

  case 82: // stmt_waittillmatch: expr_object "waittillmatch" "(" expr "," expr_arguments_no_empty ")" ";"
#line 479 "parser.ypp"
        { yylhs.value.as < stmt_waittillmatch::ptr > () = make_stmt_waittillmatch(yylhs.location, std::move(yystack_[7].value.as < expr > ()), std::move(yystack_[4].value.as < expr > ()), std::move(yystack_[2].value.as < expr_arguments::ptr > ())); }
#line 2658 "parser.cpp"
    break;

  case 83: // stmt_waittillmatch: expr_object "waittillmatch" "(" expr ")" ";"
#line 481 "parser.ypp"
        { yylhs.value.as < stmt_waittillmatch::ptr > () = make_stmt_waittillmatch(yylhs.location, std::move(yystack_[5].value.as < expr > ()), std::move(yystack_[2].value.as < expr > ()), make_expr_arguments(yylhs.location)); }
#line 2664 "parser.cpp"
    break;

  case 84: // stmt_waittillframeend: "waittillframeend" ";"
#line 486 "parser.ypp"
        { yylhs.value.as < stmt_waittillframeend::ptr > () = make_stmt_waittillframeend(yylhs.location); }
#line 2670 "parser.cpp"
    break;

  case 85: // stmt_waitframe: "waitframe" ";"
#line 491 "parser.ypp"
        { yylhs.value.as < stmt_waitframe::ptr > () = make_stmt_waitframe(yylhs.location); }
#line 2676 "parser.cpp"
    break;

  case 86: // stmt_waitframe: "waitframe" "(" ")" ";"
#line 493 "parser.ypp"
        { yylhs.value.as < stmt_waitframe::ptr > () = make_stmt_waitframe(yylhs.location); }
#line 2682 "parser.cpp"
    break;

  case 87: // stmt_if: "if" "(" expr ")" stmt
#line 498 "parser.ypp"
        { yylhs.value.as < stmt_if::ptr > () = make_stmt_if(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < stmt > ())); }
#line 2688 "parser.cpp"
    break;

  case 88: // stmt_ifelse: "if" "(" expr ")" stmt "else" stmt
#line 503 "parser.ypp"
        { yylhs.value.as < stmt_ifelse::ptr > () = make_stmt_ifelse(yylhs.location, std::move(yystack_[4].value.as < expr > ()), std::move(yystack_[2].value.as < stmt > ()), std::move(yystack_[0].value.as < stmt > ())); }
#line 2694 "parser.cpp"
    break;

  case 89: // stmt_while: "while" "(" expr ")" stmt
#line 508 "parser.ypp"
        { yylhs.value.as < stmt_while::ptr > () = make_stmt_while(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < stmt > ())); }
#line 2700 "parser.cpp"
    break;

  case 90: // stmt_dowhile: "do" stmt "while" "(" expr ")" ";"
#line 513 "parser.ypp"
        { yylhs.value.as < stmt_dowhile::ptr > () = make_stmt_dowhile(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[5].value.as < stmt > ())); }
#line 2706 "parser.cpp"
    break;

  case 91: // stmt_for: "for" "(" stmt_expr ";" expr_or_empty ";" stmt_expr ")" stmt
#line 518 "parser.ypp"
        { yylhs.value.as < stmt_for::ptr > () = make_stmt_for(yylhs.location, stmt{ std::move(yystack_[6].value.as < stmt_expr::ptr > ()) }, std::move(yystack_[4].value.as < expr > ()), stmt{ std::move(yystack_[2].value.as < stmt_expr::ptr > ()) }, std::move(yystack_[0].value.as < stmt > ())); }
#line 2712 "parser.cpp"
    break;

  case 92: // stmt_foreach: "foreach" "(" expr_identifier "in" expr ")" stmt
#line 523 "parser.ypp"
        {
            auto array = expr{ make_expr_identifier(yylhs.location, fmt::format("_temp_{}", ++index)) };
            auto key = expr{ make_expr_identifier(yylhs.location, fmt::format("_temp_{}", ++index)) };
            yylhs.value.as < stmt_foreach::ptr > () = make_stmt_foreach(yylhs.location, std::move(yystack_[2].value.as < expr > ()), expr{ std::move(yystack_[4].value.as < expr_identifier::ptr > ()) }, expr{ make_node(yylhs.location) }, std::move(array), std::move(key), std::move(yystack_[0].value.as < stmt > ()), false); }
#line 2721 "parser.cpp"
    break;

  case 93: // stmt_foreach: "foreach" "(" expr_identifier "," expr_identifier "in" expr ")" stmt
#line 528 "parser.ypp"
        {
            auto array = expr{ make_expr_identifier(yylhs.location, fmt::format("_temp_{}", ++index)) };
            auto key = (ctx_->props() & props::foreach) ? expr{ make_expr_identifier(yylhs.location, fmt::format("_temp_{}", ++index)) } : expr{ std::move(yystack_[6].value.as < expr_identifier::ptr > ()) };
            yylhs.value.as < stmt_foreach::ptr > () = make_stmt_foreach(yylhs.location, std::move(yystack_[2].value.as < expr > ()), expr{ std::move(yystack_[4].value.as < expr_identifier::ptr > ()) }, (ctx_->props() & props::foreach) ? expr{ std::move(yystack_[6].value.as < expr_identifier::ptr > ()) } : expr{ make_node(yylhs.location) }, std::move(array), std::move(key), std::move(yystack_[0].value.as < stmt > ()), true);
        }
#line 2731 "parser.cpp"
    break;

  case 94: // stmt_switch: "switch" "(" expr ")" stmt_comp
#line 537 "parser.ypp"
        { yylhs.value.as < stmt_switch::ptr > () = make_stmt_switch(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < stmt_comp::ptr > ())); 
          parse_switch(*yylhs.value.as < stmt_switch::ptr > ());
        }
#line 2739 "parser.cpp"
    break;

  case 95: // stmt_case: "case" expr_integer ":"
#line 544 "parser.ypp"
        { yylhs.value.as < stmt_case::ptr > () = make_stmt_case(yylhs.location, expr{ std::move(yystack_[1].value.as < expr_integer::ptr > ()) }, make_stmt_list(yylhs.location)); }
#line 2745 "parser.cpp"
    break;

  case 96: // stmt_case: "case" expr_string ":"
#line 546 "parser.ypp"
        { yylhs.value.as < stmt_case::ptr > () = make_stmt_case(yylhs.location, expr{ std::move(yystack_[1].value.as < expr_string::ptr > ()) }, make_stmt_list(yylhs.location)); }
#line 2751 "parser.cpp"
    break;

  case 97: // stmt_default: "default" ":"
#line 551 "parser.ypp"
        { yylhs.value.as < stmt_default::ptr > () = make_stmt_default(yylhs.location, make_stmt_list(yylhs.location)); }
#line 2757 "parser.cpp"
    break;

  case 98: // stmt_break: "break" ";"
#line 556 "parser.ypp"
        { yylhs.value.as < stmt_break::ptr > () = make_stmt_break(yylhs.location); }
#line 2763 "parser.cpp"
    break;

  case 99: // stmt_continue: "continue" ";"
#line 561 "parser.ypp"
        { yylhs.value.as < stmt_continue::ptr > () = make_stmt_continue(yylhs.location); }
#line 2769 "parser.cpp"
    break;

  case 100: // stmt_return: "return" expr ";"
#line 566 "parser.ypp"
        { yylhs.value.as < stmt_return::ptr > () = make_stmt_return(yylhs.location, std::move(yystack_[1].value.as < expr > ())); }
#line 2775 "parser.cpp"
    break;

  case 101: // stmt_return: "return" ";"
#line 568 "parser.ypp"
        { yylhs.value.as < stmt_return::ptr > () = make_stmt_return(yylhs.location, make_node(yylhs.location)); }
#line 2781 "parser.cpp"
    break;

  case 102: // stmt_breakpoint: "breakpoint" ";"
#line 573 "parser.ypp"
        { yylhs.value.as < stmt_breakpoint::ptr > () = make_stmt_breakpoint(yylhs.location); }
#line 2787 "parser.cpp"
    break;

  case 103: // stmt_prof_begin: "prof_begin" "(" expr_arguments ")" ";"
#line 578 "parser.ypp"
        { yylhs.value.as < stmt_prof_begin::ptr > () = make_stmt_prof_begin(yylhs.location, std::move(yystack_[2].value.as < expr_arguments::ptr > ())); }
#line 2793 "parser.cpp"
    break;

  case 104: // stmt_prof_end: "prof_end" "(" expr_arguments ")" ";"
#line 583 "parser.ypp"
        { yylhs.value.as < stmt_prof_end::ptr > () = make_stmt_prof_end(yylhs.location, std::move(yystack_[2].value.as < expr_arguments::ptr > ())); }
#line 2799 "parser.cpp"
    break;

  case 105: // stmt_assert: "assert" "(" expr_arguments ")" ";"
#line 588 "parser.ypp"
        { yylhs.value.as < stmt_assert::ptr > () = make_stmt_assert(yylhs.location, std::move(yystack_[2].value.as < expr_arguments::ptr > ())); }
#line 2805 "parser.cpp"
    break;

  case 106: // stmt_assertex: "assertex" "(" expr_arguments ")" ";"
#line 593 "parser.ypp"
        { yylhs.value.as < stmt_assertex::ptr > () = make_stmt_assertex(yylhs.location, std::move(yystack_[2].value.as < expr_arguments::ptr > ())); }
#line 2811 "parser.cpp"
    break;

  case 107: // stmt_assertmsg: "assertmsg" "(" expr_arguments ")" ";"
#line 598 "parser.ypp"
        { yylhs.value.as < stmt_assertmsg::ptr > () = make_stmt_assertmsg(yylhs.location, std::move(yystack_[2].value.as < expr_arguments::ptr > ())); }
#line 2817 "parser.cpp"
    break;

  case 108: // expr: expr_ternary
#line 602 "parser.ypp"
                     { yylhs.value.as < expr > () = std::move(yystack_[0].value.as < expr > ()); }
#line 2823 "parser.cpp"
    break;

  case 109: // expr: expr_binary
#line 603 "parser.ypp"
                     { yylhs.value.as < expr > () = std::move(yystack_[0].value.as < expr > ()); }
#line 2829 "parser.cpp"
    break;

  case 110: // expr: expr_primitive
#line 604 "parser.ypp"
                     { yylhs.value.as < expr > () = std::move(yystack_[0].value.as < expr > ()); }
#line 2835 "parser.cpp"
    break;

  case 111: // expr_or_empty: expr
#line 608 "parser.ypp"
                     { yylhs.value.as < expr > () = std::move(yystack_[0].value.as < expr > ()); }
#line 2841 "parser.cpp"
    break;

  case 112: // expr_or_empty: %empty
#line 609 "parser.ypp"
                     { yylhs.value.as < expr > ().as_node = make_node(yylhs.location); }
#line 2847 "parser.cpp"
    break;

  case 113: // expr_assign: expr_tuple "=" expr
#line 614 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_assign_equal(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2853 "parser.cpp"
    break;

  case 114: // expr_assign: expr_object "=" expr
#line 616 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_assign_equal(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2859 "parser.cpp"
    break;

  case 115: // expr_assign: expr_object "|=" expr
#line 618 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_assign_bitwise_or(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2865 "parser.cpp"
    break;

  case 116: // expr_assign: expr_object "&=" expr
#line 620 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_assign_bitwise_and(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2871 "parser.cpp"
    break;

  case 117: // expr_assign: expr_object "^=" expr
#line 622 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_assign_bitwise_exor(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2877 "parser.cpp"
    break;

  case 118: // expr_assign: expr_object "<<=" expr
#line 624 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_assign_shift_left(yylhs.location, std::move(yystack_[2].value.as < expr > ()),std::move( yystack_[0].value.as < expr > ())); }
#line 2883 "parser.cpp"
    break;

  case 119: // expr_assign: expr_object ">>=" expr
#line 626 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_assign_shift_right(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2889 "parser.cpp"
    break;

  case 120: // expr_assign: expr_object "+=" expr
#line 628 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_assign_add(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2895 "parser.cpp"
    break;

  case 121: // expr_assign: expr_object "-=" expr
#line 630 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_assign_sub(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2901 "parser.cpp"
    break;

  case 122: // expr_assign: expr_object "*=" expr
#line 632 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_assign_mul(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2907 "parser.cpp"
    break;

  case 123: // expr_assign: expr_object "/=" expr
#line 634 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_assign_div(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2913 "parser.cpp"
    break;

  case 124: // expr_assign: expr_object "%=" expr
#line 636 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_assign_mod(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2919 "parser.cpp"
    break;

  case 125: // expr_increment: "++" expr_object
#line 641 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_increment(yylhs.location, std::move(yystack_[0].value.as < expr > ()), true); }
#line 2925 "parser.cpp"
    break;

  case 126: // expr_increment: expr_object "++"
#line 643 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_increment(yylhs.location, std::move(yystack_[1].value.as < expr > ()), false); }
#line 2931 "parser.cpp"
    break;

  case 127: // expr_decrement: "--" expr_object
#line 648 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_decrement(yylhs.location, std::move(yystack_[0].value.as < expr > ()), true); }
#line 2937 "parser.cpp"
    break;

  case 128: // expr_decrement: expr_object "--"
#line 650 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_decrement(yylhs.location, std::move(yystack_[1].value.as < expr > ()), false); }
#line 2943 "parser.cpp"
    break;

  case 129: // expr_ternary: expr "?" expr ":" expr
#line 655 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_ternary(yylhs.location, std::move(yystack_[4].value.as < expr > ()), std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2949 "parser.cpp"
    break;

  case 130: // expr_binary: expr "||" expr
#line 660 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_or(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2955 "parser.cpp"
    break;

  case 131: // expr_binary: expr "&&" expr
#line 662 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_and(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2961 "parser.cpp"
    break;

  case 132: // expr_binary: expr "==" expr
#line 664 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_equality(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2967 "parser.cpp"
    break;

  case 133: // expr_binary: expr "!=" expr
#line 666 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_inequality(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2973 "parser.cpp"
    break;

  case 134: // expr_binary: expr "<=" expr
#line 668 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_less_equal(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2979 "parser.cpp"
    break;

  case 135: // expr_binary: expr ">=" expr
#line 670 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_greater_equal(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2985 "parser.cpp"
    break;

  case 136: // expr_binary: expr "<" expr
#line 672 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_less(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2991 "parser.cpp"
    break;

  case 137: // expr_binary: expr ">" expr
#line 674 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_greater(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 2997 "parser.cpp"
    break;

  case 138: // expr_binary: expr "|" expr
#line 676 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_bitwise_or(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 3003 "parser.cpp"
    break;

  case 139: // expr_binary: expr "&" expr
#line 678 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_bitwise_and(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 3009 "parser.cpp"
    break;

  case 140: // expr_binary: expr "^" expr
#line 680 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_bitwise_exor(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 3015 "parser.cpp"
    break;

  case 141: // expr_binary: expr "<<" expr
#line 682 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_shift_left(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 3021 "parser.cpp"
    break;

  case 142: // expr_binary: expr ">>" expr
#line 684 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_shift_right(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 3027 "parser.cpp"
    break;

  case 143: // expr_binary: expr "+" expr
#line 686 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_add(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 3033 "parser.cpp"
    break;

  case 144: // expr_binary: expr "-" expr
#line 688 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_sub(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 3039 "parser.cpp"
    break;

  case 145: // expr_binary: expr "*" expr
#line 690 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_mul(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 3045 "parser.cpp"
    break;

  case 146: // expr_binary: expr "/" expr
#line 692 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_div(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 3051 "parser.cpp"
    break;

  case 147: // expr_binary: expr "%" expr
#line 694 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = make_expr_mod(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr > ())); }
#line 3057 "parser.cpp"
    break;

  case 148: // expr_primitive: expr_complement
#line 698 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_complement::ptr > ()); }
#line 3063 "parser.cpp"
    break;

  case 149: // expr_primitive: expr_negate
#line 699 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_negate::ptr > ()); }
#line 3069 "parser.cpp"
    break;

  case 150: // expr_primitive: expr_not
#line 700 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_not::ptr > ()); }
#line 3075 "parser.cpp"
    break;

  case 151: // expr_primitive: expr_call
#line 701 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_call::ptr > ()); }
#line 3081 "parser.cpp"
    break;

  case 152: // expr_primitive: expr_method
#line 702 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_method::ptr > ()); }
#line 3087 "parser.cpp"
    break;

  case 153: // expr_primitive: expr_add_array
#line 703 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_add_array::ptr > ()); }
#line 3093 "parser.cpp"
    break;

  case 154: // expr_primitive: expr_isdefined
#line 704 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_isdefined::ptr > ()); }
#line 3099 "parser.cpp"
    break;

  case 155: // expr_primitive: expr_istrue
#line 705 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_istrue::ptr > ()); }
#line 3105 "parser.cpp"
    break;

  case 156: // expr_primitive: expr_reference
#line 706 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_reference::ptr > ()); }
#line 3111 "parser.cpp"
    break;

  case 157: // expr_primitive: expr_array
#line 707 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_array::ptr > ()); }
#line 3117 "parser.cpp"
    break;

  case 158: // expr_primitive: expr_field
#line 708 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_field::ptr > ()); }
#line 3123 "parser.cpp"
    break;

  case 159: // expr_primitive: expr_size
#line 709 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_size::ptr > ()); }
#line 3129 "parser.cpp"
    break;

  case 160: // expr_primitive: expr_paren
#line 710 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_paren::ptr > ()); }
#line 3135 "parser.cpp"
    break;

  case 161: // expr_primitive: expr_thisthread
#line 711 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_thisthread::ptr > ()); }
#line 3141 "parser.cpp"
    break;

  case 162: // expr_primitive: expr_empty_array
#line 712 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_empty_array::ptr > ()); }
#line 3147 "parser.cpp"
    break;

  case 163: // expr_primitive: expr_undefined
#line 713 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_undefined::ptr > ()); }
#line 3153 "parser.cpp"
    break;

  case 164: // expr_primitive: expr_game
#line 714 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_game::ptr > ()); }
#line 3159 "parser.cpp"
    break;

  case 165: // expr_primitive: expr_self
#line 715 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_self::ptr > ()); }
#line 3165 "parser.cpp"
    break;

  case 166: // expr_primitive: expr_anim
#line 716 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_anim::ptr > ()); }
#line 3171 "parser.cpp"
    break;

  case 167: // expr_primitive: expr_level
#line 717 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_level::ptr > ()); }
#line 3177 "parser.cpp"
    break;

  case 168: // expr_primitive: expr_animation
#line 718 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_animation::ptr > ()); }
#line 3183 "parser.cpp"
    break;

  case 169: // expr_primitive: expr_animtree
#line 719 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_animtree::ptr > ()); }
#line 3189 "parser.cpp"
    break;

  case 170: // expr_primitive: expr_identifier
#line 720 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_identifier::ptr > ()); }
#line 3195 "parser.cpp"
    break;

  case 171: // expr_primitive: expr_istring
#line 721 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_istring::ptr > ()); }
#line 3201 "parser.cpp"
    break;

  case 172: // expr_primitive: expr_string
#line 722 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_string::ptr > ()); }
#line 3207 "parser.cpp"
    break;

  case 173: // expr_primitive: expr_vector
#line 723 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_vector::ptr > ()); }
#line 3213 "parser.cpp"
    break;

  case 174: // expr_primitive: expr_float
#line 724 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_float::ptr > ()); }
#line 3219 "parser.cpp"
    break;

  case 175: // expr_primitive: expr_integer
#line 725 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_integer::ptr > ()); }
#line 3225 "parser.cpp"
    break;

  case 176: // expr_primitive: expr_false
#line 726 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_false::ptr > ()); }
#line 3231 "parser.cpp"
    break;

  case 177: // expr_primitive: expr_true
#line 727 "parser.ypp"
                            { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_true::ptr > ()); }
#line 3237 "parser.cpp"
    break;

  case 178: // expr_complement: "~" expr
#line 732 "parser.ypp"
        { yylhs.value.as < expr_complement::ptr > () = make_expr_complement(yylhs.location, std::move(yystack_[0].value.as < expr > ())); }
#line 3243 "parser.cpp"
    break;

  case 179: // expr_negate: "-" expr_identifier
#line 737 "parser.ypp"
        { yylhs.value.as < expr_negate::ptr > () = make_expr_negate(yylhs.location, expr{ std::move(yystack_[0].value.as < expr_identifier::ptr > ()) }); }
#line 3249 "parser.cpp"
    break;

  case 180: // expr_negate: "-" expr_paren
#line 739 "parser.ypp"
        { yylhs.value.as < expr_negate::ptr > () = make_expr_negate(yylhs.location, expr{ std::move(yystack_[0].value.as < expr_paren::ptr > ()) }); }
#line 3255 "parser.cpp"
    break;

  case 181: // expr_negate: "-" expr_array
#line 741 "parser.ypp"
        { yylhs.value.as < expr_negate::ptr > () = make_expr_negate(yylhs.location, expr{ std::move(yystack_[0].value.as < expr_array::ptr > ()) }); }
#line 3261 "parser.cpp"
    break;

  case 182: // expr_negate: "-" expr_field
#line 743 "parser.ypp"
        { yylhs.value.as < expr_negate::ptr > () = make_expr_negate(yylhs.location, expr{ std::move(yystack_[0].value.as < expr_field::ptr > ()) }); }
#line 3267 "parser.cpp"
    break;

  case 183: // expr_not: "!" expr
#line 748 "parser.ypp"
        { yylhs.value.as < expr_not::ptr > () = make_expr_not(yylhs.location, std::move(yystack_[0].value.as < expr > ())); }
#line 3273 "parser.cpp"
    break;

  case 184: // expr_call: expr_function
#line 752 "parser.ypp"
                                   { yylhs.value.as < expr_call::ptr > () = make_expr_call(yylhs.location, std::move(yystack_[0].value.as < call > ())); }
#line 3279 "parser.cpp"
    break;

  case 185: // expr_call: expr_pointer
#line 753 "parser.ypp"
                                   { yylhs.value.as < expr_call::ptr > () = make_expr_call(yylhs.location, std::move(yystack_[0].value.as < call > ())); }
#line 3285 "parser.cpp"
    break;

  case 186: // expr_method: expr_object expr_function
#line 756 "parser.ypp"
                                   { yylhs.value.as < expr_method::ptr > () = make_expr_method(yylhs.location, std::move(yystack_[1].value.as < expr > ()), std::move(yystack_[0].value.as < call > ())); }
#line 3291 "parser.cpp"
    break;

  case 187: // expr_method: expr_object expr_pointer
#line 757 "parser.ypp"
                                   { yylhs.value.as < expr_method::ptr > () = make_expr_method(yylhs.location, std::move(yystack_[1].value.as < expr > ()), std::move(yystack_[0].value.as < call > ())); }
#line 3297 "parser.cpp"
    break;

  case 188: // expr_function: expr_identifier "(" expr_arguments ")"
#line 762 "parser.ypp"
        { yylhs.value.as < call > ().as_function = make_expr_function(yylhs.location, make_expr_path(yylhs.location), std::move(yystack_[3].value.as < expr_identifier::ptr > ()), std::move(yystack_[1].value.as < expr_arguments::ptr > ()), call::mode::normal); }
#line 3303 "parser.cpp"
    break;

  case 189: // expr_function: expr_path "::" expr_identifier "(" expr_arguments ")"
#line 764 "parser.ypp"
        { yylhs.value.as < call > ().as_function = make_expr_function(yylhs.location, std::move(yystack_[5].value.as < expr_path::ptr > ()), std::move(yystack_[3].value.as < expr_identifier::ptr > ()), std::move(yystack_[1].value.as < expr_arguments::ptr > ()), call::mode::normal); }
#line 3309 "parser.cpp"
    break;

  case 190: // expr_function: "thread" expr_identifier "(" expr_arguments ")"
#line 766 "parser.ypp"
        { yylhs.value.as < call > ().as_function = make_expr_function(yylhs.location, make_expr_path(yylhs.location), std::move(yystack_[3].value.as < expr_identifier::ptr > ()), std::move(yystack_[1].value.as < expr_arguments::ptr > ()), call::mode::thread); }
#line 3315 "parser.cpp"
    break;

  case 191: // expr_function: "thread" expr_path "::" expr_identifier "(" expr_arguments ")"
#line 768 "parser.ypp"
        { yylhs.value.as < call > ().as_function = make_expr_function(yylhs.location, std::move(yystack_[5].value.as < expr_path::ptr > ()), std::move(yystack_[3].value.as < expr_identifier::ptr > ()), std::move(yystack_[1].value.as < expr_arguments::ptr > ()), call::mode::thread); }
#line 3321 "parser.cpp"
    break;

  case 192: // expr_function: "childthread" expr_identifier "(" expr_arguments ")"
#line 770 "parser.ypp"
        { yylhs.value.as < call > ().as_function = make_expr_function(yylhs.location, make_expr_path(yylhs.location), std::move(yystack_[3].value.as < expr_identifier::ptr > ()), std::move(yystack_[1].value.as < expr_arguments::ptr > ()), call::mode::childthread); }
#line 3327 "parser.cpp"
    break;

  case 193: // expr_function: "childthread" expr_path "::" expr_identifier "(" expr_arguments ")"
#line 772 "parser.ypp"
        { yylhs.value.as < call > ().as_function = make_expr_function(yylhs.location, std::move(yystack_[5].value.as < expr_path::ptr > ()), std::move(yystack_[3].value.as < expr_identifier::ptr > ()), std::move(yystack_[1].value.as < expr_arguments::ptr > ()), call::mode::childthread); }
#line 3333 "parser.cpp"
    break;

  case 194: // expr_pointer: "[" "[" expr "]" "]" "(" expr_arguments ")"
#line 777 "parser.ypp"
        { yylhs.value.as < call > ().as_pointer = make_expr_pointer(yylhs.location, std::move(yystack_[5].value.as < expr > ()), std::move(yystack_[1].value.as < expr_arguments::ptr > ()), call::mode::normal); }
#line 3339 "parser.cpp"
    break;

  case 195: // expr_pointer: "thread" "[" "[" expr "]" "]" "(" expr_arguments ")"
#line 779 "parser.ypp"
        { yylhs.value.as < call > ().as_pointer = make_expr_pointer(yylhs.location, std::move(yystack_[5].value.as < expr > ()), std::move(yystack_[1].value.as < expr_arguments::ptr > ()), call::mode::thread); }
#line 3345 "parser.cpp"
    break;

  case 196: // expr_pointer: "childthread" "[" "[" expr "]" "]" "(" expr_arguments ")"
#line 781 "parser.ypp"
        { yylhs.value.as < call > ().as_pointer = make_expr_pointer(yylhs.location, std::move(yystack_[5].value.as < expr > ()), std::move(yystack_[1].value.as < expr_arguments::ptr > ()), call::mode::childthread); }
#line 3351 "parser.cpp"
    break;

  case 197: // expr_pointer: "call" "[" "[" expr "]" "]" "(" expr_arguments ")"
#line 783 "parser.ypp"
        { yylhs.value.as < call > ().as_pointer = make_expr_pointer(yylhs.location, std::move(yystack_[5].value.as < expr > ()), std::move(yystack_[1].value.as < expr_arguments::ptr > ()), call::mode::builtin); }
#line 3357 "parser.cpp"
    break;

  case 198: // expr_add_array: "[" expr_arguments_no_empty "]"
#line 788 "parser.ypp"
        { yylhs.value.as < expr_add_array::ptr > () = make_expr_add_array(yylhs.location, std::move(yystack_[1].value.as < expr_arguments::ptr > ())); }
#line 3363 "parser.cpp"
    break;

  case 199: // expr_parameters: expr_parameters "," expr_identifier
#line 793 "parser.ypp"
        { yylhs.value.as < expr_parameters::ptr > () = std::move(yystack_[2].value.as < expr_parameters::ptr > ()); yylhs.value.as < expr_parameters::ptr > ()->list.push_back(std::move(yystack_[0].value.as < expr_identifier::ptr > ())); }
#line 3369 "parser.cpp"
    break;

  case 200: // expr_parameters: expr_identifier
#line 795 "parser.ypp"
        { yylhs.value.as < expr_parameters::ptr > () = make_expr_parameters(yylhs.location); yylhs.value.as < expr_parameters::ptr > ()->list.push_back(std::move(yystack_[0].value.as < expr_identifier::ptr > ())); }
#line 3375 "parser.cpp"
    break;

  case 201: // expr_parameters: %empty
#line 797 "parser.ypp"
        { yylhs.value.as < expr_parameters::ptr > () = make_expr_parameters(yylhs.location); }
#line 3381 "parser.cpp"
    break;

  case 202: // expr_arguments: expr_arguments_no_empty
#line 802 "parser.ypp"
        { yylhs.value.as < expr_arguments::ptr > () = std::move(yystack_[0].value.as < expr_arguments::ptr > ()); }
#line 3387 "parser.cpp"
    break;

  case 203: // expr_arguments: %empty
#line 804 "parser.ypp"
        { yylhs.value.as < expr_arguments::ptr > () = make_expr_arguments(yylhs.location); }
#line 3393 "parser.cpp"
    break;

  case 204: // expr_arguments_no_empty: expr_arguments "," expr
#line 809 "parser.ypp"
        { yylhs.value.as < expr_arguments::ptr > () = std::move(yystack_[2].value.as < expr_arguments::ptr > ()); yylhs.value.as < expr_arguments::ptr > ()->list.push_back(std::move(yystack_[0].value.as < expr > ())); }
#line 3399 "parser.cpp"
    break;

  case 205: // expr_arguments_no_empty: expr
#line 811 "parser.ypp"
        { yylhs.value.as < expr_arguments::ptr > () = make_expr_arguments(yylhs.location); yylhs.value.as < expr_arguments::ptr > ()->list.push_back(std::move(yystack_[0].value.as < expr > ())); }
#line 3405 "parser.cpp"
    break;

  case 206: // expr_isdefined: "isdefined" "(" expr ")"
#line 816 "parser.ypp"
        { yylhs.value.as < expr_isdefined::ptr > () = make_expr_isdefined(yylhs.location, std::move(yystack_[1].value.as < expr > ())); }
#line 3411 "parser.cpp"
    break;

  case 207: // expr_istrue: "istrue" "(" expr ")"
#line 821 "parser.ypp"
        { yylhs.value.as < expr_istrue::ptr > () = make_expr_istrue(yylhs.location, std::move(yystack_[1].value.as < expr > ())); }
#line 3417 "parser.cpp"
    break;

  case 208: // expr_reference: "::" expr_identifier
#line 826 "parser.ypp"
        { yylhs.value.as < expr_reference::ptr > () = make_expr_reference(yylhs.location, make_expr_path(yylhs.location), std::move(yystack_[0].value.as < expr_identifier::ptr > ())); }
#line 3423 "parser.cpp"
    break;

  case 209: // expr_reference: expr_path "::" expr_identifier
#line 828 "parser.ypp"
        { yylhs.value.as < expr_reference::ptr > () = make_expr_reference(yylhs.location, std::move(yystack_[2].value.as < expr_path::ptr > ()), std::move(yystack_[0].value.as < expr_identifier::ptr > ())); }
#line 3429 "parser.cpp"
    break;

  case 210: // expr_reference: "&" expr_identifier
#line 834 "parser.ypp"
        { yylhs.value.as < expr_reference::ptr > () = make_expr_reference(yylhs.location, make_expr_path(yylhs.location), std::move(yystack_[0].value.as < expr_identifier::ptr > ())); }
#line 3435 "parser.cpp"
    break;

  case 211: // expr_reference: "&" expr_path "::" expr_identifier
#line 836 "parser.ypp"
        { yylhs.value.as < expr_reference::ptr > () = make_expr_reference(yylhs.location, std::move(yystack_[2].value.as < expr_path::ptr > ()), std::move(yystack_[0].value.as < expr_identifier::ptr > ())); }
#line 3441 "parser.cpp"
    break;

  case 212: // expr_tuple: "[" expr_tuple_arguments "]"
#line 841 "parser.ypp"
        { yylhs.value.as < expr > ().as_node = std::move(yystack_[1].value.as < expr_tuple::ptr > ());
          yylhs.value.as < expr > ().as_tuple->temp = expr{ std::make_unique<expr_identifier>(yylhs.value.as < expr > ().loc(), fmt::format("_temp_{}", ++index)) };
        }
#line 3449 "parser.cpp"
    break;

  case 213: // expr_tuple_arguments: expr_tuple_arguments "," expr_tuple_types
#line 848 "parser.ypp"
        { yylhs.value.as < expr_tuple::ptr > () = std::move(yystack_[2].value.as < expr_tuple::ptr > ()); yylhs.value.as < expr_tuple::ptr > ()->list.push_back(std::move(yystack_[0].value.as < expr > ())); }
#line 3455 "parser.cpp"
    break;

  case 214: // expr_tuple_arguments: expr_tuple_types
#line 850 "parser.ypp"
        { yylhs.value.as < expr_tuple::ptr > () = make_expr_tuple(yylhs.location); yylhs.value.as < expr_tuple::ptr > ()->list.push_back(std::move(yystack_[0].value.as < expr > ())); }
#line 3461 "parser.cpp"
    break;

  case 215: // expr_tuple_types: expr_array
#line 854 "parser.ypp"
                      { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_array::ptr > ()); }
#line 3467 "parser.cpp"
    break;

  case 216: // expr_tuple_types: expr_field
#line 855 "parser.ypp"
                      { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_field::ptr > ()); }
#line 3473 "parser.cpp"
    break;

  case 217: // expr_tuple_types: expr_identifier
#line 856 "parser.ypp"
                      { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_identifier::ptr > ()); }
#line 3479 "parser.cpp"
    break;

  case 218: // expr_array: expr_object "[" expr "]"
#line 861 "parser.ypp"
        { yylhs.value.as < expr_array::ptr > () = make_expr_array(yylhs.location, std::move(yystack_[3].value.as < expr > ()), std::move(yystack_[1].value.as < expr > ())); }
#line 3485 "parser.cpp"
    break;

  case 219: // expr_field: expr_object "." expr_identifier_nosize
#line 866 "parser.ypp"
        { yylhs.value.as < expr_field::ptr > () = make_expr_field(yylhs.location, std::move(yystack_[2].value.as < expr > ()), std::move(yystack_[0].value.as < expr_identifier::ptr > ())); }
#line 3491 "parser.cpp"
    break;

  case 220: // expr_size: expr_object "." "size"
#line 871 "parser.ypp"
        { yylhs.value.as < expr_size::ptr > () = make_expr_size(yylhs.location, std::move(yystack_[2].value.as < expr > ())); }
#line 3497 "parser.cpp"
    break;

  case 221: // expr_paren: "(" expr ")"
#line 876 "parser.ypp"
        { yylhs.value.as < expr_paren::ptr > () = make_expr_paren(yylhs.location, std::move(yystack_[1].value.as < expr > ())); }
#line 3503 "parser.cpp"
    break;

  case 222: // expr_object: expr_call
#line 880 "parser.ypp"
                      { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_call::ptr > ()); }
#line 3509 "parser.cpp"
    break;

  case 223: // expr_object: expr_method
#line 881 "parser.ypp"
                      { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_method::ptr > ()); }
#line 3515 "parser.cpp"
    break;

  case 224: // expr_object: expr_array
#line 882 "parser.ypp"
                      { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_array::ptr > ()); }
#line 3521 "parser.cpp"
    break;

  case 225: // expr_object: expr_field
#line 883 "parser.ypp"
                      { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_field::ptr > ()); }
#line 3527 "parser.cpp"
    break;

  case 226: // expr_object: expr_game
#line 884 "parser.ypp"
                      { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_game::ptr > ()); }
#line 3533 "parser.cpp"
    break;

  case 227: // expr_object: expr_self
#line 885 "parser.ypp"
                      { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_self::ptr > ()); }
#line 3539 "parser.cpp"
    break;

  case 228: // expr_object: expr_anim
#line 886 "parser.ypp"
                      { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_anim::ptr > ()); }
#line 3545 "parser.cpp"
    break;

  case 229: // expr_object: expr_level
#line 887 "parser.ypp"
                      { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_level::ptr > ()); }
#line 3551 "parser.cpp"
    break;

  case 230: // expr_object: expr_identifier
#line 888 "parser.ypp"
                      { yylhs.value.as < expr > ().as_node = std::move(yystack_[0].value.as < expr_identifier::ptr > ()); }
#line 3557 "parser.cpp"
    break;

  case 231: // expr_thisthread: "thisthread"
#line 893 "parser.ypp"
        { yylhs.value.as < expr_thisthread::ptr > () = make_expr_thisthread(yylhs.location); }
#line 3563 "parser.cpp"
    break;

  case 232: // expr_empty_array: "[" "]"
#line 898 "parser.ypp"
        { yylhs.value.as < expr_empty_array::ptr > () = make_expr_empty_array(yylhs.location); }
#line 3569 "parser.cpp"
    break;

  case 233: // expr_undefined: "undefined"
#line 903 "parser.ypp"
        { yylhs.value.as < expr_undefined::ptr > () = make_expr_undefined(yylhs.location); }
#line 3575 "parser.cpp"
    break;

  case 234: // expr_game: "game"
#line 908 "parser.ypp"
        { yylhs.value.as < expr_game::ptr > () = make_expr_game(yylhs.location); }
#line 3581 "parser.cpp"
    break;

  case 235: // expr_self: "self"
#line 913 "parser.ypp"
        { yylhs.value.as < expr_self::ptr > () = make_expr_self(yylhs.location); }
#line 3587 "parser.cpp"
    break;

  case 236: // expr_anim: "anim"
#line 918 "parser.ypp"
        { yylhs.value.as < expr_anim::ptr > () = make_expr_anim(yylhs.location); }
#line 3593 "parser.cpp"
    break;

  case 237: // expr_level: "level"
#line 923 "parser.ypp"
        { yylhs.value.as < expr_level::ptr > () = make_expr_level(yylhs.location); }
#line 3599 "parser.cpp"
    break;

  case 238: // expr_animation: "%" "identifier"
#line 928 "parser.ypp"
        { yylhs.value.as < expr_animation::ptr > () = make_expr_animation(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3605 "parser.cpp"
    break;

  case 239: // expr_animtree: "#animtree"
#line 933 "parser.ypp"
        { yylhs.value.as < expr_animtree::ptr > () = make_expr_animtree(yylhs.location); }
#line 3611 "parser.cpp"
    break;

  case 240: // expr_identifier_nosize: "identifier"
#line 938 "parser.ypp"
        { yylhs.value.as < expr_identifier::ptr > () = make_expr_identifier(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3617 "parser.cpp"
    break;

  case 241: // expr_identifier: "identifier"
#line 943 "parser.ypp"
        { yylhs.value.as < expr_identifier::ptr > () = make_expr_identifier(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3623 "parser.cpp"
    break;

  case 242: // expr_identifier: "size"
#line 945 "parser.ypp"
        { yylhs.value.as < expr_identifier::ptr > () = make_expr_identifier(yylhs.location, "size"); }
#line 3629 "parser.cpp"
    break;

  case 243: // expr_path: "path" "/" "identifier"
#line 950 "parser.ypp"
        { yylhs.value.as < expr_path::ptr > () = make_expr_path(yylhs.location, yystack_[2].value.as < std::string > () + "/" + yystack_[0].value.as < std::string > ()); }
#line 3635 "parser.cpp"
    break;

  case 244: // expr_path: "identifier"
#line 952 "parser.ypp"
        { yylhs.value.as < expr_path::ptr > () = make_expr_path(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3641 "parser.cpp"
    break;

  case 245: // expr_path: "path"
#line 954 "parser.ypp"
        { yylhs.value.as < expr_path::ptr > () = make_expr_path(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3647 "parser.cpp"
    break;

  case 246: // expr_istring: "localized string"
#line 959 "parser.ypp"
        { yylhs.value.as < expr_istring::ptr > () = make_expr_istring(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3653 "parser.cpp"
    break;

  case 247: // expr_string: "string literal"
#line 964 "parser.ypp"
        { yylhs.value.as < expr_string::ptr > () = make_expr_string(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3659 "parser.cpp"
    break;

  case 248: // expr_vector: "(" expr "," expr "," expr ")"
#line 969 "parser.ypp"
        { yylhs.value.as < expr_vector::ptr > () = make_expr_vector(yylhs.location, std::move(yystack_[5].value.as < expr > ()), std::move(yystack_[3].value.as < expr > ()), std::move(yystack_[1].value.as < expr > ())); }
#line 3665 "parser.cpp"
    break;

  case 249: // expr_float: "-" "float"
#line 974 "parser.ypp"
        { yylhs.value.as < expr_float::ptr > () = make_expr_float(yylhs.location, "-" + yystack_[0].value.as < std::string > ()); }
#line 3671 "parser.cpp"
    break;

  case 250: // expr_float: "float"
#line 976 "parser.ypp"
        { yylhs.value.as < expr_float::ptr > () = make_expr_float(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3677 "parser.cpp"
    break;

  case 251: // expr_integer: "-" "integer"
#line 981 "parser.ypp"
        { yylhs.value.as < expr_integer::ptr > () = make_expr_integer(yylhs.location, "-" + yystack_[0].value.as < std::string > ()); }
#line 3683 "parser.cpp"
    break;

  case 252: // expr_integer: "integer"
#line 983 "parser.ypp"
        { yylhs.value.as < expr_integer::ptr > () = make_expr_integer(yylhs.location, yystack_[0].value.as < std::string > ()); }
#line 3689 "parser.cpp"
    break;

  case 253: // expr_false: "false"
#line 988 "parser.ypp"
        { yylhs.value.as < expr_false::ptr > () = make_expr_false(yylhs.location); }
#line 3695 "parser.cpp"
    break;

  case 254: // expr_true: "true"
#line 993 "parser.ypp"
        { yylhs.value.as < expr_true::ptr > () = make_expr_true(yylhs.location); }
#line 3701 "parser.cpp"
    break;


#line 3705 "parser.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      yy_lac_discard_ ("error recovery");
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  const char *
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    static const char *const yy_sname[] =
    {
    "end of file", "error", "invalid token", "#", "/#", "#/", "#inline",
  "#include", "#using_animtree", "#animtree", "endon", "notify", "wait",
  "waittill", "waittillmatch", "waittillframeend", "waitframe", "if",
  "else", "do", "while", "for", "foreach", "in", "switch", "case",
  "default", "break", "continue", "return", "breakpoint", "prof_begin",
  "prof_end", "assert", "assertex", "assertmsg", "thread", "childthread",
  "thisthread", "call", "true", "false", "undefined", "size", "game",
  "self", "anim", "level", "isdefined", "istrue", "(", ")", "{", "}", "[",
  "]", ",", ".", "..", "...", "::", ":", ";", "?", "++", "--", "<<", ">>",
  "||", "&&", "==", "!=", "<=", ">=", "<", ">", "!", "~", "=", "+=", "-=",
  "*=", "/=", "%=", "|=", "&=", "^=", ">>=", "<<=", "|", "&", "^", "+",
  "-", "*", "/", "%", "path", "identifier", "string literal",
  "localized string", "float", "integer", "SIZEOF", "ADD_ARRAY", "THEN",
  "TERN", "NEG", "ANIMREF", "PREINC", "PREDEC", "POSTINC", "POSTDEC",
  "$accept", "root", "program", "inline", "include", "declaration",
  "decl_usingtree", "decl_constant", "decl_function", "stmt",
  "stmt_or_dev", "stmt_list", "stmt_or_dev_list", "stmt_dev", "stmt_comp",
  "stmt_expr", "stmt_call", "stmt_assign", "stmt_endon", "stmt_notify",
  "stmt_wait", "stmt_waittill", "stmt_waittillmatch",
  "stmt_waittillframeend", "stmt_waitframe", "stmt_if", "stmt_ifelse",
  "stmt_while", "stmt_dowhile", "stmt_for", "stmt_foreach", "stmt_switch",
  "stmt_case", "stmt_default", "stmt_break", "stmt_continue",
  "stmt_return", "stmt_breakpoint", "stmt_prof_begin", "stmt_prof_end",
  "stmt_assert", "stmt_assertex", "stmt_assertmsg", "expr",
  "expr_or_empty", "expr_assign", "expr_increment", "expr_decrement",
  "expr_ternary", "expr_binary", "expr_primitive", "expr_complement",
  "expr_negate", "expr_not", "expr_call", "expr_method", "expr_function",
  "expr_pointer", "expr_add_array", "expr_parameters", "expr_arguments",
  "expr_arguments_no_empty", "expr_isdefined", "expr_istrue",
  "expr_reference", "expr_tuple", "expr_tuple_arguments",
  "expr_tuple_types", "expr_array", "expr_field", "expr_size",
  "expr_paren", "expr_object", "expr_thisthread", "expr_empty_array",
  "expr_undefined", "expr_game", "expr_self", "expr_anim", "expr_level",
  "expr_animation", "expr_animtree", "expr_identifier_nosize",
  "expr_identifier", "expr_path", "expr_istring", "expr_string",
  "expr_vector", "expr_float", "expr_integer", "expr_false", "expr_true", YY_NULLPTR
    };
    return yy_sname[yysymbol];
  }



  // parser::context.
  parser::context::context (const parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

#if GSCDEBUG
    // Execute LAC once. We don't care if it is successful, we
    // only do it for the sake of debugging output.
    if (!yyparser_.yy_lac_established_)
      yyparser_.yy_lac_check_ (yyla_.kind ());
#endif

    for (int yyx = 0; yyx < YYNTOKENS; ++yyx)
      {
        symbol_kind_type yysym = YY_CAST (symbol_kind_type, yyx);
        if (yysym != symbol_kind::S_YYerror
            && yysym != symbol_kind::S_YYUNDEF
            && yyparser_.yy_lac_check_ (yysym))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
          }
      }
    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }




  bool
  parser::yy_lac_check_ (symbol_kind_type yytoken) const
  {
    // Logically, the yylac_stack's lifetime is confined to this function.
    // Clear it, to get rid of potential left-overs from previous call.
    yylac_stack_.clear ();
    // Reduce until we encounter a shift and thereby accept the token.
#if GSCDEBUG
    YYCDEBUG << "LAC: checking lookahead " << symbol_name (yytoken) << ':';
#endif
    std::ptrdiff_t lac_top = 0;
    while (true)
      {
        state_type top_state = (yylac_stack_.empty ()
                                ? yystack_[lac_top].state
                                : yylac_stack_.back ());
        int yyrule = yypact_[+top_state];
        if (yy_pact_value_is_default_ (yyrule)
            || (yyrule += yytoken) < 0 || yylast_ < yyrule
            || yycheck_[yyrule] != yytoken)
          {
            // Use the default action.
            yyrule = yydefact_[+top_state];
            if (yyrule == 0)
              {
                YYCDEBUG << " Err\n";
                return false;
              }
          }
        else
          {
            // Use the action from yytable.
            yyrule = yytable_[yyrule];
            if (yy_table_value_is_error_ (yyrule))
              {
                YYCDEBUG << " Err\n";
                return false;
              }
            if (0 < yyrule)
              {
                YYCDEBUG << " S" << yyrule << '\n';
                return true;
              }
            yyrule = -yyrule;
          }
        // By now we know we have to simulate a reduce.
        YYCDEBUG << " R" << yyrule - 1;
        // Pop the corresponding number of values from the stack.
        {
          std::ptrdiff_t yylen = yyr2_[yyrule];
          // First pop from the LAC stack as many tokens as possible.
          std::ptrdiff_t lac_size = std::ptrdiff_t (yylac_stack_.size ());
          if (yylen < lac_size)
            {
              yylac_stack_.resize (std::size_t (lac_size - yylen));
              yylen = 0;
            }
          else if (lac_size)
            {
              yylac_stack_.clear ();
              yylen -= lac_size;
            }
          // Only afterwards look at the main stack.
          // We simulate popping elements by incrementing lac_top.
          lac_top += yylen;
        }
        // Keep top_state in sync with the updated stack.
        top_state = (yylac_stack_.empty ()
                     ? yystack_[lac_top].state
                     : yylac_stack_.back ());
        // Push the resulting state of the reduction.
        state_type state = yy_lr_goto_state_ (top_state, yyr1_[yyrule]);
        YYCDEBUG << " G" << int (state);
        yylac_stack_.push_back (state);
      }
  }

  // Establish the initial context if no initial context currently exists.
  bool
  parser::yy_lac_establish_ (symbol_kind_type yytoken)
  {
    /* Establish the initial context for the current lookahead if no initial
       context is currently established.

       We define a context as a snapshot of the parser stacks.  We define
       the initial context for a lookahead as the context in which the
       parser initially examines that lookahead in order to select a
       syntactic action.  Thus, if the lookahead eventually proves
       syntactically unacceptable (possibly in a later context reached via a
       series of reductions), the initial context can be used to determine
       the exact set of tokens that would be syntactically acceptable in the
       lookahead's place.  Moreover, it is the context after which any
       further semantic actions would be erroneous because they would be
       determined by a syntactically unacceptable token.

       yy_lac_establish_ should be invoked when a reduction is about to be
       performed in an inconsistent state (which, for the purposes of LAC,
       includes consistent states that don't know they're consistent because
       their default reductions have been disabled).

       For parse.lac=full, the implementation of yy_lac_establish_ is as
       follows.  If no initial context is currently established for the
       current lookahead, then check if that lookahead can eventually be
       shifted if syntactic actions continue from the current context.  */
    if (yy_lac_established_)
      return true;
    else
      {
#if GSCDEBUG
        YYCDEBUG << "LAC: initial context established for "
                 << symbol_name (yytoken) << '\n';
#endif
        yy_lac_established_ = true;
        return yy_lac_check_ (yytoken);
      }
  }

  // Discard any previous initial lookahead context.
  void
  parser::yy_lac_discard_ (const char* event)
  {
   /* Discard any previous initial lookahead context because of Event,
      which may be a lookahead change or an invalidation of the currently
      established initial context for the current lookahead.

      The most common example of a lookahead change is a shift.  An example
      of both cases is syntax error recovery.  That is, a syntax error
      occurs when the lookahead is syntactically erroneous for the
      currently established initial context, so error recovery manipulates
      the parser stacks to try to find a new initial context in which the
      current lookahead is syntactically acceptable.  If it fails to find
      such a context, it discards the lookahead.  */
    if (yy_lac_established_)
      {
        YYCDEBUG << "LAC: initial context discarded due to "
                 << event << '\n';
        yy_lac_established_ = false;
      }
  }


  int
  parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
         In the first two cases, it might appear that the current syntax
         error should have been detected in the previous state when
         yy_lac_check was invoked.  However, at that time, there might
         have been a different syntax error that discarded a different
         initial context during error recovery, leaving behind the
         current lookahead.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short parser::yypact_ninf_ = -324;

  const short parser::yytable_ninf_ = -245;

  const short
  parser::yypact_[] =
  {
      31,  -324,  -324,    37,    37,   -17,  -324,  -324,  -324,    16,
      38,  -324,  -324,  -324,  -324,  -324,  -324,   -31,   -64,  -324,
     -10,    13,   -45,  -324,  -324,  -324,  -324,  -324,     6,  1310,
      48,   -38,  -324,  -324,     6,  -324,    25,    15,  -324,  -324,
     -34,   -25,  -324,    41,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,    35,    42,  1310,  1172,     6,  1310,  1310,   -20,   245,
       1,    60,  -324,  -324,  -324,  2284,  -324,  -324,  -324,  -324,
    -324,  -324,   157,   383,  -324,  -324,  -324,  -324,  -324,  -324,
     512,   607,  -324,  -324,   721,  -324,  -324,  -324,   769,   805,
     857,   886,  -324,  -324,   148,    68,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,     6,    56,  -324,    69,    82,   100,     6,
     115,   108,   112,   127,   132,   129,   136,  1310,  1310,  1576,
    1172,  -324,  2367,    98,   149,  -324,  -324,  -324,  -324,   147,
    1310,   166,  -324,  -324,  -324,  -324,   512,   607,  -324,   925,
    -324,  -324,  -324,  -324,   148,   153,  -324,  -324,  1310,  1310,
    1310,  1310,  1310,  1310,  1310,  1310,  1310,  1310,  1310,  1310,
    1310,  1310,  1310,  1310,  1310,  1310,  1310,  1379,    19,  -324,
    -324,   174,  1310,     6,    54,     6,  -324,  -324,   973,  -324,
    -324,  1310,  1310,     6,  1310,  1310,     6,  1310,  1727,  1761,
    -324,  1310,  2004,  1310,  -324,     6,  1774,  1310,   123,     6,
    2249,   216,   216,  1302,  1609,   443,   443,   588,   588,   588,
     588,  1655,  2408,  2398,   -70,   -70,  -324,  -324,  -324,  2046,
    -324,  -324,  -324,    81,  -324,   182,   100,    87,  1085,  1310,
     168,     3,   190,  1515,   198,   199,   201,   207,    28,   197,
     179,   203,  1241,   205,   211,   227,   228,   229,   237,  -324,
      79,  -324,   120,   120,  -324,  -324,  1029,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,   214,   234,   236,   238,
     241,   235,  -324,  -324,  1431,   174,  2088,    91,   255,  2130,
      94,   264,  2172,  -324,  -324,  2213,   260,  2367,  -324,  2004,
     182,  1310,  -324,  -324,  1310,  -324,   100,  -324,  -324,  -324,
    1141,  2319,  -324,   265,  -324,  1310,   297,  1310,    43,     6,
    1310,   217,   257,   261,  -324,  -324,  -324,  -324,  2354,  -324,
    1310,  1310,  1310,  1310,  1310,  1379,    57,  -324,   106,   124,
      46,   925,   925,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  1310,   273,   274,   276,   277,  -324,  -324,  1310,  1310,
    1310,  1310,  1310,  1310,  1310,  1310,  1310,  1310,  1310,   279,
    -324,  1310,   281,  -324,  1310,   284,  1310,   294,  2367,    97,
    -324,  -324,  -324,  -324,  -324,   269,  1808,   298,  1821,   287,
    -324,  -324,  -324,  1538,    -8,  1855,  -324,  -324,  -324,   104,
     141,   152,   159,   171,  -324,   120,  2367,  1310,  1310,  1310,
    1310,  2367,  2367,  2367,  2367,  2367,  2367,  2367,  2367,  2367,
    2367,  2367,   303,   180,   304,   183,   305,  1868,  1310,  -324,
    -324,  1515,  1310,  1515,  1310,  1310,     6,   100,   295,   296,
     321,   323,   324,  -324,  1902,  1622,  1668,  1714,  1310,  -324,
    1310,  -324,  1310,  -324,   191,   338,  1915,  -324,  2367,   327,
    1949,   318,  -324,  -324,  -324,  -324,  -324,  -324,   328,   329,
    1310,   330,  1310,   331,  1310,   208,   224,   246,  -324,  1515,
     332,    43,  1515,  1310,  -324,  -324,   308,  -324,   309,  -324,
     336,  -324,  -324,  -324,  -324,  -324,   344,  -324,  1962,   335,
     339,   343,  1515,  1515,  -324,  -324,  -324,  -324,  -324
  };

  const unsigned char
  parser::yydefact_[] =
  {
       3,    15,    16,     0,     0,     0,   242,     8,   241,     0,
       2,     9,    10,    11,    17,    18,    19,     0,   245,   244,
       0,     0,     0,     1,     4,     5,     6,     7,   201,     0,
       0,     0,    12,    13,     0,   247,     0,     0,   200,   239,
       0,     0,   231,     0,   254,   253,   233,   234,   235,   236,
     237,     0,     0,     0,   203,     0,     0,     0,     0,     0,
       0,   241,   246,   250,   252,     0,   108,   109,   110,   148,
     149,   150,   151,   152,   184,   185,   153,   154,   155,   156,
     157,   158,   159,   160,     0,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,     0,   171,   172,   173,   174,
     175,   176,   177,   201,     0,   243,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,   232,   205,     0,   202,   208,   183,   178,   210,     0,
       0,     0,   249,   251,   222,   223,   181,   182,   180,     0,
     226,   227,   228,   229,   179,     0,   238,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   186,
     187,     0,   203,     0,     0,   201,    14,    20,     0,    22,
     199,     0,   203,     0,     0,   203,     0,     0,     0,     0,
     221,     0,   205,     0,   198,     0,     0,     0,     0,     0,
       0,   141,   142,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   143,   144,   145,   146,   147,     0,
     220,   240,   219,     0,   202,   209,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    66,
       0,    62,     0,     0,    53,    60,     0,    54,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,     0,     0,   222,
     223,     0,   224,   225,     0,   230,     0,     0,     0,     0,
       0,     0,     0,   206,   207,     0,     0,   204,   211,     0,
       0,     0,   218,   188,   203,    23,     0,    64,    58,    56,
       0,     0,    84,     0,    85,     0,     0,     0,    70,     0,
       0,     0,     0,     0,    97,    98,    99,   101,     0,   102,
     203,   203,   203,   203,   203,     0,     0,   214,   224,   225,
     230,   125,   127,    65,    61,    59,    73,    74,    75,    71,
      72,     0,     0,     0,     0,     0,   126,   128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     190,   203,     0,   192,   203,     0,     0,     0,   129,     0,
      24,    63,    57,    55,    79,     0,     0,     0,     0,     0,
      67,    68,    69,     0,     0,     0,    96,    95,   100,     0,
       0,     0,     0,     0,   212,     0,   113,     0,     0,     0,
       0,   114,   120,   121,   122,   123,   124,   115,   116,   117,
     119,   118,     0,     0,     0,     0,     0,     0,   203,   189,
      86,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,   213,     0,     0,     0,     0,   203,   191,
     203,   193,   203,   248,     0,    87,     0,    89,   111,     0,
       0,     0,    94,   103,   104,   105,   106,   107,     0,     0,
     203,     0,   203,     0,   203,     0,     0,     0,   194,     0,
       0,    70,     0,     0,    76,    78,   202,    81,   202,    83,
     202,   195,   196,   197,    88,    90,     0,    92,     0,     0,
       0,     0,     0,     0,    77,    80,    82,    91,    93
  };

  const short
  parser::yypgoto_[] =
  {
    -324,  -324,  -324,   388,   390,   397,  -324,  -324,  -324,  -206,
     154,  -324,  -324,  -324,  -107,   -80,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,   215,  -324,  -323,  -321,  -320,  -324,  -324,
    -324,  -324,  -324,  -324,   -27,   226,   -82,   -78,  -324,   -92,
     514,   -50,  -324,  -324,  -324,  -324,  -324,    -6,   278,   291,
    -324,   358,   325,  -324,  -324,  -324,   372,   435,   445,   474,
    -324,  -324,  -324,     0,    10,  -324,   -19,  -324,  -324,   185,
    -324,  -324
  };

  const short
  parser::yydefgoto_[] =
  {
       0,     9,    10,    11,    12,    13,    14,    15,    16,   254,
     255,   320,   256,   257,   258,   399,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   122,   469,   286,   287,   288,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    37,
     123,   224,    77,    78,    79,   291,   346,   347,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,   222,    94,    95,    96,    97,    98,    99,   100,
     101,   102
  };

  const short
  parser::yytable_[] =
  {
      17,   179,   169,    36,   124,   400,   170,   401,   402,     6,
      17,   174,     6,    20,    21,   445,    23,    30,     6,    28,
     110,    34,   319,     6,   164,   165,   166,   326,    38,   113,
     104,    31,   134,    22,   106,     1,     2,     3,     4,     5,
     111,   114,     1,     2,     3,     4,     5,    29,   446,     6,
     112,   115,    32,   323,    35,   125,     6,   169,   128,   144,
     105,   170,   220,    18,    61,   324,   108,     8,   129,   145,
     124,   109,    18,    61,     6,    33,   107,    18,    61,    40,
      41,     6,    43,   227,   171,   117,     6,    47,    48,    49,
      50,     6,   118,     7,   145,   116,   172,   250,   103,   146,
      24,  -217,  -217,    38,     8,   226,   175,   252,   253,   180,
     109,     8,   414,   415,   393,    40,    41,   221,    43,   315,
    -244,   331,     6,    47,    48,    49,    50,    35,   173,     8,
      64,   176,   313,   345,    18,    19,     8,   193,   316,   171,
      18,    61,   380,   109,   177,   383,     8,   193,   439,   145,
     193,   289,   178,   193,   193,   448,    40,    41,   182,    43,
     193,  -215,  -215,     6,    47,    48,    49,    50,   400,   181,
     401,   402,   183,   225,   131,    38,    18,    61,   295,  -216,
    -216,   184,   185,   298,  -230,  -230,   301,  -230,   145,   186,
     187,  -230,   449,  -222,  -222,   308,  -222,   193,   172,   310,
    -222,   289,  -230,   450,   194,  -230,   289,   195,   193,   390,
     451,  -222,   169,   199,  -222,   193,   170,    18,    61,   332,
     197,   221,   452,   134,   172,   134,   134,   193,   295,   289,
     322,   459,   314,   295,   461,   465,   193,   467,   145,   193,
     325,   335,   488,   145,    65,  -230,  -230,   193,   327,   328,
     350,   329,   295,   295,  -222,  -222,   295,   330,   334,   501,
     145,   340,   145,   145,   193,   336,   145,   339,   119,   169,
     169,   126,   127,   170,   170,   502,   356,   341,   342,   343,
     193,    40,    41,   504,    43,   135,   507,   344,     6,    47,
      48,    49,    50,   289,   171,   130,   357,   503,   358,   131,
     359,   134,   193,   360,   145,   381,   517,   518,   162,   163,
     164,   165,   166,   361,   384,   387,   395,   397,   406,   133,
     295,   169,   407,   417,   418,   170,   419,   420,   295,   404,
     145,   440,   188,   189,   432,   192,   434,   136,   145,   436,
     472,   493,    18,    61,   438,   196,   132,   133,   442,   444,
     137,   171,   171,   458,   460,   462,   489,   473,   474,   509,
     510,   145,   145,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   475,   139,   476,   477,   511,   134,   491,
     494,   495,   497,   499,   505,   512,   296,   514,    25,   299,
      26,   515,   302,   171,   290,   516,   305,    27,   307,   453,
     355,   506,   309,   145,   289,   350,   289,   138,     0,  -223,
    -223,     0,  -223,   333,     0,   145,  -223,     0,     0,     0,
     496,   140,   498,     0,   500,     0,     0,  -223,     0,     0,
    -223,   295,     0,   295,   321,     0,   471,     0,     0,     0,
       0,   145,     0,   145,   290,     0,   292,   338,     0,   290,
       0,     0,   289,     0,   134,   289,     0,     0,     0,   293,
       0,     0,     0,     0,     0,     0,   135,     0,   135,   135,
    -223,  -223,   290,     0,     0,   289,   289,     0,     0,   295,
       0,   295,   295,     0,   141,     0,     0,     0,     0,   145,
       0,   145,   145,   294,   142,     0,   292,     0,     0,   149,
     150,   292,   295,   295,     0,   155,   156,   157,   158,   293,
       0,     0,   145,   145,   293,     0,   388,     0,   348,     0,
     292,   292,     0,   143,   292,   162,   163,   164,   165,   166,
     396,   349,   398,   293,   293,   405,   290,   293,  -224,  -224,
     140,  -224,     0,   294,   135,  -224,     0,     0,   294,     0,
     309,     0,     0,     0,     0,     0,  -224,     0,     0,  -224,
       0,     0,     0,     0,     0,   139,   416,   351,   352,     0,
       0,   294,     0,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,     0,     0,     0,     0,   292,     0,
     140,   437,     0,     0,     0,   140,   292,     0,     0,  -224,
    -224,   293,     0,   141,     0,     0,     0,     0,     0,   293,
       0,     0,   140,   142,   140,   140,     0,     0,   140,     0,
       0,     0,   454,   455,   456,   457,     0,     0,     0,     0,
       0,   135,     0,  -225,  -225,   294,  -225,     0,     0,     0,
    -225,     0,   143,   403,   149,   150,     0,   466,     0,   468,
     470,  -225,     0,   141,  -225,     0,     0,   290,   141,   290,
       0,     0,     0,   142,     0,     0,     0,     0,   142,     0,
     162,   163,   164,   165,   166,   141,   223,   141,   141,     0,
       0,   141,   140,   348,     0,   142,   297,   142,   142,   300,
     140,   142,   143,     0,  -225,  -225,   349,   143,   508,     0,
       0,     0,     0,     0,     0,   290,     0,   135,   290,   292,
       0,   292,     0,     0,   143,     0,   143,   143,     0,     0,
     143,     0,   293,     0,   293,     0,     0,     0,   290,   290,
     139,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   141,     0,    40,    41,     0,
      43,     0,     0,   141,     6,   142,   294,   292,   294,   292,
     292,     0,     0,   142,     0,   167,     0,     0,   168,     0,
     293,     0,   293,   293,     0,     0,     0,   140,     0,     0,
     292,   292,     0,     0,   143,     0,     0,     0,     0,     0,
       0,     0,   143,   293,   293,  -226,  -226,     0,  -226,     0,
       0,     0,  -226,   140,   294,   140,   403,   294,    18,    61,
       0,     0,     0,  -226,     0,     0,  -226,     0,   389,     0,
       0,     0,     0,     0,     0,     0,     0,   294,   294,     0,
       0,  -227,  -227,     0,  -227,     0,     0,     0,  -227,     0,
     141,     0,     0,     0,   409,   410,   411,   412,   413,  -227,
     142,   140,  -227,   140,   140,     0,  -226,  -226,     0,     0,
       0,     0,     0,     0,     0,     0,   141,     0,   141,     0,
       0,     0,     0,     0,   140,   140,   142,     0,   142,   143,
       0,     0,     0,  -228,  -228,   433,  -228,     0,   435,     0,
    -228,     0,  -227,  -227,     0,     0,     0,     0,     0,     0,
       0,  -228,     0,     0,  -228,   143,     0,   143,     0,     0,
       0,     0,  -229,  -229,   141,  -229,   141,   141,     0,  -229,
       0,     0,     0,     0,   142,     0,   142,   142,     0,     0,
    -229,     0,     0,  -229,     0,     0,     0,   141,   141,     0,
       0,     0,   464,     0,  -228,  -228,     0,   142,   142,     0,
       0,    40,    41,   143,    43,   143,   143,     0,     6,     0,
       0,     0,   485,     0,   486,     0,   487,   228,     0,   167,
       0,     0,   198,  -229,  -229,   229,   143,   143,   230,   231,
     232,     0,   233,   234,   235,   236,     0,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,    40,
      41,     0,    43,     0,     0,     0,     6,    47,    48,    49,
      50,     0,    18,    61,     0,   178,   249,   250,     0,     0,
       0,     0,     0,   228,     0,   251,     0,   252,   253,     0,
       0,   229,     0,     0,   230,   231,   232,     0,   233,   234,
     235,   236,     0,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,    40,    41,     0,    43,     0,
      18,    61,     6,    47,    48,    49,    50,     0,     0,     0,
       0,   178,   353,   250,     0,     0,     0,     0,     0,     0,
     317,   354,     0,   252,   253,     0,     0,   229,     0,     0,
     230,   231,   232,     0,   233,   234,   235,   236,     0,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,    40,    41,     0,    43,     0,    18,    61,     6,    47,
      48,    49,    50,     0,     0,     0,     0,   178,     0,   250,
       0,     0,     0,     0,     0,     0,   391,   318,     0,   252,
     253,     0,     0,   229,     0,     0,   230,   231,   232,     0,
     233,   234,   235,   236,     0,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,    40,    41,     0,
      43,    39,    18,    61,     6,    47,    48,    49,    50,     0,
       0,     0,     0,   178,     0,   250,     0,     0,     0,     0,
       0,     0,     0,   392,     0,   252,   253,     0,    40,    41,
      42,    43,    44,    45,    46,     6,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,   120,   121,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,    18,    61,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,     0,    59,     0,     0,    60,    18,
      61,    35,    62,    63,    64,     0,     0,    40,    41,    42,
      43,    44,    45,    46,     6,    47,    48,    49,    50,    51,
      52,    53,     0,     0,     0,    54,     0,     0,     0,     0,
       0,    55,     0,   337,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,    59,     0,     0,    60,    18,    61,
      35,    62,    63,    64,     0,     0,    40,    41,    42,    43,
      44,    45,    46,     6,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,    54,     0,     0,     0,   149,   150,
      55,   152,   153,   154,   155,   156,   157,   158,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,    39,     0,
       0,   159,   160,   161,   162,   163,   164,   165,   166,     0,
      58,     0,     0,    59,     0,     0,    60,    18,    61,    35,
      62,    63,    64,     0,     0,    40,    41,    42,    43,    44,
      45,    46,     6,    47,    48,    49,    50,    51,    52,    53,
       0,     0,     0,   120,     0,     0,     0,     0,     0,    55,
       0,   362,   363,     0,   364,   365,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,    57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,    58,
      43,     0,    59,     0,     6,    60,    18,    61,    35,    62,
      63,    64,     0,     0,     0,   167,     0,     0,   198,     0,
       0,     0,     0,     0,     0,   366,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
       0,     0,     0,     0,     0,     0,     0,   229,    18,    61,
     230,   231,   232,     0,   233,   234,   235,   236,     0,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,    40,    41,     0,    43,     0,     0,     0,     6,    47,
      48,    49,    50,     0,     0,     0,     0,   178,     0,   250,
       0,     0,     0,     0,    40,    41,     0,    43,     0,   252,
     253,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   167,     0,     0,   198,     0,     0,     0,     0,
       0,     0,   366,   367,     0,     0,     0,     0,     0,     0,
       0,     0,    18,    61,     0,     0,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   190,     0,     0,
       0,     0,   191,     0,     0,    18,    61,     0,     0,   148,
       0,     0,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   159,   160,   161,   162,   163,
     164,   165,   166,   479,     0,   149,   150,     0,   480,   153,
     154,   155,   156,   157,   158,   148,     0,     0,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,   165,   166,   481,
       0,   149,   150,     0,   482,   153,   154,   155,   156,   157,
     158,   148,     0,     0,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     0,   160,   161,   162,   163,   164,
     165,   166,     0,     0,     0,     0,     0,   159,   160,   161,
     162,   163,   164,   165,   166,   483,     0,     0,     0,     0,
     484,     0,     0,     0,     0,     0,     0,   148,   303,     0,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     148,     0,     0,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,     0,   304,     0,     0,     0,   159,   160,   161,   162,
     163,   164,   165,   166,   148,   190,     0,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   148,     0,     0,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,     0,   441,
       0,     0,     0,   159,   160,   161,   162,   163,   164,   165,
     166,   148,   443,     0,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   148,     0,     0,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,     0,   447,     0,     0,     0,
     159,   160,   161,   162,   163,   164,   165,   166,   148,   463,
       0,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   148,     0,     0,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,     0,   478,     0,     0,     0,   159,   160,   161,
     162,   163,   164,   165,   166,   148,   490,     0,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   148,     0,
       0,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,     0,
     492,     0,     0,     0,   159,   160,   161,   162,   163,   164,
     165,   166,   148,   513,     0,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   148,     0,     0,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,   165,   166,   306,
       0,     0,     0,     0,     0,     0,     0,   148,     0,     0,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   159,   160,   161,   162,   163,   164,   165,
     166,   312,     0,     0,     0,     0,     0,     0,     0,   148,
       0,     0,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   159,   160,   161,   162,   163,
     164,   165,   166,   379,     0,     0,     0,     0,     0,     0,
       0,   148,     0,     0,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   159,   160,   161,
     162,   163,   164,   165,   166,   382,     0,     0,     0,     0,
       0,     0,     0,   148,     0,     0,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   159,
     160,   161,   162,   163,   164,   165,   166,   385,     0,     0,
       0,     0,     0,     0,     0,   148,     0,     0,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,   165,   166,   386,
       0,     0,     0,     0,     0,     0,   148,     0,     0,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   159,   160,   161,   162,   163,   164,   165,   166,
     311,     0,   148,     0,     0,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   159,   160,
     161,   162,   163,   164,   165,   166,   147,   148,     0,     0,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   159,   160,   161,   162,   163,   164,   165,
     166,   394,   148,     0,     0,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   159,   160,
     161,   162,   163,   164,   165,   166,   408,   148,     0,     0,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     148,     0,     0,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,     0,     0,     0,     0,     0,   159,   160,   161,   162,
     163,   164,   165,   166,   149,   150,     0,     0,   153,   154,
     155,   156,   157,   158,   149,   150,     0,     0,   153,   154,
     155,   156,   157,   158,     0,     0,     0,     0,   160,     0,
     162,   163,   164,   165,   166,     0,     0,     0,     0,     0,
     162,   163,   164,   165,   166
  };

  const short
  parser::yycheck_[] =
  {
       0,   108,    84,    22,    54,   328,    84,   328,   328,    43,
      10,   103,    43,     3,     4,    23,     0,    17,    43,    50,
      54,    21,   228,    43,    94,    95,    96,   233,    28,    54,
      30,    95,    59,    50,    34,     4,     5,     6,     7,     8,
      40,    41,     4,     5,     6,     7,     8,    78,    56,    43,
      40,    41,    62,    50,    99,    55,    43,   139,    58,    59,
      98,   139,    43,    97,    98,    62,    51,    98,    58,    59,
     120,    56,    97,    98,    43,    62,    51,    97,    98,    36,
      37,    43,    39,   175,    84,    50,    43,    44,    45,    46,
      47,    43,    50,    62,    84,    54,    50,    54,    50,    98,
      62,    55,    56,   103,    98,    51,    50,    64,    65,   109,
      56,    98,    55,    56,   320,    36,    37,    98,    39,   226,
      60,    93,    43,    44,    45,    46,    47,    99,    60,    98,
     102,    62,    51,    54,    97,    98,    98,    56,    51,   139,
      97,    98,    51,    56,    62,    51,    98,    56,    51,   139,
      56,   178,    52,    56,    56,    51,    36,    37,    50,    39,
      56,    55,    56,    43,    44,    45,    46,    47,   491,    54,
     491,   491,    60,   173,    54,   175,    97,    98,   178,    55,
      56,    54,    50,   183,    36,    37,   186,    39,   178,    60,
      54,    43,    51,    36,    37,   195,    39,    56,    50,   199,
      43,   228,    54,    51,    55,    57,   233,    60,    56,   316,
      51,    54,   294,    60,    57,    56,   294,    97,    98,   238,
      54,    98,    51,   250,    50,   252,   253,    56,   228,   256,
      62,    51,    50,   233,    51,   441,    56,   443,   228,    56,
      50,    62,    51,   233,    29,    97,    98,    56,    50,    50,
     250,    50,   252,   253,    97,    98,   256,    50,    61,    51,
     250,    50,   252,   253,    56,    62,   256,    62,    53,   351,
     352,    56,    57,   351,   352,    51,    62,    50,    50,    50,
      56,    36,    37,   489,    39,    59,   492,    50,    43,    44,
      45,    46,    47,   320,   294,    50,    62,    51,    62,    54,
      62,   328,    56,    62,   294,    50,   512,   513,    92,    93,
      94,    95,    96,    78,    50,    55,    51,    20,    61,   102,
     320,   403,    61,    50,    50,   403,    50,    50,   328,   329,
     320,    62,   117,   118,    55,   120,    55,    59,   328,    55,
     447,    23,    97,    98,    50,   130,   101,   102,    50,    62,
      59,   351,   352,    50,    50,    50,    18,    62,    62,    51,
      51,   351,   352,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,    62,    59,    62,    62,    51,   415,    62,
      62,    62,    62,    62,    62,    51,   181,    62,    10,   184,
      10,    62,   187,   403,   178,    62,   191,    10,   193,   415,
     256,   491,   197,   403,   441,   415,   443,    59,    -1,    36,
      37,    -1,    39,   238,    -1,   415,    43,    -1,    -1,    -1,
     480,    59,   482,    -1,   484,    -1,    -1,    54,    -1,    -1,
      57,   441,    -1,   443,   229,    -1,   446,    -1,    -1,    -1,
      -1,   441,    -1,   443,   228,    -1,   178,   242,    -1,   233,
      -1,    -1,   489,    -1,   491,   492,    -1,    -1,    -1,   178,
      -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,   252,   253,
      97,    98,   256,    -1,    -1,   512,   513,    -1,    -1,   489,
      -1,   491,   492,    -1,    59,    -1,    -1,    -1,    -1,   489,
      -1,   491,   492,   178,    59,    -1,   228,    -1,    -1,    66,
      67,   233,   512,   513,    -1,    72,    73,    74,    75,   228,
      -1,    -1,   512,   513,   233,    -1,   311,    -1,   250,    -1,
     252,   253,    -1,    59,   256,    92,    93,    94,    95,    96,
     325,   250,   327,   252,   253,   330,   320,   256,    36,    37,
     178,    39,    -1,   228,   328,    43,    -1,    -1,   233,    -1,
     345,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,   250,   361,   252,   253,    -1,
      -1,   256,    -1,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,    -1,    -1,    -1,    -1,   320,    -1,
     228,   386,    -1,    -1,    -1,   233,   328,    -1,    -1,    97,
      98,   320,    -1,   178,    -1,    -1,    -1,    -1,    -1,   328,
      -1,    -1,   250,   178,   252,   253,    -1,    -1,   256,    -1,
      -1,    -1,   417,   418,   419,   420,    -1,    -1,    -1,    -1,
      -1,   415,    -1,    36,    37,   320,    39,    -1,    -1,    -1,
      43,    -1,   178,   328,    66,    67,    -1,   442,    -1,   444,
     445,    54,    -1,   228,    57,    -1,    -1,   441,   233,   443,
      -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,   233,    -1,
      92,    93,    94,    95,    96,   250,   172,   252,   253,    -1,
      -1,   256,   320,   415,    -1,   250,   182,   252,   253,   185,
     328,   256,   228,    -1,    97,    98,   415,   233,   493,    -1,
      -1,    -1,    -1,    -1,    -1,   489,    -1,   491,   492,   441,
      -1,   443,    -1,    -1,   250,    -1,   252,   253,    -1,    -1,
     256,    -1,   441,    -1,   443,    -1,    -1,    -1,   512,   513,
     415,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   320,    -1,    36,    37,    -1,
      39,    -1,    -1,   328,    43,   320,   441,   489,   443,   491,
     492,    -1,    -1,   328,    -1,    54,    -1,    -1,    57,    -1,
     489,    -1,   491,   492,    -1,    -1,    -1,   415,    -1,    -1,
     512,   513,    -1,    -1,   320,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   328,   512,   513,    36,    37,    -1,    39,    -1,
      -1,    -1,    43,   441,   489,   443,   491,   492,    97,    98,
      -1,    -1,    -1,    54,    -1,    -1,    57,    -1,   314,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   512,   513,    -1,
      -1,    36,    37,    -1,    39,    -1,    -1,    -1,    43,    -1,
     415,    -1,    -1,    -1,   340,   341,   342,   343,   344,    54,
     415,   489,    57,   491,   492,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   441,    -1,   443,    -1,
      -1,    -1,    -1,    -1,   512,   513,   441,    -1,   443,   415,
      -1,    -1,    -1,    36,    37,   381,    39,    -1,   384,    -1,
      43,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    57,   441,    -1,   443,    -1,    -1,
      -1,    -1,    36,    37,   489,    39,   491,   492,    -1,    43,
      -1,    -1,    -1,    -1,   489,    -1,   491,   492,    -1,    -1,
      54,    -1,    -1,    57,    -1,    -1,    -1,   512,   513,    -1,
      -1,    -1,   438,    -1,    97,    98,    -1,   512,   513,    -1,
      -1,    36,    37,   489,    39,   491,   492,    -1,    43,    -1,
      -1,    -1,   458,    -1,   460,    -1,   462,     4,    -1,    54,
      -1,    -1,    57,    97,    98,    12,   512,   513,    15,    16,
      17,    -1,    19,    20,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    39,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    -1,    97,    98,    -1,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,     4,    -1,    62,    -1,    64,    65,    -1,
      -1,    12,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    39,    -1,
      97,    98,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    62,    -1,    64,    65,    -1,    -1,    12,    -1,    -1,
      15,    16,    17,    -1,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    39,    -1,    97,    98,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    62,    -1,    64,
      65,    -1,    -1,    12,    -1,    -1,    15,    16,    17,    -1,
      19,    20,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      39,     9,    97,    98,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    64,    65,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    93,    -1,    -1,    96,    97,
      98,    99,   100,   101,   102,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    93,    -1,    -1,    96,    97,    98,
      99,   100,   101,   102,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    54,    -1,    -1,    -1,    66,    67,
      60,    69,    70,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,     9,    -1,
      -1,    89,    90,    91,    92,    93,    94,    95,    96,    -1,
      90,    -1,    -1,    93,    -1,    -1,    96,    97,    98,    99,
     100,   101,   102,    -1,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    10,    11,    -1,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    90,
      39,    -1,    93,    -1,    43,    96,    97,    98,    99,   100,
     101,   102,    -1,    -1,    -1,    54,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    97,    98,
      15,    16,    17,    -1,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    39,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,
      -1,    -1,    -1,    -1,    36,    37,    -1,    39,    -1,    64,
      65,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    98,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    51,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    97,    98,    -1,    -1,    63,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,
      94,    95,    96,    51,    -1,    66,    67,    -1,    56,    70,
      71,    72,    73,    74,    75,    63,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
      -1,    89,    90,    91,    92,    93,    94,    95,    96,    51,
      -1,    66,    67,    -1,    56,    70,    71,    72,    73,    74,
      75,    63,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    90,    91,    92,    93,    94,
      95,    96,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    93,    94,    95,    96,    51,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    51,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      63,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    51,    -1,    -1,    -1,    89,    90,    91,    92,
      93,    94,    95,    96,    63,    51,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    63,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      89,    90,    91,    92,    93,    94,    95,    96,    -1,    51,
      -1,    -1,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    63,    51,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    63,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    89,    90,    91,
      92,    93,    94,    95,    96,    -1,    51,    -1,    -1,    -1,
      89,    90,    91,    92,    93,    94,    95,    96,    63,    51,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    63,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    89,    90,    91,    92,    93,    94,
      95,    96,    -1,    51,    -1,    -1,    -1,    89,    90,    91,
      92,    93,    94,    95,    96,    63,    51,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    63,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    89,    90,    91,    92,    93,    94,    95,    96,    -1,
      51,    -1,    -1,    -1,    89,    90,    91,    92,    93,    94,
      95,    96,    63,    51,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    63,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
      -1,    89,    90,    91,    92,    93,    94,    95,    96,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,
      94,    95,    96,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    93,    94,    95,    96,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      90,    91,    92,    93,    94,    95,    96,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    90,    91,    92,    93,    94,    95,    96,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    91,    92,    93,    94,    95,    96,
      61,    -1,    63,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,
      91,    92,    93,    94,    95,    96,    62,    63,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    62,    63,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,
      91,    92,    93,    94,    95,    96,    62,    63,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      63,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,
      93,    94,    95,    96,    66,    67,    -1,    -1,    70,    71,
      72,    73,    74,    75,    66,    67,    -1,    -1,    70,    71,
      72,    73,    74,    75,    -1,    -1,    -1,    -1,    90,    -1,
      92,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    96
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,     4,     5,     6,     7,     8,    43,    62,    98,   114,
     115,   116,   117,   118,   119,   120,   121,   196,    97,    98,
     197,   197,    50,     0,    62,   116,   117,   118,    50,    78,
     196,    95,    62,    62,   196,    99,   199,   172,   196,     9,
      36,    37,    38,    39,    40,    41,    42,    44,    45,    46,
      47,    48,    49,    50,    54,    60,    76,    77,    90,    93,
      96,    98,   100,   101,   102,   156,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   175,   176,   177,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   196,   197,   198,   199,   200,   201,
     202,   203,   204,    50,   196,    98,   196,    51,    51,    56,
      54,   196,   197,    54,   196,   197,    54,    50,    50,   156,
      54,    55,   156,   173,   174,   196,   156,   156,   196,   197,
      50,    54,   101,   102,   167,   168,   181,   182,   184,   185,
     189,   190,   191,   192,   196,   197,    98,    62,    63,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    89,
      90,    91,    92,    93,    94,    95,    96,    54,    57,   169,
     170,   196,    50,    60,   172,    50,    62,    62,    52,   127,
     196,    54,    50,    60,    54,    50,    60,    54,   156,   156,
      51,    56,   156,    56,    55,    60,   156,    54,    57,    60,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
      43,    98,   195,   173,   174,   196,    51,   172,     4,    12,
      15,    16,    17,    19,    20,    21,    22,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    53,
      54,    62,    64,    65,   122,   123,   125,   126,   127,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   158,   159,   160,   167,
     168,   178,   181,   182,   185,   196,   156,   173,   196,   156,
     173,   196,   156,    51,    51,   156,    55,   156,   196,   156,
     196,    61,    55,    51,    50,   127,    51,     5,    62,   122,
     124,   156,    62,    50,    62,    50,   122,    50,    50,    50,
      50,    93,   199,   202,    61,    62,    62,    62,   156,    62,
      50,    50,    50,    50,    50,    54,   179,   180,   181,   182,
     196,   185,   185,    53,    62,   123,    62,    62,    62,    62,
      62,    78,    10,    11,    13,    14,    64,    65,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    55,
      51,    50,    55,    51,    50,    55,    56,    55,   156,   173,
     127,     5,    62,   122,    62,    51,   156,    20,   156,   128,
     158,   159,   160,   185,   196,   156,    61,    61,    62,   173,
     173,   173,   173,   173,    55,    56,   156,    50,    50,    50,
      50,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,    55,   173,    55,   173,    55,   156,    50,    51,
      62,    51,    50,    51,    62,    23,    56,    51,    51,    51,
      51,    51,    51,   180,   156,   156,   156,   156,    50,    51,
      50,    51,    50,    51,   173,   122,   156,   122,   156,   157,
     156,   196,   127,    62,    62,    62,    62,    62,    51,    51,
      56,    51,    56,    51,    56,   173,   173,   173,    51,    18,
      51,    62,    51,    23,    62,    62,   174,    62,   174,    62,
     174,    51,    51,    51,   122,    62,   128,   122,   156,    51,
      51,    51,    51,    51,    62,    62,    62,   122,   122
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,   113,   114,   114,   115,   115,   115,   115,   115,   115,
     115,   115,   116,   117,   117,   118,   118,   118,   118,   118,
     119,   120,   121,   121,   121,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   123,   123,   124,   124,   124,   124,   125,
     125,   125,   125,   126,   126,   127,   127,   128,   128,   128,
     128,   129,   129,   130,   130,   130,   131,   132,   132,   133,
     134,   134,   135,   135,   136,   137,   137,   138,   139,   140,
     141,   142,   143,   143,   144,   145,   145,   146,   147,   148,
     149,   149,   150,   151,   152,   153,   154,   155,   156,   156,
     156,   157,   157,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   159,   159,   160,   160,   161,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   164,   165,
     165,   165,   165,   166,   167,   167,   168,   168,   169,   169,
     169,   169,   169,   169,   170,   170,   170,   170,   171,   172,
     172,   172,   173,   173,   174,   174,   175,   176,   177,   177,
     177,   177,   178,   179,   179,   180,   180,   180,   181,   182,
     183,   184,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   196,   197,   197,   197,   198,   199,   200,   201,
     201,   202,   202,   203,   204
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     1,     0,     2,     2,     2,     2,     1,     1,
       1,     1,     3,     3,     5,     1,     1,     1,     1,     1,
       5,     4,     5,     6,     7,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     3,     2,     3,     2,     1,     1,     1,
       0,     2,     2,     2,     2,     2,     6,     8,     6,     3,
       8,     6,     8,     6,     2,     2,     4,     5,     7,     5,
       7,     9,     7,     9,     5,     3,     3,     2,     2,     2,
       3,     2,     2,     5,     5,     5,     5,     5,     1,     1,
       1,     1,     0,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     1,     1,     2,     2,     4,     6,
       5,     7,     5,     7,     8,     9,     9,     9,     3,     3,
       1,     0,     1,     0,     3,     1,     4,     4,     2,     3,
       2,     4,     3,     3,     1,     1,     1,     1,     4,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     7,     2,
       1,     2,     1,     1,     1
  };




#if GSCDEBUG
  const short
  parser::yyrline_[] =
  {
       0,   277,   277,   278,   282,   284,   286,   288,   290,   292,
     294,   296,   301,   305,   309,   317,   318,   319,   320,   321,
     325,   330,   338,   343,   349,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   390,   391,   395,   397,   399,   401,   406,
     408,   410,   412,   417,   418,   422,   423,   427,   429,   431,
     434,   438,   440,   445,   447,   449,   454,   459,   461,   466,
     471,   473,   478,   480,   485,   490,   492,   497,   502,   507,
     512,   517,   522,   527,   536,   543,   545,   550,   555,   560,
     565,   567,   572,   577,   582,   587,   592,   597,   602,   603,
     604,   608,   609,   613,   615,   617,   619,   621,   623,   625,
     627,   629,   631,   633,   635,   640,   642,   647,   649,   654,
     659,   661,   663,   665,   667,   669,   671,   673,   675,   677,
     679,   681,   683,   685,   687,   689,   691,   693,   698,   699,
     700,   701,   702,   703,   704,   705,   706,   707,   708,   709,
     710,   711,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   723,   724,   725,   726,   727,   731,   736,
     738,   740,   742,   747,   752,   753,   756,   757,   761,   763,
     765,   767,   769,   771,   776,   778,   780,   782,   787,   792,
     794,   797,   801,   804,   808,   810,   815,   820,   825,   827,
     833,   835,   840,   847,   849,   854,   855,   856,   860,   865,
     870,   875,   880,   881,   882,   883,   884,   885,   886,   887,
     888,   892,   897,   902,   907,   912,   917,   922,   927,   932,
     937,   942,   944,   949,   951,   953,   958,   963,   968,   973,
     975,   980,   982,   987,   992
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // GSCDEBUG


#line 13 "parser.ypp"
} } // xsk::gsc
#line 5037 "parser.cpp"

#line 996 "parser.ypp"


namespace xsk::gsc
{

void parser::error(location const& loc, std::string const& msg)
{
    throw comp_error(loc, msg);
}

auto parse_switch(stmt_switch& stm) -> void
{
    auto body = make_stmt_list(stm.body->block->loc());
    auto current_case = stmt{ nullptr };

    auto num = stm.body->block->list.size();

    for (auto i = 0u; i < num; i++)
    {
        auto& entry = stm.body->block->list[0];

        if (entry == node::stmt_case || entry == node::stmt_default)
        {
            if (current_case.as_node != nullptr)
            {
                body->list.push_back(std::move(current_case));
            }

            current_case = std::move(stm.body->block->list[0]);
            stm.body->block->list.erase(stm.body->block->list.begin());
        }
        else
        {
            if (current_case.as_node != nullptr)
            {
                if (current_case == node::stmt_case)
                {
                    current_case.as_case->body->list.push_back(std::move(entry));
                    stm.body->block->list.erase(stm.body->block->list.begin());
                }
                else
                {
                    current_case.as_default->body->list.push_back(std::move(entry));
                    stm.body->block->list.erase(stm.body->block->list.begin());
                }
            }
            else
            {
                throw comp_error(entry.loc(), "missing case statement");
            }
        }
    }

    if (current_case.as_node != nullptr)
    {
        body->list.push_back(std::move(current_case));
    }

    stm.body->block = std::move(body);
}

extern std::unordered_map<token::kind, parser::token::token_kind_type> const tok_to_parser;
extern std::unordered_map<std::string_view, parser::token::token_kind_type> const keyword_map;

auto map_token(context const* ctx_, token& tok) -> parser::symbol_type
{
    if (tok.type == token::NAME)
    {
        tok.data = ctx_->make_token(tok.data);

        auto const it = keyword_map.find(tok.data);

        if (it != keyword_map.end())
        {
            if (it->second == parser::token::WAITFRAME)
            {
                if (ctx_->props() & props::waitframe)
                    return parser::symbol_type(it->second, tok.pos);
            }
            else if (it->second == parser::token::ISDEFINED || it->second == parser::token::ISTRUE)
            {
                if (ctx_->props() & props::boolfuncs)
                {
                    return parser::symbol_type(it->second, tok.pos);
                }
            }
            else
            {
                return parser::symbol_type(it->second, tok.pos);
            }
        }

        return parser::symbol_type(parser::token::IDENTIFIER, std::move(tok.data), tok.pos);
    }
    else if (tok.type == token::PATH ||tok.type == token::STRING ||tok.type == token::ISTRING || tok.type == token::INT ||tok.type == token::FLT)
    {
        auto it = tok_to_parser.find(tok.type);

        if (it != tok_to_parser.end())
        {
            return parser::symbol_type(it->second, std::move(tok.data), tok.pos);
        }
    }
    else
    {
        auto it = tok_to_parser.find(tok.type);

        if (it != tok_to_parser.end())
        {
            return parser::symbol_type(it->second, tok.pos);
        }
    }

    throw error(fmt::format("unmapped token! {}", (u8)tok.type));
}

auto GSClex(context const* ctx_, preprocessor& ppr) -> parser::symbol_type
{
    auto tok = ppr.process();

    // A name straight after '.' is a field, even when it spells a keyword:
    // `self.wait` reads the entity field "wait" (spawner key/values do this).
    // The grammar only allows a field name or `size` after '.', and `size`
    // keeps its own production, so no valid script changes meaning.
    static thread_local bool after_dot = false;
    auto const field = after_dot && tok.type == token::NAME && tok.data != "size";
    after_dot = tok.type == token::DOT;

    if (field)
    {
        tok.data = ctx_->make_token(tok.data);
        return parser::symbol_type(parser::token::IDENTIFIER, std::move(tok.data), tok.pos);
    }

    return map_token(ctx_, tok);
}

std::unordered_map<token::kind, parser::token::token_kind_type> const tok_to_parser
{{
    { token::NAME, parser::token::IDENTIFIER },
    { token::PATH, parser::token::PATH },
    { token::STRING, parser::token::STRING },
    { token::ISTRING, parser::token::ISTRING },
    { token::INT, parser::token::INTEGER },
    { token::FLT, parser::token::FLOAT },
    { token::PLUS, parser::token::ADD },
    { token::MINUS, parser::token::SUB },
    { token::STAR, parser::token::MUL },
    { token::DIV, parser::token::DIV },
    { token::MOD, parser::token::MOD },
    { token::BITOR, parser::token::BITWISE_OR },
    { token::BITAND, parser::token::BITWISE_AND },
    { token::BITEXOR, parser::token::BITWISE_EXOR },
    { token::ASSIGN, parser::token::ASSIGN },
    { token::PLUSEQ, parser::token::ASSIGN_ADD },
    { token::MINUSEQ, parser::token::ASSIGN_SUB },
    { token::STAREQ, parser::token::ASSIGN_MUL },
    { token::DIVEQ, parser::token::ASSIGN_DIV },
    { token::MODEQ, parser::token::ASSIGN_MOD },
    { token::BITOREQ, parser::token::ASSIGN_BW_OR },
    { token::BITANDEQ, parser::token::ASSIGN_BW_AND },
    { token::BITEXOREQ, parser::token::ASSIGN_BW_EXOR },
    { token::SHLEQ, parser::token::ASSIGN_LSHIFT },
    { token::SHREQ, parser::token::ASSIGN_RSHIFT },
    { token::TILDE, parser::token::COMPLEMENT },
    { token::BANG, parser::token::NOT },
    { token::GT, parser::token::GREATER },
    { token::LT, parser::token::LESS },
    { token::GE, parser::token::GREATER_EQUAL },
    { token::LE, parser::token::LESS_EQUAL },
    { token::NE, parser::token::INEQUALITY },
    { token::EQ, parser::token::EQUALITY },
    { token::OR, parser::token::OR },
    { token::AND, parser::token::AND },
    { token::SHL, parser::token::LSHIFT },
    { token::SHR, parser::token::RSHIFT },
    { token::INC, parser::token::INCREMENT },
    { token::DEC, parser::token::DECREMENT },
    { token::QMARK, parser::token::QMARK },
    { token::DOT, parser::token::DOT },
    { token::DOUBLEDOT, parser::token::DOUBLEDOT },
    { token::ELLIPSIS, parser::token::ELLIPSIS },
    { token::COMMA, parser::token::COMMA },
    { token::COLON, parser::token::COLON },
    { token::SEMICOLON, parser::token::SEMICOLON },
    { token::DOUBLECOLON, parser::token::DOUBLECOLON },
    { token::LBRACKET, parser::token::LBRACKET },
    { token::RBRACKET, parser::token::RBRACKET },
    { token::LBRACE, parser::token::LBRACE },
    { token::RBRACE, parser::token::RBRACE },
    { token::LPAREN, parser::token::LPAREN },
    { token::RPAREN, parser::token::RPAREN },
    { token::DEVBEGIN, parser::token::DEVBEGIN },
    { token::DEVEND, parser::token::DEVEND },
    { token::INLINE, parser::token::INLINE },
    { token::INCLUDE, parser::token::INCLUDE },
    { token::USINGTREE, parser::token::USINGTREE },
    { token::ANIMTREE, parser::token::ANIMTREE },
    { token::ENDON, parser::token::ENDON },
    { token::NOTIFY, parser::token::NOTIFY },
    { token::WAIT, parser::token::WAIT },
    { token::WAITTILL, parser::token::WAITTILL },
    { token::WAITTILLMATCH, parser::token::WAITTILLMATCH },
    { token::WAITTILLFRAMEEND, parser::token::WAITTILLFRAMEEND },
    { token::WAITFRAME, parser::token::WAITFRAME },
    { token::IF, parser::token::IF },
    { token::ELSE, parser::token::ELSE },
    { token::DO, parser::token::DO },
    { token::WHILE, parser::token::WHILE },
    { token::FOR, parser::token::FOR },
    { token::FOREACH, parser::token::FOREACH },
    { token::IN, parser::token::IN },
    { token::SWITCH, parser::token::SWITCH },
    { token::CASE, parser::token::CASE },
    { token::DEFAULT, parser::token::DEFAULT },
    { token::BREAK, parser::token::BREAK },
    { token::CONTINUE, parser::token::CONTINUE },
    { token::RETURN, parser::token::RETURN },
    { token::BREAKPOINT, parser::token::BREAKPOINT },
    { token::PROFBEGIN, parser::token::PROFBEGIN },
    { token::PROFEND, parser::token::PROFEND },
    { token::ASSERT, parser::token::ASSERT },
    { token::ASSERTEX, parser::token::ASSERTEX },
    { token::ASSERTMSG, parser::token::ASSERTMSG },
    { token::THREAD, parser::token::THREAD },
    { token::CHILDTHREAD, parser::token::CHILDTHREAD },
    { token::THISTHREAD, parser::token::THISTHREAD },
    { token::CALL, parser::token::CALL },
    { token::TRUE, parser::token::TRUE },
    { token::FALSE, parser::token::FALSE },
    { token::UNDEFINED, parser::token::UNDEFINED },
    { token::SIZE, parser::token::SIZE },
    { token::GAME, parser::token::GAME },
    { token::SELF, parser::token::SELF },
    { token::ANIM, parser::token::ANIM },
    { token::LEVEL, parser::token::LEVEL },
    { token::ISDEFINED, parser::token::ISDEFINED },
    { token::ISTRUE, parser::token::ISTRUE },
    { token::EOS, parser::token::GSCEOF },
    { token::HASH, parser::token::HASH }
}};

// Declaration modifiers the newer titles use. Accepted here so shared source
// compiles for the old games too, where they carry no meaning.
void check_include_as(location const& loc, std::string const& name)
{
    if (name != "as")
    {
        throw comp_error(loc, "expected 'as' or ';' after the included path, got '" + name + "'");
    }
}

void check_decl_modifier(location const& loc, std::string const& name)
{
    if (name != "function" && name != "private" && name != "autoexec")
    {
        throw comp_error(loc, "unexpected '" + name + "' before function name");
    }
}

std::unordered_map<std::string_view, parser::token::token_kind_type> const keyword_map
{{
    { "endon", parser::token::ENDON },
    { "notify", parser::token::NOTIFY },
    { "wait", parser::token::WAIT },
    { "waittill", parser::token::WAITTILL },
    { "waittillmatch", parser::token::WAITTILLMATCH },
    { "waittillframeend", parser::token::WAITTILLFRAMEEND },
    { "waitframe", parser::token::WAITFRAME },
    { "if", parser::token::IF },
    { "else", parser::token::ELSE },
    { "do", parser::token::DO },
    { "while", parser::token::WHILE },
    { "for", parser::token::FOR },
    { "foreach", parser::token::FOREACH },
    { "in", parser::token::IN },
    { "switch", parser::token::SWITCH },
    { "case", parser::token::CASE },
    { "default", parser::token::DEFAULT },
    { "break", parser::token::BREAK },
    { "continue", parser::token::CONTINUE },
    { "return", parser::token::RETURN },
    { "breakpoint", parser::token::BREAKPOINT },
    { "prof_begin", parser::token::PROFBEGIN },
    { "prof_end", parser::token::PROFEND },
    { "assert", parser::token::ASSERT },
    { "assertex", parser::token::ASSERTEX },
    { "assertmsg", parser::token::ASSERTMSG },
    { "thread", parser::token::THREAD },
    { "childthread", parser::token::CHILDTHREAD },
    { "thisthread", parser::token::THISTHREAD },
    { "call", parser::token::CALL },
    { "true", parser::token::TRUE },
    { "false", parser::token::FALSE },
    { "undefined", parser::token::UNDEFINED },
    { "size", parser::token::SIZE },
    { "game", parser::token::GAME },
    { "self", parser::token::SELF },
    { "anim", parser::token::ANIM },
    { "level", parser::token::LEVEL },
    { "isdefined", parser::token::ISDEFINED },
    { "istrue", parser::token::ISTRUE },
}};

} // namespace xsk::gsc
