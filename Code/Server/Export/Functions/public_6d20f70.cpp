#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60160);

#define public_6d20fc0 _public_6d20fc0
#define public_6d20fd6 _public_6d20fd6
#define public_6d20fe8 _public_6d20fe8
#define public_6d20feb _public_6d20feb
#define public_6d21018 _public_6d21018
#define public_6d21037 _public_6d21037
#define public_6d21049 _public_6d21049
#define public_6d2104d _public_6d2104d
#define public_6d21070 _public_6d21070
#define public_6d21086 _public_6d21086
#define public_6d21092 _public_6d21092
#define public_6d210b2 _public_6d210b2
#define public_6d210b8 _public_6d210b8
#define public_6d210c7 _public_6d210c7
#define public_6d210c9 _public_6d210c9
#define public_6d210cb _public_6d210cb
#define public_6d210d9 _public_6d210d9
#define public_6d21104 _public_6d21104
#define public_6d21119 _public_6d21119

PROC_DECLARE(0x6d20f70, internal_6d20f70, public_6d20f70);
extern "C" NAKED register_t __cdecl internal_6d20f70()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+0x2C]
        test esi, esi
        push edi
        mov dword ptr ss : [ebp-0xC], 0
        je public_6d20fe8
        mov eax, esi
        shl eax, 5
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_6d60160
        mov edi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, esp
        mov dword ptr ss : [ebp-0xC], eax
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ds : [ebx+0x28]
        lea edx, ds:[eax+esi]
        shl edx, 5
        shl eax, 5
        add edx, ecx
        add eax, ecx
        cmp eax, edx
        je public_6d20feb
        lea ecx, ds:[ecx]
        public_6d20fc0 : nop
        mov ecx, dword ptr ss : [ebp-8]
        test ecx, ecx
        je public_6d20fd6
        mov edi, dword ptr ss : [ebp-8]
        mov ecx, 8
        mov esi, eax
        rep movsd
        mov edi, dword ptr ss : [ebp+8]
        public_6d20fd6 : nop
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, 0x20
        add eax, 0x20
        cmp eax, edx
        mov dword ptr ss : [ebp-8], ecx
        jne public_6d20fc0
        jmp public_6d20feb
        public_6d20fe8 : nop
        mov edi, dword ptr ss : [ebp+8]
        public_6d20feb : nop
        mov eax, dword ptr ds : [ebx+0x18]
        cmp eax, 0xFFFFFFFF
        je public_6d21086
        mov edx, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edx+4]
        shl eax, 5
        mov edx, dword ptr ds : [eax+ecx+0xC]
        lea eax, ds:[eax+ecx+0xC]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [ebx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [ebp-8], edx
        je public_6d21037
        public_6d21018 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+4]
        test al, al
        mov edi, dword ptr ss : [ebp+8]
        jne public_6d210b2
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0xC]
        jne public_6d21018
        public_6d21037 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [ebp-8]
        shl ecx, 5
        mov dword ptr ds : [ecx+eax+0xC], edx
        public_6d21049 : nop
        mov byte ptr ss : [ebp-1], 0
        public_6d2104d : nop
        mov cl, byte ptr ss : [ebp-1]
        cmp byte ptr ds : [ebx+0x24], cl
        jne public_6d210d9
        mov eax, dword ptr ds : [ebx+0x18]
        cmp eax, 0xFFFFFFFF
        je public_6d21070
        mov edx, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edx+4]
        shl eax, 5
        mov edx, dword ptr ds : [eax+ecx+4]
        mov dword ptr ss : [ebp+0xC], edx
        public_6d21070 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d210b8
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx]
        push edx
        push edi
        call dword ptr ds : [eax+4]
        movzx eax, al
        jmp public_6d210c7
        public_6d21086 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [ebp+8], eax
        je public_6d21049
        public_6d21092 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx]
        push edx
        push edi
        call dword ptr ds : [eax+4]
        test al, al
        jne public_6d210b2
        mov eax, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [ebp+8], eax
        jne public_6d21092
        jmp public_6d21049
        public_6d210b2 : nop
        mov byte ptr ss : [ebp-1], 1
        jmp public_6d2104d
        public_6d210b8 : nop
        mov al, byte ptr ds : [edi+0x1C]
        test al, al
        je public_6d210cb
        mov eax, dword ptr ss : [ebp+0xC]
        cmp dword ptr ds : [edi+8], eax
        jmp public_6d210c9
        public_6d210c7 : nop
        test al, al
        public_6d210c9 : nop
        je public_6d210d9
        public_6d210cb : nop
        mov al, 1
        lea esp, ss:[ebp-0x18]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        public_6d210d9 : nop
        mov ecx, dword ptr ds : [ebx+0x2C]
        test ecx, ecx
        je public_6d21119
        mov al, byte ptr ss : [ebp-1]
        test al, al
        je public_6d21119
        mov eax, dword ptr ds : [ebx+0x28]
        mov edx, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [ebp-0xC]
        shl ecx, 5
        shl eax, 5
        add ecx, edx
        add eax, ebx
        mov ebx, ecx
        mov ecx, edx
        cmp ecx, ebx
        je public_6d21119
        public_6d21104 : nop
        mov esi, edx
        mov edi, eax
        add edx, 0x20
        mov ecx, 8
        add eax, 0x20
        cmp edx, ebx
        rep movsd
        jne public_6d21104
        public_6d21119 : nop
        xor al, al
        lea esp, ss:[ebp-0x18]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d20f70)
    }
}

#undef public_6d20fc0
#undef public_6d20fd6
#undef public_6d20fe8
#undef public_6d20feb
#undef public_6d21018
#undef public_6d21037
#undef public_6d21049
#undef public_6d2104d
#undef public_6d21070
#undef public_6d21086
#undef public_6d21092
#undef public_6d210b2
#undef public_6d210b8
#undef public_6d210c7
#undef public_6d210c9
#undef public_6d210cb
#undef public_6d210d9
#undef public_6d21104
#undef public_6d21119
