#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a8c0);

PROC_DECLARE(0x622a8c0, internal_622a8c0, public_622a8c0);
extern "C" NAKED register_t __cdecl internal_622a8c0()
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
        UNREACHABLE_TRAP(0x622a8c0)
    }
}
