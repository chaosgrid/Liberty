#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed3f90);
CLANG_FORWARD_PROC_SYMBOL(public_6f48d80);

#define public_6ed3fbe _public_6ed3fbe

PROC_DECLARE(0x6ed3f90, internal_6ed3f90, public_6ed3f90);
extern "C" NAKED register_t __cdecl internal_6ed3f90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [eax*4+public_6fce350]
        fnstsw ax
        test ah, 1
        jne public_6ed3fbe
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        call public_6f48d80
        test eax, eax
        jne public_6ed3fbe
        mov eax, 1
        ret 8
        public_6ed3fbe : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ed3f90)
    }
}

#undef public_6ed3fbe
