#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3140);

PROC_DECLARE(0x6ac3140, internal_6ac3140, public_6ac3140);
extern "C" NAKED register_t __cdecl internal_6ac3140()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ss : [esp+0x10]
        imul ecx, dword ptr ss : [esp+0x14]
        shl ecx, 2
        mov edx, ecx
        mov eax, 1
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6ac3140)
    }
}
