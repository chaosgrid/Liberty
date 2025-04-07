#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ece430);

PROC_DECLARE(0x6ece430, internal_6ece430, public_6ece430);
extern "C" NAKED register_t __cdecl internal_6ece430()
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
        mov byte ptr ds : [esi+0xC], al
        mov byte ptr ds : [esi+0xD], al
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], eax
        mov byte ptr ds : [esi+0x14], cl
        mov dword ptr ds : [esi], offset public_6fb600c
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ece430)
    }
}
