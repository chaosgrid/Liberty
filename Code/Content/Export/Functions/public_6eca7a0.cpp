#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec9b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1670);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);

#define public_6eca7d2 _public_6eca7d2
#define public_6eca7dc _public_6eca7dc
#define public_6eca7e0 _public_6eca7e0
#define public_6eca7e4 _public_6eca7e4
#define public_6eca7f1 _public_6eca7f1
#define public_6eca817 _public_6eca817
#define public_6eca82c _public_6eca82c
#define public_6eca834 _public_6eca834
#define public_6eca83e _public_6eca83e
#define public_6eca843 _public_6eca843
#define public_6eca845 _public_6eca845
#define public_6eca858 _public_6eca858

PROC_DECLARE(0x6eca7a0, internal_6eca7a0, public_6eca7a0);
extern "C" NAKED register_t __cdecl internal_6eca7a0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        lea eax, ds:[edi+0x10]
        push eax
        call public_6f15b90
        mov ebp, eax
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [eax+0xF0]
        lea ecx, ds:[eax+0xEC]
        mov eax, dword ptr ds : [edx+4]
        mov esi, edx
        mov edx, dword ptr ds : [ecx+8]
        cmp eax, edx
        je public_6eca7e4
        mov ebx, dword ptr ds : [edi+0xC]
        public_6eca7d2 : nop
        cmp dword ptr ds : [eax+0xC], ebx
        jae public_6eca7dc
        mov eax, dword ptr ds : [eax+8]
        jmp public_6eca7e0
        public_6eca7dc : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_6eca7e0 : nop
        cmp eax, edx
        jne public_6eca7d2
        public_6eca7e4 : nop
        lea ebx, ds:[edi+0xC]
        push ebx
        call public_6ed1670
        cmp esi, eax
        je public_6eca858
        public_6eca7f1 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, 0x3FFFFFFF
        je public_6eca817
        test ebp, 0x3FFFFFFF
        je public_6eca817
        mov ecx, dword ptr ds : [edi+0x48]
        mov edx, dword ptr ds : [edi+0x44]
        push ecx
        mov ecx, dword ptr ds : [edi+4]
        push edx
        push ebp
        push eax
        call public_6ec9b30
        fstp st(0)
        public_6eca817 : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6eca82c
        push eax
        call public_6ed1d10
        add esp, 4
        jmp public_6eca843
        public_6eca82c : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eca83e
        public_6eca834 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6eca834
        public_6eca83e : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6eca845
        public_6eca843 : nop
        mov esi, eax
        public_6eca845 : nop
        mov ecx, dword ptr ds : [edi+4]
        add ecx, 0xEC
        push ebx
        call public_6ed1670
        cmp esi, eax
        jne public_6eca7f1
        public_6eca858 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6eca7a0)
    }
}

#undef public_6eca7d2
#undef public_6eca7dc
#undef public_6eca7e0
#undef public_6eca7e4
#undef public_6eca7f1
#undef public_6eca817
#undef public_6eca82c
#undef public_6eca834
#undef public_6eca83e
#undef public_6eca843
#undef public_6eca845
#undef public_6eca858
