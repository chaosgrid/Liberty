#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10005480);

PROC_DECLARE(0x10005480, internal_10005480, public_10005480);
extern "C" NAKED register_t __cdecl internal_10005480()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x28]
        push ecx
        call dword ptr ds : [eax+0x24]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x10005480)
    }
}
