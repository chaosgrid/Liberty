#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf9680 _public_6cf9680
#define public_6cf96ac _public_6cf96ac
#define public_6cf96bc _public_6cf96bc
#define public_6cf96c5 _public_6cf96c5
#define public_6cf96c7 _public_6cf96c7

PROC_DECLARE(0x6cf95f0, internal_6cf95f0, public_6cf95f0);
extern "C" NAKED register_t __cdecl internal_6cf95f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        sub esp, 0x10
        test ecx, 0x3FFFFFFF
        push esi
        push edi
        mov eax, 0xFFFFFFFC
        je public_6cf96c7
        push ecx
        mov edi, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf96c5
        add eax, 0xC
        test eax, eax
        je public_6cf96c5
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_6cf96c5
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_6cf96c5
        push ebx
        push 0x10000
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_6d64204]
        mov ebx, dword ptr ds : [public_6d6428c]
        lea eax, ss:[esp+0xC]
        lea edi, ds:[esi+0xE4]
        push eax
        mov ecx, edi
        call ebx
        mov esi, eax
        test esi, esi
        je public_6cf96bc
        push ebp
        mov ebp, dword ptr ds : [public_6d644bc]
        nop 
        lea esp, ss:[esp]
        public_6cf9680 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx+8]
        push eax
        call ebp
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x24], eax
        je public_6cf96ac
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push eax
        mov eax, dword ptr ds : [esi+0x28]
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        call dword ptr ds : [edx]
        public_6cf96ac : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        call ebx
        mov esi, eax
        test esi, esi
        jne public_6cf9680
        pop ebp
        public_6cf96bc : nop
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x10
        ret 
        public_6cf96c5 : nop
        mov eax, edi
        public_6cf96c7 : nop
        pop edi
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6cf95f0)
    }
}

#undef public_6cf9680
#undef public_6cf96ac
#undef public_6cf96bc
#undef public_6cf96c5
#undef public_6cf96c7
