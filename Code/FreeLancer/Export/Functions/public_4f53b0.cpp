#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f53b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf349);

PROC_DECLARE(0x4f53b0, internal_4f53b0, public_4f53b0);
extern "C" NAKED register_t __cdecl internal_4f53b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf349 @0x4f53b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf349
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax+8], dl
        mov dl, byte ptr ss : [esp+3]
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov byte ptr ds : [eax+0x18], dl
        mov dword ptr ds : [eax+0x28], ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4f53b0)
    }
}
