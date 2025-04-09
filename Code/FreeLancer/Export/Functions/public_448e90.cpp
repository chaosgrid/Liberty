#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_448e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_448ea2 _public_448ea2
#define public_448eb2 _public_448eb2
#define public_448ec2 _public_448ec2
#define public_448ec9 _public_448ec9

PROC_DECLARE(0x448e90, internal_448e90, public_448e90);
extern "C" NAKED register_t __cdecl internal_448e90()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        push edi
        xor edi, edi
        cmp esi, ebp
        je public_448ec9
        public_448ea2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, edi
        je public_448eb2
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+8], edi
        public_448eb2 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, edi
        je public_448ec2
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+0xC], edi
        public_448ec2 : nop
        add esi, 0x10
        cmp esi, ebp
        jne public_448ea2
        public_448ec9 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], edi
        mov dword ptr ds : [ebx+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x448e90)
    }
}

#undef public_448ea2
#undef public_448eb2
#undef public_448ec2
#undef public_448ec9
