#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb4ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6f01d70);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa1f8);

PROC_DECLARE(0x6eb4ad0, internal_6eb4ad0, public_6eb4ad0);
extern "C" NAKED register_t __cdecl internal_6eb4ad0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa1f8 @0x6eb4ad2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa1f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_6fb385c
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6fb4620 @0x6eb4af9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4620
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi], offset public_6fb4618
        call public_6f01d70
        mov ecx, dword ptr ss : [esp+0xC]
        add esp, 4
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6eb4ad0)
    }
}
