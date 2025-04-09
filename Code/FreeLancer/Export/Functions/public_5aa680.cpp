#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a89b0);
CLANG_FORWARD_PROC_SYMBOL(public_5aa680);
CLANG_FORWARD_PROC_SYMBOL(public_5af6a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5aa696 _public_5aa696
#define public_5aa6a6 _public_5aa6a6
#define public_5aa6b2 _public_5aa6b2
#define public_5aa6b4 _public_5aa6b4
#define public_5aa6cf _public_5aa6cf
#define public_5aa6d4 _public_5aa6d4
#define public_5aa6e0 _public_5aa6e0
#define public_5aa6fc _public_5aa6fc
#define public_5aa705 _public_5aa705
#define public_5aa709 _public_5aa709

PROC_DECLARE(0x5aa680, internal_5aa680, public_5aa680);
extern "C" NAKED register_t __cdecl internal_5aa680()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_67ecd0]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        push edi
        mov edi, ecx
        jne public_5aa696
        pop edi
        xor eax, eax
        pop ebx
        pop ecx
        ret 
        public_5aa696 : nop
        push esi
        lea eax, ds:[edi+0x1D4]
        mov dword ptr ss : [esp+0xC], eax
        mov byte ptr ds : [eax], bl
        xor esi, esi
        push ebp
        public_5aa6a6 : nop
        cmp esi, ebx
        jne public_5aa6b2
        mov esi, dword ptr ds : [edi+0x1B8]
        jmp public_5aa6b4
        public_5aa6b2 : nop
        mov esi, dword ptr ds : [esi]
        public_5aa6b4 : nop
        cmp esi, ebx
        je public_5aa6d4
        mov ebp, dword ptr ds : [esi+8]
        cmp ebp, ebx
        je public_5aa6cf
        mov ecx, ebp
        call public_5af6a0
        push ebp
        call public_5b7e1d
        add esp, 4
        public_5aa6cf : nop
        mov dword ptr ds : [esi+8], ebx
        jmp public_5aa6a6
        public_5aa6d4 : nop
        mov esi, dword ptr ds : [edi+0x1B8]
        cmp esi, ebx
        pop ebp
        je public_5aa709
        nop 
        public_5aa6e0 : nop
        cmp byte ptr ds : [edi+0x1C0], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_5aa6fc
        mov ecx, dword ptr ds : [edi+0x1C4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi+0x1C4], eax
        jmp public_5aa705
        public_5aa6fc : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5aa705 : nop
        cmp esi, ebx
        jne public_5aa6e0
        public_5aa709 : nop
        mov dword ptr ds : [edi+0x1BC], ebx
        mov dword ptr ds : [edi+0x1B8], ebx
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        call dword ptr ds : [edx+0x4C]
        mov ecx, dword ptr ss : [esp+0xC]
        push 0x42700000
        push 0x40A00000
        push ecx
        call public_5a89b0
        add esp, 0xC
        pop esi
        pop edi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5aa680)
    }
}

#undef public_5aa696
#undef public_5aa6a6
#undef public_5aa6b2
#undef public_5aa6b4
#undef public_5aa6cf
#undef public_5aa6d4
#undef public_5aa6e0
#undef public_5aa6fc
#undef public_5aa705
#undef public_5aa709
