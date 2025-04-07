#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62858e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a2a10);
CLANG_FORWARD_PROC_SYMBOL(public_62af440);
CLANG_FORWARD_JUMP_SYMBOL(public_6393cd8);

PROC_DECLARE(0x62a2a10, internal_62a2a10, public_62a2a10);
extern "C" NAKED register_t __cdecl internal_62a2a10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393cd8 @0x62a2a12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393cd8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_639dc3c
        push 0
        push esi
        mov dword ptr ss : [esp+0x18], 0
        call public_62858e0
        add esp, 8
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_62af440
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62a2a10)
    }
}
