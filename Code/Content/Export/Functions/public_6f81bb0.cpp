#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb550);
CLANG_FORWARD_PROC_SYMBOL(public_6f81bb0);

PROC_DECLARE(0x6f81bb0, internal_6f81bb0, public_6f81bb0);
extern "C" NAKED register_t __cdecl internal_6f81bb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6efb550
        mov eax, 0x14
        mov dword ptr ds : [esi+0xA0], eax
        mov dword ptr ds : [esi+0xA4], eax
        xor eax, eax
        mov dword ptr ds : [esi+0xAC], eax
        mov dword ptr ds : [esi+0xB0], eax
        mov dword ptr ds : [esi+0xB4], eax
        mov dword ptr ds : [esi+0xB8], eax
        mov dword ptr ds : [esi+0xA8], 1
        mov dword ptr ds : [esi], offset public_6fbc1a4
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f81bb0)
    }
}
