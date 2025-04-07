#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e7d0);
CLANG_FORWARD_PROC_SYMBOL(public_636ee90);

#define public_636eebc _public_636eebc

PROC_DECLARE(0x636ee90, internal_636ee90, public_636ee90);
extern "C" NAKED register_t __cdecl internal_636ee90()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi]
        push esi
        push eax
        call public_636e7d0
        add esp, 8
        test eax, eax
        jne public_636eebc
        push esi
        push edi
        call public_636e1b0
        add esp, 8
        pop edi
        mov eax, 1
        pop esi
        ret 
        public_636eebc : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636ee90)
    }
}

#undef public_636eebc
