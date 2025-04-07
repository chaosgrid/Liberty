#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50c620);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_51c8f0 _public_51c8f0
#define public_51c909 _public_51c909
#define public_51c910 _public_51c910
#define public_51c916 _public_51c916
#define public_51c950 _public_51c950
#define public_51c964 _public_51c964

PROC_DECLARE(0x51c8b0, internal_51c8b0, public_51c8b0);
extern "C" NAKED register_t __cdecl internal_51c8b0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        push 0x25
        mov ebx, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c916
        push 0x24
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c916
        push 0x28
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c916
        call public_50c620
        mov edi, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_51c916
        lea ecx, ds:[ecx]
        public_51c8f0 : nop
        cmp dword ptr ds : [public_67524c], 2
        mov ecx, dword ptr ds : [esi+8]
        je public_51c909
        mov eax, dword ptr ds : [ecx]
        push 0x3F800000
        push ebx
        call dword ptr ds : [eax+0x10]
        jmp public_51c910
        public_51c909 : nop
        mov dword ptr ds : [ecx+0x34], 0x3F800000
        public_51c910 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_51c8f0
        public_51c916 : nop
        push 0x25
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c964
        push 0x24
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c964
        push 0x28
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c964
        call public_50c620
        mov edi, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_51c964
        mov edi, edi
        public_51c950 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        push 0x3F800000
        push ebx
        call dword ptr ds : [edx+0x14]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_51c950
        public_51c964 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x51c8b0)
    }
}

#undef public_51c8f0
#undef public_51c909
#undef public_51c910
#undef public_51c916
#undef public_51c950
#undef public_51c964
