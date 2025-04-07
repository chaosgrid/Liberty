#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecdce0);

PROC_DECLARE(0x6ecdce0, internal_6ecdce0, public_6ecdce0);
extern "C" NAKED register_t __cdecl internal_6ecdce0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6fb3030]
        xor eax, eax
        mov dword ptr ds : [esi+0xC], eax
        mov byte ptr ds : [esi+0x10], al
        mov dword ptr ds : [esi+0x5C], eax
        mov dword ptr ds : [esi+0x58], eax
        mov dword ptr ds : [esi+0x54], eax
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x48], eax
        mov dword ptr ds : [esi+0x44], eax
        mov ecx, 0x3F800000
        mov dword ptr ds : [esi+0x60], ecx
        mov dword ptr ds : [esi+0x50], ecx
        mov dword ptr ds : [esi+0x40], ecx
        mov dword ptr ds : [esi+0x6C], eax
        mov dword ptr ds : [esi+0x68], eax
        mov dword ptr ds : [esi+0x64], eax
        mov dword ptr ds : [esi], offset public_6fb5fc8
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ecdce0)
    }
}
