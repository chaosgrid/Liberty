#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6618740);

PROC_DECLARE(0x6618740, internal_6618740, public_6618740);
extern "C" NAKED register_t __cdecl internal_6618740()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        push esi
        xor ecx, ecx
        mov esi, dword ptr ds : [edx]
        cmp eax, esi
        pop esi
        sete cl
        mov al, cl
        ret 4
        UNREACHABLE_TRAP(0x6618740)
    }
}
