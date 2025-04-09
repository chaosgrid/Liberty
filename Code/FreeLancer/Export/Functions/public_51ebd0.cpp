#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51ebd0);

PROC_DECLARE(0x51ebd0, internal_51ebd0, public_51ebd0);
extern "C" NAKED register_t __cdecl internal_51ebd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0xF8], 1
        mov dword ptr ds : [ecx+0xFC], eax
        mov dword ptr ds : [ecx+0x100], 0x3DCCCCCD
        ret 4
        UNREACHABLE_TRAP(0x51ebd0)
    }
}
