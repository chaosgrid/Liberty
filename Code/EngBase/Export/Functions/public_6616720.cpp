#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a260);

#define public_661675f _public_661675f
#define public_6616767 _public_6616767
#define public_6616781 _public_6616781

PROC_DECLARE(0x6616720, internal_6616720, public_6616720);
extern "C" NAKED register_t __cdecl internal_6616720()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, 0xFFFFFFFF
        je public_6616781
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0x20]
        push eax
        mov ecx, esi
        call public_661a260
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_661675f
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jb public_661675f
        lea eax, ss:[esp+0x10]
        jmp public_6616767
        public_661675f : nop
        mov dword ptr ss : [esp+8], esi
        lea eax, ss:[esp+8]
        public_6616767 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x24]
        pop edi
        cmp eax, ecx
        pop esi
        je public_6616781
        mov eax, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x20]
        public_6616781 : nop
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6616720)
    }
}

#undef public_661675f
#undef public_6616767
#undef public_6616781
