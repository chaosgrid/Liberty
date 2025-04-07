#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6291d50);
CLANG_FORWARD_PROC_SYMBOL(public_6343120);
CLANG_FORWARD_JUMP_SYMBOL(public_6392fa8);

PROC_DECLARE(0x6285aa0, internal_6285aa0, public_6285aa0);
extern "C" NAKED register_t __cdecl internal_6285aa0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392fa8 @0x6285aa2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392fa8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0xD0]
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_639ba38
        mov dword ptr ds : [ecx], offset public_639ba2c
        mov dword ptr ss : [esp+0x10], 0
        call public_6291d50
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_6343120
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6285aa0)
    }
}
