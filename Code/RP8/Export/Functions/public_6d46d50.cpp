#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46d50);
CLANG_FORWARD_PROC_SYMBOL(public_6d49931);

#define public_6d46d68 _public_6d46d68
#define public_6d46d7c _public_6d46d7c
#define public_6d46d86 _public_6d46d86
#define public_6d46d9c _public_6d46d9c
#define public_6d46d9f _public_6d46d9f
#define public_6d46dab _public_6d46dab
#define public_6d46dc1 _public_6d46dc1
#define public_6d46dc4 _public_6d46dc4
#define public_6d46dcb _public_6d46dcb
#define public_6d46dd8 _public_6d46dd8
#define public_6d46dfd _public_6d46dfd
#define public_6d46e0a _public_6d46e0a
#define public_6d46e2c _public_6d46e2c

PROC_DECLARE(0x6d46d50, internal_6d46d50, public_6d46d50);
extern "C" NAKED register_t __cdecl internal_6d46d50()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        test ebx, ebx
        push esi
        mov esi, dword ptr ds : [eax+4]
        push edi
        jl public_6d46d68
        cmp ebx, 2
        jl public_6d46d7c
        public_6d46d68 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x14], 0xC
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x18], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        pop ecx
        public_6d46d7c : nop
        cmp ebx, 1
        jne public_6d46dcb
        mov edi, dword ptr ds : [esi+0x40]
        jmp public_6d46d9f
        public_6d46d86 : nop
        cmp byte ptr ds : [edi+0x22], 0
        je public_6d46d9c
        and byte ptr ds : [edi+0x22], 0
        lea eax, ds:[edi+0x28]
        push eax
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [edi+0x30]
        pop ecx
        pop ecx
        public_6d46d9c : nop
        mov edi, dword ptr ds : [edi+0x24]
        public_6d46d9f : nop
        test edi, edi
        jne public_6d46d86
        and dword ptr ds : [esi+0x40], edi
        mov edi, dword ptr ds : [esi+0x44]
        jmp public_6d46dc4
        public_6d46dab : nop
        cmp byte ptr ds : [edi+0x22], 0
        je public_6d46dc1
        and byte ptr ds : [edi+0x22], 0
        lea eax, ds:[edi+0x28]
        push eax
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [edi+0x30]
        pop ecx
        pop ecx
        public_6d46dc1 : nop
        mov edi, dword ptr ds : [edi+0x24]
        public_6d46dc4 : nop
        test edi, edi
        jne public_6d46dab
        and dword ptr ds : [esi+0x44], edi
        public_6d46dcb : nop
        mov eax, dword ptr ds : [esi+ebx*4+0x38]
        and dword ptr ds : [esi+ebx*4+0x38], 0
        test eax, eax
        je public_6d46dfd
        public_6d46dd8 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [eax]
        lea edi, ds:[ecx+edx+0x10]
        push edi
        push eax
        push dword ptr ss : [ebp+8]
        call public_6d49931
        sub dword ptr ds : [esi+0x48], edi
        add esp, 0xC
        test ebx, ebx
        mov eax, ebx
        jne public_6d46dd8
        mov ebx, dword ptr ss : [ebp+0xC]
        public_6d46dfd : nop
        lea ecx, ds:[esi+ebx*4+0x30]
        mov eax, dword ptr ds : [ecx]
        and dword ptr ds : [ecx], 0
        test eax, eax
        je public_6d46e2c
        public_6d46e0a : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [eax]
        lea edi, ds:[ecx+edx+0x10]
        push edi
        push eax
        push dword ptr ss : [ebp+8]
        call public_6d49931
        sub dword ptr ds : [esi+0x48], edi
        add esp, 0xC
        test ebx, ebx
        mov eax, ebx
        jne public_6d46e0a
        public_6d46e2c : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d46d50)
    }
}

#undef public_6d46d68
#undef public_6d46d7c
#undef public_6d46d86
#undef public_6d46d9c
#undef public_6d46d9f
#undef public_6d46dab
#undef public_6d46dc1
#undef public_6d46dc4
#undef public_6d46dcb
#undef public_6d46dd8
#undef public_6d46dfd
#undef public_6d46e0a
#undef public_6d46e2c
