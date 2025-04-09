#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404d50);
CLANG_FORWARD_PROC_SYMBOL(public_404d90);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_5135b0);
CLANG_FORWARD_PROC_SYMBOL(public_5137c0);
CLANG_FORWARD_PROC_SYMBOL(public_5139d0);
CLANG_FORWARD_PROC_SYMBOL(public_513b40);
CLANG_FORWARD_PROC_SYMBOL(public_514f20);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_5379b0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_513627 _public_513627
#define public_513636 _public_513636
#define public_51365b _public_51365b
#define public_513671 _public_513671
#define public_5136b3 _public_5136b3
#define public_5136c7 _public_5136c7
#define public_5136e3 _public_5136e3
#define public_513725 _public_513725
#define public_513739 _public_513739
#define public_513740 _public_513740
#define public_513746 _public_513746
#define public_513752 _public_513752
#define public_513762 _public_513762
#define public_51377d _public_51377d
#define public_51377f _public_51377f
#define public_5137b4 _public_5137b4

PROC_DECLARE(0x5135b0, internal_5135b0, public_5135b0);
extern "C" NAKED register_t __cdecl internal_5135b0()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push esi
        push edi
        call public_54baf0
        mov edi, eax
        test edi, edi
        je public_513740
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_513740
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_513740
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_513740
        call dword ptr ds : [public_5c64a0]
        test al, al
        jne public_513740
        mov al, byte ptr ds : [edi+0x184]
        mov bl, 0x80
        test bl, al
        je public_513740
        push ebp
        mov ebp, dword ptr ds : [edi+0x160]
        test ebp, ebp
        je public_51365b
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [ecx]
        cmp ecx, esi
        je public_513636
        public_513627 : nop
        cmp dword ptr ds : [esi+8], eax
        je public_513752
        mov esi, dword ptr ds : [esi]
        cmp ecx, esi
        jne public_513627
        public_513636 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5db7c8 @0x51363c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db7c8
        push 0x367
/*FIXUP push offset public_5db798 @0x513646*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db798
        mov eax, 0x100001
/*FIXUP push offset public_5c862c @0x513650*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c862c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_51365b : nop
        mov ecx, dword ptr ds : [edi+0x16C]
        test ecx, ecx
        lea esi, ds:[edi+0x164]
        pop ebp
        je public_513671
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_513671 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_5136b3
        lea ecx, ss:[esp+0x10]
        call public_4215b0
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov eax, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        call dword ptr ds : [eax+0x94]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        public_5136b3 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_5136c7
        call public_5379b0
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        public_5136c7 : nop
        mov ecx, esi
        call public_502d90
        mov ecx, dword ptr ds : [edi+0x17C]
        test ecx, ecx
        lea esi, ds:[edi+0x174]
        je public_5136e3
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_5136e3 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_513725
        lea ecx, ss:[esp+0x10]
        call public_4215b0
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov edx, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        call dword ptr ds : [edx+0x94]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_513725 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_513739
        call public_5379b0
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_513739 : nop
        mov ecx, esi
        call public_502d90
        public_513740 : nop
        mov ebx, dword ptr ss : [esp+0x44]
        xor esi, esi
        public_513746 : nop
        test esi, esi
        jne public_51377d
        mov esi, dword ptr ds : [public_6751c0]
        jmp public_51377f
        public_513752 : nop
        test byte ptr ds : [edi+0x184], bl
        je public_513762
        push edi
        mov ecx, ebp
        call public_514f20
        public_513762 : nop
        push edi
        mov ecx, ebp
        call public_5139d0
        push esi
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[ebp+8]
        call public_516f70
        jmp public_51365b
        public_51377d : nop
        mov esi, dword ptr ds : [esi]
        public_51377f : nop
        test esi, esi
        je public_5137b4
        push ebx
        mov ecx, esi
        call public_513b40
        test al, al
        jne public_513746
        mov edi, esi
        mov esi, dword ptr ds : [esi]
        push edi
        mov ecx, offset public_6751c0
        call public_404d90
        push 0
        push edi
        mov ecx, offset public_6751b4
        call public_404d50
        mov ecx, edi
        call public_5137c0
        jmp public_513746
        public_5137b4 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x5135b0)
    }
}

#undef public_513627
#undef public_513636
#undef public_51365b
#undef public_513671
#undef public_5136b3
#undef public_5136c7
#undef public_5136e3
#undef public_513725
#undef public_513739
#undef public_513740
#undef public_513746
#undef public_513752
#undef public_513762
#undef public_51377d
#undef public_51377f
#undef public_5137b4
