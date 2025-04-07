#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e9b0);
CLANG_FORWARD_PROC_SYMBOL(public_41910a);
CLANG_FORWARD_JUMP_SYMBOL(public_41a358);

PROC_DECLARE(0x40e9b0, internal_40e9b0, public_40e9b0);
extern "C" NAKED register_t __cdecl internal_40e9b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a358 @0x40e9b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a358
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_41daa4
        mov dword ptr ss : [esp+0x10], 0
        call public_41910a
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_41da90
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x40e9b0)
    }
}
