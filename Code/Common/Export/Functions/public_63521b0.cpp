#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63521b0);
CLANG_FORWARD_PROC_SYMBOL(public_6362f70);
CLANG_FORWARD_JUMP_SYMBOL(public_6398058);

PROC_DECLARE(0x63521b0, internal_63521b0, public_63521b0);
extern "C" NAKED register_t __cdecl internal_63521b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398058 @0x63521b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398058
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov dword ptr ss : [esp], ecx
        add ecx, 0x20
        mov dword ptr ss : [esp+0xC], 0
        call public_6362f70
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x63521b0)
    }
}
