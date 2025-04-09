#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_43bbe0);
CLANG_FORWARD_PROC_SYMBOL(public_45ae90);
CLANG_FORWARD_PROC_SYMBOL(public_4c4810);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);

#define public_45aed9 _public_45aed9
#define public_45afd7 _public_45afd7

PROC_DECLARE(0x45ae90, internal_45ae90, public_45ae90);
extern "C" NAKED register_t __cdecl internal_45ae90()
{
    __asm
    {
        sub esp, 0x84
        push ebx
        push ebp
        push edi
        mov ebp, ecx
        call public_4c4810
        test al, al
        je public_45afd7
        mov ecx, offset public_668708
        mov byte ptr ss : [ebp+0x338], 0
        call public_43bbe0
        mov ebx, eax
        xor edi, edi
        call public_4c4830
        push eax
        call dword ptr ds : [public_5c6094]
        add esp, 4
        test eax, eax
        je public_45aed9
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov edi, eax
        public_45aed9 : nop
        test ebx, ebx
        je public_45afd7
        test edi, edi
        je public_45afd7
        mov ecx, dword ptr ds : [public_67eca8]
        push esi
        push 0x80
        lea eax, ss:[esp+0x18]
        push eax
        push 0x55C
        push ecx
        call public_4347e0
        mov eax, dword ptr ds : [public_6119f8]
        cdq 
        sub eax, edx
        mov edx, dword ptr ds : [public_67eca8]
        sar eax, 1
        push eax
/*FIXUP push offset public_66dc60 @0x45af16*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push ebx
        push edx
        lea esi, ds : [eax*2+public_66dc60]
        call public_4347e0
        mov eax, dword ptr ds : [public_6119f8]
        cdq 
        sub eax, edx
        sar eax, 1
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        push esi
        push edi
        push eax
        call public_4347e0
        push esi
/*FIXUP push offset public_66dc60 @0x45af42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        lea ecx, ss:[esp+0x4C]
        push ecx
/*FIXUP push offset public_66fc60 @0x45af4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70ec]
        add esp, 0x40
/*FIXUP push offset public_66fc60 @0x45af5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_616420]
        mov ecx, dword ptr ss : [ebp+0x32C]
        mov edx, dword ptr ds : [ecx]
        push 0
/*FIXUP push offset public_66fc60 @0x45af6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
/*FIXUP push offset public_66fc60 @0x45af7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71c8]
        fld dword ptr ss : [esp+0x9C]
        fcomp dword ptr ds : [public_5c7474]
        mov dword ptr ss : [esp+0x14], eax
        add esp, 4
        pop esi
        fnstsw ax
        test ah, 0x41
        jne public_45afd7
        fild dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_5ce928]
        fadd dword ptr ss : [ebp+0x330]
        fsubr dword ptr ss : [esp+0x94]
        fst dword ptr ss : [ebp+0x334]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_45afd7
        mov dword ptr ss : [ebp+0x334], 0
        public_45afd7 : nop
        pop edi
        pop ebp
        pop ebx
        add esp, 0x84
        ret 4
        UNREACHABLE_TRAP(0x45ae90)
    }
}

#undef public_45aed9
#undef public_45afd7
