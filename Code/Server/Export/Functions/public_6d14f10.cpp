#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d14f10);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d80);
CLANG_FORWARD_PROC_SYMBOL(public_6d16a30);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c810);

#define public_6d14f69 _public_6d14f69
#define public_6d14f94 _public_6d14f94
#define public_6d14fbb _public_6d14fbb
#define public_6d14fc3 _public_6d14fc3
#define public_6d14fe0 _public_6d14fe0

PROC_DECLARE(0x6d14f10, internal_6d14f10, public_6d14f10);
extern "C" NAKED register_t __cdecl internal_6d14f10()
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
        lea esi, ds:[edi+0x58]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], eax
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [edi+0x5C]
        je public_6d14f94
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6d14f69
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], ecx
        push edx
        lea ecx, ds:[eax+0x10]
        call public_6d16a30
        mov eax, dword ptr ss : [esp+8]
        push 0
        push eax
        mov ecx, offset public_6d8dd10
        call public_6d15d80
        public_6d14f69 : nop
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
        je public_6d14fbb
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6d14fbb
        lea eax, ss:[esp+8]
        jmp public_6d14fc3
        public_6d14f94 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x7B2
/*FIXUP push offset public_6d6840c @0x6d14fa4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68514 @0x6d14fae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68514
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6d14f69
        public_6d14fbb : nop
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        public_6d14fc3 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x5C]
        je public_6d14fe0
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
        public_6d14fe0 : nop
        mov ecx, dword ptr ds : [public_6d64a44]
        push edx
        push 0x7CB
/*FIXUP push offset public_6d6840c @0x6d14fec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68514 @0x6d14ff6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68514
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d14f10)
    }
}

#undef public_6d14f69
#undef public_6d14f94
#undef public_6d14fbb
#undef public_6d14fc3
#undef public_6d14fe0
