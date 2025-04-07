#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_531e80);
CLANG_FORWARD_PROC_SYMBOL(public_536100);

#define public_531ef3 _public_531ef3

PROC_DECLARE(0x531e80, internal_531e80, public_531e80);
extern "C" NAKED register_t __cdecl internal_531e80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push esi
        mov ecx, edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi], offset public_5de13c
        call dword ptr ds : [public_5c6934]
        push edi
        call dword ptr ds : [public_5c6570]
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_531ef3
        mov ebx, dword ptr ds : [public_5c6930]
        mov ecx, edi
        call ebx
        mov ecx, eax
        add ecx, 0x70
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_531ef3
        mov ecx, edi
        call ebx
        add eax, 0x70
        push eax
        call dword ptr ds : [public_5c63c8]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xC], eax
        je public_531ef3
        push eax
        call public_536100
        add esp, 4
        public_531ef3 : nop
        pop edi
        mov dword ptr ds : [esi], offset public_5de15c
        mov eax, esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x531e80)
    }
}

#undef public_531ef3
