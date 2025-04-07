#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6327480);

#define public_632748b _public_632748b

PROC_DECLARE(0x6327480, internal_6327480, public_6327480);
extern "C" NAKED register_t __cdecl internal_6327480()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        test eax, eax
        jne public_632748b
        lea eax, ds:[ecx+0x24]
        ret 
        public_632748b : nop
        mov eax, dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [eax]
        add eax, 8
        ret 
        UNREACHABLE_TRAP(0x6327480)
    }
}

#undef public_632748b
