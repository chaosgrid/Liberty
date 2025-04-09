#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_542790);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_53e9c9 _public_53e9c9
#define public_53e9d0 _public_53e9d0
#define public_53ea02 _public_53ea02
#define public_53ea19 _public_53ea19
#define public_53ea4a _public_53ea4a
#define public_53ea5a _public_53ea5a

PROC_DECLARE(0x53e9a0, internal_53e9a0, public_53e9a0);
extern "C" NAKED register_t __cdecl internal_53e9a0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call public_542790
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_53e9c9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_53e9c9
        mov edi, dword ptr ds : [eax+0xB4]
        jmp public_53e9d0
        public_53e9c9 : nop
        call public_54bb00
        mov edi, eax
        public_53e9d0 : nop
        call public_54bb00
        cmp edi, eax
        jne public_53ea19
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        je public_53ea02
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 0xF
        cmp dl, 0xF
        jne public_53ea02
        mov edx, dword ptr ds : [public_5c6918]
        mov edx, dword ptr ds : [edx]
        mov ecx, esi
        mov eax, dword ptr ds : [ecx]
        push edx
        push ebx
        call dword ptr ds : [eax+0x50]
        pop edi
        pop esi
        pop ebx
        ret 4
        public_53ea02 : nop
        mov edx, dword ptr ds : [public_5c6918]
        mov edx, dword ptr ds : [edx]
        xor ecx, ecx
        mov eax, dword ptr ds : [ecx]
        push edx
        push ebx
        call dword ptr ds : [eax+0x50]
        pop edi
        pop esi
        pop ebx
        ret 4
        public_53ea19 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_53ea5a
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        je public_53ea4a
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0xF
        cmp al, 0xF
        jne public_53ea4a
        mov eax, dword ptr ds : [public_5c6914]
        mov eax, dword ptr ds : [eax]
        mov ecx, esi
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebx
        call dword ptr ds : [edx+0x50]
        pop edi
        pop esi
        pop ebx
        ret 4
        public_53ea4a : nop
        mov eax, dword ptr ds : [public_5c6914]
        mov eax, dword ptr ds : [eax]
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebx
        call dword ptr ds : [edx+0x50]
        public_53ea5a : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x53e9a0)
    }
}

#undef public_53e9c9
#undef public_53e9d0
#undef public_53ea02
#undef public_53ea19
#undef public_53ea4a
#undef public_53ea5a
