#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438d10);
CLANG_FORWARD_PROC_SYMBOL(public_43bcd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43bce0 _public_43bce0
#define public_43bd10 _public_43bd10

PROC_DECLARE(0x43bcd0, internal_43bcd0, public_43bcd0);
extern "C" NAKED register_t __cdecl internal_43bcd0()
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
        je public_43bd10
        push esi
        public_43bce0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_438d10
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_43bce0
        pop esi
        public_43bd10 : nop
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
        UNREACHABLE_TRAP(0x43bcd0)
    }
}

#undef public_43bce0
#undef public_43bd10
