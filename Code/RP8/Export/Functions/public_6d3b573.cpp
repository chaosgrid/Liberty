#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37ae9);
CLANG_FORWARD_PROC_SYMBOL(public_6d3b573);
CLANG_FORWARD_PROC_SYMBOL(public_6d455cc);
CLANG_FORWARD_PROC_SYMBOL(public_6d4570a);
CLANG_FORWARD_PROC_SYMBOL(public_6d4578d);
CLANG_FORWARD_PROC_SYMBOL(public_6d458c9);
CLANG_FORWARD_PROC_SYMBOL(public_6d458e1);
CLANG_FORWARD_PROC_SYMBOL(public_6d459f5);
CLANG_FORWARD_PROC_SYMBOL(public_6d45e47);
CLANG_FORWARD_PROC_SYMBOL(public_6d45e8d);
CLANG_FORWARD_PROC_SYMBOL(public_6d45ec1);

#define public_6d3b5a3 _public_6d3b5a3
#define public_6d3b5ab _public_6d3b5ab
#define public_6d3b5b2 _public_6d3b5b2
#define public_6d3b5c7 _public_6d3b5c7
#define public_6d3b5cf _public_6d3b5cf
#define public_6d3b5d6 _public_6d3b5d6
#define public_6d3b5ec _public_6d3b5ec
#define public_6d3b5ee _public_6d3b5ee
#define public_6d3b642 _public_6d3b642
#define public_6d3b662 _public_6d3b662
#define public_6d3b682 _public_6d3b682
#define public_6d3b6a2 _public_6d3b6a2
#define public_6d3b6c0 _public_6d3b6c0

PROC_DECLARE(0x6d3b573, internal_6d3b573, public_6d3b573);
extern "C" NAKED register_t __cdecl internal_6d3b573()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        inc ebx
        push ebx
        push 0
        push edi
        mov esi, ecx
        call public_6d37ae9
        mov dword ptr ds : [esi], offset public_6d5f5d0
        mov eax, dword ptr ds : [edi+0x18]
        dec eax
        je public_6d3b5ab
        dec eax
        je public_6d3b5a3
        mov dword ptr ds : [esi+0x1078], 3
        jmp public_6d3b5b2
        public_6d3b5a3 : nop
        mov dword ptr ds : [esi+0x1078], ebx
        jmp public_6d3b5b2
        public_6d3b5ab : nop
        and dword ptr ds : [esi+0x1078], 0
        public_6d3b5b2 : nop
        mov edi, dword ptr ds : [edi+0x1C]
        dec edi
        je public_6d3b5cf
        dec edi
        je public_6d3b5c7
        mov dword ptr ds : [esi+0x107C], 3
        jmp public_6d3b5d6
        public_6d3b5c7 : nop
        mov dword ptr ds : [esi+0x107C], ebx
        jmp public_6d3b5d6
        public_6d3b5cf : nop
        and dword ptr ds : [esi+0x107C], 0
        public_6d3b5d6 : nop
        cmp dword ptr ds : [esi+0x1078], 3
        jne public_6d3b5ec
        cmp dword ptr ds : [esi+0x107C], 3
        jne public_6d3b5ec
        xor eax, eax
        jmp public_6d3b5ee
        public_6d3b5ec : nop
        mov eax, ebx
        public_6d3b5ee : nop
        mov dword ptr ds : [esi+0x1074], eax
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0x31545844
        je public_6d3b6a2
        cmp eax, 0x32545844
        je public_6d3b682
        cmp eax, 0x33545844
        je public_6d3b662
        cmp eax, 0x34545844
        je public_6d3b642
        cmp eax, 0x35545844
        jne public_6d3b6c0
        mov dword ptr ds : [esi+0x1080], 0x10
        mov dword ptr ds : [esi+0x1088], offset _public_6d459f5
        mov dword ptr ds : [esi+0x1084], offset _public_6d4578d
        jmp public_6d3b6c0
        public_6d3b642 : nop
        mov dword ptr ds : [esi+0x1080], 0x10
        mov dword ptr ds : [esi+0x1088], offset _public_6d45ec1
        mov dword ptr ds : [esi+0x1084], offset public_6d45e6a
        jmp public_6d3b6c0
        public_6d3b662 : nop
        mov dword ptr ds : [esi+0x1080], 0x10
        mov dword ptr ds : [esi+0x1088], offset _public_6d458e1
        mov dword ptr ds : [esi+0x1084], offset _public_6d4570a
        jmp public_6d3b6c0
        public_6d3b682 : nop
        mov dword ptr ds : [esi+0x1080], 0x10
        mov dword ptr ds : [esi+0x1088], offset _public_6d45e8d
        mov dword ptr ds : [esi+0x1084], offset _public_6d45e47
        jmp public_6d3b6c0
        public_6d3b6a2 : nop
        mov dword ptr ds : [esi+0x1080], 8
        mov dword ptr ds : [esi+0x1088], offset _public_6d458c9
        mov dword ptr ds : [esi+0x1084], offset _public_6d455cc
        public_6d3b6c0 : nop
        mov eax, dword ptr ds : [esi+0x1040]
        mov edi, dword ptr ds : [esi+0x1030]
        mov ecx, dword ptr ds : [esi+0x103C]
        mov ebx, dword ptr ds : [esi+0x1034]
        or dword ptr ds : [esi+0x10B0], 0xFFFFFFFF
        or dword ptr ds : [esi+0x10B4], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x109C], eax
        mov eax, dword ptr ds : [esi+0x1038]
        push 0xFFFFFFFC
        pop edx
        add eax, 3
        and eax, edx
        and edi, edx
        mov dword ptr ds : [esi+0x1094], eax
        and ebx, edx
        add ecx, 3
        and ecx, edx
        mov edx, dword ptr ds : [esi+0x1044]
        sub eax, edi
        shr eax, 2
        mov dword ptr ds : [esi+0x1098], ecx
        mov dword ptr ds : [esi+0x10A4], eax
        xor eax, eax
        mov dword ptr ds : [esi+0x10A0], edx
        sub edx, dword ptr ds : [esi+0x1040]
        sub ecx, ebx
        mov dword ptr ds : [esi+0x108C], edi
        shr ecx, 2
        mov dword ptr ds : [esi+0x10B8], eax
        mov dword ptr ds : [esi+0x10BC], eax
        mov dword ptr ds : [esi+0x10C0], eax
        pop edi
        mov dword ptr ds : [esi+0x1090], ebx
        mov dword ptr ds : [esi+0x10A8], ecx
        mov dword ptr ds : [esi+0x10AC], edx
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d3b573)
    }
}

#undef public_6d3b5a3
#undef public_6d3b5ab
#undef public_6d3b5b2
#undef public_6d3b5c7
#undef public_6d3b5cf
#undef public_6d3b5d6
#undef public_6d3b5ec
#undef public_6d3b5ee
#undef public_6d3b642
#undef public_6d3b662
#undef public_6d3b682
#undef public_6d3b6a2
#undef public_6d3b6c0
