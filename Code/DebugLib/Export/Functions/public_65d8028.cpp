#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);
CLANG_FORWARD_PROC_SYMBOL(public_65d8028);
CLANG_FORWARD_PROC_SYMBOL(public_65d8120);
CLANG_FORWARD_PROC_SYMBOL(public_65dd010);

#define public_65d8057 _public_65d8057

PROC_DECLARE(0x65d8028, internal_65d8028, public_65d8028);
extern "C" NAKED register_t __cdecl internal_65d8028()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_65e15dc
        push dword ptr ds : [edi]
        call public_65d8120
        inc eax
        push eax
        call public_65d6f71
        pop ecx
        mov dword ptr ds : [esi+4], eax
        test eax, eax
        pop ecx
        je public_65d8057
        push dword ptr ds : [edi]
        push eax
        call public_65dd010
        pop ecx
        pop ecx
        public_65d8057 : nop
        mov dword ptr ds : [esi+8], 1
        mov eax, esi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d8028)
    }
}

#undef public_65d8057
