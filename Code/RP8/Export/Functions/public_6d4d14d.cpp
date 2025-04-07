#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d317dd);
CLANG_FORWARD_PROC_SYMBOL(public_6d4cb83);
CLANG_FORWARD_PROC_SYMBOL(public_6d4cc33);
CLANG_FORWARD_PROC_SYMBOL(public_6d4cc9e);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ccc1);
CLANG_FORWARD_PROC_SYMBOL(public_6d4cf2f);
CLANG_FORWARD_PROC_SYMBOL(public_6d4d14d);

#define public_6d4d18d _public_6d4d18d
#define public_6d4d192 _public_6d4d192
#define public_6d4d199 _public_6d4d199
#define public_6d4d19c _public_6d4d19c
#define public_6d4d19e _public_6d4d19e
#define public_6d4d1ad _public_6d4d1ad
#define public_6d4d1c9 _public_6d4d1c9
#define public_6d4d1da _public_6d4d1da
#define public_6d4d1f2 _public_6d4d1f2
#define public_6d4d1f7 _public_6d4d1f7
#define public_6d4d208 _public_6d4d208
#define public_6d4d211 _public_6d4d211
#define public_6d4d214 _public_6d4d214
#define public_6d4d216 _public_6d4d216
#define public_6d4d21f _public_6d4d21f
#define public_6d4d230 _public_6d4d230
#define public_6d4d241 _public_6d4d241
#define public_6d4d255 _public_6d4d255
#define public_6d4d264 _public_6d4d264
#define public_6d4d26a _public_6d4d26a

PROC_DECLARE(0x6d4d14d, internal_6d4d14d, public_6d4d14d);
extern "C" NAKED register_t __cdecl internal_6d4d14d()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+4]
        push edi
        push 0x18
        push 1
        push esi
        call dword ptr ds : [eax]
        mov edi, eax
        add esp, 0xC
        xor ecx, ecx
        mov dword ptr ds : [esi+0x1A0], edi
        mov dword ptr ds : [edi], offset _public_6d317dd
        mov eax, dword ptr ds : [esi+0x24]
        inc ecx
        cmp eax, ecx
        push 3
        pop ebx
        je public_6d4d199
        jle public_6d4d192
        cmp eax, ebx
        jle public_6d4d18d
        cmp eax, 5
        jg public_6d4d192
        cmp dword ptr ds : [esi+0x20], 4
        jmp public_6d4d19c
        public_6d4d18d : nop
        cmp dword ptr ds : [esi+0x20], ebx
        jmp public_6d4d19c
        public_6d4d192 : nop
        cmp dword ptr ds : [esi+0x20], ecx
        jge public_6d4d1ad
        jmp public_6d4d19e
        public_6d4d199 : nop
        cmp dword ptr ds : [esi+0x20], ecx
        public_6d4d19c : nop
        je public_6d4d1ad
        public_6d4d19e : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 8
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4d1ad : nop
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, eax
        dec ecx
        je public_6d4d21f
        dec ecx
        je public_6d4d1f7
        dec ecx
        dec ecx
        je public_6d4d1da
        cmp eax, dword ptr ds : [esi+0x24]
        jne public_6d4d1c9
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [esi+0x64], eax
        jmp public_6d4d216
        public_6d4d1c9 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x19
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        jmp public_6d4d255
        public_6d4d1da : nop
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, 5
        mov dword ptr ds : [esi+0x64], 4
        jne public_6d4d1f2
        mov dword ptr ds : [edi+4], offset _public_6d4ccc1
        jmp public_6d4d208
        public_6d4d1f2 : nop
        cmp eax, 4
        jmp public_6d4d214
        public_6d4d1f7 : nop
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x64], ebx
        jne public_6d4d211
        mov dword ptr ds : [edi+4], offset _public_6d4cf2f
        public_6d4d208 : nop
        mov eax, esi
        call public_6d4cb83
        jmp public_6d4d255
        public_6d4d211 : nop
        cmp eax, 2
        public_6d4d214 : nop
        jne public_6d4d1c9
        public_6d4d216 : nop
        mov dword ptr ds : [edi+4], offset _public_6d4cc33
        jmp public_6d4d255
        public_6d4d21f : nop
        mov eax, dword ptr ds : [esi+0x24]
        xor ecx, ecx
        inc ecx
        cmp eax, ecx
        mov dword ptr ds : [esi+0x64], ecx
        je public_6d4d230
        cmp eax, ebx
        jne public_6d4d1c9
        public_6d4d230 : nop
        mov dword ptr ds : [edi+4], offset _public_6d4cc9e
        cmp dword ptr ds : [esi+0x20], ecx
        mov eax, ecx
        jle public_6d4d255
        push 0x54
        pop ecx
        public_6d4d241 : nop
        mov edx, dword ptr ds : [esi+0xC4]
        and byte ptr ds : [edx+ecx+0x30], 0
        inc eax
        add ecx, 0x54
        cmp eax, dword ptr ds : [esi+0x20]
        jl public_6d4d241
        public_6d4d255 : nop
        cmp byte ptr ds : [esi+0x4A], 0
        je public_6d4d264
        mov dword ptr ds : [esi+0x68], 1
        jmp public_6d4d26a
        public_6d4d264 : nop
        mov eax, dword ptr ds : [esi+0x64]
        mov dword ptr ds : [esi+0x68], eax
        public_6d4d26a : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d4d14d)
    }
}

#undef public_6d4d18d
#undef public_6d4d192
#undef public_6d4d199
#undef public_6d4d19c
#undef public_6d4d19e
#undef public_6d4d1ad
#undef public_6d4d1c9
#undef public_6d4d1da
#undef public_6d4d1f2
#undef public_6d4d1f7
#undef public_6d4d208
#undef public_6d4d211
#undef public_6d4d214
#undef public_6d4d216
#undef public_6d4d21f
#undef public_6d4d230
#undef public_6d4d241
#undef public_6d4d255
#undef public_6d4d264
#undef public_6d4d26a
