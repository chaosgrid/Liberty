#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_65d8f4e);
CLANG_FORWARD_PROC_SYMBOL(public_65d8f61);
CLANG_FORWARD_PROC_SYMBOL(public_65dd253);

#define public_65d8fb4 _public_65d8fb4
#define public_65d8fbc _public_65d8fbc

PROC_DECLARE(0x65d8f61, internal_65d8f61, public_65d8f61);
extern "C" NAKED register_t __cdecl internal_65d8f61()
{
    __asm
    {
        push esi
        push edi
        call dword ptr ds : [public_65e107c]
        push dword ptr ds : [public_65e3440]
        mov edi, eax
        call dword ptr ds : [public_65e1078]
        mov esi, eax
        test esi, esi
        jne public_65d8fbc
        push 0x74
        push 1
        call public_65dd253
        mov esi, eax
        pop ecx
        test esi, esi
        pop ecx
        je public_65d8fb4
        push esi
        push dword ptr ds : [public_65e3440]
        call dword ptr ds : [public_65e1068]
        test eax, eax
        je public_65d8fb4
        push esi
        call public_65d8f4e
        pop ecx
        call dword ptr ds : [public_65e1064]
        or dword ptr ds : [esi+4], 0xFFFFFFFF
        mov dword ptr ds : [esi], eax
        jmp public_65d8fbc
        public_65d8fb4 : nop
        push 0x10
        call public_65d7ef0
        pop ecx
        public_65d8fbc : nop
        push edi
        call dword ptr ds : [public_65e1074]
        mov eax, esi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d8f61)
    }
}

#undef public_65d8fb4
#undef public_65d8fbc
