#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d49958);

#define public_6d499a8 _public_6d499a8
#define public_6d499ab _public_6d499ab
#define public_6d499fc _public_6d499fc

PROC_DECLARE(0x6d49958, internal_6d49958, public_6d49958);
extern "C" NAKED register_t __cdecl internal_6d49958()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov ecx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [esi+4]
        push ebx
        mov ebx, dword ptr ds : [esi+0x180]
        push edi
        mov edi, dword ptr ds : [esi+0x114]
        shl ecx, 3
        push ecx
        push 1
        push esi
        call dword ptr ds : [eax]
        and dword ptr ss : [ebp-4], 0
        mov dword ptr ds : [ebx+0x38], eax
        mov ecx, dword ptr ds : [esi+0x20]
        lea eax, ds:[eax+ecx*4]
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [esi+0xC4]
        add esp, 0xC
        cmp dword ptr ds : [esi+0x20], 0
        jle public_6d499fc
        add edi, 4
        lea ecx, ds:[eax+0xC]
        mov dword ptr ss : [ebp-0xC], edi
        mov dword ptr ss : [ebp-8], ecx
        jmp public_6d499ab
        public_6d499a8 : nop
        mov ecx, dword ptr ss : [ebp-8]
        public_6d499ab : nop
        mov eax, dword ptr ds : [ecx+0x18]
        imul eax, dword ptr ds : [ecx]
        cdq 
        idiv dword ptr ds : [esi+0x114]
        mov edi, dword ptr ss : [ebp-0xC]
        imul edi, eax
        mov ecx, edi
        shl ecx, 3
        push ecx
        mov dword ptr ss : [ebp-0x10], eax
        mov eax, dword ptr ds : [esi+4]
        push 1
        push esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ebx+0x38]
        add dword ptr ss : [ebp-8], 0x54
        lea eax, ds:[eax+ecx*4]
        mov ecx, dword ptr ss : [ebp-4]
        shl ecx, 2
        mov dword ptr ds : [ecx+edx], eax
        mov edx, dword ptr ds : [ebx+0x3C]
        add esp, 0xC
        inc dword ptr ss : [ebp-4]
        lea eax, ds:[eax+edi*4]
        mov dword ptr ds : [ecx+edx], eax
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ds : [esi+0x20]
        jl public_6d499a8
        public_6d499fc : nop
        pop edi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d49958)
    }
}

#undef public_6d499a8
#undef public_6d499ab
#undef public_6d499fc
