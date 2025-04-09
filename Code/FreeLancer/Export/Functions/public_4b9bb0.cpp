#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4b9bb0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4b9bd0 _public_4b9bd0
#define public_4b9c03 _public_4b9c03
#define public_4b9c0b _public_4b9c0b
#define public_4b9c30 _public_4b9c30
#define public_4b9c42 _public_4b9c42
#define public_4b9c51 _public_4b9c51

PROC_DECLARE(0x4b9bb0, internal_4b9bb0, public_4b9bb0);
extern "C" NAKED register_t __cdecl internal_4b9bb0()
{
    __asm
    {
        mov al, byte ptr ds : [public_66d35a]
        test al, al
        push esi
        push edi
        jne public_4b9c0b
        push ebx
        mov ebx, dword ptr ds : [public_672328]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_4b9c03
        push ebp
        mov ebp, dword ptr ds : [public_5c6098]
        nop 
        public_4b9bd0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call ebp
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_67232c]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [public_67232c], ecx
        jne public_4b9bd0
        pop ebp
        public_4b9c03 : nop
        mov byte ptr ds : [public_672404], 0
        pop ebx
        public_4b9c0b : nop
        mov eax, dword ptr ds : [public_672400]
        test eax, eax
        je public_4b9c51
        push 0
        push eax
        call public_59dd00
        mov edi, dword ptr ds : [public_672400]
        add esp, 8
        test edi, edi
        je public_4b9c51
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_4b9c42
        public_4b9c30 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_4b9c30
        public_4b9c42 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax]
        public_4b9c51 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4b9bb0)
    }
}

#undef public_4b9bd0
#undef public_4b9c03
#undef public_4b9c0b
#undef public_4b9c30
#undef public_4b9c42
#undef public_4b9c51
