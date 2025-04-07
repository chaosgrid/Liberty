#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8b70);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8c40);
CLANG_FORWARD_PROC_SYMBOL(public_6f47980);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb8b92 _public_6eb8b92
#define public_6eb8b94 _public_6eb8b94
#define public_6eb8ba0 _public_6eb8ba0
#define public_6eb8bcd _public_6eb8bcd
#define public_6eb8be7 _public_6eb8be7
#define public_6eb8bf1 _public_6eb8bf1
#define public_6eb8bfb _public_6eb8bfb
#define public_6eb8c07 _public_6eb8c07
#define public_6eb8c34 _public_6eb8c34

PROC_DECLARE(0x6eb8b70, internal_6eb8b70, public_6eb8b70);
extern "C" NAKED register_t __cdecl internal_6eb8b70()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        lea eax, ds:[ebx+0xC]
        push edi
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6eb8b92
        mov ecx, dword ptr ds : [ebx+8]
        call public_6f47980
        mov ebp, eax
        jmp public_6eb8b94
        public_6eb8b92 : nop
        xor ebp, ebp
        public_6eb8b94 : nop
        mov eax, dword ptr ds : [ebx+0x2F4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6eb8bfb
        public_6eb8ba0 : nop
        mov eax, dword ptr ds : [esi+0x90]
        test eax, eax
        je public_6eb8bf1
        test ebp, ebp
        je public_6eb8bcd
        mov eax, dword ptr ds : [esi+0x8C]
        cmp eax, 0xFFFFFFFF
        je public_6eb8bcd
        push 0
        push eax
        mov ecx, ebp
        call public_6ea9fc0
        mov dword ptr ds : [esi+0x8C], 0xFFFFFFFF
        public_6eb8bcd : nop
        mov edi, dword ptr ds : [esi+0x90]
        test edi, edi
        je public_6eb8be7
        mov ecx, edi
        call public_6eb8c40
        push edi
        call public_6fa8fe0
        add esp, 4
        public_6eb8be7 : nop
        mov dword ptr ds : [esi+0x90], 0
        public_6eb8bf1 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0x2F4]
        jne public_6eb8ba0
        public_6eb8bfb : nop
        mov edi, dword ptr ds : [ebx+0x2F4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6eb8c34
        public_6eb8c07 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [ebx+0x2F8]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [ebx+0x2F8], ecx
        jne public_6eb8c07
        public_6eb8c34 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6eb8b70)
    }
}

#undef public_6eb8b92
#undef public_6eb8b94
#undef public_6eb8ba0
#undef public_6eb8bcd
#undef public_6eb8be7
#undef public_6eb8bf1
#undef public_6eb8bfb
#undef public_6eb8c07
#undef public_6eb8c34
