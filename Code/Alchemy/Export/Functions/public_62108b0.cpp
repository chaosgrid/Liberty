#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62108b0);
CLANG_FORWARD_JUMP_SYMBOL(public_6247c9b);

PROC_DECLARE(0x62108b0, internal_62108b0, public_62108b0);
extern "C" NAKED register_t __cdecl internal_62108b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6247c9b @0x62108b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247c9b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, ecx
        mov dword ptr fs : [0], esp
        mov dword ptr ds : [eax+4], 4
        xor ecx, ecx
        mov dword ptr ds : [eax+8], offset public_624bbb4
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [eax+0x14], 0xFFFFFFFF
        mov dword ptr ds : [eax], offset public_624c3c0
        mov dword ptr fs : [0], ecx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62108b0)
    }
}
