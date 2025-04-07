#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c29b0);
CLANG_FORWARD_JUMP_SYMBOL(public_6394a30);

PROC_DECLARE(0x62c29b0, internal_62c29b0, public_62c29b0);
extern "C" NAKED register_t __cdecl internal_62c29b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6394a30 @0x62c29b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394a30
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr fs : [0], esp
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr fs : [0], ecx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62c29b0)
    }
}
