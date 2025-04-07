#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207c40);
CLANG_FORWARD_JUMP_SYMBOL(public_624756b);

PROC_DECLARE(0x6207c40, internal_6207c40, public_6207c40);
extern "C" NAKED register_t __cdecl internal_6207c40()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624756b @0x6207c48*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624756b
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
        mov dword ptr ds : [eax], offset public_624bb68
        mov dword ptr ds : [eax+0x1C], 1
        mov dword ptr fs : [0], ecx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6207c40)
    }
}
