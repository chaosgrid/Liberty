#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_441a40);
CLANG_FORWARD_PROC_SYMBOL(public_4421a0);
CLANG_FORWARD_PROC_SYMBOL(public_477bf0);
CLANG_FORWARD_PROC_SYMBOL(public_55e290);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_4421f8 _public_4421f8

PROC_DECLARE(0x4421a0, internal_4421a0, public_4421a0);
extern "C" NAKED register_t __cdecl internal_4421a0()
{
    __asm
    {
        push esi
/*FIXUP push offset public_5cb548 @0x4421a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb548
        call public_59da10
        add esp, 4
        test eax, eax
        je public_4421f8
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov esi, eax
        test esi, esi
        je public_4421f8
/*FIXUP push offset public_5cb7c4 @0x4421bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7c4
        call public_59da10
        add esp, 4
        lea ecx, ds:[esi+0x32C]
        call public_55e290
        push 1
        mov ecx, esi
        call public_441a40
        mov eax, dword ptr ss : [esp+8]
        push 0
        push 0
        push eax
        mov byte ptr ds : [esi+0x3D5], 1
        call public_477bf0
        add esp, 0xC
        public_4421f8 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4421a0)
    }
}

#undef public_4421f8
