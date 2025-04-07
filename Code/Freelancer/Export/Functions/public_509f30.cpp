#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_509f30);

#define public_509f43 _public_509f43
#define public_509f53 _public_509f53

PROC_DECLARE(0x509f30, internal_509f30, public_509f30);
extern "C" NAKED register_t __cdecl internal_509f30()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_675060]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_509f53
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        public_509f43 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax+0x14]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_509f43
        pop ebx
        public_509f53 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x509f30)
    }
}

#undef public_509f43
#undef public_509f53
