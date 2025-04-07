#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cb2b0);
CLANG_FORWARD_PROC_SYMBOL(public_62ccaf0);

PROC_DECLARE(0x62ccaf0, internal_62ccaf0, public_62ccaf0);
extern "C" NAKED register_t __cdecl internal_62ccaf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62cb2b0
        xor eax, eax
        mov byte ptr ds : [esi+0x281], al
        mov byte ptr ds : [esi+0x280], al
        mov dword ptr ds : [esi], offset public_639fbe4
        mov ecx, 0x43160000
        mov dword ptr ds : [esi+0x2A0], ecx
        mov dword ptr ds : [esi+0x290], eax
        mov dword ptr ds : [esi+0x294], eax
        mov dword ptr ds : [esi+0x298], eax
        mov byte ptr ds : [esi+0x285], al
        mov dword ptr ds : [esi+0x2AC], ecx
        mov dword ptr ds : [esi+0x2B0], 0x40000000
        mov dword ptr ds : [esi+0x2B4], 0x43C80000
        mov dword ptr ds : [esi+0x2B8], 0x42C80000
        mov byte ptr ds : [esi+0x2A4], 1
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62ccaf0)
    }
}
