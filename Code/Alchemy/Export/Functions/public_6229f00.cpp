#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6229f00);
CLANG_FORWARD_JUMP_SYMBOL(public_624931b);

PROC_DECLARE(0x6229f00, internal_6229f00, public_6229f00);
extern "C" NAKED register_t __cdecl internal_6229f00()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624931b @0x6229f08*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624931b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, ecx
        mov dword ptr fs : [0], esp
        mov dword ptr ds : [eax+4], 4
        xor ecx, ecx
        mov dword ptr ds : [eax+8], offset public_624bc94
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [eax+0x14], 0xFFFFFFFF
        mov dword ptr ds : [eax], offset public_624bc40
        mov dword ptr ds : [eax+0x28], 1
        mov dword ptr fs : [0], ecx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6229f00)
    }
}
