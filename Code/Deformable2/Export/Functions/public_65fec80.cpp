#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fecad);

PROC_DECLARE(0x65fec80, internal_65fec80, public_65fec80);
extern "C" NAKED register_t __cdecl internal_65fec80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        test eax, eax
        je public_65fecad
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push esi
        push eax
        push edi
        call dword ptr ds : [public_6601028]
        add esp, 0xC
        mov byte ptr ds : [edi+esi-1], 0
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x65fec80)
    }
}
