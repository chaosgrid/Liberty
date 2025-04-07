#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb4b50);
CLANG_FORWARD_PROC_SYMBOL(public_6f01c70);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa1f8);

PROC_DECLARE(0x6eb4b50, internal_6eb4b50, public_6eb4b50);
extern "C" NAKED register_t __cdecl internal_6eb4b50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa1f8 @0x6eb4b52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa1f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_6fb4618
        mov dword ptr ss : [esp+0x10], 0
        call public_6f01c70
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_6fb385c
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6eb4b50)
    }
}
