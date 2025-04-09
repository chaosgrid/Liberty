#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5397f0);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_543530);
CLANG_FORWARD_PROC_SYMBOL(public_543750);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_53d55a _public_53d55a
#define public_53d584 _public_53d584
#define public_53d5ad _public_53d5ad
#define public_53d5af _public_53d5af
#define public_53d5fc _public_53d5fc
#define public_53d632 _public_53d632
#define public_53d634 _public_53d634
#define public_53d63e _public_53d63e
#define public_53d66b _public_53d66b
#define public_53d673 _public_53d673

PROC_DECLARE(0x53d500, internal_53d500, public_53d500);
extern "C" NAKED register_t __cdecl internal_53d500()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push edi
        push 1
        push eax
        call public_5416c0
        mov ebp, eax
        add esp, 8
        test ebp, ebp
        je public_53d673
        mov ecx, dword ptr ds : [ebx+4]
        push 2
        push ecx
        call public_5416c0
        mov edi, eax
        add esp, 8
        test edi, edi
        jne public_53d55a
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5df458 @0x53d53b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5df458
        push 0x54E
/*FIXUP push offset public_5dec60 @0x53d545*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dec60
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x53d54f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_53d55a : nop
        cmp dword ptr ds : [edi+0x1C], 2
        je public_53d584
/*FIXUP push offset public_5df430 @0x53d560*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5df430
        push 0x550
/*FIXUP push offset public_5dec60 @0x53d56a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dec60
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x53d574*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_53d584 : nop
        push esi
        call public_54baf0
        test eax, eax
        je public_53d5fc
        add eax, 0xC
        test eax, eax
        je public_53d5ad
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_53d5ad
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_53d5af
        public_53d5ad : nop
        xor eax, eax
        public_53d5af : nop
        mov ecx, eax
        call dword ptr ds : [public_5c62e8]
        mov esi, eax
        test esi, esi
        je public_53d5fc
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x88]
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ss:[esp+0x14]
        lea edx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 3
        mov dword ptr ss : [esp+0x1C], edx
        call dword ptr ds : [eax]
        public_53d5fc : nop
        call public_54baf0
        cmp ebp, eax
        pop esi
        je public_53d63e
        call public_54bb00
        push eax
        mov ecx, ebp
        call public_5397f0
        lea eax, ss:[ebp+0xC]
        test eax, eax
        je public_53d632
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_53d632
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_53d634
        public_53d632 : nop
        xor eax, eax
        public_53d634 : nop
        push 1
        mov ecx, eax
        call dword ptr ds : [public_5c6a54]
        public_53d63e : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x88]
        mov eax, dword ptr ss : [esp+0xC]
        test al, 0x40
        jne public_53d66b
        test ah, 8
        jne public_53d66b
        push edi
        mov ecx, ebp
        call public_543750
        pop edi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 8
        public_53d66b : nop
        push edi
        mov ecx, ebp
        call public_543530
        public_53d673 : nop
        pop edi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x53d500)
    }
}

#undef public_53d55a
#undef public_53d584
#undef public_53d5ad
#undef public_53d5af
#undef public_53d5fc
#undef public_53d632
#undef public_53d634
#undef public_53d63e
#undef public_53d66b
#undef public_53d673
