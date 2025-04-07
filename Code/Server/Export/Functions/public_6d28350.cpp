#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d28350);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a2);

#define public_6d283c1 _public_6d283c1
#define public_6d283f6 _public_6d283f6
#define public_6d28438 _public_6d28438
#define public_6d2846d _public_6d2846d
#define public_6d28473 _public_6d28473
#define public_6d28484 _public_6d28484
#define public_6d28486 _public_6d28486
#define public_6d28499 _public_6d28499

PROC_DECLARE(0x6d28350, internal_6d28350, public_6d28350);
extern "C" NAKED register_t __cdecl internal_6d28350()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x1008]
        mov edx, dword ptr ds : [esi+0x100C]
        lea eax, ds:[ecx+0x20]
        cmp eax, edx
        mov dword ptr ds : [esi+0x1008], eax
        jbe public_6d28484
        mov ecx, dword ptr ds : [esi+0x1000]
        add eax, 0xFFFFFFE0
        mov dword ptr ds : [esi+0x1008], eax
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [esi+0x1000]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_6d283f6
        push 0x1000
        call public_6d60012
        add esp, 4
        test eax, eax
        jne public_6d283c1
/*FIXUP push offset public_6d68a58 @0x6d283a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68a58
        lea ecx, ss:[esp+8]
        call dword ptr ds : [public_6d64adc]
/*FIXUP push offset public_6d72f1c @0x6d283b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72f1c
        lea edx, ss:[esp+8]
        push edx
        call public_6d601a2
        public_6d283c1 : nop
        mov ecx, dword ptr ds : [esi+0x1000]
        mov dword ptr ds : [eax], ecx
        lea ecx, ds:[eax+0x30]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [esi+0x1008], ecx
        lea ecx, ds:[eax+0x1000]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ds : [esi+0x1000]
        mov dword ptr ds : [esi+0x100C], ecx
        mov dword ptr ds : [edx+4], eax
        jmp public_6d2846d
        public_6d283f6 : nop
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x1000], eax
        mov ecx, dword ptr ds : [eax+0xC]
        sub ecx, eax
        sub ecx, 0x10
        cmp ecx, 0x20
        jae public_6d28473
        push 0x30
        call public_6d60012
        add esp, 4
        test eax, eax
        jne public_6d28438
/*FIXUP push offset public_6d68a58 @0x6d2841a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68a58
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d64adc]
/*FIXUP push offset public_6d72f1c @0x6d28429*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72f1c
        lea edx, ss:[esp+0x14]
        push edx
        call public_6d601a2
        public_6d28438 : nop
        mov ecx, dword ptr ds : [esi+0x1000]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x1000]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ds:[eax+0x30]
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [esi+0x100C], ecx
        mov dword ptr ds : [esi+0x1008], ecx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [esi+0x1000]
        mov dword ptr ds : [ecx], eax
        public_6d2846d : nop
        mov dword ptr ds : [esi+0x1000], eax
        public_6d28473 : nop
        mov eax, dword ptr ds : [esi+0x1000]
        add eax, 0x10
        mov dword ptr ds : [esi+0x1004], eax
        jmp public_6d28486
        public_6d28484 : nop
        mov eax, ecx
        public_6d28486 : nop
        test eax, eax
        je public_6d28499
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov ecx, 8
        mov edi, eax
        rep movsd
        pop edi
        public_6d28499 : nop
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6d28350)
    }
}

#undef public_6d283c1
#undef public_6d283f6
#undef public_6d28438
#undef public_6d2846d
#undef public_6d28473
#undef public_6d28484
#undef public_6d28486
#undef public_6d28499
