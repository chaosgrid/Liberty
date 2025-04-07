#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21b10);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2ec70);
CLANG_FORWARD_PROC_SYMBOL(public_6c2eca0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6c304a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2e8e0 _public_6c2e8e0
#define public_6c2e8f5 _public_6c2e8f5
#define public_6c2e900 _public_6c2e900
#define public_6c2e90a _public_6c2e90a
#define public_6c2e911 _public_6c2e911
#define public_6c2e915 _public_6c2e915
#define public_6c2e940 _public_6c2e940
#define public_6c2e96a _public_6c2e96a
#define public_6c2e98a _public_6c2e98a
#define public_6c2e990 _public_6c2e990
#define public_6c2e9b1 _public_6c2e9b1

PROC_DECLARE(0x6c2e8b0, internal_6c2e8b0, public_6c2e8b0);
extern "C" NAKED register_t __cdecl internal_6c2e8b0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        push edi
        je public_6c2e9b1
        push esi
        mov ecx, offset public_6c37d28
        call public_6c2ecc0
        push esi
        mov ecx, offset public_6c37d28
        mov edi, eax
        call public_6c2ec70
        mov esi, eax
        cmp esi, edi
        je public_6c2e915
        lea ecx, ds:[ecx]
        public_6c2e8e0 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_6c2e8f5
        push ecx
        call public_6c2eca0
        add esp, 4
        jmp public_6c2e911
        public_6c2e8f5 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6c2e90a
        lea ecx, ds:[ecx]
        public_6c2e900 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6c2e900
        public_6c2e90a : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6c2e911
        mov eax, ecx
        public_6c2e911 : nop
        cmp eax, edi
        jne public_6c2e8e0
        public_6c2e915 : nop
        mov eax, dword ptr ds : [public_6c37d38]
        test eax, eax
        mov dword ptr ss : [esp+0x10], esi
        je public_6c2e98a
        mov ecx, dword ptr ds : [public_6c37d2c]
        cmp esi, dword ptr ds : [ecx]
        jne public_6c2e98a
        cmp edi, ecx
        jne public_6c2e98a
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_6c37d30]
        cmp edi, eax
        mov esi, edi
        je public_6c2e96a
        mov edi, edi
        public_6c2e940 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_6c37d28
        call public_6c2e9c0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6c34ea0
        mov eax, dword ptr ds : [public_6c37d30]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6c2e940
        mov ecx, dword ptr ds : [public_6c37d2c]
        public_6c2e96a : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_6c37d2c]
        mov dword ptr ds : [public_6c37d38], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6c37d2c]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        pop ecx
        ret 
        public_6c2e98a : nop
        cmp esi, edi
        je public_6c2e9b1
        mov edi, edi
        public_6c2e990 : nop
        lea ecx, ss:[esp+0x10]
        call public_6c304a0
        push esi
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_6c37d28
        call public_6c21b10
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        jne public_6c2e990
        public_6c2e9b1 : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6c2e8b0)
    }
}

#undef public_6c2e8e0
#undef public_6c2e8f5
#undef public_6c2e900
#undef public_6c2e90a
#undef public_6c2e911
#undef public_6c2e915
#undef public_6c2e940
#undef public_6c2e96a
#undef public_6c2e98a
#undef public_6c2e990
#undef public_6c2e9b1
