#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207490);
CLANG_FORWARD_JUMP_SYMBOL(public_62474fb);

PROC_DECLARE(0x6207490, internal_6207490, public_6207490);
extern "C" NAKED register_t __cdecl internal_6207490()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_62474fb @0x6207498*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62474fb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, ecx
        mov dword ptr fs : [0], esp
        mov dword ptr ds : [eax+4], 4
        xor ecx, ecx
        mov dword ptr ds : [eax+8], offset public_624bb60
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [eax+0x14], 0xFFFFFFFF
        mov dword ptr ds : [eax], offset public_624bb18
        mov dword ptr ds : [eax+0x1C], 1
        mov dword ptr fs : [0], ecx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6207490)
    }
}
