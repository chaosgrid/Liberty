#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5aa660);

PROC_DECLARE(0x5aa660, internal_5aa660, public_5aa660);
/* CHUNK of public_5a8210 */
extern "C" NAKED register_t __cdecl internal_5aa660()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [ecx+0x1B1], dl
        mov byte ptr ds : [ecx+0x1B0], 1
        ret 8
        UNREACHABLE_TRAP(0x5aa660)
    }
}
