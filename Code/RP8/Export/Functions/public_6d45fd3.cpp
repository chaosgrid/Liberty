#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45ef5);
CLANG_FORWARD_PROC_SYMBOL(public_6d45fd3);

#define public_6d45fe2 _public_6d45fe2
#define public_6d45ff6 _public_6d45ff6
#define public_6d46017 _public_6d46017
#define public_6d4603b _public_6d4603b
#define public_6d4605c _public_6d4605c
#define public_6d46073 _public_6d46073
#define public_6d46082 _public_6d46082
#define public_6d46091 _public_6d46091
#define public_6d460a5 _public_6d460a5
#define public_6d460b4 _public_6d460b4
#define public_6d460ce _public_6d460ce
#define public_6d46148 _public_6d46148
#define public_6d46183 _public_6d46183

PROC_DECLARE(0x6d45fd3, internal_6d45fd3, public_6d45fd3);
extern "C" NAKED register_t __cdecl internal_6d45fd3()
{
    __asm
    {
        mov eax, 0xFFDC
        cmp dword ptr ds : [esi+0x1C], eax
        jg public_6d45fe2
        cmp dword ptr ds : [esi+0x18], eax
        jle public_6d45ff6
        public_6d45fe2 : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0x28
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d45ff6 : nop
        lea eax, ds:[esi+0xC0]
        cmp dword ptr ds : [eax], 8
        je public_6d46017
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0xD
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d46017 : nop
        push 0xA
        pop eax
        cmp dword ptr ds : [esi+0x20], eax
        jle public_6d4603b
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0x18
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [ecx+0x18], edx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x1C], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4603b : nop
        push ebx
        xor eax, eax
        inc eax
        xor ebx, ebx
        cmp dword ptr ds : [esi+0x20], ebx
        push edi
        mov edi, dword ptr ds : [esi+0xC4]
        mov dword ptr ds : [esi+0x10C], eax
        mov dword ptr ds : [esi+0x110], eax
        jle public_6d460b4
        add edi, 0xC
        public_6d4605c : nop
        mov eax, dword ptr ds : [edi-4]
        test eax, eax
        jle public_6d46073
        cmp eax, 4
        jg public_6d46073
        mov eax, dword ptr ds : [edi]
        test eax, eax
        jle public_6d46073
        cmp eax, 4
        jle public_6d46082
        public_6d46073 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x10
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d46082 : nop
        mov eax, dword ptr ds : [esi+0x10C]
        mov ecx, dword ptr ds : [edi-4]
        cmp eax, ecx
        jg public_6d46091
        mov eax, ecx
        public_6d46091 : nop
        mov dword ptr ds : [esi+0x10C], eax
        mov eax, dword ptr ds : [esi+0x110]
        mov ecx, dword ptr ds : [edi]
        cmp eax, ecx
        jg public_6d460a5
        mov eax, ecx
        public_6d460a5 : nop
        inc ebx
        mov dword ptr ds : [esi+0x110], eax
        add edi, 0x54
        cmp ebx, dword ptr ds : [esi+0x20]
        jl public_6d4605c
        public_6d460b4 : nop
        mov eax, dword ptr ds : [esi+0xC4]
        xor ebx, ebx
        cmp dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x114], 8
        jle public_6d46148
        lea edi, ds:[eax+0x1C]
        public_6d460ce : nop
        mov dword ptr ds : [edi+8], 8
        mov eax, dword ptr ds : [esi+0x10C]
        shl eax, 3
        push eax
        mov eax, dword ptr ds : [edi-0x14]
        imul eax, dword ptr ds : [esi+0x18]
        push eax
        call public_6d45ef5
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi+0x110]
        shl eax, 3
        push eax
        mov eax, dword ptr ds : [edi-0x10]
        imul eax, dword ptr ds : [esi+0x1C]
        push eax
        call public_6d45ef5
        mov dword ptr ds : [edi+4], eax
        mov eax, dword ptr ds : [edi-0x14]
        imul eax, dword ptr ds : [esi+0x18]
        push dword ptr ds : [esi+0x10C]
        push eax
        call public_6d45ef5
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi-0x10]
        imul eax, dword ptr ds : [esi+0x1C]
        push dword ptr ds : [esi+0x110]
        push eax
        call public_6d45ef5
        and dword ptr ds : [edi+0x30], 0
        add esp, 0x20
        mov dword ptr ds : [edi+0x10], eax
        mov byte ptr ds : [edi+0x14], 1
        inc ebx
        add edi, 0x54
        cmp ebx, dword ptr ds : [esi+0x20]
        jl public_6d460ce
        public_6d46148 : nop
        mov eax, dword ptr ds : [esi+0x110]
        shl eax, 3
        push eax
        push dword ptr ds : [esi+0x1C]
        call public_6d45ef5
        pop ecx
        pop ecx
        mov dword ptr ds : [esi+0x118], eax
        mov eax, dword ptr ds : [esi+0x120]
        cmp eax, dword ptr ds : [esi+0x20]
        pop edi
        pop ebx
        jl public_6d46183
        cmp byte ptr ds : [esi+0xC8], 0
        jne public_6d46183
        mov eax, dword ptr ds : [esi+0x18C]
        and byte ptr ds : [eax+0x10], 0
        ret 
        public_6d46183 : nop
        mov eax, dword ptr ds : [esi+0x18C]
        mov byte ptr ds : [eax+0x10], 1
        ret 
        UNREACHABLE_TRAP(0x6d45fd3)
    }
}

#undef public_6d45fe2
#undef public_6d45ff6
#undef public_6d46017
#undef public_6d4603b
#undef public_6d4605c
#undef public_6d46073
#undef public_6d46082
#undef public_6d46091
#undef public_6d460a5
#undef public_6d460b4
#undef public_6d460ce
#undef public_6d46148
#undef public_6d46183
