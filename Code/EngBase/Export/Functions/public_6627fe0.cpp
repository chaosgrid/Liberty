#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627fe0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_662802b _public_662802b
#define public_6628040 _public_6628040
#define public_662808c _public_662808c
#define public_6628094 _public_6628094
#define public_66280a7 _public_66280a7

PROC_DECLARE(0x6627fe0, internal_6627fe0, public_6627fe0);
extern "C" NAKED register_t __cdecl internal_6627fe0()
{
    __asm
    {
        push ecx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        test esi, esi
        je public_66280a7
        mov edi, dword ptr ss : [esp+0x18]
        push 0x58
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov cl, byte ptr ds : [edi+4]
        mov byte ptr ds : [esi+4], cl
        call public_66281dc
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], 0
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        mov dword ptr ss : [esp+0xC], ecx
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], edi
        cmp ebp, ecx
        je public_66280a7
        push ebx
        public_662802b : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x58
        call public_66281dc
        add esp, 4
        mov dword ptr ds : [eax], edi
        test ebx, ebx
        jne public_6628040
        mov ebx, eax
        public_6628040 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+8]
        test ebx, ebx
        mov dword ptr ds : [edx], eax
        je public_6628094
        lea esi, ss:[ebp+0x10]
        lea edi, ds:[ebx+8]
        mov ecx, 0x12
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+4], 0
        rep movsd
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_662808c
        push eax
        call dword ptr ds : [public_662906c]
        push eax
        mov dword ptr ds : [ebx+4], eax
        call dword ptr ds : [public_6629070]
        add esp, 8
        public_662808c : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x18]
        public_6628094 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [esi+0xC], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_662802b
        pop ebx
        public_66280a7 : nop
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6627fe0)
    }
}

#undef public_662802b
#undef public_6628040
#undef public_662808c
#undef public_6628094
#undef public_66280a7
