#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084f0);

#define public_620850e _public_620850e
#define public_620851a _public_620851a

PROC_DECLARE(0x62084f0, internal_62084f0, public_62084f0);
extern "C" NAKED register_t __cdecl internal_62084f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_620851a
        test eax, eax
        je public_620850e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_620850e : nop
        test edi, edi
        mov dword ptr ds : [esi], edi
        je public_620851a
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_620851a : nop
        mov eax, dword ptr ds : [esi]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62084f0)
    }
}

#undef public_620850e
#undef public_620851a
