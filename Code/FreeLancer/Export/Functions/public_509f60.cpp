#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_509f60);

#define public_509f77 _public_509f77
#define public_509f8b _public_509f8b

PROC_DECLARE(0x509f60, internal_509f60, public_509f60);
extern "C" NAKED register_t __cdecl internal_509f60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [public_675060]
        mov dword ptr ds : [public_613324], eax
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_509f8b
        public_509f77 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [public_613324]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x30]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_509f77
        public_509f8b : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x509f60)
    }
}

#undef public_509f77
#undef public_509f8b
