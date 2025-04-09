#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489ec0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_489ed0 _public_489ed0
#define public_489f05 _public_489f05
#define public_489f1a _public_489f1a

PROC_DECLARE(0x489ec0, internal_489ec0, public_489ec0);
extern "C" NAKED register_t __cdecl internal_489ec0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_489f1a
        push esi
        public_489ed0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_489f05
        mov ecx, eax
        test ecx, ecx
        je public_489f05
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10], 0
        public_489f05 : nop
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_489ed0
        pop esi
        public_489f1a : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_5b7e1d
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x489ec0)
    }
}

#undef public_489ed0
#undef public_489f05
#undef public_489f1a
