#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15510);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d80);
CLANG_FORWARD_PROC_SYMBOL(public_6d16800);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c810);

#define public_6d1556f _public_6d1556f
#define public_6d155a0 _public_6d155a0
#define public_6d155c7 _public_6d155c7
#define public_6d155cf _public_6d155cf
#define public_6d155f0 _public_6d155f0

PROC_DECLARE(0x6d15510, internal_6d15510, public_6d15510);
extern "C" NAKED register_t __cdecl internal_6d15510()
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
        lea esi, ds:[edi+0x80]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], eax
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [edi+0x84]
        je public_6d155a0
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6d1556f
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], ecx
        push edx
        lea ecx, ds:[eax+0x3C]
        call public_6d16800
        mov eax, dword ptr ss : [esp+8]
        push 0
        push eax
        mov ecx, offset public_6d8df18
        call public_6d15d80
        public_6d1556f : nop
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
        je public_6d155c7
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6d155c7
        lea eax, ss:[esp+8]
        jmp public_6d155cf
        lea ebx, ds:[ebx]
        public_6d155a0 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x84A
/*FIXUP push offset public_6d6840c @0x6d155b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68588 @0x6d155ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68588
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6d1556f
        public_6d155c7 : nop
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        public_6d155cf : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x84]
        je public_6d155f0
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_6d58e50
        pop edi
        pop esi
        add esp, 8
        ret 4
        mov edi, edi
        public_6d155f0 : nop
        mov ecx, dword ptr ds : [public_6d64a44]
        push edx
        push 0x863
/*FIXUP push offset public_6d6840c @0x6d155fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68588 @0x6d15606*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68588
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d15510)
    }
}

#undef public_6d1556f
#undef public_6d155a0
#undef public_6d155c7
#undef public_6d155cf
#undef public_6d155f0
