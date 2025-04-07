#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fe770);

PROC_DECLARE(0x66fe730, internal_66fe730, public_66fe730);
extern "C" NAKED register_t __cdecl internal_66fe730()
{
    __asm
    {
        xor eax, eax
        mov al, byte ptr ds : [public_670406c]
        xor ecx, ecx
        mov cl, byte ptr ds : [public_6704068]
        xor edx, edx
        mov dl, byte ptr ds : [public_670463c]
        push eax
        xor eax, eax
        mov al, byte ptr ds : [public_6704064]
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
        UNREACHABLE_TRAP(0x66fe730)
    }
}
