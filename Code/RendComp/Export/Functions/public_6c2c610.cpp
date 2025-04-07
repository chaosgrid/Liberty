#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2c610);

PROC_DECLARE(0x6c2c610, internal_6c2c610, public_6c2c610);
extern "C" NAKED register_t __cdecl internal_6c2c610()
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
        UNREACHABLE_TRAP(0x6c2c610)
    }
}
