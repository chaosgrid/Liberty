#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51a120);

PROC_DECLARE(0x51a120, internal_51a120, public_51a120);
extern "C" NAKED register_t __cdecl internal_51a120()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x10], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+0x1C], eax
        ret 4
        UNREACHABLE_TRAP(0x51a120)
    }
}
