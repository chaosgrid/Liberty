#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661f750);
CLANG_FORWARD_PROC_SYMBOL(public_6622b90);
CLANG_FORWARD_PROC_SYMBOL(public_6622ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6623200);
CLANG_FORWARD_PROC_SYMBOL(public_66234f0);
CLANG_FORWARD_PROC_SYMBOL(public_6623620);
CLANG_FORWARD_PROC_SYMBOL(public_66254d0);
CLANG_FORWARD_PROC_SYMBOL(public_6625c40);
CLANG_FORWARD_PROC_SYMBOL(public_6627050);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_661f787 _public_661f787
#define public_661f7de _public_661f7de
#define public_661f81c _public_661f81c
#define public_661f8a4 _public_661f8a4

PROC_DECLARE(0x661f750, internal_661f750, public_661f750);
extern "C" NAKED register_t __cdecl internal_661f750()
{
    __asm
    {
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        mov ecx, offset public_662b168
        call public_6625c40
        mov ecx, offset public_662b158
        call public_6625c40
        mov ecx, offset public_662b114
        call public_6625c40
        mov eax, dword ptr ds : [esi+4]
        xor ebp, ebp
        cmp eax, ebp
        je public_661f787
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], ebp
        public_661f787 : nop
        push ebx
        push edi
        lea edi, ds:[esi+0x10]
        lea edx, ss:[esp+0x10]
        mov byte ptr ds : [esi+0x2C], 0
        push edx
        mov ebx, dword ptr ds : [edi+4]
        mov ecx, edi
        call public_6627050
        mov eax, dword ptr ds : [eax]
        push ebx
        lea ecx, ss:[esp+0x18]
        push eax
        push ecx
        mov ecx, edi
        call public_6623200
        mov edi, dword ptr ds : [esi+0x34]
        lea ebx, ds:[esi+0x30]
        lea edx, ss:[esp+0x14]
        mov ecx, ebx
        push edx
        call public_6627050
        mov eax, dword ptr ds : [eax]
        push edi
        lea ecx, ss:[esp+0x14]
        push eax
        push ecx
        mov ecx, ebx
        call public_66234f0
        mov eax, dword ptr ds : [esi+0x4C]
        mov dword ptr ss : [esp+0x10], eax
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_661f81c
        public_661f7de : nop
        mov eax, dword ptr ds : [edi+0x38]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [edi]
        push 0
        mov dword ptr ds : [eax], ebp
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], edx
        lea ecx, ds:[edi+8]
        call public_66254d0
        push edi
        call public_66281d0
        mov ecx, dword ptr ds : [esi+0x50]
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        dec ecx
        cmp ebp, eax
        mov dword ptr ds : [esi+0x50], ecx
        mov edi, ebp
        jne public_661f7de
        xor ebp, ebp
        public_661f81c : nop
        mov eax, dword ptr ds : [esi+0x58]
        lea edi, ds:[esi+0x54]
        push eax
        mov ecx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x18]
        push ecx
        push eax
        mov ecx, edi
        call public_6623620
        mov byte ptr ds : [esi+0x44], 0
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        call public_6623620
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_66281d0
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        mov eax, dword ptr ds : [esi+0x4C]
        lea edi, ds:[esi+0x48]
        add esp, 4
        mov ecx, dword ptr ds : [eax]
        push eax
        lea eax, ss:[esp+0x18]
        push ecx
        push eax
        mov ecx, edi
        call public_6623620
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_66281d0
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        call public_6622ca0
        lea ecx, ds:[esi+0x10]
        call public_6622b90
        mov eax, dword ptr ds : [esi+4]
        pop edi
        cmp eax, ebp
        pop ebx
        je public_661f8a4
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+4], ebp
        public_661f8a4 : nop
        pop esi
        pop ebp
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x661f750)
    }
}

#undef public_661f787
#undef public_661f7de
#undef public_661f81c
#undef public_661f8a4
