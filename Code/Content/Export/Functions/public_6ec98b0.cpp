#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec98b0);

PROC_DECLARE(0x6ec98b0, internal_6ec98b0, public_6ec98b0);
extern "C" NAKED register_t __cdecl internal_6ec98b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6fb3030]
        mov cl, byte ptr ss : [esp+8]
        xor eax, eax
        mov dword ptr ds : [esi+0xC], eax
        mov byte ptr ds : [esi+0x10], al
        mov dword ptr ds : [esi+0x30], eax
        mov byte ptr ds : [esi+0x34], al
        mov dword ptr ds : [esi+0x58], eax
        mov dword ptr ds : [esi+0x5C], eax
        mov dword ptr ds : [esi+0x60], eax
        mov byte ptr ds : [esi+0x54], cl
        mov dword ptr ds : [esi+0x64], eax
        mov dword ptr ds : [esi], offset public_6fb5da0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec98b0)
    }
}
