#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ec870);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62ec8c5 _public_62ec8c5
#define public_62ec8c7 _public_62ec8c7
#define public_62ec8e8 _public_62ec8e8
#define public_62ec902 _public_62ec902
#define public_62ec904 _public_62ec904
#define public_62ec917 _public_62ec917
#define public_62ec94d _public_62ec94d
#define public_62ec953 _public_62ec953
#define public_62ec95d _public_62ec95d
#define public_62ec967 _public_62ec967

PROC_DECLARE(0x62ec870, internal_62ec870, public_62ec870);
extern "C" NAKED register_t __cdecl internal_62ec870()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        xor ebx, ebx
        cmp ebp, ebx
        push edi
        mov esi, ecx
        je public_62ec94d
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov edi, eax
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x20]
        cmp eax, edi
        je public_62ec967
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_62ec8e8
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_62ec8e8
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_62ec8c5
        lea edi, ds:[eax-8]
        jmp public_62ec8c7
        public_62ec8c5 : nop
        xor edi, edi
        public_62ec8c7 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        je public_62ec8e8
        mov byte ptr ds : [esi+0xC5], bl
        public_62ec8e8 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_62ec917
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_62ec917
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_62ec902
        lea ecx, ds:[eax-8]
        jmp public_62ec904
        public_62ec902 : nop
        xor ecx, ecx
        public_62ec904 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        mov edi, eax
        call dword ptr ds : [edx+0x20]
        cmp eax, edi
        je public_62ec953
        public_62ec917 : nop
        mov byte ptr ds : [esi+0xBC], bl
        mov byte ptr ds : [esi+0xBD], bl
        mov byte ptr ds : [esi+0xBE], bl
        mov byte ptr ds : [esi+0xBF], bl
        mov byte ptr ds : [esi+0xC0], bl
        mov byte ptr ds : [esi+0xC1], bl
        mov byte ptr ds : [esi+0xC2], bl
        mov byte ptr ds : [esi+0xC3], bl
        mov byte ptr ds : [esi+0xC4], bl
        public_62ec94d : nop
        mov byte ptr ds : [esi+0xC5], bl
        public_62ec953 : nop
        cmp ebp, ebx
        lea ecx, ds:[esi+0xC]
        je public_62ec95d
        lea ebx, ss:[ebp+8]
        public_62ec95d : nop
        cmp ebx, dword ptr ds : [ecx]
        je public_62ec967
        push ebx
        call public_6341610
        public_62ec967 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62ec870)
    }
}

#undef public_62ec8c5
#undef public_62ec8c7
#undef public_62ec8e8
#undef public_62ec902
#undef public_62ec904
#undef public_62ec917
#undef public_62ec94d
#undef public_62ec953
#undef public_62ec95d
#undef public_62ec967
