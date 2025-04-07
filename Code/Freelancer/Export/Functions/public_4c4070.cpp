#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b7390);
CLANG_FORWARD_PROC_SYMBOL(public_4c4070);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4c4081 _public_4c4081
#define public_4c40b4 _public_4c40b4
#define public_4c40d4 _public_4c40d4
#define public_4c40f2 _public_4c40f2
#define public_4c40f8 _public_4c40f8
#define public_4c4111 _public_4c4111
#define public_4c4118 _public_4c4118
#define public_4c4153 _public_4c4153

PROC_DECLARE(0x4c4070, internal_4c4070, public_4c4070);
extern "C" NAKED register_t __cdecl internal_4c4070()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_672964]
        push esi
        mov esi, dword ptr ds : [ebx]
        push edi
        mov edi, ebx
        cmp esi, edi
        je public_4c40b4
        public_4c4081 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_672968]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_672968], ecx
        jne public_4c4081
        mov ebx, dword ptr ds : [public_672964]
        public_4c40b4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, offset public_672960
        je public_4c4153
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        mov edi, dword ptr ds : [ecx+4]
        push ebp
        mov ebp, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x14], edi
        je public_4c40f2
        public_4c40d4 : nop
        cmp ebp, edi
        je public_4c40f2
        lea edi, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        lea esi, ss:[ebp+8]
        mov ecx, 8
        rep movsd
        mov ebp, dword ptr ss : [ebp]
        mov edi, dword ptr ss : [esp+0x14]
        jne public_4c40d4
        public_4c40f2 : nop
        cmp eax, ebx
        mov esi, eax
        je public_4c4111
        public_4c40f8 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_672960
        call dword ptr ds : [public_5c6188]
        cmp esi, ebx
        jne public_4c40f8
        public_4c4111 : nop
        mov esi, ebp
        cmp ebp, edi
        pop ebp
        je public_4c4153
        public_4c4118 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        push ebx
        mov ecx, offset public_672960
        call dword ptr ds : [public_5c6414]
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_4b7390
        mov ecx, dword ptr ds : [public_672968]
        add esp, 8
        inc ecx
        mov dword ptr ds : [public_672968], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_4c4118
        public_4c4153 : nop
        mov eax, dword ptr ds : [public_673384]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_673384], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4c4070)
    }
}

#undef public_4c4081
#undef public_4c40b4
#undef public_4c40d4
#undef public_4c40f2
#undef public_4c40f8
#undef public_4c4111
#undef public_4c4118
#undef public_4c4153
