#include "Common-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6393a48);

PROC_DECLARE(0x629db80, internal_629db80, public_629db80);
extern "C" NAKED register_t __cdecl internal_629db80()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6393a48 @0x629db88*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393a48
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        mov dword ptr ds : [eax], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr fs : [0], ecx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x629db80)
    }
}
