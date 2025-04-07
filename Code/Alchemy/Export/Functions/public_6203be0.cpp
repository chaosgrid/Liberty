#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6203be0);

#define public_6203bfe _public_6203bfe
#define public_6203c0a _public_6203c0a

PROC_DECLARE(0x6203be0, internal_6203be0, public_6203be0);
extern "C" NAKED register_t __cdecl internal_6203be0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6203c0a
        test eax, eax
        je public_6203bfe
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6203bfe : nop
        test edi, edi
        mov dword ptr ds : [esi], edi
        je public_6203c0a
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_6203c0a : nop
        mov eax, dword ptr ds : [esi]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6203be0)
    }
}

#undef public_6203bfe
#undef public_6203c0a
