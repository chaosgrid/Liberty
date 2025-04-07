#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634db70);
CLANG_FORWARD_PROC_SYMBOL(public_634dc50);
CLANG_FORWARD_PROC_SYMBOL(public_634dd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391ef0);
CLANG_FORWARD_JUMP_SYMBOL(public_6397f48);

PROC_DECLARE(0x634db70, internal_634db70, public_634db70);
extern "C" NAKED register_t __cdecl internal_634db70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397f48 @0x634db72*/
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
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+8], eax
        or eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_63a55b8
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0xC], eax
/*FIXUP push offset _public_634dc50 @0x634dba3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_634dc50
/*FIXUP push offset _public_634dd00 @0x634dba8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_634dd00
        push 2
        push 0x1C
        lea ecx, ds:[esi+0x18]
        push ecx
        mov dword ptr ss : [esp+0x24], 0
        call public_6391ef0
        mov edx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ss : [esp+8]
        and edx, 0xCFC00000
        or edx, 0xFC00000
        mov dword ptr ds : [esi], offset public_63a55a4
        mov dword ptr ds : [esi+0x14], edx
        mov dword ptr ds : [esi+0x5C], 0
        mov dword ptr ds : [esi+4], 0xFFFF
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x634db70)
    }
}
