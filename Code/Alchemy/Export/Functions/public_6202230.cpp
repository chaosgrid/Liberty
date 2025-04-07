#include "Alchemy-PCH.h"

PROC_DECLARE(0x6202230, internal_6202230, public_6202230);
extern "C" NAKED register_t __cdecl internal_6202230()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp byte ptr ds : [eax], 0
        setne cl
        mov byte ptr ds : [public_6255060], cl
        mov cl, byte ptr ds : [eax+1]
        test cl, cl
        setne dl
        mov byte ptr ds : [public_6255061], dl
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6202230)
    }
}
