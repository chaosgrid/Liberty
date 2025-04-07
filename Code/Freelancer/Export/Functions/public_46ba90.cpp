#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46baa0 _public_46baa0
#define public_46bad0 _public_46bad0

PROC_DECLARE(0x46ba90, internal_46ba90, public_46ba90);
extern "C" NAKED register_t __cdecl internal_46ba90()
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
        je public_46bad0
        push esi
        public_46baa0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_45eeb0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_46baa0
        pop esi
        public_46bad0 : nop
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
        UNREACHABLE_TRAP(0x46ba90)
    }
}

#undef public_46baa0
#undef public_46bad0
