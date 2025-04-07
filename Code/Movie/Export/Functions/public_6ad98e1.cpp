#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1500);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9768);
CLANG_FORWARD_PROC_SYMBOL(public_6ad98e1);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9a9f);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c54);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c74);
CLANG_FORWARD_JUMP_SYMBOL(public_6ad9ce4);

PROC_DECLARE(0x6ad98e1, internal_6ad98e1, public_6ad98e1);
extern "C" NAKED register_t __cdecl internal_6ad98e1()
{
    __asm
    {
        mov eax, public_6ad9ce4
        call public_6ad9c54
        sub esp, 0x30
        mov al, byte ptr ss : [ebp-0xD]
        push esi
        push 0
        lea ecx, ss:[ebp-0x20]
        mov byte ptr ss : [ebp-0x20], al
        call public_6ac1500
        mov esi, offset public_6adb194
        push esi
        call public_6ad23f0
        pop ecx
        push eax
        push esi
        lea ecx, ss:[ebp-0x20]
        call public_6ad9a9f
        and dword ptr ss : [ebp-4], 0
        lea eax, ss:[ebp-0x20]
        push eax
        lea ecx, ss:[ebp-0x3C]
        call public_6ad9768
        lea eax, ss:[ebp-0x3C]
/*FIXUP push offset public_6adb5a8 @0x6ad9928*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adb5a8
        push eax
        mov dword ptr ss : [ebp-0x3C], offset public_6adb188
        call public_6ad9c74
        UNREACHABLE_TRAP(0x6ad98e1)
    }
}
