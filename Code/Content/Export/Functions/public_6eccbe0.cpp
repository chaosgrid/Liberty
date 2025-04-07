#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eccbe0);

PROC_DECLARE(0x6eccbe0, internal_6eccbe0, public_6eccbe0);
extern "C" NAKED register_t __cdecl internal_6eccbe0()
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
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov byte ptr ds : [esi+0x10], cl
        mov dword ptr ds : [esi], offset public_6fb5f00
        mov byte ptr ds : [esi+0xC], 1
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eccbe0)
    }
}
