#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed01c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b50);
CLANG_FORWARD_PROC_SYMBOL(public_6f683b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);

#define public_6f73b2f _public_6f73b2f
#define public_6f73b42 _public_6f73b42
#define public_6f73b50 _public_6f73b50
#define public_6f73b72 _public_6f73b72
#define public_6f73b93 _public_6f73b93
#define public_6f73b9c _public_6f73b9c

PROC_DECLARE(0x6f73ac0, internal_6f73ac0, public_6f73ac0);
extern "C" NAKED register_t __cdecl internal_6f73ac0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, ecx
        mov ecx, dword ptr ss : [ebp]
        xor ebx, ebx
        test ecx, ecx
        push esi
        mov dword ptr ss : [esp+0xC], eax
        je public_6f73b93
        push edi
        lea esi, ss:[ebp+4]
        mov edi, offset public_6fb4708
        mov ecx, 7
        xor edx, edx
        mov dword ptr ss : [esp+0x18], esi
        repe cmpsb
        pop edi
        jne public_6f73b42
        lea eax, ss:[esp+0x18]
        push eax
        call public_6f49b50
        add esp, 4
        test eax, eax
        jne public_6f73b2f
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6f73b93
        mov eax, dword ptr ds : [public_6fd0bcc]
        test eax, eax
        je public_6f73b93
        mov ecx, dword ptr ds : [public_6fd0bc0]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f73b93
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6f73b93
        public_6f73b2f : nop
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6f73b93
        mov ebx, dword ptr ds : [eax+4]
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 8
        public_6f73b42 : nop
        mov eax, dword ptr ds : [eax+0xE0]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f73b72
        mov edi, edi
        public_6f73b50 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0xD8
        push eax
        mov ecx, ebp
        call public_6ed01c0
        test al, al
        jne public_6f73b9c
        mov ecx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ecx+0xE0]
        jne public_6f73b50
        public_6f73b72 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call dword ptr ds : [public_6fb3684]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ebx
        call public_6f683b0
        add esp, 0xC
        test al, al
        jne public_6f73b93
        xor ebx, ebx
        public_6f73b93 : nop
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 8
        public_6f73b9c : nop
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        je public_6f73b72
        mov ebx, dword ptr ds : [esi+4]
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f73ac0)
    }
}

#undef public_6f73b2f
#undef public_6f73b42
#undef public_6f73b50
#undef public_6f73b72
#undef public_6f73b93
#undef public_6f73b9c
