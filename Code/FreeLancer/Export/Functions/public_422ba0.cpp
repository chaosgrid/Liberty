#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422ba0);

PROC_DECLARE(0x422ba0, internal_422ba0, public_422ba0);
extern "C" NAKED register_t __cdecl internal_422ba0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x54], ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov cl, byte ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x50], 0xFFFFFFFF
        mov byte ptr ds : [eax+0x4C], cl
        ret 4
        UNREACHABLE_TRAP(0x422ba0)
    }
}
