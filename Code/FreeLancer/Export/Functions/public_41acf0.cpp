#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41acf0);

PROC_DECLARE(0x41acf0, internal_41acf0, public_41acf0);
extern "C" NAKED register_t __cdecl internal_41acf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call dword ptr ds : [public_5c6d14]
        mov dword ptr ds : [esi], eax
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        xor eax, eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        add esp, 4
        mov dword ptr ds : [esi+0x14], 1
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x41acf0)
    }
}
