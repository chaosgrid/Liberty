#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f685);
CLANG_FORWARD_PROC_SYMBOL(public_6d30ccb);
CLANG_FORWARD_PROC_SYMBOL(public_6d30daa);
CLANG_FORWARD_PROC_SYMBOL(public_6d31804);
CLANG_FORWARD_PROC_SYMBOL(public_6d31a74);
CLANG_FORWARD_PROC_SYMBOL(public_6d31f1b);
CLANG_FORWARD_PROC_SYMBOL(public_6d321f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d32786);
CLANG_FORWARD_PROC_SYMBOL(public_6d33038);
CLANG_FORWARD_PROC_SYMBOL(public_6d33068);

#define public_6d330a8 _public_6d330a8
#define public_6d330e4 _public_6d330e4
#define public_6d330f3 _public_6d330f3
#define public_6d33102 _public_6d33102
#define public_6d33111 _public_6d33111
#define public_6d33120 _public_6d33120
#define public_6d3312f _public_6d3312f
#define public_6d3313c _public_6d3313c
#define public_6d3313e _public_6d3313e
#define public_6d33155 _public_6d33155
#define public_6d33168 _public_6d33168
#define public_6d33176 _public_6d33176
#define public_6d33184 _public_6d33184
#define public_6d331a3 _public_6d331a3
#define public_6d331b5 _public_6d331b5
#define public_6d331f4 _public_6d331f4
#define public_6d33203 _public_6d33203
#define public_6d33205 _public_6d33205
#define public_6d3320b _public_6d3320b
#define public_6d3322d _public_6d3322d
#define public_6d33236 _public_6d33236

PROC_DECLARE(0x6d33068, internal_6d33068, public_6d33068);
extern "C" NAKED register_t __cdecl internal_6d33068()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov dword ptr ss : [ebp-0x20], edi
        mov dword ptr ss : [ebp-0x1C], 5
        mov dword ptr ss : [ebp-0x18], 4
        mov dword ptr ss : [ebp-0x14], 1
        mov dword ptr ss : [ebp-0x10], 3
        mov dword ptr ss : [ebp-0xC], 2
        mov dword ptr ss : [ebp-8], 6
        mov dword ptr ss : [ebp-4], edi
        public_6d330a8 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [esi+0x40], eax
        mov eax, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+eax*4-0x20]
        mov dword ptr ds : [esi+0x48], eax
        sub eax, edi
        mov dword ptr ds : [esi+0x44], 3
        je public_6d3312f
        dec eax
        je public_6d33120
        dec eax
        je public_6d33111
        dec eax
        je public_6d33102
        dec eax
        je public_6d330f3
        dec eax
        je public_6d330e4
        dec eax
        jne public_6d3313e
        push dword ptr ss : [ebp+0xC]
        mov ecx, esi
        push dword ptr ss : [ebp+8]
        call public_6d30daa
        jmp public_6d3313c
        public_6d330e4 : nop
        push dword ptr ss : [ebp+0xC]
        mov ecx, esi
        push dword ptr ss : [ebp+8]
        call public_6d31f1b
        jmp public_6d3313c
        public_6d330f3 : nop
        push dword ptr ss : [ebp+0xC]
        mov ecx, esi
        push dword ptr ss : [ebp+8]
        call public_6d32786
        jmp public_6d3313c
        public_6d33102 : nop
        push dword ptr ss : [ebp+0xC]
        mov ecx, esi
        push dword ptr ss : [ebp+8]
        call public_6d321f0
        jmp public_6d3313c
        public_6d33111 : nop
        push dword ptr ss : [ebp+0xC]
        mov ecx, esi
        push dword ptr ss : [ebp+8]
        call public_6d31a74
        jmp public_6d3313c
        public_6d33120 : nop
        push dword ptr ss : [ebp+0xC]
        mov ecx, esi
        push dword ptr ss : [ebp+8]
        call public_6d31804
        jmp public_6d3313c
        public_6d3312f : nop
        push dword ptr ss : [ebp+0xC]
        mov ecx, esi
        push dword ptr ss : [ebp+8]
        call public_6d33038
        public_6d3313c : nop
        mov ebx, eax
        public_6d3313e : nop
        cmp ebx, edi
        jge public_6d331a3
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        je public_6d33155
        cmp dword ptr ds : [esi+0x38], edi
        je public_6d33155
        push eax
        call public_6d2f249
        pop ecx
        public_6d33155 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, edi
        je public_6d33168
        cmp dword ptr ds : [esi+0x3C], edi
        je public_6d33168
        push eax
        call public_6d2f249
        pop ecx
        public_6d33168 : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        cmp ecx, edi
        je public_6d33176
        push 1
        call public_6d30ccb
        public_6d33176 : nop
        mov ecx, dword ptr ds : [esi+0x50]
        cmp ecx, edi
        je public_6d33184
        push 1
        call public_6d30ccb
        public_6d33184 : nop
        inc dword ptr ss : [ebp-4]
        cmp dword ptr ss : [ebp-4], 7
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0x38], edi
        mov dword ptr ds : [esi+0x3C], edi
        mov dword ptr ds : [esi+0x4C], edi
        mov dword ptr ds : [esi+0x50], edi
        jb public_6d330a8
        public_6d331a3 : nop
        push 7
        pop ecx
        cmp dword ptr ss : [ebp-4], ecx
        jne public_6d331b5
        mov eax, 0x88760B59
        jmp public_6d33236
        public_6d331b5 : nop
        mov ebx, dword ptr ss : [ebp+0x10]
        cmp ebx, edi
        je public_6d33205
        xor eax, eax
        mov edi, ebx
        rep stosd
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], 1
        push dword ptr ds : [esi]
        call public_6d2f685
        mov dword ptr ds : [ebx+0x10], eax
        mov eax, dword ptr ds : [esi+0x44]
        mov dword ptr ds : [ebx+0x14], eax
        mov eax, dword ptr ds : [esi+0x48]
        mov dword ptr ds : [ebx+0x18], eax
        pop ecx
        lea eax, ds:[esi+0x4C]
        public_6d331f4 : nop
        cmp dword ptr ds : [eax], 0
        je public_6d33203
        inc dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [eax]
        add eax, 0x4C
        jmp public_6d331f4
        public_6d33203 : nop
        xor edi, edi
        public_6d33205 : nop
        cmp esi, edi
        mov eax, esi
        je public_6d3322d
        public_6d3320b : nop
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [eax+0x20], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [eax+0x24], ecx
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [eax+0x18], edi
        mov dword ptr ds : [eax+0x1C], edi
        mov dword ptr ds : [eax+0x28], edi
        mov dword ptr ds : [eax+0x2C], ecx
        mov eax, dword ptr ds : [eax+0x4C]
        cmp eax, edi
        jne public_6d3320b
        public_6d3322d : nop
        mov esi, dword ptr ds : [esi+0x50]
        cmp esi, edi
        jne public_6d33205
        xor eax, eax
        public_6d33236 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6d33068)
    }
}

#undef public_6d330a8
#undef public_6d330e4
#undef public_6d330f3
#undef public_6d33102
#undef public_6d33111
#undef public_6d33120
#undef public_6d3312f
#undef public_6d3313c
#undef public_6d3313e
#undef public_6d33155
#undef public_6d33168
#undef public_6d33176
#undef public_6d33184
#undef public_6d331a3
#undef public_6d331b5
#undef public_6d331f4
#undef public_6d33203
#undef public_6d33205
#undef public_6d3320b
#undef public_6d3322d
#undef public_6d33236
