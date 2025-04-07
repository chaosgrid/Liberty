#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5680);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);

#define public_65c56a0 _public_65c56a0
#define public_65c56c7 _public_65c56c7

PROC_DECLARE(0x65c5680, internal_65c5680, public_65c5680);
extern "C" NAKED register_t __cdecl internal_65c5680()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, ds:[edi+0x10]
        push eax
        mov dword ptr ds : [edi], offset public_65c7544
        call dword ptr ds : [public_65c7020]
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_65c56c7
        mov edi, edi
        public_65c56a0 : nop
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
        mov ecx, dword ptr ds : [edi+0xC]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0xC], ecx
        jne public_65c56a0
        public_65c56c7 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_65c6a60
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65c5680)
    }
}

#undef public_65c56a0
#undef public_65c56c7
