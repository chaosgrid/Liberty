#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec85a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecbfb0);

#define public_6ec85bd _public_6ec85bd

PROC_DECLARE(0x6ec85a0, internal_6ec85a0, public_6ec85a0);
extern "C" NAKED register_t __cdecl internal_6ec85a0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        push edi
        lea ecx, ds:[esi+4]
        call public_6ecbfb0
        test eax, eax
        jge public_6ec85bd
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_6ec85bd : nop
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+0x44], eax
        pop edi
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec85a0)
    }
}

#undef public_6ec85bd
