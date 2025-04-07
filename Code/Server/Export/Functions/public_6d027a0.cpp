#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6d027e5 _public_6d027e5
#define public_6d02816 _public_6d02816
#define public_6d02845 _public_6d02845
#define public_6d0284d _public_6d0284d

PROC_DECLARE(0x6d027a0, internal_6d027a0, public_6d027a0);
extern "C" NAKED register_t __cdecl internal_6d027a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x18
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x98], ebx
        mov byte ptr ds : [esi+0x94], bl
        jne public_6d027e5
        mov eax, dword ptr ds : [esi-4]
        lea ecx, ds:[esi-4]
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x2C]
        push ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        push 0x10
        jmp public_6d02845
        public_6d027e5 : nop
        cmp eax, 1
        jne public_6d02816
        mov edx, dword ptr ds : [esi-4]
        lea ecx, ds:[esi-4]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [esi+0x24]
        call public_6d06cd0
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x20], eax
        push 0x1A
        jmp public_6d02845
        public_6d02816 : nop
        cmp eax, 2
        jne public_6d0284d
        mov eax, dword ptr ds : [esi-4]
        lea ecx, ds:[esi-4]
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], edx
        call public_6d06cd0
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x14]
        push eax
        push 0x15
        public_6d02845 : nop
        call public_6d43650
        add esp, 8
        public_6d0284d : nop
        mov edx, dword ptr ds : [esi-4]
        lea ecx, ds:[esi-4]
        lea eax, ss:[esp+8]
        push eax
        mov dword ptr ss : [esp+0xC], 2
        mov byte ptr ss : [esp+0x11], bl
        mov byte ptr ss : [esp+0x10], bl
        mov dword ptr ss : [esp+0x14], 0x3F800000
        call dword ptr ds : [edx+0x194]
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x6d027a0)
    }
}

#undef public_6d027e5
#undef public_6d02816
#undef public_6d02845
#undef public_6d0284d
