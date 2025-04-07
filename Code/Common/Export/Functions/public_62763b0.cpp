#include "Common-PCH.h"


#define public_62763c7 _public_62763c7
#define public_62763d5 _public_62763d5
#define public_62763e0 _public_62763e0
#define public_6276407 _public_6276407
#define public_627640a _public_627640a

PROC_DECLARE(0x62763b0, internal_62763b0, public_62763b0);
extern "C" NAKED register_t __cdecl internal_62763b0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ds : [public_639902c]
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov dword ptr ss : [esp+0x10], edi
        public_62763c7 : nop
        mov ecx, dword ptr ds : [esi+0x178]
        test ecx, ecx
        jne public_62763d5
        xor eax, eax
        jmp public_62763e0
        public_62763d5 : nop
        mov eax, dword ptr ds : [esi+0x17C]
        sub eax, ecx
        sar eax, 2
        public_62763e0 : nop
        cmp edi, eax
        jge public_627640a
        mov eax, dword ptr ds : [esi+0x178]
        mov eax, dword ptr ds : [eax+edi*4]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6276407
        mov edx, dword ptr ds : [esi+0x178]
        mov eax, dword ptr ds : [edx+edi*4]
        mov dword ptr ss : [esp+0x10], eax
        public_6276407 : nop
        inc edi
        jmp public_62763c7
        public_627640a : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62763b0)
    }
}

#undef public_62763c7
#undef public_62763d5
#undef public_62763e0
#undef public_6276407
#undef public_627640a
