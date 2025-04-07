#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31e60);

PROC_DECLARE(0x6c31e60, internal_6c31e60, public_6c31e60);
extern "C" NAKED register_t __cdecl internal_6c31e60()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov byte ptr ds : [eax+0xC], cl
        ret 
        UNREACHABLE_TRAP(0x6c31e60)
    }
}
