#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634dc50);
CLANG_FORWARD_PROC_SYMBOL(public_634dca0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);
CLANG_FORWARD_JUMP_SYMBOL(public_6397f48);

PROC_DECLARE(0x634dca0, internal_634dca0, public_634dca0);
extern "C" NAKED register_t __cdecl internal_634dca0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397f48 @0x634dca2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397f48
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_63a55a4
/*FIXUP push offset _public_634dc50 @0x634dcc3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_634dc50
        push 2
        push 0x1C
        lea eax, ds:[esi+0x18]
        push eax
        mov dword ptr ss : [esp+0x20], 0
        call public_6391dfc
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_63a55b8
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x634dca0)
    }
}
