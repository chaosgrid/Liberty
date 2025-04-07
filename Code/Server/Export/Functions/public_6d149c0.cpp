#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d149c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d80);
CLANG_FORWARD_PROC_SYMBOL(public_6d162d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c810);

#define public_6d14a1a _public_6d14a1a
#define public_6d14a45 _public_6d14a45
#define public_6d14a6c _public_6d14a6c
#define public_6d14a74 _public_6d14a74
#define public_6d14a90 _public_6d14a90

PROC_DECLARE(0x6d149c0, internal_6d149c0, public_6d149c0);
extern "C" NAKED register_t __cdecl internal_6d149c0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x10]
        lea esi, ds:[edi+0x30]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], eax
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [edi+0x34]
        je public_6d14a45
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6d14a1a
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], ecx
        push edx
        lea ecx, ds:[eax+0xC]
        call public_6d162d0
        mov eax, dword ptr ss : [esp+8]
        push 0
        dec eax
        push eax
        mov ecx, offset public_6d8e328
        call public_6d15d80
        public_6d14a1a : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, esi
        call public_6d5c810
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, eax
        mov edx, dword ptr ss : [esp+0x14]
        je public_6d14a6c
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6d14a6c
        lea eax, ss:[esp+8]
        jmp public_6d14a74
        public_6d14a45 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x720
/*FIXUP push offset public_6d6840c @0x6d14a55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d684ac @0x6d14a5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d684ac
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6d14a1a
        public_6d14a6c : nop
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        public_6d14a74 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x34]
        je public_6d14a90
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_6d58e50
        pop edi
        pop esi
        add esp, 8
        ret 4
        public_6d14a90 : nop
        mov ecx, dword ptr ds : [public_6d64a44]
        push edx
        push 0x739
/*FIXUP push offset public_6d6840c @0x6d14a9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d684ac @0x6d14aa6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d684ac
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d149c0)
    }
}

#undef public_6d14a1a
#undef public_6d14a45
#undef public_6d14a6c
#undef public_6d14a74
#undef public_6d14a90
