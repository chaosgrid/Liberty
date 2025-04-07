#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6212e00);
CLANG_FORWARD_JUMP_SYMBOL(public_6247fbb);

PROC_DECLARE(0x6212e00, internal_6212e00, public_6212e00);
extern "C" NAKED register_t __cdecl internal_6212e00()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6247fbb @0x6212e08*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247fbb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, ecx
        mov dword ptr fs : [0], esp
        mov dword ptr ds : [eax+4], 4
        xor ecx, ecx
        mov dword ptr ds : [eax+8], offset public_624bb10
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [eax+0x14], 0xFFFFFFFF
        mov dword ptr ds : [eax], offset public_624c748
        mov dword ptr fs : [0], ecx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6212e00)
    }
}
