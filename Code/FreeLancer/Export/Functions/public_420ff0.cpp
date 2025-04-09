#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420ff0);

PROC_DECLARE(0x420ff0, internal_420ff0, public_420ff0);
extern "C" NAKED register_t __cdecl internal_420ff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x98]
        ret 
        UNREACHABLE_TRAP(0x420ff0)
    }
}
