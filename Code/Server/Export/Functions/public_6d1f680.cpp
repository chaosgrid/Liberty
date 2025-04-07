#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f680);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a2);

#define public_6d1f6e3 _public_6d1f6e3
#define public_6d1f713 _public_6d1f713
#define public_6d1f747 _public_6d1f747
#define public_6d1f78a _public_6d1f78a
#define public_6d1f7c0 _public_6d1f7c0
#define public_6d1f7c6 _public_6d1f7c6
#define public_6d1f7de _public_6d1f7de

PROC_DECLARE(0x6d1f680, internal_6d1f680, public_6d1f680);
extern "C" NAKED register_t __cdecl internal_6d1f680()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x1008]
        mov edx, dword ptr ds : [esi+0x100C]
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        lea eax, ds:[ecx+edi]
        cmp eax, edx
        mov dword ptr ds : [esi+0x1008], eax
        jbe public_6d1f7de
        mov ecx, dword ptr ds : [esi+0x1000]
        sub eax, edi
        mov dword ptr ds : [esi+0x1008], eax
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [esi+0x1000]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        mov dword ptr ss : [esp+0xC], edi
        jne public_6d1f747
        cmp edi, 0xFF0
        mov dword ptr ss : [esp+0x2C], 0xFF0
        lea eax, ss:[esp+0x2C]
        jb public_6d1f6e3
        lea eax, ss:[esp+0xC]
        public_6d1f6e3 : nop
        mov ebx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x10]
        push edx
        call public_6d60012
        add esp, 4
        test eax, eax
        jne public_6d1f713
/*FIXUP push offset public_6d68a58 @0x6d1f6f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68a58
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d64adc]
/*FIXUP push offset public_6d72f1c @0x6d1f704*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72f1c
        lea eax, ss:[esp+0x14]
        push eax
        call public_6d601a2
        public_6d1f713 : nop
        mov ecx, dword ptr ds : [esi+0x1000]
        mov dword ptr ds : [eax], ecx
        lea ecx, ds:[eax+edi+0x10]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [esi+0x1008], ecx
        lea ecx, ds:[eax+ebx+0x10]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ds : [esi+0x1000]
        mov dword ptr ds : [esi+0x100C], ecx
        mov dword ptr ds : [edx+4], eax
        jmp public_6d1f7c0
        public_6d1f747 : nop
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x1000], eax
        mov ecx, dword ptr ds : [eax+0xC]
        sub ecx, eax
        sub ecx, 0x10
        cmp edi, ecx
        jbe public_6d1f7c6
        lea edx, ds:[edi+0x10]
        push edx
        call public_6d60012
        add esp, 4
        test eax, eax
        jne public_6d1f78a
/*FIXUP push offset public_6d68a58 @0x6d1f76c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68a58
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6d64adc]
/*FIXUP push offset public_6d72f1c @0x6d1f77b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72f1c
        lea eax, ss:[esp+0x20]
        push eax
        call public_6d601a2
        public_6d1f78a : nop
        mov ecx, dword ptr ds : [esi+0x1000]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x1000]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ds:[eax+edi+0x10]
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [esi+0x100C], ecx
        mov dword ptr ds : [esi+0x1008], ecx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [esi+0x1000]
        mov dword ptr ds : [ecx], eax
        public_6d1f7c0 : nop
        mov dword ptr ds : [esi+0x1000], eax
        public_6d1f7c6 : nop
        mov eax, dword ptr ds : [esi+0x1000]
        add eax, 0x10
        pop edi
        mov dword ptr ds : [esi+0x1004], eax
        pop esi
        pop ebx
        add esp, 0x1C
        ret 4
        public_6d1f7de : nop
        pop edi
        pop esi
        mov eax, ecx
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6d1f680)
    }
}

#undef public_6d1f6e3
#undef public_6d1f713
#undef public_6d1f747
#undef public_6d1f78a
#undef public_6d1f7c0
#undef public_6d1f7c6
#undef public_6d1f7de
