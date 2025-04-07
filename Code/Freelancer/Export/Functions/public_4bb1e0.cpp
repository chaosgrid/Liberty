#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bb1e0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd3d8);

#define public_4bb24a _public_4bb24a

PROC_DECLARE(0x4bb1e0, internal_4bb1e0, public_4bb1e0);
extern "C" NAKED register_t __cdecl internal_4bb1e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd3d8 @0x4bb1e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd3d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5d5a8c
        mov dword ptr ds : [esi+0x7C], offset public_5d5a80
        mov eax, dword ptr ds : [public_67232c]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ds : [public_672400], 0
        jne public_4bb24a
/*FIXUP push offset public_5d5a14 @0x4bb225*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a14
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_4bb24a
        push eax
        push eax
/*FIXUP push offset public_5d5a14 @0x4bb238*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a14
/*FIXUP push offset public_5d5a14 @0x4bb23d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a14
        call public_59db20
        add esp, 0x10
        public_4bb24a : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4bb1e0)
    }
}

#undef public_4bb24a
