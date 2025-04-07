#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed3fd0);

PROC_DECLARE(0x6ed3fd0, internal_6ed3fd0, public_6ed3fd0);
extern "C" NAKED register_t __cdecl internal_6ed3fd0()
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
        mov dword ptr ds : [esi+8], eax
        call ebx
        push 2
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        call ebx
        push 3
        mov ecx, edi
        mov dword ptr ds : [esi], eax
        call ebx
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        cmp eax, 4
        pop esi
        setb al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ed3fd0)
    }
}
