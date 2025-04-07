#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6217eb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6248398);

PROC_DECLARE(0x6217dc0, internal_6217dc0, public_6217dc0);
extern "C" NAKED register_t __cdecl internal_6217dc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248398 @0x6217dc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248398
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        xor eax, eax
        push esi
        mov dword ptr ss : [esp+4], eax
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push esi
        call public_6217eb0
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6217dc0)
    }
}
