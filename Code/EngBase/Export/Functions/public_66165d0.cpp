#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a260);

#define public_6616612 _public_6616612
#define public_661661a _public_661661a
#define public_6616639 _public_6616639

PROC_DECLARE(0x66165d0, internal_66165d0, public_66165d0);
extern "C" NAKED register_t __cdecl internal_66165d0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        xor bl, bl
        cmp eax, 0xFFFFFFFF
        je public_6616639
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x20]
        push eax
        mov ecx, esi
        call public_661a260
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6616612
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jb public_6616612
        lea eax, ss:[esp+0x14]
        jmp public_661661a
        public_6616612 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_661661a : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x24]
        pop edi
        cmp eax, ecx
        pop esi
        je public_6616639
        mov eax, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x10]
        pop ebx
        pop ecx
        ret 0xC
        public_6616639 : nop
        mov al, bl
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x66165d0)
    }
}

#undef public_6616612
#undef public_661661a
#undef public_6616639
