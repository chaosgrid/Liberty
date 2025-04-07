#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a260);

#define public_661667f _public_661667f
#define public_6616687 _public_6616687
#define public_661669c _public_661669c

PROC_DECLARE(0x6616640, internal_6616640, public_6616640);
extern "C" NAKED register_t __cdecl internal_6616640()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, 0xFFFFFFFF
        je public_661669c
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
        je public_661667f
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jb public_661667f
        lea eax, ss:[esp+0x10]
        jmp public_6616687
        public_661667f : nop
        mov dword ptr ss : [esp+8], esi
        lea eax, ss:[esp+8]
        public_6616687 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x24]
        pop edi
        cmp eax, ecx
        pop esi
        je public_661669c
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+0x2C], eax
        public_661669c : nop
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6616640)
    }
}

#undef public_661667f
#undef public_6616687
#undef public_661669c
