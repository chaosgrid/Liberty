#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d94b0);
CLANG_FORWARD_JUMP_SYMBOL(public_6395288);

PROC_DECLARE(0x62d94b0, internal_62d94b0, public_62d94b0);
extern "C" NAKED register_t __cdecl internal_62d94b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6395288 @0x62d94b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395288
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr fs : [0], esp
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [eax+0x10], cl
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [eax], offset public_63a0524
        mov dword ptr fs : [0], ecx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62d94b0)
    }
}
