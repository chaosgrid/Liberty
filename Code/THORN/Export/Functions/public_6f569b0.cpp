#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4afe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b960);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f760);
CLANG_FORWARD_PROC_SYMBOL(public_6f569b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f56a10);

PROC_DECLARE(0x6f569b0, internal_6f569b0, public_6f569b0);
extern "C" NAKED register_t __cdecl internal_6f569b0()
{
    __asm
    {
        push 0x17
/*FIXUP push offset public_6f61a38 @0x6f569b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61a38
        call public_6f4f760
        push 0
/*FIXUP push offset _public_6f56a10 @0x6f569be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f56a10
        call public_6f4b7c0
        push 0
        push 0
        call public_6f4b6f0
        add esp, 0x18
/*FIXUP push offset public_6f60740 @0x6f569d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60740
        call public_6f4afe0
        push eax
        call public_6f4b960
        add esp, 4
        push eax
        call public_6f4b1f0
        push 0x400921FB
        push 0x54442D18
        call public_6f4b6f0
/*FIXUP push offset public_6f61b94 @0x6f569fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61b94
        call public_6f4b3b0
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f569b0)
    }
}
