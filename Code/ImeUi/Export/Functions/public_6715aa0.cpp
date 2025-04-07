#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6715aa0);

#define public_6715b15 _public_6715b15
#define public_6715b82 _public_6715b82
#define public_6715b92 _public_6715b92
#define public_6715b9a _public_6715b9a
#define public_6715ba1 _public_6715ba1
#define public_6715bac _public_6715bac
#define public_6715bb4 _public_6715bb4

PROC_DECLARE(0x6715aa0, internal_6715aa0, public_6715aa0);
extern "C" NAKED register_t __cdecl internal_6715aa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_671cfc4]
        sub esp, 0x114
        cmp eax, 0xE00E0804
        push esi
        je public_6715bb4
        cmp eax, 0xE0090404
        je public_6715bb4
        mov eax, dword ptr ss : [esp+0x11C]
        test eax, eax
        je public_6715bb4
        mov ecx, eax
        mov byte ptr ds : [public_671cfad], 0
        and ecx, 0xFFFF
        cmp ecx, 0x404
        jne public_6715bac
        lea edx, ss:[esp+0x14]
        and eax, 0xFFFF0000
/*FIXUP push offset public_6719264 @0x6715af5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719264
        push edx
        mov esi, eax
        call dword ptr ds : [public_6717064]
        cmp esi, 0x5010000
        mov eax, offset public_671925c
        jae public_6715b15
        mov eax, offset public_6719250
        public_6715b15 : nop
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_6717074]
        lea ecx, ss:[esp+4]
        lea edx, ss:[esp+0x14]
        push ecx
        push 0x20019
        push 0
        push edx
        push 0x80000001
        call dword ptr ds : [public_6717004]
        test eax, eax
        jne public_6715bac
        lea eax, ss:[esp+0xC]
        lea ecx, ss:[esp+8]
        push eax
        mov eax, dword ptr ss : [esp+8]
        lea edx, ss:[esp+0x14]
        push ecx
        push edx
        push 0
/*FIXUP push offset public_671923c @0x6715b56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671923c
        push eax
        mov dword ptr ss : [esp+0x24], 4
        call dword ptr ds : [public_6717008]
        test eax, eax
        jne public_6715ba1
        mov al, byte ptr ss : [esp+8]
        cmp esi, 0x5000000
        ja public_6715b82
        cmp al, 0x22
        je public_6715b9a
        cmp al, 0x23
        je public_6715b9a
        public_6715b82 : nop
        cmp esi, 0x5010000
        je public_6715b92
        cmp esi, 0x5020000
        jne public_6715ba1
        public_6715b92 : nop
        cmp al, 0x22
        jb public_6715ba1
        cmp al, 0x24
        ja public_6715ba1
        public_6715b9a : nop
        mov byte ptr ds : [public_671cfad], 1
        public_6715ba1 : nop
        mov ecx, dword ptr ss : [esp+4]
        push ecx
        call dword ptr ds : [public_6717000]
        public_6715bac : nop
        pop esi
        add esp, 0x114
        ret 
        public_6715bb4 : nop
        mov byte ptr ds : [public_671cfad], 1
        pop esi
        add esp, 0x114
        ret 
        UNREACHABLE_TRAP(0x6715aa0)
    }
}

#undef public_6715b15
#undef public_6715b82
#undef public_6715b92
#undef public_6715b9a
#undef public_6715ba1
#undef public_6715bac
#undef public_6715bb4
