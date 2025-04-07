#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d425d0);

#define public_6d42600 _public_6d42600
#define public_6d42607 _public_6d42607
#define public_6d42634 _public_6d42634
#define public_6d42636 _public_6d42636
#define public_6d4263c _public_6d4263c
#define public_6d42652 _public_6d42652
#define public_6d42665 _public_6d42665
#define public_6d42670 _public_6d42670
#define public_6d42686 _public_6d42686
#define public_6d42699 _public_6d42699
#define public_6d426f9 _public_6d426f9
#define public_6d426fb _public_6d426fb
#define public_6d4270c _public_6d4270c
#define public_6d4273f _public_6d4273f

PROC_DECLARE(0x6d425d0, internal_6d425d0, public_6d425d0);
extern "C" NAKED register_t __cdecl internal_6d425d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [esi+0x1008]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x10], ecx
        mov edx, dword ptr ds : [edi]
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [edx+8]
        test al, al
        je public_6d4273f
        nop 
        public_6d42600 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        test eax, eax
        je public_6d42652
        public_6d42607 : nop
        mov ecx, dword ptr ds : [esi+0x1008]
        mov edx, dword ptr ds : [esi+0x100C]
        lea eax, ds:[ecx+4]
        cmp eax, edx
        mov dword ptr ds : [esi+0x1008], eax
        jbe public_6d42634
        add eax, 0xFFFFFFFC
        push 4
        mov ecx, esi
        mov dword ptr ds : [esi+0x1008], eax
        call public_6d1f540
        jmp public_6d42636
        public_6d42634 : nop
        mov eax, ecx
        public_6d42636 : nop
        test eax, eax
        je public_6d4263c
        mov dword ptr ds : [eax], edi
        public_6d4263c : nop
        mov edi, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ds : [edi]
        push ebx
        mov ecx, edi
        call dword ptr ds : [eax+8]
        test al, al
        je public_6d42699
        mov eax, dword ptr ds : [ebx+0x18]
        test eax, eax
        jne public_6d42607
        public_6d42652 : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d42665
        mov ecx, dword ptr ds : [ebx+8]
        cmp ecx, dword ptr ds : [ebx+0x10]
        je public_6d426fb
        public_6d42665 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esp, ss:[esp]
        public_6d42670 : nop
        mov eax, dword ptr ds : [esi+0x1000]
        lea ecx, ds:[eax+0x10]
        cmp ecx, edx
        ja public_6d42686
        cmp dword ptr ds : [eax+0xC], edx
        jae public_6d4270c
        public_6d42686 : nop
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [esi+0x1000]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+0x1000], eax
        jmp public_6d42670
        public_6d42699 : nop
        mov eax, dword ptr ds : [esi+0x1008]
        cmp dword ptr ss : [esp+0x14], eax
        je public_6d4273f
        mov ecx, dword ptr ds : [esi+0x1004]
        add eax, 0xFFFFFFFC
        cmp eax, ecx
        mov dword ptr ds : [esi+0x1008], eax
        jne public_6d426f9
        mov edx, dword ptr ds : [esi+0x1000]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [esi+0x1000]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x1000], eax
        add eax, 0x10
        mov dword ptr ds : [esi+0x1004], eax
        mov eax, dword ptr ds : [esi+0x1000]
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0x1008], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi+0x100C], edx
        mov eax, ecx
        public_6d426f9 : nop
        mov edi, dword ptr ds : [eax]
        public_6d426fb : nop
        mov eax, dword ptr ds : [edi]
        push ebx
        mov ecx, edi
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_6d42699
        jmp public_6d42600
        public_6d4270c : nop
        mov ecx, dword ptr ds : [esi+0x1000]
        mov eax, dword ptr ds : [esi+0x1000]
        add ecx, 0x10
        mov dword ptr ds : [esi+0x1004], ecx
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [esi+0x1000]
        mov dword ptr ds : [esi+0x1008], edx
        mov edx, dword ptr ds : [ecx+0xC]
        pop edi
        mov dword ptr ds : [esi+0x100C], edx
        pop esi
        mov al, 1
        pop ebx
        ret 
        public_6d4273f : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d425d0)
    }
}

#undef public_6d42600
#undef public_6d42607
#undef public_6d42634
#undef public_6d42636
#undef public_6d4263c
#undef public_6d42652
#undef public_6d42665
#undef public_6d42670
#undef public_6d42686
#undef public_6d42699
#undef public_6d426f9
#undef public_6d426fb
#undef public_6d4270c
#undef public_6d4273f
