#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6282290);

PROC_DECLARE(0x6282290, internal_6282290, public_6282290);
extern "C" NAKED register_t __cdecl internal_6282290()
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
        UNREACHABLE_TRAP(0x6282290)
    }
}
