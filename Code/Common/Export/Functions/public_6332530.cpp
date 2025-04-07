#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6332560 _public_6332560
#define public_6332572 _public_6332572
#define public_6332578 _public_6332578
#define public_63325a7 _public_63325a7
#define public_63325b0 _public_63325b0
#define public_63325c5 _public_63325c5
#define public_63325dc _public_63325dc
#define public_63325f9 _public_63325f9

PROC_DECLARE(0x6332530, internal_6332530, public_6332530);
extern "C" NAKED register_t __cdecl internal_6332530()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        lea edx, ds:[eax+4]
        lea ebp, ds:[ecx+4]
        cmp ebp, edx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_63325f9
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov edx, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], edx
        je public_6332572
        lea ecx, ds:[ecx]
        public_6332560 : nop
        cmp ebx, edx
        je public_6332572
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_6332560
        public_6332572 : nop
        cmp eax, esi
        mov edi, eax
        je public_63325a7
        public_6332578 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6332578
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        public_63325a7 : nop
        cmp ebx, edx
        je public_63325f9
        nop 
        lea esp, ss:[esp]
        public_63325b0 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_63325c5
        mov edi, eax
        public_63325c5 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_63325dc
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_63325dc : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x18]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_63325b0
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_63325f9 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6332530)
    }
}

#undef public_6332560
#undef public_6332572
#undef public_6332578
#undef public_63325a7
#undef public_63325b0
#undef public_63325c5
#undef public_63325dc
#undef public_63325f9
