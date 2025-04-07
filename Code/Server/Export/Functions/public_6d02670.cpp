#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6d026f8 _public_6d026f8
#define public_6d02738 _public_6d02738
#define public_6d02782 _public_6d02782
#define public_6d02788 _public_6d02788

PROC_DECLARE(0x6d02670, internal_6d02670, public_6d02670);
extern "C" NAKED register_t __cdecl internal_6d02670()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [esi+0x94]
        xor eax, eax
        cmp cl, al
        jne public_6d02788
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x98], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        mov byte ptr ds : [esi+0x94], 1
        jne public_6d026f8
        mov edx, dword ptr ds : [esi-4]
        lea ecx, ds:[esi-4]
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], eax
        mov byte ptr ss : [esp+0x10], al
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [esi+0x24]
        call public_6d06cd0
        mov esi, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+4]
        cmp esi, 1
        push eax
        sete dl
        push 0x12
        mov byte ptr ss : [esp+0x18], dl
        call public_6d43650
        add esp, 8
        xor eax, eax
        pop esi
        add esp, 0x10
        ret 0x14
        public_6d026f8 : nop
        cmp ecx, 1
        jne public_6d02738
        mov ecx, dword ptr ds : [esi+0x24]
        call public_6d06cd0
        mov edx, dword ptr ds : [esi-4]
        lea ecx, ds:[esi-4]
        mov dword ptr ss : [esp+0xC], eax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        push 0x19
        mov dword ptr ss : [esp+0x10], ecx
        call public_6d43650
        add esp, 8
        xor eax, eax
        pop esi
        add esp, 0x10
        ret 0x14
        public_6d02738 : nop
        cmp ecx, 2
        jne public_6d02782
        mov eax, dword ptr ds : [esi-4]
        lea ecx, ds:[esi-4]
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+8], edx
        call public_6d06cd0
        lea edx, ss:[esp+4]
        push edx
        push 0x14
        mov dword ptr ss : [esp+0x18], eax
        call public_6d43650
        add esp, 8
        xor eax, eax
        pop esi
        add esp, 0x10
        ret 0x14
        public_6d02782 : nop
        mov byte ptr ds : [esi+0x94], al
        public_6d02788 : nop
        xor eax, eax
        pop esi
        add esp, 0x10
        ret 0x14
        UNREACHABLE_TRAP(0x6d02670)
    }
}

#undef public_6d026f8
#undef public_6d02738
#undef public_6d02782
#undef public_6d02788
