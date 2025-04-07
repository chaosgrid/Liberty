#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f27d0);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4f27e0 _public_4f27e0
#define public_4f2810 _public_4f2810

PROC_DECLARE(0x4f27d0, internal_4f27d0, public_4f27d0);
extern "C" NAKED register_t __cdecl internal_4f27d0()
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
        je public_4f2810
        push esi
        public_4f27e0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_5154f0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_4f27e0
        pop esi
        public_4f2810 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_5b7e1d
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4f27d0)
    }
}

#undef public_4f27e0
#undef public_4f2810
