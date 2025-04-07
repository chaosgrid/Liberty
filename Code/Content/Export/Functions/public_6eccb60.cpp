#include "Content-PCH.h"

PROC_DECLARE(0x6eccb60, internal_6eccb60, public_6eccb60);
extern "C" NAKED register_t __cdecl internal_6eccb60()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3020]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        push 0
        mov ecx, edi
        call ebx
        push 1
        mov ecx, edi
        mov dword ptr ds : [esi+0xC], eax
        call ebx
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eccb60)
    }
}
