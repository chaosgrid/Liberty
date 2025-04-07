#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3a240);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3a860 _public_6f3a860
#define public_6f3a871 _public_6f3a871
#define public_6f3a87d _public_6f3a87d
#define public_6f3a885 _public_6f3a885
#define public_6f3a891 _public_6f3a891
#define public_6f3a8c6 _public_6f3a8c6
#define public_6f3a8c8 _public_6f3a8c8
#define public_6f3a8d0 _public_6f3a8d0
#define public_6f3a8ed _public_6f3a8ed
#define public_6f3a907 _public_6f3a907

PROC_DECLARE(0x6f3a7e0, internal_6f3a7e0, public_6f3a7e0);
extern "C" NAKED register_t __cdecl internal_6f3a7e0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0xA0]
        push edi
        or edi, 0xFFFFFFFF
        cmp eax, ecx
        jae public_6f3a907
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        lea ebx, ds:[esi+0xA4]
        push ecx
        mov ecx, ebx
        call public_6f3cbb0
        mov edx, dword ptr ds : [esi+0xA8]
        cmp edx, dword ptr ss : [esp+0xC]
        je public_6f3a907
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        call public_6f3cbb0
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [esi+0xA8]
        je public_6f3a907
        mov eax, dword ptr ds : [esi+0xBC]
        cmp eax, dword ptr ds : [esi+0xC0]
        je public_6f3a885
        mov edx, dword ptr ss : [esp+0x18]
        nop 
        lea esp, ss:[esp]
        public_6f3a860 : nop
        mov ecx, dword ptr ds : [eax]
        cmp dword ptr ds : [ecx+0x14], edx
        je public_6f3a871
        cmp dword ptr ds : [ecx+0x18], edx
        je public_6f3a871
        add eax, 4
        jmp public_6f3a87d
        public_6f3a871 : nop
        push eax
        mov ecx, esi
        call public_6f3a240
        mov edx, dword ptr ss : [esp+0x18]
        public_6f3a87d : nop
        cmp eax, dword ptr ds : [esi+0xC0]
        jne public_6f3a860
        public_6f3a885 : nop
        mov ecx, dword ptr ds : [esi+0xF8]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f3a8d0
        public_6f3a891 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, dword ptr ds : [edx+0x10]
        jne public_6f3a8c6
        mov ecx, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+0xFC]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+0xFC], eax
        mov eax, edi
        jmp public_6f3a8c8
        public_6f3a8c6 : nop
        mov eax, dword ptr ds : [eax]
        public_6f3a8c8 : nop
        cmp eax, dword ptr ds : [esi+0xF8]
        jne public_6f3a891
        public_6f3a8d0 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x24]
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_6f3a8ed
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6f3a8ed : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebx
        call public_6f3c7e0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_6f3a907 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3a7e0)
    }
}

#undef public_6f3a860
#undef public_6f3a871
#undef public_6f3a87d
#undef public_6f3a885
#undef public_6f3a891
#undef public_6f3a8c6
#undef public_6f3a8c8
#undef public_6f3a8d0
#undef public_6f3a8ed
#undef public_6f3a907
