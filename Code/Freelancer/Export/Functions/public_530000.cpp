#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_542790);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_530029 _public_530029
#define public_530030 _public_530030
#define public_530062 _public_530062
#define public_530079 _public_530079
#define public_5300aa _public_5300aa
#define public_5300ba _public_5300ba

PROC_DECLARE(0x530000, internal_530000, public_530000);
extern "C" NAKED register_t __cdecl internal_530000()
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
        je public_530029
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_530029
        mov edi, dword ptr ds : [eax+0xB4]
        jmp public_530030
        public_530029 : nop
        call public_54bb00
        mov edi, eax
        public_530030 : nop
        call public_54bb00
        cmp edi, eax
        jne public_530079
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        je public_530062
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 0x17
        cmp dl, 0x17
        jne public_530062
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
        public_530062 : nop
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
        public_530079 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_5300ba
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        je public_5300aa
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x17
        cmp al, 0x17
        jne public_5300aa
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
        public_5300aa : nop
        mov eax, dword ptr ds : [public_5c6914]
        mov eax, dword ptr ds : [eax]
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebx
        call dword ptr ds : [edx+0x50]
        public_5300ba : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x530000)
    }
}

#undef public_530029
#undef public_530030
#undef public_530062
#undef public_530079
#undef public_5300aa
#undef public_5300ba
