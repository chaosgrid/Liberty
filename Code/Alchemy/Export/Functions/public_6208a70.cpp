#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208a70);

PROC_DECLARE(0x6208a70, internal_6208a70, public_6208a70);
extern "C" NAKED register_t __cdecl internal_6208a70()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov edx, eax
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        pop esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0xC], edx
        ret 8
        UNREACHABLE_TRAP(0x6208a70)
    }
}
