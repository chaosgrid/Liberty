#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_468850);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_468860 _public_468860
#define public_468890 _public_468890

PROC_DECLARE(0x468850, internal_468850, public_468850);
extern "C" NAKED register_t __cdecl internal_468850()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_468890
        push esi
        public_468860 : nop
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
        mov ecx, dword ptr ds : [ebx+0xC]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_468860
        pop esi
        public_468890 : nop
        mov ecx, dword ptr ds : [ebx+8]
        push ecx
        call public_5b7e1d
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x468850)
    }
}

#undef public_468860
#undef public_468890
