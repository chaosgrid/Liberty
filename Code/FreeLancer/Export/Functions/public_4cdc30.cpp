#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cdc30);

PROC_DECLARE(0x4cdc30, internal_4cdc30, public_4cdc30);
extern "C" NAKED register_t __cdecl internal_4cdc30()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x84], 1
        mov dword ptr ds : [eax+0x88], ecx
        mov dword ptr ds : [eax+0x90], ecx
        ret 
        UNREACHABLE_TRAP(0x4cdc30)
    }
}
