#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66113c0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_66113df _public_66113df
#define public_66113ec _public_66113ec
#define public_66113f9 _public_66113f9
#define public_661140b _public_661140b
#define public_6611412 _public_6611412
#define public_6611437 _public_6611437

PROC_DECLARE(0x66113c0, internal_66113c0, public_66113c0);
extern "C" NAKED register_t __cdecl internal_66113c0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_662902c]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call ebp
        mov ebx, dword ptr ds : [edi+0x18]
        mov esi, dword ptr ds : [edi+0x14]
        add esp, 4
        cmp esi, ebx
        je public_6611412
        public_66113df : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_66113ec
        push eax
        call ebp
        add esp, 4
        public_66113ec : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_66113f9
        push eax
        call ebp
        add esp, 4
        public_66113f9 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_661140b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_661140b : nop
        add esi, 0x14
        cmp esi, ebx
        jne public_66113df
        public_6611412 : nop
        mov edx, dword ptr ds : [edi+0x14]
        push edx
        call public_66281d0
        xor esi, esi
        add esp, 4
        mov dword ptr ds : [edi+0x14], esi
        mov dword ptr ds : [edi+0x18], esi
        mov dword ptr ds : [edi+0x1C], esi
        mov eax, dword ptr ds : [edi]
        cmp eax, esi
        je public_6611437
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], esi
        public_6611437 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x66113c0)
    }
}

#undef public_66113df
#undef public_66113ec
#undef public_66113f9
#undef public_661140b
#undef public_6611412
#undef public_6611437
