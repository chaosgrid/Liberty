#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac5b0);

PROC_DECLARE(0x6eac5b0, internal_6eac5b0, public_6eac5b0);
extern "C" NAKED register_t __cdecl internal_6eac5b0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x30], ecx
        ret 
        UNREACHABLE_TRAP(0x6eac5b0)
    }
}
