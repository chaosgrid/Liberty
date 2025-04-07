#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9f800);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f9f810 _public_6f9f810
#define public_6f9f841 _public_6f9f841

PROC_DECLARE(0x6f9f800, internal_6f9f800, public_6f9f800);
extern "C" NAKED register_t __cdecl internal_6f9f800()
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
        je public_6f9f841
        push esi
        public_6f9f810 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx]
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6f9f810
        pop esi
        public_6f9f841 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f9f800)
    }
}

#undef public_6f9f810
#undef public_6f9f841
