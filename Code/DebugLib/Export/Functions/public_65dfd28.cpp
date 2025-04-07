#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8120);
CLANG_FORWARD_PROC_SYMBOL(public_65d8535);
CLANG_FORWARD_PROC_SYMBOL(public_65dd010);
CLANG_FORWARD_PROC_SYMBOL(public_65dfd28);

#define public_65dfd4f _public_65dfd4f

PROC_DECLARE(0x65dfd28, internal_65dfd28, public_65dfd28);
extern "C" NAKED register_t __cdecl internal_65dfd28()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_65dfd4f
        push esi
        call public_65d8120
        inc eax
        push eax
        call public_65d8535
        pop ecx
        test eax, eax
        pop ecx
        je public_65dfd4f
        push esi
        push eax
        call public_65dd010
        pop ecx
        pop ecx
        pop esi
        ret 
        public_65dfd4f : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65dfd28)
    }
}

#undef public_65dfd4f
