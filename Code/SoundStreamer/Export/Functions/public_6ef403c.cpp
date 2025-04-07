#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2800);
CLANG_FORWARD_PROC_SYMBOL(public_6ef403c);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4096);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4374);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5230);
CLANG_FORWARD_PROC_SYMBOL(public_6ef52ac);
CLANG_FORWARD_PROC_SYMBOL(public_6ef52cb);
CLANG_FORWARD_JUMP_SYMBOL(public_6efbc9c);

PROC_DECLARE(0x6ef403c, internal_6ef403c, public_6ef403c);
extern "C" NAKED register_t __cdecl internal_6ef403c()
{
    __asm
    {
        mov eax, public_6efbc9c
        call public_6ef52ac
        sub esp, 0x30
        mov al, byte ptr ss : [ebp-0xD]
        push esi
        push 0
        lea ecx, ss:[ebp-0x20]
        mov byte ptr ss : [ebp-0x20], al
        call public_6ef2800
        mov esi, offset public_6efc27c
        push esi
        call public_6ef5230
        pop ecx
        push eax
        push esi
        lea ecx, ss:[ebp-0x20]
        call public_6ef4374
        and dword ptr ss : [ebp-4], 0
        lea eax, ss:[ebp-0x20]
        push eax
        lea ecx, ss:[ebp-0x3C]
        call public_6ef4096
        lea eax, ss:[ebp-0x3C]
/*FIXUP push offset public_6efca98 @0x6ef4083*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efca98
        push eax
        mov dword ptr ss : [ebp-0x3C], offset public_6efc270
        call public_6ef52cb
        pop esi
        UNREACHABLE_TRAP(0x6ef403c)
    }
}
