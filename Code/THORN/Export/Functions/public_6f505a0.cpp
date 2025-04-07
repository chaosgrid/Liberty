#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f505a0);

#define public_6f505b6 _public_6f505b6
#define public_6f505d2 _public_6f505d2
#define public_6f505d8 _public_6f505d8

PROC_DECLARE(0x6f505a0, internal_6f505a0, public_6f505a0);
extern "C" NAKED register_t __cdecl internal_6f505a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        fld qword ptr ds : [public_6f5b430]
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jle public_6f505d8
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, eax
        public_6f505b6 : nop
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        jne public_6f505d2
        cmp dword ptr ds : [ecx+0x10], 0xFFFFFFFA
        je public_6f505d2
        fld qword ptr ds : [ecx+8]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6f505d2
        fstp st(0)
        fld qword ptr ds : [ecx+8]
        public_6f505d2 : nop
        add ecx, 0x20
        dec edx
        jne public_6f505b6
        public_6f505d8 : nop
        ret 
        UNREACHABLE_TRAP(0x6f505a0)
    }
}

#undef public_6f505b6
#undef public_6f505d2
#undef public_6f505d8
