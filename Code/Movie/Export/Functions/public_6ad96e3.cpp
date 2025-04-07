#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad07b3);
CLANG_FORWARD_PROC_SYMBOL(public_6ad96e3);

#define public_6ad970c _public_6ad970c

PROC_DECLARE(0x6ad96e3, internal_6ad96e3, public_6ad96e3);
extern "C" NAKED register_t __cdecl internal_6ad96e3()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xC]
        test al, 0x83
        je public_6ad970c
        test al, 8
        je public_6ad970c
        push dword ptr ds : [esi+8]
        call public_6ad07b3
        and word ptr ds : [esi+0xC], 0xFBF7
        xor eax, eax
        pop ecx
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], eax
        public_6ad970c : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad96e3)
    }
}

#undef public_6ad970c
