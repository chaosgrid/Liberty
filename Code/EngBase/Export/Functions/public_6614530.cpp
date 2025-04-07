#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6614530);

#define public_6614546 _public_6614546
#define public_6614558 _public_6614558

PROC_DECLARE(0x6614530, internal_6614530, public_6614530);
extern "C" NAKED register_t __cdecl internal_6614530()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6614546
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6614546 : nop
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_6614558
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_6614558 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, esi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6614530)
    }
}

#undef public_6614546
#undef public_6614558
