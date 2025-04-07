#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7f23);
CLANG_FORWARD_PROC_SYMBOL(public_65dfa8d);

#define public_65dfab6 _public_65dfab6

PROC_DECLARE(0x65dfa8d, internal_65dfa8d, public_65dfa8d);
extern "C" NAKED register_t __cdecl internal_65dfa8d()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xC]
        test al, 0x83
        je public_65dfab6
        test al, 8
        je public_65dfab6
        push dword ptr ds : [esi+8]
        call public_65d7f23
        and word ptr ds : [esi+0xC], 0xFBF7
        xor eax, eax
        pop ecx
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], eax
        public_65dfab6 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65dfa8d)
    }
}

#undef public_65dfab6
