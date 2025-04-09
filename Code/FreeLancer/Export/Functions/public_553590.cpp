#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_430ab0);
CLANG_FORWARD_PROC_SYMBOL(public_553590);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5535df _public_5535df
#define public_5535fb _public_5535fb
#define public_553610 _public_553610
#define public_553634 _public_553634

PROC_DECLARE(0x553590, internal_553590, public_553590);
extern "C" NAKED register_t __cdecl internal_553590()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push esi
        push ebp
        call public_430ab0
        add esp, 4
        test eax, eax
        je public_553634
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push esi
        mov ecx, eax
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_553610
        mov edx, dword ptr ds : [eax]
        push ebx
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [public_679880]
        mov edi, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push 0x10
        mov ebx, eax
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_5535df
        mov edi, eax
        public_5535df : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        pop edi
        pop ebx
        je public_5535fb
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], edx
        public_5535fb : nop
        mov eax, dword ptr ds : [public_679884]
        inc eax
        pop esi
        mov dword ptr ds : [public_679884], eax
        pop ebp
        ret 
        lea esp, ss:[esp]
        public_553610 : nop
        push ebp
        push esi
        push 0x2CC
/*FIXUP push offset public_5e0f00 @0x553617*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0f00
        mov eax, 0x100002
/*FIXUP push offset public_5e0f60 @0x553621*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0f60
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x18
        pop esi
        pop ebp
        ret 
        public_553634 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
        push ebp
        push 0x2D1
/*FIXUP push offset public_5e0f00 @0x553640*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0f00
        mov eax, 0x100002
/*FIXUP push offset public_5e0f30 @0x55364a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0f30
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x553590)
    }
}

#undef public_5535df
#undef public_5535fb
#undef public_553610
#undef public_553634
