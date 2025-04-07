#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6227710);
CLANG_FORWARD_PROC_SYMBOL(public_622a4f0);

#define public_6227742 _public_6227742
#define public_622774a _public_622774a
#define public_622775e _public_622775e

PROC_DECLARE(0x6227710, internal_6227710, public_6227710);
extern "C" NAKED register_t __cdecl internal_6227710()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x14]
        push eax
        lea esi, ds:[edi+8]
        mov ecx, esi
        call public_622a4f0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6227742
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jb public_6227742
        lea eax, ss:[esp+0x10]
        jmp public_622774a
        public_6227742 : nop
        mov dword ptr ss : [esp+8], esi
        lea eax, ss:[esp+8]
        public_622774a : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0xC]
        pop edi
        cmp eax, ecx
        pop esi
        jne public_622775e
        mov eax, 0xFFFFFFF8
        pop ecx
        ret 0xC
        public_622775e : nop
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0xC]
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6227710)
    }
}

#undef public_6227742
#undef public_622774a
#undef public_622775e
