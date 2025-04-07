#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecb000);

PROC_DECLARE(0x6ecb000, internal_6ecb000, public_6ecb000);
extern "C" NAKED register_t __cdecl internal_6ecb000()
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
        mov byte ptr ds : [esi+0x40], al
        mov byte ptr ds : [esi+0x41], al
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi], offset public_6fb5e24
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ecb000)
    }
}
