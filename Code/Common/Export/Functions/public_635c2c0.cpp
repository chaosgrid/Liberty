#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635c2c0);
CLANG_FORWARD_JUMP_SYMBOL(public_639820b);

PROC_DECLARE(0x635c2c0, internal_635c2c0, public_635c2c0);
extern "C" NAKED register_t __cdecl internal_635c2c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639820b @0x635c2c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639820b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr fs : [0], esp
        mov word ptr ds : [eax+0x18], cx
        mov word ptr ds : [eax+0x1A], cx
        mov dword ptr ds : [eax+0x1C], ecx
        mov word ptr ds : [eax+0x20], cx
        mov word ptr ds : [eax+0x22], cx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr fs : [0], ecx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x635c2c0)
    }
}
