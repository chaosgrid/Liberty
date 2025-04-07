#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348e10);
CLANG_FORWARD_JUMP_SYMBOL(public_6397c0b);

PROC_DECLARE(0x6348e10, internal_6348e10, public_6348e10);
extern "C" NAKED register_t __cdecl internal_6348e10()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6397c0b @0x6348e18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397c0b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, ecx
        mov dword ptr fs : [0], esp
        lea ecx, ds:[eax+0x14]
        mov dword ptr ds : [eax+0x10], ecx
        xor ecx, ecx
        mov word ptr ds : [eax+0xC], 2
        mov word ptr ds : [eax+0xE], cx
        mov word ptr ds : [eax+0x1C], cx
        mov word ptr ds : [eax+0x1E], cx
        mov dword ptr ds : [eax+0x20], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp]
        and edx, 0xFFFFC008
        or edx, 8
        mov dword ptr ds : [eax], edx
        mov dword ptr fs : [0], ecx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6348e10)
    }
}
