#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d04ce0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61128);

PROC_DECLARE(0x6d04ce0, internal_6d04ce0, public_6d04ce0);
extern "C" NAKED register_t __cdecl internal_6d04ce0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61128 @0x6d04ce2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61128
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi-0xC], offset public_6d67aec
        mov dword ptr ds : [esi-8], offset public_6d67a6c
        mov dword ptr ds : [esi], offset public_6d67a60
        mov dword ptr ds : [esi+0x54], offset public_6d67a54
        mov eax, dword ptr ds : [esi+0x58]
        push eax
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [public_6d64440]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0x58], 0
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_6cee4a0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d04ce0)
    }
}
