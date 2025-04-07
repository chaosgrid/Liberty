#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c220);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);

PROC_DECLARE(0x6f4c220, internal_6f4c220, public_6f4c220);
extern "C" NAKED register_t __cdecl internal_6f4c220()
{
    __asm
    {
        push 0x800
        push 0
        call public_6f4fe10
        mov ecx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 0x7F0
        add esp, 8
        mov dword ptr ds : [eax+8], ecx
        ret 
        UNREACHABLE_TRAP(0x6f4c220)
    }
}
