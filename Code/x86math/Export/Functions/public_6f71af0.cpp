#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f71d60);
CLANG_FORWARD_PROC_SYMBOL(public_6f71d70);
CLANG_FORWARD_PROC_SYMBOL(public_6f71d80);
CLANG_FORWARD_PROC_SYMBOL(public_6f71d90);
CLANG_FORWARD_PROC_SYMBOL(public_6f71da0);
CLANG_FORWARD_PROC_SYMBOL(public_6f71db0);
CLANG_FORWARD_PROC_SYMBOL(public_6f71dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f71dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f71de0);
CLANG_FORWARD_PROC_SYMBOL(public_6f71e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f71e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f71e20);
CLANG_FORWARD_PROC_SYMBOL(public_6f71e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f71e40);
CLANG_FORWARD_PROC_SYMBOL(public_6f71e50);
CLANG_FORWARD_PROC_SYMBOL(public_6f71e70);
CLANG_FORWARD_PROC_SYMBOL(public_6f71e80);
CLANG_FORWARD_PROC_SYMBOL(public_6f71ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f71ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f71ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6f71ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f71f00);
CLANG_FORWARD_PROC_SYMBOL(public_6f71f10);
CLANG_FORWARD_PROC_SYMBOL(public_6f71f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f71f50);
CLANG_FORWARD_PROC_SYMBOL(public_6f71f70);
CLANG_FORWARD_PROC_SYMBOL(public_6f71f90);

#define public_6f71b32 _public_6f71b32
#define public_6f71b4a _public_6f71b4a
#define public_6f71b59 _public_6f71b59
#define public_6f71b7b _public_6f71b7b
#define public_6f71b8f _public_6f71b8f
#define public_6f71b9e _public_6f71b9e
#define public_6f71bb2 _public_6f71bb2
#define public_6f71bc6 _public_6f71bc6
#define public_6f71bd5 _public_6f71bd5
#define public_6f71c07 _public_6f71c07
#define public_6f71c1b _public_6f71c1b
#define public_6f71c2a _public_6f71c2a
#define public_6f71c45 _public_6f71c45
#define public_6f71c59 _public_6f71c59
#define public_6f71c68 _public_6f71c68
#define public_6f71c7c _public_6f71c7c
#define public_6f71c90 _public_6f71c90
#define public_6f71c9f _public_6f71c9f
#define public_6f71cba _public_6f71cba
#define public_6f71cce _public_6f71cce
#define public_6f71cdd _public_6f71cdd
#define public_6f71cf8 _public_6f71cf8
#define public_6f71d0c _public_6f71d0c
#define public_6f71d1b _public_6f71d1b
#define public_6f71d2f _public_6f71d2f
#define public_6f71d43 _public_6f71d43

PROC_DECLARE(0x6f71af0, internal_6f71af0, public_6f71af0);
extern "C" NAKED register_t __cdecl internal_6f71af0()
{
    __asm
    {
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_6f730fc]
        fld dword ptr ds : [ecx+4]
        fnstsw ax
        fcomp dword ptr ds : [public_6f730fc]
        fld dword ptr ds : [ecx+8]
        test ah, 0x44
        jp public_6f71bd5
        fnstsw ax
        fcomp dword ptr ds : [public_6f730fc]
        test ah, 0x44
        jp public_6f71b59
        fnstsw ax
        test ah, 0x44
        jp public_6f71b32
        mov dword ptr ds : [ecx+0xC], offset _public_6f71d60
        mov dword ptr ds : [ecx+0x10], 5
        ret 
        public_6f71b32 : nop
        cmp dword ptr ds : [ecx+8], 0x3F800000
        jne public_6f71b4a
        mov dword ptr ds : [ecx+0xC], offset _public_6f71d70
        mov dword ptr ds : [ecx+0x10], 5
        ret 
        public_6f71b4a : nop
        mov dword ptr ds : [ecx+0xC], offset _public_6f71d80
        mov dword ptr ds : [ecx+0x10], 4
        ret 
        public_6f71b59 : nop
        mov eax, dword ptr ds : [ecx+4]
        mov edx, 0x3F800000
        cmp eax, edx
        fnstsw ax
        jne public_6f71b9e
        test ah, 0x44
        jp public_6f71b7b
        mov dword ptr ds : [ecx+0xC], offset _public_6f71d90
        mov dword ptr ds : [ecx+0x10], 5
        ret 
        public_6f71b7b : nop
        cmp dword ptr ds : [ecx+8], edx
        jne public_6f71b8f
        mov dword ptr ds : [ecx+0xC], offset _public_6f71da0
        mov dword ptr ds : [ecx+0x10], 4
        ret 
        public_6f71b8f : nop
        mov dword ptr ds : [ecx+0xC], offset _public_6f71db0
        mov dword ptr ds : [ecx+0x10], 3
        ret 
        public_6f71b9e : nop
        test ah, 0x44
        jp public_6f71bb2
        mov dword ptr ds : [ecx+0xC], offset _public_6f71dc0
        mov dword ptr ds : [ecx+0x10], 4
        ret 
        public_6f71bb2 : nop
        cmp dword ptr ds : [ecx+8], edx
        jne public_6f71bc6
        mov dword ptr ds : [ecx+0xC], offset _public_6f71dd0
        mov dword ptr ds : [ecx+0x10], 3
        ret 
        public_6f71bc6 : nop
        mov dword ptr ds : [ecx+0xC], offset _public_6f71de0
        mov dword ptr ds : [ecx+0x10], 2
        ret 
        public_6f71bd5 : nop
        mov eax, dword ptr ds : [ecx]
        mov edx, 0x3F800000
        cmp eax, edx
        fnstsw ax
        fcomp dword ptr ds : [public_6f730fc]
        jne public_6f71c9f
        test ah, 0x44
        jp public_6f71c2a
        fnstsw ax
        test ah, 0x44
        jp public_6f71c07
        mov dword ptr ds : [ecx+0xC], offset _public_6f71e00
        mov dword ptr ds : [ecx+0x10], 5
        ret 
        public_6f71c07 : nop
        cmp dword ptr ds : [ecx+8], edx
        jne public_6f71c1b
        mov dword ptr ds : [ecx+0xC], offset _public_6f71e10
        mov dword ptr ds : [ecx+0x10], 4
        ret 
        public_6f71c1b : nop
        mov dword ptr ds : [ecx+0xC], offset _public_6f71e20
        mov dword ptr ds : [ecx+0x10], 3
        ret 
        public_6f71c2a : nop
        cmp dword ptr ds : [ecx+4], edx
        fnstsw ax
        jne public_6f71c68
        test ah, 0x44
        jp public_6f71c45
        mov dword ptr ds : [ecx+0xC], offset _public_6f71e30
        mov dword ptr ds : [ecx+0x10], 4
        ret 
        public_6f71c45 : nop
        cmp dword ptr ds : [ecx+8], edx
        jne public_6f71c59
        mov dword ptr ds : [ecx+0xC], offset _public_6f71e40
        mov dword ptr ds : [ecx+0x10], 3
        ret 
        public_6f71c59 : nop
        mov dword ptr ds : [ecx+0xC], offset _public_6f71e50
        mov dword ptr ds : [ecx+0x10], 2
        ret 
        public_6f71c68 : nop
        test ah, 0x44
        jp public_6f71c7c
        mov dword ptr ds : [ecx+0xC], offset _public_6f71e70
        mov dword ptr ds : [ecx+0x10], 3
        ret 
        public_6f71c7c : nop
        cmp dword ptr ds : [ecx+8], edx
        jne public_6f71c90
        mov dword ptr ds : [ecx+0xC], offset _public_6f71e80
        mov dword ptr ds : [ecx+0x10], 2
        ret 
        public_6f71c90 : nop
        mov dword ptr ds : [ecx+0xC], offset _public_6f71ea0
        mov dword ptr ds : [ecx+0x10], 1
        ret 
        public_6f71c9f : nop
        test ah, 0x44
        jp public_6f71cdd
        fnstsw ax
        test ah, 0x44
        jp public_6f71cba
        mov dword ptr ds : [ecx+0xC], offset _public_6f71ec0
        mov dword ptr ds : [ecx+0x10], 4
        ret 
        public_6f71cba : nop
        cmp dword ptr ds : [ecx+8], edx
        jne public_6f71cce
        mov dword ptr ds : [ecx+0xC], offset _public_6f71ed0
        mov dword ptr ds : [ecx+0x10], 3
        ret 
        public_6f71cce : nop
        mov dword ptr ds : [ecx+0xC], offset _public_6f71ee0
        mov dword ptr ds : [ecx+0x10], 2
        ret 
        public_6f71cdd : nop
        cmp dword ptr ds : [ecx+4], edx
        fnstsw ax
        jne public_6f71d1b
        test ah, 0x44
        jp public_6f71cf8
        mov dword ptr ds : [ecx+0xC], offset _public_6f71f00
        mov dword ptr ds : [ecx+0x10], 3
        ret 
        public_6f71cf8 : nop
        cmp dword ptr ds : [ecx+8], edx
        jne public_6f71d0c
        mov dword ptr ds : [ecx+0xC], offset _public_6f71f10
        mov dword ptr ds : [ecx+0x10], 2
        ret 
        public_6f71d0c : nop
        mov dword ptr ds : [ecx+0xC], offset _public_6f71f30
        mov dword ptr ds : [ecx+0x10], 1
        ret 
        public_6f71d1b : nop
        test ah, 0x44
        jp public_6f71d2f
        mov dword ptr ds : [ecx+0xC], offset _public_6f71f50
        mov dword ptr ds : [ecx+0x10], 2
        ret 
        public_6f71d2f : nop
        cmp dword ptr ds : [ecx+8], edx
        jne public_6f71d43
        mov dword ptr ds : [ecx+0xC], offset _public_6f71f70
        mov dword ptr ds : [ecx+0x10], 1
        ret 
        public_6f71d43 : nop
        mov dword ptr ds : [ecx+0xC], offset _public_6f71f90
        mov dword ptr ds : [ecx+0x10], 0
        ret 
        UNREACHABLE_TRAP(0x6f71af0)
    }
}

#undef public_6f71b32
#undef public_6f71b4a
#undef public_6f71b59
#undef public_6f71b7b
#undef public_6f71b8f
#undef public_6f71b9e
#undef public_6f71bb2
#undef public_6f71bc6
#undef public_6f71bd5
#undef public_6f71c07
#undef public_6f71c1b
#undef public_6f71c2a
#undef public_6f71c45
#undef public_6f71c59
#undef public_6f71c68
#undef public_6f71c7c
#undef public_6f71c90
#undef public_6f71c9f
#undef public_6f71cba
#undef public_6f71cce
#undef public_6f71cdd
#undef public_6f71cf8
#undef public_6f71d0c
#undef public_6f71d1b
#undef public_6f71d2f
#undef public_6f71d43
