#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6319370);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

PROC_DECLARE(0x6319370, internal_6319370, public_6319370);
extern "C" NAKED register_t __cdecl internal_6319370()
{
    __asm
    {
        push 0x64
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x60], dl
        mov byte ptr ds : [eax+0x61], 0
        ret 8
        UNREACHABLE_TRAP(0x6319370)
    }
}
