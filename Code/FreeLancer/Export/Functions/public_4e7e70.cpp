#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_4e7e70);
CLANG_FORWARD_PROC_SYMBOL(public_4e7f20);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4e7ea0 _public_4e7ea0
#define public_4e7ebf _public_4e7ebf
#define public_4e7eeb _public_4e7eeb
#define public_4e7ef0 _public_4e7ef0
#define public_4e7f10 _public_4e7f10

PROC_DECLARE(0x4e7e70, internal_4e7e70, public_4e7e70);
extern "C" NAKED register_t __cdecl internal_4e7e70()
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
        je public_4e7eeb
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_4e7eeb
        cmp ebx, eax
        jne public_4e7eeb
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_4e7ebf
        lea esp, ss:[esp]
        public_4e7ea0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_4e7f20
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_4e7ea0
        public_4e7ebf : nop
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
        public_4e7eeb : nop
        cmp ecx, ebx
        je public_4e7f10
        nop 
        public_4e7ef0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_52afa0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_46c8c0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_4e7ef0
        public_4e7f10 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4e7e70)
    }
}

#undef public_4e7ea0
#undef public_4e7ebf
#undef public_4e7eeb
#undef public_4e7ef0
#undef public_4e7f10
