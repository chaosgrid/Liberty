#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_522030);
CLANG_FORWARD_PROC_SYMBOL(public_5269c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5269d0 _public_5269d0
#define public_526a00 _public_526a00

PROC_DECLARE(0x5269c0, internal_5269c0, public_5269c0);
extern "C" NAKED register_t __cdecl internal_5269c0()
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
        je public_526a00
        push esi
        public_5269d0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_522030
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_5269d0
        pop esi
        public_526a00 : nop
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
        UNREACHABLE_TRAP(0x5269c0)
    }
}

#undef public_5269d0
#undef public_526a00
