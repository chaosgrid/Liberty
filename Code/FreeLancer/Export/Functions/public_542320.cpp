#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_542320);

PROC_DECLARE(0x542320, internal_542320, public_542320);
/* CHUNK of public_540a80 */
extern "C" NAKED register_t __cdecl internal_542320()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        ret 
        UNREACHABLE_TRAP(0x542320)
    }
}
