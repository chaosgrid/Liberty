#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b50);
CLANG_FORWARD_JUMP_SYMBOL(public_6392fc8);

PROC_DECLARE(0x6285b50, internal_6285b50, public_6285b50);
extern "C" NAKED register_t __cdecl internal_6285b50()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6392fc8 @0x6285b58*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392fc8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        mov eax, ecx
        xor ecx, ecx
        mov word ptr ds : [eax+4], cx
        mov word ptr ds : [eax+6], cx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [eax], offset public_639b60c
        mov dword ptr fs : [0], ecx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6285b50)
    }
}
