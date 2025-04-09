#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421070);

PROC_DECLARE(0x421070, internal_421070, public_421070);
extern "C" NAKED register_t __cdecl internal_421070()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x6C]
        ret 
        UNREACHABLE_TRAP(0x421070)
    }
}
