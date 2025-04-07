#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d14cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d80);
CLANG_FORWARD_PROC_SYMBOL(public_6d16500);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c810);

#define public_6d14d19 _public_6d14d19
#define public_6d14d44 _public_6d14d44
#define public_6d14d6b _public_6d14d6b
#define public_6d14d73 _public_6d14d73
#define public_6d14d90 _public_6d14d90

PROC_DECLARE(0x6d14cc0, internal_6d14cc0, public_6d14cc0);
extern "C" NAKED register_t __cdecl internal_6d14cc0()
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
        lea esi, ds:[edi+0x44]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], eax
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [edi+0x48]
        je public_6d14d44
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6d14d19
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], ecx
        push edx
        lea ecx, ds:[eax+0x24]
        call public_6d16500
        mov eax, dword ptr ss : [esp+8]
        push 0
        push eax
        mov ecx, offset public_6d8e120
        call public_6d15d80
        public_6d14d19 : nop
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
        je public_6d14d6b
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6d14d6b
        lea eax, ss:[esp+8]
        jmp public_6d14d73
        public_6d14d44 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x774
/*FIXUP push offset public_6d6840c @0x6d14d54*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d684e4 @0x6d14d5e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d684e4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6d14d19
        public_6d14d6b : nop
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        public_6d14d73 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x48]
        je public_6d14d90
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_6d58e50
        pop edi
        pop esi
        add esp, 8
        ret 4
        nop 
        public_6d14d90 : nop
        mov ecx, dword ptr ds : [public_6d64a44]
        push edx
        push 0x78D
/*FIXUP push offset public_6d6840c @0x6d14d9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d684e4 @0x6d14da6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d684e4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d14cc0)
    }
}

#undef public_6d14d19
#undef public_6d14d44
#undef public_6d14d6b
#undef public_6d14d73
#undef public_6d14d90
