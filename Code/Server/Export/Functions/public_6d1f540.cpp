#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a2);

#define public_6d1f584 _public_6d1f584
#define public_6d1f5b4 _public_6d1f5b4
#define public_6d1f5e8 _public_6d1f5e8
#define public_6d1f62c _public_6d1f62c
#define public_6d1f662 _public_6d1f662
#define public_6d1f668 _public_6d1f668

PROC_DECLARE(0x6d1f540, internal_6d1f540, public_6d1f540);
extern "C" NAKED register_t __cdecl internal_6d1f540()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x1000]
        mov ecx, dword ptr ds : [esi+0x1008]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [esi+0x1000]
        mov eax, dword ptr ds : [edx+4]
        test eax, eax
        push edi
        jne public_6d1f5e8
        mov ebx, dword ptr ss : [esp+0x20]
        cmp ebx, 0xFF0
        mov dword ptr ss : [esp+0xC], 0xFF0
        lea eax, ss:[esp+0xC]
        jb public_6d1f584
        lea eax, ss:[esp+0x20]
        public_6d1f584 : nop
        mov edi, dword ptr ds : [eax]
        lea eax, ds:[edi+0x10]
        push eax
        call public_6d60012
        add esp, 4
        test eax, eax
        jne public_6d1f5b4
/*FIXUP push offset public_6d68a58 @0x6d1f596*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68a58
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d64adc]
/*FIXUP push offset public_6d72f1c @0x6d1f5a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72f1c
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_6d601a2
        public_6d1f5b4 : nop
        mov edx, dword ptr ds : [esi+0x1000]
        lea ecx, ds:[eax+ebx+0x10]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [esi+0x1008], ecx
        lea ecx, ds:[eax+edi+0x10]
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [esi+0x100C], ecx
        mov ecx, dword ptr ds : [esi+0x1000]
        mov dword ptr ds : [ecx+4], eax
        jmp public_6d1f662
        public_6d1f5e8 : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x1000], eax
        mov edx, dword ptr ds : [eax+0xC]
        sub edx, eax
        sub edx, 0x10
        cmp edi, edx
        jbe public_6d1f668
        lea eax, ds:[edi+0x10]
        push eax
        call public_6d60012
        add esp, 4
        test eax, eax
        jne public_6d1f62c
/*FIXUP push offset public_6d68a58 @0x6d1f60e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68a58
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d64adc]
/*FIXUP push offset public_6d72f1c @0x6d1f61d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72f1c
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_6d601a2
        public_6d1f62c : nop
        mov edx, dword ptr ds : [esi+0x1000]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+0x1000]
        lea ecx, ds:[eax+edi+0x10]
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [esi+0x100C], ecx
        mov dword ptr ds : [esi+0x1008], ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [esi+0x1000]
        mov dword ptr ds : [edx], eax
        public_6d1f662 : nop
        mov dword ptr ds : [esi+0x1000], eax
        public_6d1f668 : nop
        mov eax, dword ptr ds : [esi+0x1000]
        add eax, 0x10
        pop edi
        mov dword ptr ds : [esi+0x1004], eax
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d1f540)
    }
}

#undef public_6d1f584
#undef public_6d1f5b4
#undef public_6d1f5e8
#undef public_6d1f62c
#undef public_6d1f662
#undef public_6d1f668
