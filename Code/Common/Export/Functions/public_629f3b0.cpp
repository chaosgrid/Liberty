#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629adb0);
CLANG_FORWARD_PROC_SYMBOL(public_629af40);
CLANG_FORWARD_PROC_SYMBOL(public_629f3b0);
CLANG_FORWARD_JUMP_SYMBOL(public_6393b98);

PROC_DECLARE(0x629f3b0, internal_629f3b0, public_629f3b0);
extern "C" NAKED register_t __cdecl internal_629f3b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393b98 @0x629f3b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393b98
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_639ca64
        mov dword ptr ss : [esp+0x10], 0
        call public_629af40
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_639ca04
        call public_629adb0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x629f3b0)
    }
}
