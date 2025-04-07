#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec44a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec4870);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5630);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5e20);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec48a0 _public_6ec48a0
#define public_6ec48bf _public_6ec48bf
#define public_6ec48eb _public_6ec48eb
#define public_6ec48f0 _public_6ec48f0
#define public_6ec4910 _public_6ec4910

PROC_DECLARE(0x6ec4870, internal_6ec4870, public_6ec4870);
extern "C" NAKED register_t __cdecl internal_6ec4870()
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
        je public_6ec48eb
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6ec48eb
        cmp ebx, eax
        jne public_6ec48eb
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ec48bf
        lea esp, ss:[esp]
        public_6ec48a0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ec5630
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6ed0c50
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ec48a0
        public_6ec48bf : nop
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
        public_6ec48eb : nop
        cmp ecx, ebx
        je public_6ec4910
        nop 
        public_6ec48f0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6ec5e20
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6ec44a0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6ec48f0
        public_6ec4910 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec4870)
    }
}

#undef public_6ec48a0
#undef public_6ec48bf
#undef public_6ec48eb
#undef public_6ec48f0
#undef public_6ec4910
