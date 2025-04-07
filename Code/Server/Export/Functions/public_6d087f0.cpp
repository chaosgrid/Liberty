#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d072c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d08740);
CLANG_FORWARD_PROC_SYMBOL(public_6d087f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b450);

#define public_6d08846 _public_6d08846
#define public_6d08882 _public_6d08882

PROC_DECLARE(0x6d087f0, internal_6d087f0, public_6d087f0);
extern "C" NAKED register_t __cdecl internal_6d087f0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        push edi
        mov esi, ecx
        call public_6d08740
        mov ecx, dword ptr ds : [public_6d90260]
        mov eax, edi
        imul eax, 0x418
        lea ecx, ds:[eax+ecx-0x418]
        call public_6d4b450
        mov ebx, dword ptr ss : [esp+0x20]
        test ebx, ebx
        je public_6d08846
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], edi
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        push eax
        push 0x3A
        mov dword ptr ss : [esp+0x18], ebx
        call public_6d43650
        add esp, 8
        public_6d08846 : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6d08882
        mov al, byte ptr ds : [esi+0xFC]
        test al, al
        je public_6d08882
        mov ecx, dword ptr ds : [esi+4]
        mov byte ptr ds : [esi+0xFC], 0
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        push 0x3D
        call public_6d43650
        add esp, 8
        mov ecx, esi
        call public_6d072c0
        public_6d08882 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6d087f0)
    }
}

#undef public_6d08846
#undef public_6d08882
