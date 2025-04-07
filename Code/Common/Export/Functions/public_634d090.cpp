#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63499c0);
CLANG_FORWARD_PROC_SYMBOL(public_634b230);
CLANG_FORWARD_PROC_SYMBOL(public_634bbe0);
CLANG_FORWARD_PROC_SYMBOL(public_634d020);
CLANG_FORWARD_PROC_SYMBOL(public_634d090);
CLANG_FORWARD_PROC_SYMBOL(public_634f210);
CLANG_FORWARD_PROC_SYMBOL(public_634f230);
CLANG_FORWARD_PROC_SYMBOL(public_634f300);
CLANG_FORWARD_PROC_SYMBOL(public_6351eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6351f80);
CLANG_FORWARD_JUMP_SYMBOL(public_6397f36);

#define public_634d0c5 _public_634d0c5
#define public_634d0d5 _public_634d0d5
#define public_634d1bd _public_634d1bd
#define public_634d1c6 _public_634d1c6
#define public_634d1f5 _public_634d1f5

PROC_DECLARE(0x634d090, internal_634d090, public_634d090);
extern "C" NAKED register_t __cdecl internal_634d090()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6397f36 @0x634d098*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397f36
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x410
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov dword ptr ds : [esi+0x11C], ebx
        cmp word ptr ds : [esi+0xDA], bx
        je public_634d0c5
        call public_634bbe0
        public_634d0c5 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        cmp eax, ebx
        je public_634d0d5
        mov ecx, dword ptr ds : [esi+0xC]
        push eax
        call public_634b230
        public_634d0d5 : nop
        mov ecx, dword ptr ds : [esi+0x98]
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax+0x28]
        mov ecx, esi
        call public_634d020
        mov ecx, dword ptr ds : [esi+0x10]
        call public_634f230
        lea ecx, ss:[esp+0x218]
        mov dword ptr ss : [esp+0x214], ecx
        mov word ptr ss : [esp+0x210], 0x80
        mov word ptr ss : [esp+0x212], bx
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x210]
        push edx
        push esi
        mov dword ptr ss : [esp+0x428], ebx
        call public_63499c0
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0xC], eax
        mov word ptr ss : [esp+8], 0x80
        mov word ptr ss : [esp+0xA], bx
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x214]
        push edx
        push esi
        mov byte ptr ss : [esp+0x42C], 1
        call public_6351eb0
        lea eax, ss:[esp+0x14]
        push eax
        push esi
        mov dword ptr ds : [esi+0x11C], 2
        call public_6351f80
        mov ecx, dword ptr ds : [esi+0x10]
        add esp, 0x14
        mov dword ptr ds : [esi+0x11C], 3
        call public_634f300
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0x11C], 4
        call public_634f210
        mov eax, dword ptr ss : [esp+0xC]
        lea ecx, ss:[esp+0x10]
        cmp eax, ecx
        mov dword ptr ds : [esi+0x11C], 5
        mov byte ptr ss : [esp+0x420], bl
        je public_634d1c6
        cmp eax, ebx
        je public_634d1bd
        push eax
        call public_6343fb0
        add esp, 4
        public_634d1bd : nop
        mov dword ptr ss : [esp+0xC], ebx
        mov word ptr ss : [esp+8], bx
        public_634d1c6 : nop
        mov eax, dword ptr ss : [esp+0x214]
        lea edx, ss:[esp+0x218]
        cmp eax, edx
        mov word ptr ss : [esp+0xA], bx
        mov dword ptr ss : [esp+0x420], 0xFFFFFFFF
        je public_634d1f5
        cmp eax, ebx
        je public_634d1f5
        push eax
        call public_6343fb0
        add esp, 4
        public_634d1f5 : nop
        mov ecx, dword ptr ss : [esp+0x418]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x41C
        ret 8
        UNREACHABLE_TRAP(0x634d090)
    }
}

#undef public_634d0c5
#undef public_634d0d5
#undef public_634d1bd
#undef public_634d1c6
#undef public_634d1f5
