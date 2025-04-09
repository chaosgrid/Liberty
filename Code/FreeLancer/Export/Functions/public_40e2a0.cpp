#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e2a0);
CLANG_FORWARD_PROC_SYMBOL(public_42e160);

#define public_40e2d8 _public_40e2d8
#define public_40e2e4 _public_40e2e4
#define public_40e2f0 _public_40e2f0
#define public_40e2fa _public_40e2fa

PROC_DECLARE(0x40e2a0, internal_40e2a0, public_40e2a0);
extern "C" NAKED register_t __cdecl internal_40e2a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+0x54]
        test edi, edi
        jle public_40e2fa
        push ebx
        push edi
        lea ecx, ds:[esi+4]
        mov ebx, 0x100002
        call dword ptr ds : [public_5c6044]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x25
/*FIXUP push offset public_5c84cc @0x40e2c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c84cc
/*FIXUP push offset public_5c8468 @0x40e2c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8468
        push ebx
        call dword ptr ds : [eax]
        add esp, 0x18
        test edi, edi
        pop ebx
        jle public_40e2fa
        public_40e2d8 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_40e2e4
        call public_42e160
        public_40e2e4 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_40e2f0
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        public_40e2f0 : nop
        mov ecx, dword ptr ds : [esi+0x54]
        dec ecx
        dec edi
        mov dword ptr ds : [esi+0x54], ecx
        jne public_40e2d8
        public_40e2fa : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x40e2a0)
    }
}

#undef public_40e2d8
#undef public_40e2e4
#undef public_40e2f0
#undef public_40e2fa
