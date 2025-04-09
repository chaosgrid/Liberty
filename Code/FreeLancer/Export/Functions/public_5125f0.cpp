#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5125f0);

PROC_DECLARE(0x5125f0, internal_5125f0, public_5125f0);
extern "C" NAKED register_t __cdecl internal_5125f0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax]
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, ecx
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov eax, ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5125f0)
    }
}
