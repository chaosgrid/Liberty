#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345710);
CLANG_FORWARD_PROC_SYMBOL(public_63459c0);

PROC_DECLARE(0x6345710, internal_6345710, public_6345710);
extern "C" NAKED register_t __cdecl internal_6345710()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push eax
        mov eax, dword ptr ds : [ecx+0x18]
        push edx
        mov edx, dword ptr ds : [eax+0xFC]
        mov eax, dword ptr ds : [eax+0xF8]
        push edx
        push eax
        call public_63459c0
        ret 8
        UNREACHABLE_TRAP(0x6345710)
    }
}
