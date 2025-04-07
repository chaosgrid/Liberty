#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a260);

#define public_6616a8f _public_6616a8f
#define public_6616a97 _public_6616a97
#define public_6616ab1 _public_6616ab1

PROC_DECLARE(0x6616a50, internal_6616a50, public_6616a50);
extern "C" NAKED register_t __cdecl internal_6616a50()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, 0xFFFFFFFF
        je public_6616ab1
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
        je public_6616a8f
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jb public_6616a8f
        lea eax, ss:[esp+0x10]
        jmp public_6616a97
        public_6616a8f : nop
        mov dword ptr ss : [esp+8], esi
        lea eax, ss:[esp+8]
        public_6616a97 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x24]
        pop edi
        cmp eax, ecx
        pop esi
        je public_6616ab1
        mov eax, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x28]
        public_6616ab1 : nop
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6616a50)
    }
}

#undef public_6616a8f
#undef public_6616a97
#undef public_6616ab1
