#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15560);

#define public_6f15583 _public_6f15583
#define public_6f15598 _public_6f15598
#define public_6f155b8 _public_6f155b8
#define public_6f155c0 _public_6f155c0
#define public_6f155ce _public_6f155ce
#define public_6f155dc _public_6f155dc

PROC_DECLARE(0x6f15560, internal_6f15560, public_6f15560);
extern "C" NAKED register_t __cdecl internal_6f15560()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+0xBC]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        xor edx, edx
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x10], edx
        je public_6f155dc
        mov ebp, dword ptr ds : [public_6fb3294]
        public_6f15583 : nop
        mov esi, dword ptr ds : [edi+0xF4]
        cmp esi, dword ptr ds : [edi+0xF8]
        je public_6f155c0
        mov eax, dword ptr ss : [esp+0x1C]
        lea ebx, ds:[eax+4]
        public_6f15598 : nop
        lea ecx, ds:[esi+8]
        push ebx
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6f155b8
        mov eax, dword ptr ds : [edi+0xF8]
        add esi, 0x88
        cmp esi, eax
        jne public_6f15598
        jmp public_6f155c0
        public_6f155b8 : nop
        test esi, esi
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f155ce
        public_6f155c0 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [edx+0xBC]
        jne public_6f15583
        public_6f155ce : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6f155dc : nop
        pop edi
        pop esi
        pop ebp
        mov eax, edx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f15560)
    }
}

#undef public_6f15583
#undef public_6f15598
#undef public_6f155b8
#undef public_6f155c0
#undef public_6f155ce
#undef public_6f155dc
