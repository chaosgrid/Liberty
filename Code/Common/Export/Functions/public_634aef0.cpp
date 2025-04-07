#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348be0);
CLANG_FORWARD_PROC_SYMBOL(public_634aef0);
CLANG_FORWARD_PROC_SYMBOL(public_6352580);
CLANG_FORWARD_PROC_SYMBOL(public_635d4d0);
CLANG_FORWARD_JUMP_SYMBOL(public_6397c58);

PROC_DECLARE(0x634aef0, internal_634aef0, public_634aef0);
extern "C" NAKED register_t __cdecl internal_634aef0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397c58 @0x634aef2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397c58
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        xor eax, eax
        push esi
        mov esi, ecx
        mov word ptr ss : [esp+8], ax
        mov word ptr ss : [esp+0xA], ax
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov dword ptr ss : [esp+8], eax
        call public_635d4d0
        push eax
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        call public_6352580
        lea ecx, ss:[esp+4]
        mov esi, eax
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_6348be0
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x634aef0)
    }
}
