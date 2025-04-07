#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecd320);

PROC_DECLARE(0x6ecd320, internal_6ecd320, public_6ecd320);
extern "C" NAKED register_t __cdecl internal_6ecd320()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        xor edx, edx
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+0xC], edx
        push esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        mov esi, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], esi
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+0xC], edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ecd320)
    }
}
