#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7f23);
CLANG_FORWARD_PROC_SYMBOL(public_65d80d2);
CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);

#define public_65d80f1 _public_65d80f1

PROC_DECLARE(0x65d80d2, internal_65d80d2, public_65d80d2);
extern "C" NAKED register_t __cdecl internal_65d80d2()
{
    __asm
    {
        push esi
        mov esi, ecx
        push 0x1B
        mov dword ptr ds : [esi], offset public_65e15fc
        call public_65dceab
        mov esi, dword ptr ds : [esi+4]
        pop ecx
        test esi, esi
        je public_65d80f1
        push esi
        call public_65d7f23
        pop ecx
        public_65d80f1 : nop
        push 0x1B
        call public_65dcf0c
        pop ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d80d2)
    }
}

#undef public_65d80f1
