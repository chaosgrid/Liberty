#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d47f0);

PROC_DECLARE(0x4d47f0, internal_4d47f0, public_4d47f0);
extern "C" NAKED register_t __cdecl internal_4d47f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [eax+4], edx
        mov esi, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [ecx+8], esi
        mov dword ptr ds : [eax+8], edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4d47f0)
    }
}
