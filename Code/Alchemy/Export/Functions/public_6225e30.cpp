#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6225e30);

PROC_DECLARE(0x6225e30, internal_6225e30, public_6225e30);
extern "C" NAKED register_t __cdecl internal_6225e30()
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
        UNREACHABLE_TRAP(0x6225e30)
    }
}
