#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d0a10);
CLANG_FORWARD_PROC_SYMBOL(public_62d2020);
CLANG_FORWARD_PROC_SYMBOL(public_62d9b10);
CLANG_FORWARD_JUMP_SYMBOL(public_6394bc8);

PROC_DECLARE(0x62d0a10, internal_62d0a10, public_62d0a10);
extern "C" NAKED register_t __cdecl internal_62d0a10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394bc8 @0x62d0a12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394bc8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+8], esi
        call public_62d2020
        lea ecx, ds:[esi+0x2C]
        mov dword ptr ss : [esp+0x10], 0
        call public_62d9b10
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_639ff9c
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62d0a10)
    }
}
