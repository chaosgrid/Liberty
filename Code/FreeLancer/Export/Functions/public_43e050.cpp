#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43e050);
CLANG_FORWARD_PROC_SYMBOL(public_43e210);
CLANG_FORWARD_PROC_SYMBOL(public_43e4c0);
CLANG_FORWARD_PROC_SYMBOL(public_4b4510);

#define public_43e080 _public_43e080
#define public_43e0a1 _public_43e0a1
#define public_43e0a7 _public_43e0a7
#define public_43e0c3 _public_43e0c3
#define public_43e0f0 _public_43e0f0
#define public_43e0f9 _public_43e0f9
#define public_43e101 _public_43e101
#define public_43e114 _public_43e114
#define public_43e120 _public_43e120
#define public_43e140 _public_43e140
#define public_43e164 _public_43e164
#define public_43e168 _public_43e168
#define public_43e16d _public_43e16d
#define public_43e184 _public_43e184
#define public_43e18c _public_43e18c
#define public_43e1ab _public_43e1ab
#define public_43e1d8 _public_43e1d8
#define public_43e1de _public_43e1de
#define public_43e1e9 _public_43e1e9
#define public_43e1f7 _public_43e1f7

PROC_DECLARE(0x43e050, internal_43e050, public_43e050);
extern "C" NAKED register_t __cdecl internal_43e050()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x374]
        push esi
        test eax, eax
        mov eax, dword ptr ss : [ebp+0x380]
        mov esi, dword ptr ds : [eax]
        push edi
        jne public_43e114
        cmp esi, eax
        mov edi, dword ptr ds : [public_668740]
        je public_43e1f7
        lea ebx, ds:[ebx]
        public_43e080 : nop
        mov al, byte ptr ds : [esi+9]
        test al, al
        mov eax, dword ptr ds : [esi+0x38]
        je public_43e0a7
        cmp eax, edi
        mov ecx, dword ptr ds : [esi+0x20]
        push 0
        jne public_43e0a1
        mov eax, dword ptr ds : [ecx]
        push 1
        push 0xC
        call dword ptr ds : [eax+0xA8]
        jmp public_43e101
        public_43e0a1 : nop
        push 0
        push 0xC
        jmp public_43e0f9
        public_43e0a7 : nop
        cmp eax, 6
        jne public_43e0c3
        mov ecx, dword ptr ds : [esi+0x20]
        push 0
        push 1
        mov byte ptr ds : [esi+8], 1
        mov eax, dword ptr ds : [ecx]
        push 2
        call dword ptr ds : [eax+0xA8]
        jmp public_43e101
        public_43e0c3 : nop
        cmp eax, 0xC
        jne public_43e0f0
        call public_4b4510
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [ecx]
        mov bl, al
        xor eax, eax
        test bl, bl
        sete al
        push 0
        push eax
        push 2
        call dword ptr ds : [edx+0xA8]
        test bl, bl
        sete cl
        mov byte ptr ds : [esi+8], cl
        jmp public_43e101
        public_43e0f0 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        push 0
        push 0
        push 2
        public_43e0f9 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xA8]
        public_43e101 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0x380]
        jne public_43e080
        jmp public_43e1f7
        public_43e114 : nop
        cmp esi, eax
        je public_43e1f7
        lea esp, ss:[esp]
        public_43e120 : nop
        mov al, byte ptr ds : [esi+9]
        test al, al
        je public_43e18c
        mov eax, dword ptr ds : [esi+0x24]
        mov edi, dword ptr ds : [eax+4]
        test edi, edi
        je public_43e184
        mov eax, dword ptr ss : [ebp+0x370]
        test eax, eax
        jne public_43e140
        mov eax, dword ptr ds : [public_5c7078]
        public_43e140 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [edi]
        mov cl, dl
        cmp dl, bl
        jne public_43e168
        test cl, cl
        je public_43e164
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [edi+1]
        mov cl, dl
        cmp dl, bl
        jne public_43e168
        add eax, 2
        add edi, 2
        test cl, cl
        jne public_43e140
        public_43e164 : nop
        xor eax, eax
        jmp public_43e16d
        public_43e168 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_43e16d : nop
        test eax, eax
        jne public_43e184
        mov ecx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 0xC
        call dword ptr ds : [eax+0xA8]
        jmp public_43e1e9
        public_43e184 : nop
        push 0
        push 0
        push 0xC
        jmp public_43e1de
        public_43e18c : nop
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, 6
        jne public_43e1ab
        mov ecx, dword ptr ds : [esi+0x20]
        push 0
        push 1
        mov byte ptr ds : [esi+8], 1
        mov eax, dword ptr ds : [ecx]
        push 2
        call dword ptr ds : [eax+0xA8]
        jmp public_43e1e9
        public_43e1ab : nop
        cmp eax, 0xC
        jne public_43e1d8
        call public_4b4510
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [ecx]
        mov bl, al
        xor eax, eax
        test bl, bl
        sete al
        push 0
        push eax
        push 2
        call dword ptr ds : [edx+0xA8]
        test bl, bl
        sete cl
        mov byte ptr ds : [esi+8], cl
        jmp public_43e1e9
        public_43e1d8 : nop
        push 0
        push 0
        push 2
        public_43e1de : nop
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xA8]
        public_43e1e9 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0x380]
        jne public_43e120
        public_43e1f7 : nop
        mov ecx, ebp
        call public_43e4c0
        push 1
        mov ecx, ebp
        call public_43e210
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x43e050)
    }
}

#undef public_43e080
#undef public_43e0a1
#undef public_43e0a7
#undef public_43e0c3
#undef public_43e0f0
#undef public_43e0f9
#undef public_43e101
#undef public_43e114
#undef public_43e120
#undef public_43e140
#undef public_43e164
#undef public_43e168
#undef public_43e16d
#undef public_43e184
#undef public_43e18c
#undef public_43e1ab
#undef public_43e1d8
#undef public_43e1de
#undef public_43e1e9
#undef public_43e1f7
