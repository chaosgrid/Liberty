#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6d02063 _public_6d02063

PROC_DECLARE(0x6d02000, internal_6d02000, public_6d02000);
extern "C" NAKED register_t __cdecl internal_6d02000()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+0xB4]
        xor al, al
        sub esp, 0x14
        cmp dl, al
        je public_6d02063
        push esi
        mov byte ptr ds : [ecx+0xB4], al
        lea esi, ds:[ecx-4]
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0x10], al
        mov byte ptr ss : [esp+0x11], al
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 1
        mov dword ptr ss : [esp+0x18], 0x3F800000
        call dword ptr ds : [eax+0x194]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+4], edx
        call dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+4]
        push ecx
        push 0x28
        mov dword ptr ss : [esp+0x10], eax
        call public_6d43650
        add esp, 8
        pop esi
        public_6d02063 : nop
        xor eax, eax
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6d02000)
    }
}

#undef public_6d02063
