#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);
CLANG_FORWARD_PROC_SYMBOL(public_65d8065);
CLANG_FORWARD_PROC_SYMBOL(public_65d8120);
CLANG_FORWARD_PROC_SYMBOL(public_65dd010);

#define public_65d80a2 _public_65d80a2
#define public_65d80a8 _public_65d80a8

PROC_DECLARE(0x65d8065, internal_65d8065, public_65d8065);
extern "C" NAKED register_t __cdecl internal_65d8065()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_65e15dc
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        mov dword ptr ds : [esi+8], eax
        je public_65d80a2
        push dword ptr ds : [edi+4]
        call public_65d8120
        inc eax
        push eax
        call public_65d6f71
        pop ecx
        mov dword ptr ds : [esi+4], eax
        test eax, eax
        pop ecx
        je public_65d80a8
        push dword ptr ds : [edi+4]
        push eax
        call public_65dd010
        pop ecx
        pop ecx
        jmp public_65d80a8
        public_65d80a2 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        public_65d80a8 : nop
        mov eax, esi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d8065)
    }
}

#undef public_65d80a2
#undef public_65d80a8
