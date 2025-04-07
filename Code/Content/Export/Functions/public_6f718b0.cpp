#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f718b0);

PROC_DECLARE(0x6f718b0, internal_6f718b0, public_6f718b0);
extern "C" NAKED register_t __cdecl internal_6f718b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call dword ptr ds : [public_6fb3204]
        mov cl, byte ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+8]
        xor eax, eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [esi+0x40], eax
        mov byte ptr ds : [esi+0x34], cl
        mov dword ptr ds : [esi+0x48], eax
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x50], eax
        mov byte ptr ds : [esi+0x44], dl
        mov dword ptr ds : [esi], offset public_6fbbec0
        mov dword ptr ds : [esi+0x10], offset public_6fbbeac
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f718b0)
    }
}
