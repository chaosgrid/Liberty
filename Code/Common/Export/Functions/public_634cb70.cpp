#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634cb70);

PROC_DECLARE(0x634cb70, internal_634cb70, public_634cb70);
/* CHUNK of public_634cc30 */
extern "C" NAKED register_t __cdecl internal_634cb70()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov word ptr ds : [eax+4], cx
        mov word ptr ds : [eax+6], cx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], ecx
        ret 
        UNREACHABLE_TRAP(0x634cb70)
    }
}
