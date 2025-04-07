#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c8730);
CLANG_FORWARD_PROC_SYMBOL(public_62d2020);

PROC_DECLARE(0x62c8730, internal_62c8730, public_62c8730);
extern "C" NAKED register_t __cdecl internal_62c8730()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62d2020
        xor eax, eax
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi], offset public_639f8ec
        mov dword ptr ds : [esi+0x30], 0x40800000
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c8730)
    }
}
