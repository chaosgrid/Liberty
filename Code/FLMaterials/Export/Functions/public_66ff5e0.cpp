#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fe770);

PROC_DECLARE(0x66ff5e0, internal_66ff5e0, public_66ff5e0);
extern "C" NAKED register_t __cdecl internal_66ff5e0()
{
    __asm
    {
        xor eax, eax
        mov al, byte ptr ds : [public_670464c]
        xor ecx, ecx
        mov cl, byte ptr ds : [public_6704648]
        xor edx, edx
        mov dl, byte ptr ds : [public_6704094]
        push eax
        xor eax, eax
        mov al, byte ptr ds : [public_6704644]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        call public_66fe770
        xor eax, eax
        ret 0x14
        UNREACHABLE_TRAP(0x66ff5e0)
    }
}
