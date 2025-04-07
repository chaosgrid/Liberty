#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63605e0);
CLANG_FORWARD_JUMP_SYMBOL(public_639831b);

PROC_DECLARE(0x63605e0, internal_63605e0, public_63605e0);
extern "C" NAKED register_t __cdecl internal_63605e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639831b @0x63605e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639831b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr fs : [0], esp
        mov word ptr ds : [eax+4], cx
        mov word ptr ds : [eax+6], cx
        mov dword ptr ds : [eax+8], ecx
        mov word ptr ds : [eax+0xC], cx
        mov word ptr ds : [eax+0xE], cx
        mov dword ptr ds : [eax+0x10], ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [eax], 1
        mov dword ptr ds : [eax+0x1C], 0x3F800000
        mov dword ptr ds : [eax+0x18], 1
        mov dword ptr fs : [0], ecx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x63605e0)
    }
}
