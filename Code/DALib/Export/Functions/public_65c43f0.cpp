#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c43f0);

#define public_65c4410 _public_65c4410

PROC_DECLARE(0x65c43f0, internal_65c43f0, public_65c43f0);
extern "C" NAKED register_t __cdecl internal_65c43f0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov esi, ecx
        lea edi, ds:[esi+0x10]
        push edi
        xor ebx, ebx
        call dword ptr ds : [public_65c7024]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_65c4410
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [ecx+8]
        public_65c4410 : nop
        push edi
        call dword ptr ds : [public_65c7028]
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65c43f0)
    }
}

#undef public_65c4410
