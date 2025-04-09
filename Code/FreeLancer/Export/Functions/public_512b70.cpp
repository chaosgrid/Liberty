#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_512b70);

#define public_512b80 _public_512b80
#define public_512b84 _public_512b84
#define public_512b90 _public_512b90
#define public_512bab _public_512bab

PROC_DECLARE(0x512b70, internal_512b70, public_512b70);
extern "C" NAKED register_t __cdecl internal_512b70()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, edi
        public_512b80 : nop
        cmp dword ptr ds : [eax], edx
        jae public_512b90
        public_512b84 : nop
        mov esi, dword ptr ds : [eax+4]
        add eax, 4
        cmp esi, edx
        jb public_512b84
        mov edi, edi
        public_512b90 : nop
        mov esi, dword ptr ds : [ecx-4]
        sub ecx, 4
        cmp edx, esi
        jb public_512b90
        cmp ecx, eax
        jbe public_512bab
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [ecx], esi
        add eax, 4
        jmp public_512b80
        public_512bab : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x512b70)
    }
}

#undef public_512b80
#undef public_512b84
#undef public_512b90
#undef public_512bab
