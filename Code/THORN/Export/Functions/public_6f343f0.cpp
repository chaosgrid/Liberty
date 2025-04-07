#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3440f);

PROC_DECLARE(0x6f343f0, internal_6f343f0, public_6f343f0);
extern "C" NAKED register_t __cdecl internal_6f343f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6f3440f
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6f343f0)
    }
}
