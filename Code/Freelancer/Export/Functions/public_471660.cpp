#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_471660);

#define public_4716b3 _public_4716b3
#define public_4716c8 _public_4716c8
#define public_4716cb _public_4716cb
#define public_4716e5 _public_4716e5

PROC_DECLARE(0x471660, internal_471660, public_471660);
extern "C" NAKED register_t __cdecl internal_471660()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        xor ecx, ecx
        cmp esi, ecx
        je public_4716e5
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], ecx
        mov ebp, dword ptr ds : [eax+4]
        cmp ebp, ecx
        je public_4716e5
        push ebx
        push edi
        push ebp
        call dword ptr ds : [public_5c71c8]
        mov ebx, eax
        mov eax, dword ptr ds : [esi+8]
        lea edi, ds:[ebx+1]
        add esp, 4
        cmp edi, eax
        jbe public_4716cb
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_4716b3
        lea ecx, ds:[edi+edi]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [esi+4], eax
        jmp public_4716c8
        public_4716b3 : nop
        lea edx, ds:[edi+edi]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_4716c8 : nop
        mov dword ptr ds : [esi+8], edi
        public_4716cb : nop
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push ebp
        push eax
        call dword ptr ds : [public_5c71c0]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 0xC
        pop edi
        mov word ptr ds : [ecx+ebx*2], 0
        pop ebx
        public_4716e5 : nop
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x471660)
    }
}

#undef public_4716b3
#undef public_4716c8
#undef public_4716cb
#undef public_4716e5
