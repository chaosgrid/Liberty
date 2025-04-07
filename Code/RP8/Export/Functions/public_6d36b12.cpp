#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d36b12);

PROC_DECLARE(0x6d36b12, internal_6d36b12, public_6d36b12);
extern "C" NAKED register_t __cdecl internal_6d36b12()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x6d36b12)
    }
}
