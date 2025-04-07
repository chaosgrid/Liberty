#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11670);

#define public_6d11680 _public_6d11680
#define public_6d11689 _public_6d11689
#define public_6d1168b _public_6d1168b
#define public_6d11698 _public_6d11698

PROC_DECLARE(0x6d11670, internal_6d11670, public_6d11670);
extern "C" NAKED register_t __cdecl internal_6d11670()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        xor edx, edx
        push edi
        xor eax, eax
        lea ebx, ds:[ebx]
        public_6d11680 : nop
        test eax, eax
        jne public_6d11689
        mov eax, dword ptr ds : [ecx+4]
        jmp public_6d1168b
        public_6d11689 : nop
        mov eax, dword ptr ds : [eax]
        public_6d1168b : nop
        test eax, eax
        je public_6d11698
        mov edi, dword ptr ds : [eax+8]
        cmp esi, dword ptr ds : [edi]
        jne public_6d11680
        mov edx, eax
        public_6d11698 : nop
        pop edi
        xor eax, eax
        test edx, edx
        pop esi
        setne al
        ret 4
        UNREACHABLE_TRAP(0x6d11670)
    }
}

#undef public_6d11680
#undef public_6d11689
#undef public_6d1168b
#undef public_6d11698
