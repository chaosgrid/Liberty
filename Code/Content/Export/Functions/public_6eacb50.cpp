#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f90);
CLANG_FORWARD_PROC_SYMBOL(public_6eacb50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eacb60 _public_6eacb60
#define public_6eacb90 _public_6eacb90

PROC_DECLARE(0x6eacb50, internal_6eacb50, public_6eacb50);
extern "C" NAKED register_t __cdecl internal_6eacb50()
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
        je public_6eacb90
        push esi
        public_6eacb60 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_6ea9f90
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6eacb60
        pop esi
        public_6eacb90 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6eacb50)
    }
}

#undef public_6eacb60
#undef public_6eacb90
