#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_435500);
CLANG_FORWARD_PROC_SYMBOL(public_4362f0);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_595300);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_435512 _public_435512
#define public_43555f _public_43555f
#define public_435583 _public_435583
#define public_4355b0 _public_4355b0
#define public_4355d6 _public_4355d6

PROC_DECLARE(0x435500, internal_435500, public_435500);
extern "C" NAKED register_t __cdecl internal_435500()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ds : [public_668664]
        push esi
        push edi
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_43555f
        public_435512 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_53ab20
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        push 0
        lea ecx, ds:[esi+8]
        call public_595300
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_668668]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [public_668668], ecx
        jne public_435512
        public_43555f : nop
        mov eax, dword ptr ds : [public_668670]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_66866c
        call public_4362f0
        mov edi, dword ptr ds : [public_668684]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_4355b0
        public_435583 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_668688]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_668688], ecx
        jne public_435583
        public_4355b0 : nop
        mov ecx, dword ptr ds : [public_66868c]
        cmp ecx, 0xFFFFFFFF
        pop edi
        pop esi
        pop ebx
        je public_4355d6
        mov eax, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [public_66868c], 0xFFFFFFFF
        public_4355d6 : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x435500)
    }
}

#undef public_435512
#undef public_43555f
#undef public_435583
#undef public_4355b0
#undef public_4355d6
