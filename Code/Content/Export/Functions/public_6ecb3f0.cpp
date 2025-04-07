#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecb3f0);

PROC_DECLARE(0x6ecb3f0, internal_6ecb3f0, public_6ecb3f0);
extern "C" NAKED register_t __cdecl internal_6ecb3f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6fb3030]
        mov al, 1
        mov byte ptr ds : [esi+0xD], al
        mov byte ptr ds : [esi+0xE], al
        mov dword ptr ds : [esi], offset public_6fb5e3c
        mov byte ptr ds : [esi+0xC], 0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ecb3f0)
    }
}
