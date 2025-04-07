#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12e80);
CLANG_FORWARD_PROC_SYMBOL(public_6d140f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d18787 _public_6d18787

PROC_DECLARE(0x6d18750, internal_6d18750, public_6d18750);
extern "C" NAKED register_t __cdecl internal_6d18750()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, 0x3FFFFFFF
        push esi
        mov esi, 0xFFFFFFFC
        je public_6d18787
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d140f0
        test eax, eax
        je public_6d18787
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push ecx
        push edx
        mov ecx, eax
        call public_6d12e80
        xor eax, eax
        pop esi
        ret 
        public_6d18787 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d18750)
    }
}

#undef public_6d18787
