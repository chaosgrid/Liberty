#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21b10);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a530);
CLANG_FORWARD_PROC_SYMBOL(public_6c304a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2a560 _public_6c2a560
#define public_6c2a57f _public_6c2a57f
#define public_6c2a5ab _public_6c2a5ab
#define public_6c2a5b0 _public_6c2a5b0
#define public_6c2a5d0 _public_6c2a5d0

PROC_DECLARE(0x6c2a530, internal_6c2a530, public_6c2a530);
extern "C" NAKED register_t __cdecl internal_6c2a530()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_6c2a5ab
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6c2a5ab
        cmp ebx, eax
        jne public_6c2a5ab
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6c2a57f
        lea esp, ss:[esp]
        public_6c2a560 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6c2a2e0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6c34ea0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6c2a560
        public_6c2a57f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_6c2a5ab : nop
        cmp ecx, ebx
        je public_6c2a5d0
        nop 
        public_6c2a5b0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6c304a0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6c21b10
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6c2a5b0
        public_6c2a5d0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6c2a530)
    }
}

#undef public_6c2a560
#undef public_6c2a57f
#undef public_6c2a5ab
#undef public_6c2a5b0
#undef public_6c2a5d0
