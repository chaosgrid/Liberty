#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5740);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);

#define public_65c5750 _public_65c5750
#define public_65c5760 _public_65c5760
#define public_65c5787 _public_65c5787

PROC_DECLARE(0x65c5740, internal_65c5740, public_65c5740);
extern "C" NAKED register_t __cdecl internal_65c5740()
{
    __asm
    {
        mov ecx, offset public_65ca2a0
        jmp public_65c5750
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_65c5750 : nop
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_65c5787
        mov edi, edi
        public_65c5760 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_65c6a60
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_65c5760
        public_65c5787 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_65c6a60
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65c5740)
    }
}

#undef public_65c5750
#undef public_65c5760
#undef public_65c5787
