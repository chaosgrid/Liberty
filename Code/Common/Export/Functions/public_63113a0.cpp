#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

PROC_DECLARE(0x63113a0, internal_63113a0, public_63113a0);
extern "C" NAKED register_t __cdecl internal_63113a0()
{
    __asm
    {
        push esi
        push edi
        push 0x34
        mov esi, ecx
        call public_6391d9c
        add esi, 8
        mov edi, eax
        mov ecx, 0xD
        rep movsd
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 4
        pop edi
        mov dword ptr ds : [ecx], eax
        mov eax, 0x34
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63113a0)
    }
}
