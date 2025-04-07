#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_473ad0);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_473b45 _public_473b45
#define public_473b4f _public_473b4f

PROC_DECLARE(0x473ad0, internal_473ad0, public_473ad0);
extern "C" NAKED register_t __cdecl internal_473ad0()
{
    __asm
    {
        sub esp, 0xC
        push esi
/*FIXUP push offset public_5d0518 @0x473ad4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0518
        call public_59d9c0
        add esp, 4
        test eax, eax
        jne public_473b4f
        push eax
        push eax
/*FIXUP push offset public_5d0518 @0x473ae7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0518
/*FIXUP push offset public_5d0518 @0x473aec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0518
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_473b4f
        mov eax, dword ptr ds : [esi]
        push 0
        lea ecx, ss:[esp+8]
        push ecx
        push 0x42
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x33C]
        test ecx, ecx
        je public_473b45
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        public_473b45 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x80]
        public_473b4f : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x473ad0)
    }
}

#undef public_473b45
#undef public_473b4f
