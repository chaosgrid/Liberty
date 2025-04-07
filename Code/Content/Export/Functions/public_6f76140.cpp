#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24610);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e540);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ea20);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f5c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f76140);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f76171 _public_6f76171
#define public_6f761a3 _public_6f761a3
#define public_6f761c5 _public_6f761c5
#define public_6f761d0 _public_6f761d0
#define public_6f761f3 _public_6f761f3

PROC_DECLARE(0x6f76140, internal_6f76140, public_6f76140);
extern "C" NAKED register_t __cdecl internal_6f76140()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ds : [public_6fd3a60]
        mov edx, dword ptr ds : [public_6fd3a6c]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6f761c5
        mov edx, eax
        cmp eax, edx
        jne public_6f761c5
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_6fd3a64]
        cmp edi, eax
        mov esi, edi
        je public_6f761a3
        public_6f76171 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_6fd3a5c
        call public_6f2ea20
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6f2f5c0
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [public_6fd3a64]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6f76171
        mov ecx, dword ptr ds : [public_6fd3a60]
        public_6f761a3 : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_6fd3a60]
        mov dword ptr ds : [public_6fd3a6c], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6fd3a60]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_6f761c5 : nop
        cmp eax, ecx
        je public_6f761f3
        lea esp, ss:[esp]
        public_6f761d0 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_6f24610
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_6fd3a5c
        call public_6f2e540
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_6f761d0
        public_6f761f3 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f76140)
    }
}

#undef public_6f76171
#undef public_6f761a3
#undef public_6f761c5
#undef public_6f761d0
#undef public_6f761f3
