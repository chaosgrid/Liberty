#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f310a0);

PROC_DECLARE(0x6f310a0, internal_6f310a0, public_6f310a0);
extern "C" NAKED register_t __cdecl internal_6f310a0()
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
        UNREACHABLE_TRAP(0x6f310a0)
    }
}
