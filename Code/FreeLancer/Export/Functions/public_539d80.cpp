#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407450);
CLANG_FORWARD_PROC_SYMBOL(public_408a70);
CLANG_FORWARD_PROC_SYMBOL(public_539d80);
CLANG_FORWARD_PROC_SYMBOL(public_539f90);
CLANG_FORWARD_PROC_SYMBOL(public_53a230);

#define public_539da3 _public_539da3
#define public_539da5 _public_539da5
#define public_539dc8 _public_539dc8
#define public_539dca _public_539dca
#define public_539df1 _public_539df1
#define public_539df3 _public_539df3
#define public_539e23 _public_539e23
#define public_539e25 _public_539e25
#define public_539e4b _public_539e4b
#define public_539e4d _public_539e4d

PROC_DECLARE(0x539d80, internal_539d80, public_539d80);
extern "C" NAKED register_t __cdecl internal_539d80()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        je public_539da3
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 7
        cmp cl, 7
        je public_539da5
        public_539da3 : nop
        xor eax, eax
        public_539da5 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        test ecx, ecx
        mov esi, dword ptr ds : [eax+0x88]
        je public_539dc8
        mov edi, dword ptr ds : [public_5c6590]
        call edi
        test eax, eax
        je public_539dc8
        mov ecx, dword ptr ss : [ebp+0x10]
        call edi
        mov eax, dword ptr ds : [eax+4]
        jmp public_539dca
        public_539dc8 : nop
        xor eax, eax
        public_539dca : nop
        mov edx, dword ptr ds : [esi+0x80]
        push edx
        mov ecx, eax
        call public_407450
        lea esi, ds:[ebx+0xC]
        test esi, esi
        je public_539df1
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_539df1
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x27
        cmp dl, 0x27
        je public_539df3
        public_539df1 : nop
        xor ecx, ecx
        public_539df3 : nop
        mov edi, dword ptr ss : [esp+0x24]
        push 0
        lea ebx, ds:[edi+0xC]
        push ebx
        push edi
        push eax
        mov eax, dword ptr ds : [ecx+0xE4]
        push eax
        mov ecx, ebp
        call public_539f90
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_539e23
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 7
        cmp dl, 7
        je public_539e25
        public_539e23 : nop
        xor eax, eax
        public_539e25 : nop
        mov eax, dword ptr ds : [eax+0x88]
        mov ecx, dword ptr ds : [eax+4]
        call public_408a70
        test esi, esi
        mov ebp, eax
        je public_539e4b
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_539e4b
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 1
        cmp dl, 1
        je public_539e4d
        public_539e4b : nop
        xor ecx, ecx
        public_539e4d : nop
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [eax+0x54]
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push ebx
        push edi
        push ebp
        call public_53a230
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x539d80)
    }
}

#undef public_539da3
#undef public_539da5
#undef public_539dc8
#undef public_539dca
#undef public_539df1
#undef public_539df3
#undef public_539e23
#undef public_539e25
#undef public_539e4b
#undef public_539e4d
