#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_4482a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c3f30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4c3f56 _public_4c3f56
#define public_4c3f6e _public_4c3f6e
#define public_4c3f74 _public_4c3f74
#define public_4c3fa1 _public_4c3fa1
#define public_4c3fa5 _public_4c3fa5
#define public_4c3fba _public_4c3fba
#define public_4c3fd7 _public_4c3fd7
#define public_4c3fe3 _public_4c3fe3
#define public_4c3ffd _public_4c3ffd

PROC_DECLARE(0x4c3f30, internal_4c3f30, public_4c3f30);
extern "C" NAKED register_t __cdecl internal_4c3f30()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        cmp ecx, offset public_67296c
        push ebx
        push ebp
        push esi
        push edi
        je public_4c3fe3
        mov esi, dword ptr ds : [public_672970]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ebp, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ss : [ebp]
        je public_4c3f6e
        public_4c3f56 : nop
        cmp ebx, ebp
        je public_4c3f6e
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_4c3f56
        public_4c3f6e : nop
        cmp eax, esi
        mov edi, eax
        je public_4c3fa1
        public_4c3f74 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_672974]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ds : [public_672974], ecx
        jne public_4c3f74
        public_4c3fa1 : nop
        cmp ebx, ebp
        je public_4c3fe3
        public_4c3fa5 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_4c3fba
        mov edi, eax
        public_4c3fba : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_4c3fd7
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], ecx
        public_4c3fd7 : nop
        inc dword ptr ds : [public_672974]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, ebp
        jne public_4c3fa5
        public_4c3fe3 : nop
        inc dword ptr ds : [public_673388]
        call public_446be0
        test eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        je public_4c3ffd
        mov ecx, eax
        jmp public_4482a0
        public_4c3ffd : nop
        ret 
        UNREACHABLE_TRAP(0x4c3f30)
    }
}

#undef public_4c3f56
#undef public_4c3f6e
#undef public_4c3f74
#undef public_4c3fa1
#undef public_4c3fa5
#undef public_4c3fba
#undef public_4c3fd7
#undef public_4c3fe3
#undef public_4c3ffd
