#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634b600);
CLANG_FORWARD_JUMP_SYMBOL(public_6397ca4);

PROC_DECLARE(0x634b600, internal_634b600, public_634b600);
extern "C" NAKED register_t __cdecl internal_634b600()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6397ca4 @0x634b608*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397ca4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        mov eax, ecx
        mov dword ptr ds : [eax+8], offset public_63a5500
        mov dword ptr ds : [eax+0x10], offset public_63a54e4
        xor ecx, ecx
        mov word ptr ds : [eax+0x24], cx
        mov word ptr ds : [eax+0x26], cx
        mov dword ptr ds : [eax+0x28], ecx
        mov word ptr ds : [eax+0x2C], cx
        mov word ptr ds : [eax+0x2E], cx
        mov dword ptr ds : [eax+0x30], ecx
        mov edx, dword ptr ss : [esp+0x10]
        mov word ptr ds : [eax+0x34], cx
        mov word ptr ds : [eax+0x36], cx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [eax+0x44]
        mov dword ptr ds : [eax+0x20], ecx
        mov word ptr ds : [eax+0x3C], cx
        mov word ptr ds : [eax+0x3E], cx
        mov ecx, dword ptr ss : [esp]
        and edx, 0xFFFFFF00
        mov dword ptr ds : [eax], offset public_63a54c8
        mov dword ptr ds : [eax+0x44], edx
        mov dword ptr ds : [eax+0xC], eax
        mov dword ptr ds : [eax+0x14], eax
        mov dword ptr fs : [0], ecx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x634b600)
    }
}
