#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_437020);

#define public_437030 _public_437030
#define public_437039 _public_437039
#define public_43703b _public_43703b
#define public_43704b _public_43704b

PROC_DECLARE(0x437020, internal_437020, public_437020);
extern "C" NAKED register_t __cdecl internal_437020()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        xor esi, esi
        push edi
        xor eax, eax
        lea ebx, ds:[ebx]
        public_437030 : nop
        test eax, eax
        jne public_437039
        mov eax, dword ptr ds : [ecx+4]
        jmp public_43703b
        public_437039 : nop
        mov eax, dword ptr ds : [eax]
        public_43703b : nop
        test eax, eax
        je public_43704b
        mov edi, dword ptr ds : [eax+8]
        cmp dword ptr ds : [edi], edx
        jne public_437030
        pop edi
        pop esi
        ret 4
        public_43704b : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x437020)
    }
}

#undef public_437030
#undef public_437039
#undef public_43703b
#undef public_43704b
