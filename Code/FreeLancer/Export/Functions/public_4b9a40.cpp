#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b9a40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4b9a56 _public_4b9a56
#define public_4b9a90 _public_4b9a90

PROC_DECLARE(0x4b9a40, internal_4b9a40, public_4b9a40);
extern "C" NAKED register_t __cdecl internal_4b9a40()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_672328]
        push edi
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_4b9a90
        push ebp
        mov ebp, dword ptr ds : [public_5c6098]
        push esi
        public_4b9a56 : nop
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
        jne public_4b9a56
        mov ebx, dword ptr ds : [public_672328]
        pop esi
        pop ebp
        public_4b9a90 : nop
        push ebx
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_672328], eax
        mov dword ptr ds : [public_67232c], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4b9a40)
    }
}

#undef public_4b9a56
#undef public_4b9a90
