#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57eb40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_57eb50 _public_57eb50
#define public_57eb63 _public_57eb63
#define public_57eb6d _public_57eb6d
#define public_57eb90 _public_57eb90

PROC_DECLARE(0x57eb40, internal_57eb40, public_57eb40);
extern "C" NAKED register_t __cdecl internal_57eb40()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+4]
        mov esi, eax
        nop 
        lea esp, ss:[esp]
        public_57eb50 : nop
        mov esi, dword ptr ds : [esi+4]
        cmp esi, eax
        je public_57eb63
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x38]
        test eax, eax
        jne public_57eb6d
        public_57eb63 : nop
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax]
        jne public_57eb50
        pop edi
        pop esi
        ret 
        public_57eb6d : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_57eb90
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+8], 0
        public_57eb90 : nop
        push esi
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x57eb40)
    }
}

#undef public_57eb50
#undef public_57eb63
#undef public_57eb6d
#undef public_57eb90
