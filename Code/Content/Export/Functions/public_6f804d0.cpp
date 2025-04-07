#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb550);
CLANG_FORWARD_PROC_SYMBOL(public_6f804d0);

PROC_DECLARE(0x6f804d0, internal_6f804d0, public_6f804d0);
extern "C" NAKED register_t __cdecl internal_6f804d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6efb550
        xor eax, eax
        mov dword ptr ds : [esi+0xA0], eax
        mov dword ptr ds : [esi+0xA4], eax
        mov dword ptr ds : [esi+0xA8], eax
        mov dword ptr ds : [esi+0xAC], eax
        mov dword ptr ds : [esi+0xBC], eax
        mov dword ptr ds : [esi+0xC0], eax
        mov dword ptr ds : [esi+0xB0], 0x5F5E10
        mov dword ptr ds : [esi+0xB4], 0x43960000
        mov dword ptr ds : [esi+0xB8], 0x43340000
        mov dword ptr ds : [esi], offset public_6fbbfbc
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f804d0)
    }
}
