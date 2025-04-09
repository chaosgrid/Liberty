#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_42d730);
CLANG_FORWARD_PROC_SYMBOL(public_4a75c0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4810);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_4a7602 _public_4a7602
#define public_4a7662 _public_4a7662

PROC_DECLARE(0x4a75c0, internal_4a75c0, public_4a75c0);
extern "C" NAKED register_t __cdecl internal_4a75c0()
{
    __asm
    {
        mov al, byte ptr ds : [public_67dcc8]
        sub esp, 0xC
        test al, al
        push esi
        jne public_4a7662
        call public_42d730
        test al, al
        jne public_4a7662
        mov al, byte ptr ds : [public_668761]
        test al, al
        jne public_4a7662
        call public_41dd90
        test al, al
        je public_4a7602
        call public_4c4810
        test al, al
        jne public_4a7602
        call public_54baf0
        test eax, eax
        je public_4a7662
/*FIXUP public_4a7602 : nop
        push offset public_5d04d4 @0x4a7602*/
  FIXUP public_4a7602 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d04d4
        call public_59d9c0
        add esp, 4
        test eax, eax
        jne public_4a7662
        push eax
        push eax
/*FIXUP push offset public_5d04d4 @0x4a7615*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d04d4
/*FIXUP push offset public_5d04d4 @0x4a761a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d04d4
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_4a7662
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
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x80]
        public_4a7662 : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4a75c0)
    }
}

#undef public_4a7602
#undef public_4a7662
