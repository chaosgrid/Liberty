#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f170d);

PROC_DECLARE(0x66f16e0, internal_66f16e0, public_66f16e0);
extern "C" NAKED register_t __cdecl internal_66f16e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        test eax, eax
        je public_66f170d
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push esi
        push eax
        push edi
        call dword ptr ds : [public_6701034]
        add esp, 0xC
        mov byte ptr ds : [edi+esi-1], 0
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x66f16e0)
    }
}
