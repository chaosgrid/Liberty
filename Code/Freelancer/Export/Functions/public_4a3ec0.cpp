#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a3ec0);

#define public_4a3f11 _public_4a3f11
#define public_4a3f25 _public_4a3f25
#define public_4a3f28 _public_4a3f28
#define public_4a3f40 _public_4a3f40

PROC_DECLARE(0x4a3ec0, internal_4a3ec0, public_4a3ec0);
extern "C" NAKED register_t __cdecl internal_4a3ec0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        je public_4a3f40
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        mov ebp, dword ptr ds : [eax]
        test ebp, ebp
        je public_4a3f40
        push ebx
        push edi
        push ebp
        call dword ptr ds : [public_5c71c8]
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        lea edi, ds:[ebx+1]
        add esp, 4
        cmp edi, eax
        jbe public_4a3f28
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_4a3f11
        lea ecx, ds:[edi+edi]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [esi], eax
        jmp public_4a3f25
        public_4a3f11 : nop
        lea edx, ds:[edi+edi]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [esi], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_4a3f25 : nop
        mov dword ptr ds : [esi+4], edi
        public_4a3f28 : nop
        mov eax, dword ptr ds : [esi]
        push ebx
        push ebp
        push eax
        call dword ptr ds : [public_5c71c0]
        mov ecx, dword ptr ds : [esi]
        add esp, 0xC
        pop edi
        mov word ptr ds : [ecx+ebx*2], 0
        pop ebx
        public_4a3f40 : nop
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x4a3ec0)
    }
}

#undef public_4a3f11
#undef public_4a3f25
#undef public_4a3f28
#undef public_4a3f40
