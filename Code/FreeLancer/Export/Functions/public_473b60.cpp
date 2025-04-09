#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_473b60);
CLANG_FORWARD_PROC_SYMBOL(public_4a7690);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);

#define public_473b9d _public_473b9d
#define public_473bb0 _public_473bb0
#define public_473bc3 _public_473bc3
#define public_473bd2 _public_473bd2

PROC_DECLARE(0x473b60, internal_473b60, public_473b60);
extern "C" NAKED register_t __cdecl internal_473b60()
{
    __asm
    {
        push esi
/*FIXUP push offset public_5d0518 @0x473b61*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0518
        call public_59d9c0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_473bd2
        xor eax, eax
        mov al, byte ptr ds : [esi+0x338]
        push eax
        call public_4a7690
        mov eax, dword ptr ds : [esi+0x330]
        add esp, 4
        test eax, eax
        je public_473b9d
        mov ecx, dword ptr ds : [esi+0x334]
        push 0
        push ecx
        call eax
        add esp, 8
        public_473b9d : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_473bc3
        push edi
        nop 
        public_473bb0 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_473bb0
        pop edi
        public_473bc3 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        public_473bd2 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x473b60)
    }
}

#undef public_473b9d
#undef public_473bb0
#undef public_473bc3
#undef public_473bd2
