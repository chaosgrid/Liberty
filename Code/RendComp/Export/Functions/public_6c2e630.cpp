#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21b10);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e630);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c304a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34160);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2e668 _public_6c2e668
#define public_6c2e692 _public_6c2e692
#define public_6c2e6bb _public_6c2e6bb
#define public_6c2e6c0 _public_6c2e6c0
#define public_6c2e6e3 _public_6c2e6e3
#define public_6c2e6e8 _public_6c2e6e8

PROC_DECLARE(0x6c2e630, internal_6c2e630, public_6c2e630);
extern "C" NAKED register_t __cdecl internal_6c2e630()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [public_6c37d2c]
        mov edx, dword ptr ds : [public_6c37d38]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        xor ebx, ebx
        cmp edx, ebx
        push edi
        mov edi, eax
        mov dword ptr ss : [esp+0xC], ecx
        je public_6c2e6bb
        mov edx, ecx
        cmp ecx, edx
        jne public_6c2e6bb
        cmp edi, eax
        jne public_6c2e6bb
        mov edi, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_6c37d30]
        cmp edi, ecx
        mov esi, edi
        je public_6c2e692
        public_6c2e668 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_6c37d28
        call public_6c2e9c0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6c34ea0
        mov ecx, dword ptr ds : [public_6c37d30]
        add esp, 4
        cmp esi, ecx
        mov edi, esi
        jne public_6c2e668
        mov eax, dword ptr ds : [public_6c37d2c]
        public_6c2e692 : nop
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [public_6c37d2c]
        mov dword ptr ds : [public_6c37d38], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6c37d2c]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_6c37d28
        mov dword ptr ds : [eax+8], eax
        call public_6c34160
        jmp public_6c2e6e3
        public_6c2e6bb : nop
        cmp ecx, edi
        je public_6c2e6e8
        nop 
        public_6c2e6c0 : nop
        mov esi, ecx
        lea ecx, ss:[esp+0xC]
        call public_6c304a0
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_6c37d28
        call public_6c21b10
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, edi
        jne public_6c2e6c0
        public_6c2e6e3 : nop
        mov eax, dword ptr ds : [public_6c37d2c]
        public_6c2e6e8 : nop
        push eax
        call public_6c34ea0
        mov eax, dword ptr ds : [public_6c37d30]
        push eax
        mov dword ptr ds : [public_6c37d2c], ebx
        mov dword ptr ds : [public_6c37d38], ebx
        call public_6c34ea0
        add esp, 8
        pop edi
        pop esi
        mov dword ptr ds : [public_6c37d30], ebx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6c2e630)
    }
}

#undef public_6c2e668
#undef public_6c2e692
#undef public_6c2e6bb
#undef public_6c2e6c0
#undef public_6c2e6e3
#undef public_6c2e6e8
