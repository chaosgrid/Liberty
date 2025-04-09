#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420fb0);

PROC_DECLARE(0x420fb0, internal_420fb0, public_420fb0);
extern "C" NAKED register_t __cdecl internal_420fb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x90]
        ret 
        UNREACHABLE_TRAP(0x420fb0)
    }
}
