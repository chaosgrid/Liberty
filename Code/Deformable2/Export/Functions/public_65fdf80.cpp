#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fdf80);

PROC_DECLARE(0x65fdf80, internal_65fdf80, public_65fdf80);
extern "C" NAKED register_t __cdecl internal_65fdf80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 0xC
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65fdf80)
    }
}
