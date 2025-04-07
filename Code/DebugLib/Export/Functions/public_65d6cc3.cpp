#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3b40);
CLANG_FORWARD_PROC_SYMBOL(public_65d3d50);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cc3);
CLANG_FORWARD_PROC_SYMBOL(public_65d6d1d);
CLANG_FORWARD_PROC_SYMBOL(public_65d8120);
CLANG_FORWARD_PROC_SYMBOL(public_65d819c);
CLANG_FORWARD_PROC_SYMBOL(public_65d81bb);
CLANG_FORWARD_JUMP_SYMBOL(public_65e019c);

PROC_DECLARE(0x65d6cc3, internal_65d6cc3, public_65d6cc3);
extern "C" NAKED register_t __cdecl internal_65d6cc3()
{
    __asm
    {
        mov eax, public_65e019c
        call public_65d819c
        sub esp, 0x30
        mov al, byte ptr ss : [ebp-0xD]
        push esi
        push 0
        lea ecx, ss:[ebp-0x20]
        mov byte ptr ss : [ebp-0x20], al
        call public_65d3b40
        mov esi, offset public_65e1574
        push esi
        call public_65d8120
        pop ecx
        push eax
        push esi
        lea ecx, ss:[ebp-0x20]
        call public_65d3d50
        and dword ptr ss : [ebp-4], 0
        lea eax, ss:[ebp-0x20]
        push eax
        lea ecx, ss:[ebp-0x3C]
        call public_65d6d1d
        lea eax, ss:[ebp-0x3C]
/*FIXUP push offset public_65e22b0 @0x65d6d0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e22b0
        push eax
        mov dword ptr ss : [ebp-0x3C], offset public_65e1568
        call public_65d81bb
        pop esi
        UNREACHABLE_TRAP(0x65d6cc3)
    }
}
