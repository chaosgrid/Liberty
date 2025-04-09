#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_45b1c0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);

#define public_45b1f0 _public_45b1f0
#define public_45b2a5 _public_45b2a5

PROC_DECLARE(0x45b1c0, internal_45b1c0, public_45b1c0);
extern "C" NAKED register_t __cdecl internal_45b1c0()
{
    __asm
    {
        sub esp, 0x80
        push ebx
        push ebp
        push edi
        mov edi, ecx
        mov byte ptr ds : [edi+0x338], 0
        xor ebx, ebx
        call public_4c4830
        push eax
        call dword ptr ds : [public_5c6094]
        add esp, 4
        test eax, eax
        je public_45b1f0
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ebx, eax
        public_45b1f0 : nop
        mov ebp, dword ptr ss : [esp+0x90]
        test ebp, ebp
        je public_45b2a5
        test ebx, ebx
        je public_45b2a5
        mov ecx, dword ptr ds : [public_67eca8]
        push esi
        push 0x80
        lea eax, ss:[esp+0x14]
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
/*FIXUP push offset public_66dc60 @0x45b234*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push ebp
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
        push ebx
        push eax
        call public_4347e0
        push esi
/*FIXUP push offset public_66dc60 @0x45b260*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        lea ecx, ss:[esp+0x48]
        push ecx
/*FIXUP push offset public_66fc60 @0x45b26a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70ec]
        add esp, 0x40
/*FIXUP push offset public_66fc60 @0x45b278*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_616420]
        mov ecx, dword ptr ds : [edi+0x32C]
        mov edx, dword ptr ds : [ecx]
        push 0
/*FIXUP push offset public_66fc60 @0x45b28d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov dword ptr ds : [edi+0x334], 0x40000000
        pop esi
        public_45b2a5 : nop
        pop edi
        pop ebp
        pop ebx
        add esp, 0x80
        ret 4
        UNREACHABLE_TRAP(0x45b1c0)
    }
}

#undef public_45b1f0
#undef public_45b2a5
