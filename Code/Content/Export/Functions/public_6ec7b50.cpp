#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec7b50);

PROC_DECLARE(0x6ec7b50, internal_6ec7b50, public_6ec7b50);
extern "C" NAKED register_t __cdecl internal_6ec7b50()
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
        mov dword ptr ds : [esi+0x94], eax
        mov dword ptr ds : [esi+0x98], eax
        mov dword ptr ds : [esi+0x90], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_6fb5bc8
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec7b50)
    }
}
