#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6227770);
CLANG_FORWARD_PROC_SYMBOL(public_622a4f0);

#define public_62277a2 _public_62277a2
#define public_62277aa _public_62277aa
#define public_62277be _public_62277be

PROC_DECLARE(0x6227770, internal_6227770, public_6227770);
extern "C" NAKED register_t __cdecl internal_6227770()
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
        je public_62277a2
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jb public_62277a2
        lea eax, ss:[esp+0x10]
        jmp public_62277aa
        public_62277a2 : nop
        mov dword ptr ss : [esp+8], esi
        lea eax, ss:[esp+8]
        public_62277aa : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0xC]
        pop edi
        cmp eax, ecx
        pop esi
        jne public_62277be
        mov eax, 0xFFFFFFF8
        pop ecx
        ret 0xC
        public_62277be : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0x10]
        push eax
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6227770)
    }
}

#undef public_62277a2
#undef public_62277aa
#undef public_62277be
