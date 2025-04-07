#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66142f0);
CLANG_FORWARD_PROC_SYMBOL(public_6617c90);
CLANG_FORWARD_PROC_SYMBOL(public_6618070);
CLANG_FORWARD_PROC_SYMBOL(public_66197c0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_661809b _public_661809b
#define public_66180ba _public_66180ba
#define public_66180e6 _public_66180e6
#define public_66180ea _public_66180ea
#define public_661810a _public_661810a

PROC_DECLARE(0x6618070, internal_6618070, public_6618070);
extern "C" NAKED register_t __cdecl internal_6618070()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_66180e6
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_66180e6
        cmp ebx, eax
        jne public_66180e6
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+8]
        cmp ebx, eax
        mov edi, ebx
        je public_66180ba
        public_661809b : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, esi
        push eax
        call public_66197c0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_66281d0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_661809b
        public_66180ba : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        pop edi
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        pop esi
        pop ebx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 0xC
        public_66180e6 : nop
        cmp ecx, ebx
        je public_661810a
        public_66180ea : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_66142f0
        lea edx, ss:[esp+0x18]
        push edi
        push edx
        mov ecx, esi
        call public_6617c90
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_66180ea
        public_661810a : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [eax], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6618070)
    }
}

#undef public_661809b
#undef public_66180ba
#undef public_66180e6
#undef public_66180ea
#undef public_661810a
