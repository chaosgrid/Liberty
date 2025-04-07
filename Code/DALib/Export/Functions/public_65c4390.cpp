#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c4390);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);

#define public_65c43e3 _public_65c43e3

PROC_DECLARE(0x65c4390, internal_65c4390, public_65c4390);
extern "C" NAKED register_t __cdecl internal_65c4390()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ebx, ds:[esi+0x10]
        push ebx
        xor edi, edi
        call dword ptr ds : [public_65c7024]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_65c43e3
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [ecx+8]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_65c6a60
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 4
        dec ecx
        mov eax, ecx
        test eax, eax
        mov dword ptr ds : [esi+0xC], ecx
        jne public_65c43e3
        mov eax, dword ptr ds : [esi+0x28]
        push eax
        call dword ptr ds : [public_65c7030]
        public_65c43e3 : nop
        push ebx
        call dword ptr ds : [public_65c7028]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65c4390)
    }
}

#undef public_65c43e3
