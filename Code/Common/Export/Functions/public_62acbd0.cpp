#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62acbd0);
CLANG_FORWARD_PROC_SYMBOL(public_62afa90);
CLANG_FORWARD_JUMP_SYMBOL(public_6394140);

PROC_DECLARE(0x62acbd0, internal_62acbd0, public_62acbd0);
extern "C" NAKED register_t __cdecl internal_62acbd0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6394140 @0x62acbd8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394140
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        push esi
        push eax
        mov esi, ecx
        call public_62afa90
        mov dword ptr ds : [esi], offset public_639bbbc
        xor eax, eax
        mov dword ptr ds : [esi+0xF0], eax
        mov dword ptr ds : [esi+0xF4], eax
        mov cx, word ptr ds : [public_63a4aa4]
        mov word ptr ds : [esi+0xF8], cx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [esi+0xFC], eax
        mov dword ptr ds : [esi], offset public_639bc6c
        mov eax, esi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62acbd0)
    }
}
