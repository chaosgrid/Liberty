#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed41c0);

#define public_6ed41ed _public_6ed41ed
#define public_6ed4207 _public_6ed4207

PROC_DECLARE(0x6ed41c0, internal_6ed41c0, public_6ed41c0);
extern "C" NAKED register_t __cdecl internal_6ed41c0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        push 0
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        push eax
        lea eax, ds:[esi+4]
        push eax
        call dword ptr ds : [public_6fb361c]
        add esp, 8
        test eax, eax
        je public_6ed41ed
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        public_6ed41ed : nop
        mov ebx, dword ptr ds : [public_6fb3020]
        push 1
        mov ecx, edi
        call ebx
        test eax, eax
        mov dword ptr ds : [esi], eax
        ja public_6ed4207
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        public_6ed4207 : nop
        push 2
        mov ecx, edi
        call ebx
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ed41c0)
    }
}

#undef public_6ed41ed
#undef public_6ed4207
