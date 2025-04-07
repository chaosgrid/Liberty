#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3554f);

PROC_DECLARE(0x6f35530, internal_6f35530, public_6f35530);
extern "C" NAKED register_t __cdecl internal_6f35530()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6f3554f
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call dword ptr ds : [edx+8]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6f35530)
    }
}
