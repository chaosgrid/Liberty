#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);

#define public_65c57f0 _public_65c57f0
#define public_65c5808 _public_65c5808
#define public_65c5810 _public_65c5810
#define public_65c583d _public_65c583d

PROC_DECLARE(0x65c57d0, internal_65c57d0, public_65c57d0);
extern "C" NAKED register_t __cdecl internal_65c57d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65ca2a4]
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_65c5808
        push ebx
        mov ebx, dword ptr ds : [public_65c7034]
        push ebp
        mov ebp, dword ptr ds : [public_65c701c]
        nop 
        lea esp, ss:[esp]
        public_65c57f0 : nop
        mov esi, dword ptr ds : [edi+8]
        push 0xFFFFFFFF
        push esi
        call ebx
        push esi
        call ebp
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [public_65ca2a4]
        cmp edi, eax
        jne public_65c57f0
        pop ebp
        pop ebx
        public_65c5808 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_65c583d
        public_65c5810 : nop
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
        mov ecx, dword ptr ds : [public_65ca2a8]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_65ca2a8], ecx
        jne public_65c5810
        public_65c583d : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65c57d0)
    }
}

#undef public_65c57f0
#undef public_65c5808
#undef public_65c5810
#undef public_65c583d
