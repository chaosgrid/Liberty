#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6809c30);

#define public_6809c46 _public_6809c46
#define public_6809c62 _public_6809c62
#define public_6809c68 _public_6809c68

PROC_DECLARE(0x6809c30, internal_6809c30, public_6809c30);
extern "C" NAKED register_t __cdecl internal_6809c30()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        fld qword ptr ds : [public_680c180]
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jle public_6809c68
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, eax
        public_6809c46 : nop
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        jne public_6809c62
        cmp dword ptr ds : [ecx+0x10], 0xFFFFFFFA
        je public_6809c62
        fld qword ptr ds : [ecx+8]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6809c62
        fstp st(0)
        fld qword ptr ds : [ecx+8]
        public_6809c62 : nop
        add ecx, 0x20
        dec edx
        jne public_6809c46
        public_6809c68 : nop
        ret 
        UNREACHABLE_TRAP(0x6809c30)
    }
}

#undef public_6809c46
#undef public_6809c62
#undef public_6809c68
