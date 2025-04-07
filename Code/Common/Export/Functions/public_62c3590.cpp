#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c3590);

PROC_DECLARE(0x62c3590, internal_62c3590, public_62c3590);
extern "C" NAKED register_t __cdecl internal_62c3590()
{
    __asm
    {
        push esi
        mov eax, ecx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        lea esi, ds:[eax+0x2F4]
        mov ecx, 0xB
        rep movsd
        mov al, byte ptr ds : [eax+0x28]
        shr al, 1
        pop edi
        and al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c3590)
    }
}
