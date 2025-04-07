#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d430aa);

#define public_6d430cc _public_6d430cc
#define public_6d430dd _public_6d430dd
#define public_6d43118 _public_6d43118
#define public_6d4313c _public_6d4313c
#define public_6d4314e _public_6d4314e
#define public_6d431a4 _public_6d431a4
#define public_6d431b6 _public_6d431b6
#define public_6d431c8 _public_6d431c8
#define public_6d431d7 _public_6d431d7
#define public_6d431f9 _public_6d431f9
#define public_6d4320b _public_6d4320b
#define public_6d4322e _public_6d4322e
#define public_6d43240 _public_6d43240
#define public_6d43295 _public_6d43295
#define public_6d432b6 _public_6d432b6
#define public_6d43360 _public_6d43360
#define public_6d43379 _public_6d43379
#define public_6d433ab _public_6d433ab
#define public_6d433b9 _public_6d433b9
#define public_6d433c7 _public_6d433c7
#define public_6d433d7 _public_6d433d7
#define public_6d433f3 _public_6d433f3
#define public_6d433f4 _public_6d433f4

PROC_DECLARE(0x6d430aa, internal_6d430aa, public_6d430aa);
extern "C" NAKED register_t __cdecl internal_6d430aa()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov eax, dword ptr ss : [ebp+0x10]
        push esi
        mov esi, dword ptr ss : [ebp+0x14]
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [edi+9]
        cmp cl, 8
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [ebp-0x14], edx
        ja public_6d430cc
        test eax, eax
        jne public_6d430dd
        public_6d430cc : nop
        cmp cl, 0x10
        jne public_6d433f4
        test esi, esi
        je public_6d433f4
        public_6d430dd : nop
        push ebx
        movzx ebx, byte ptr ds : [edi+8]
        sub ebx, 0
        je public_6d43295
        push 2
        pop edi
        sub ebx, edi
        je public_6d431f9
        sub ebx, edi
        je public_6d431a4
        sub ebx, edi
        jne public_6d433f3
        cmp cl, 8
        jne public_6d4313c
        test edx, edx
        mov ecx, dword ptr ss : [ebp+0xC]
        jbe public_6d433f3
        mov esi, edx
        public_6d43118 : nop
        movzx edx, byte ptr ds : [ecx]
        mov dl, byte ptr ds : [edx+eax]
        mov byte ptr ds : [ecx], dl
        inc ecx
        movzx edx, byte ptr ds : [ecx]
        mov dl, byte ptr ds : [edx+eax]
        mov byte ptr ds : [ecx], dl
        inc ecx
        movzx edx, byte ptr ds : [ecx]
        mov dl, byte ptr ds : [edx+eax]
        mov byte ptr ds : [ecx], dl
        add ecx, edi
        dec esi
        jne public_6d43118
        jmp public_6d433f3
        public_6d4313c : nop
        test edx, edx
        mov eax, dword ptr ss : [ebp+0xC]
        jbe public_6d433f3
        movzx ebx, byte ptr ss : [ebp+0x18]
        mov dword ptr ss : [ebp+8], edx
        public_6d4314e : nop
        movzx edx, byte ptr ds : [eax+1]
        mov cl, bl
        shr edx, cl
        movzx ecx, byte ptr ds : [eax]
        mov edx, dword ptr ds : [esi+edx*4]
        mov cx, word ptr ds : [edx+ecx*2]
        mov byte ptr ds : [eax+1], cl
        mov byte ptr ds : [eax], ch
        add eax, edi
        movzx edx, byte ptr ds : [eax+1]
        mov cl, bl
        shr edx, cl
        movzx ecx, byte ptr ds : [eax]
        mov edx, dword ptr ds : [esi+edx*4]
        mov cx, word ptr ds : [edx+ecx*2]
        mov byte ptr ds : [eax+1], cl
        mov byte ptr ds : [eax], ch
        add eax, edi
        movzx edx, byte ptr ds : [eax+1]
        mov cl, bl
        shr edx, cl
        movzx ecx, byte ptr ds : [eax]
        mov edx, dword ptr ds : [esi+edx*4]
        mov cx, word ptr ds : [edx+ecx*2]
        mov byte ptr ds : [eax], ch
        mov byte ptr ds : [eax+1], cl
        add eax, 4
        dec dword ptr ss : [ebp+8]
        jne public_6d4314e
        jmp public_6d433f3
        public_6d431a4 : nop
        cmp cl, 8
        jne public_6d431c8
        test edx, edx
        mov ecx, dword ptr ss : [ebp+0xC]
        jbe public_6d433f3
        mov esi, edx
        public_6d431b6 : nop
        movzx edx, byte ptr ds : [ecx]
        mov dl, byte ptr ds : [edx+eax]
        mov byte ptr ds : [ecx], dl
        add ecx, edi
        dec esi
        jne public_6d431b6
        jmp public_6d433f3
        public_6d431c8 : nop
        test edx, edx
        mov eax, dword ptr ss : [ebp+0xC]
        jbe public_6d433f3
        movzx ebx, byte ptr ss : [ebp+0x18]
        public_6d431d7 : nop
        movzx edi, byte ptr ds : [eax+1]
        mov cl, bl
        shr edi, cl
        movzx ecx, byte ptr ds : [eax]
        mov edi, dword ptr ds : [esi+edi*4]
        mov cx, word ptr ds : [edi+ecx*2]
        mov byte ptr ds : [eax], ch
        mov byte ptr ds : [eax+1], cl
        add eax, 4
        dec edx
        jne public_6d431d7
        jmp public_6d433f3
        public_6d431f9 : nop
        cmp cl, 8
        jne public_6d4322e
        test edx, edx
        mov ecx, dword ptr ss : [ebp+0xC]
        jbe public_6d433f3
        mov esi, edx
        public_6d4320b : nop
        movzx edx, byte ptr ds : [ecx]
        mov dl, byte ptr ds : [edx+eax]
        mov byte ptr ds : [ecx], dl
        inc ecx
        movzx edx, byte ptr ds : [ecx]
        mov dl, byte ptr ds : [edx+eax]
        mov byte ptr ds : [ecx], dl
        inc ecx
        movzx edx, byte ptr ds : [ecx]
        mov dl, byte ptr ds : [edx+eax]
        mov byte ptr ds : [ecx], dl
        inc ecx
        dec esi
        jne public_6d4320b
        jmp public_6d433f3
        public_6d4322e : nop
        test edx, edx
        mov eax, dword ptr ss : [ebp+0xC]
        jbe public_6d433f3
        movzx ebx, byte ptr ss : [ebp+0x18]
        mov dword ptr ss : [ebp+8], edx
        public_6d43240 : nop
        movzx edx, byte ptr ds : [eax+1]
        mov cl, bl
        shr edx, cl
        movzx ecx, byte ptr ds : [eax]
        mov edx, dword ptr ds : [esi+edx*4]
        mov cx, word ptr ds : [edx+ecx*2]
        mov byte ptr ds : [eax+1], cl
        mov byte ptr ds : [eax], ch
        add eax, edi
        movzx edx, byte ptr ds : [eax+1]
        mov cl, bl
        shr edx, cl
        movzx ecx, byte ptr ds : [eax]
        mov edx, dword ptr ds : [esi+edx*4]
        mov cx, word ptr ds : [edx+ecx*2]
        mov byte ptr ds : [eax+1], cl
        mov byte ptr ds : [eax], ch
        add eax, edi
        movzx edx, byte ptr ds : [eax+1]
        mov cl, bl
        shr edx, cl
        movzx ecx, byte ptr ds : [eax]
        mov edx, dword ptr ds : [esi+edx*4]
        mov cx, word ptr ds : [edx+ecx*2]
        mov byte ptr ds : [eax], ch
        mov byte ptr ds : [eax+1], cl
        add eax, edi
        dec dword ptr ss : [ebp+8]
        jne public_6d43240
        jmp public_6d433f3
        public_6d43295 : nop
        cmp cl, 2
        jne public_6d43360
        test edx, edx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], ecx
        jbe public_6d43360
        lea ecx, ds:[edx-1]
        shr ecx, 2
        inc ecx
        mov dword ptr ss : [ebp-8], ecx
        public_6d432b6 : nop
        mov ecx, dword ptr ss : [ebp-4]
        movzx ecx, byte ptr ds : [ecx]
        mov edx, ecx
        mov edi, ecx
        and edx, 0xC0
        mov dword ptr ss : [ebp-0x10], edx
        mov edx, ecx
        and ecx, 3
        mov dword ptr ss : [ebp-0xC], ecx
        and edx, 0xC
        mov ecx, edx
        shl ecx, 2
        or ecx, edx
        shl ecx, 2
        mov ebx, edx
        sar ebx, 2
        or ecx, ebx
        or ecx, edx
        mov dl, byte ptr ds : [ecx+eax]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov ebx, ecx
        shl ebx, 2
        or ebx, ecx
        shl ebx, 2
        or ebx, ecx
        and edi, 0x30
        shl ebx, 2
        or ebx, ecx
        mov cl, byte ptr ds : [ebx+eax]
        shr cl, 2
        and dl, 0xCF
        or dl, cl
        mov ecx, edi
        sar ecx, 2
        or ecx, edi
        sar ecx, 2
        mov ebx, edi
        shl ebx, 2
        or ecx, ebx
        or ecx, edi
        mov cl, byte ptr ds : [ecx+eax]
        and cl, 0xC3
        shr dl, 2
        or dl, cl
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edi, ecx
        sar edi, 2
        or edi, ecx
        sar edi, 2
        or edi, ecx
        sar edi, 2
        or edi, ecx
        mov cl, byte ptr ds : [edi+eax]
        and cl, 0xC0
        shr dl, 2
        or dl, cl
        mov ecx, dword ptr ss : [ebp-4]
        inc dword ptr ss : [ebp-4]
        dec dword ptr ss : [ebp-8]
        mov byte ptr ds : [ecx], dl
        jne public_6d432b6
        mov edx, dword ptr ss : [ebp-0x14]
        mov edi, dword ptr ss : [ebp+8]
        public_6d43360 : nop
        mov cl, byte ptr ds : [edi+9]
        cmp cl, 4
        jne public_6d433ab
        test edx, edx
        mov esi, dword ptr ss : [ebp+0xC]
        jbe public_6d433f3
        lea edi, ds:[edx-1]
        shr edi, 1
        inc edi
        public_6d43379 : nop
        movzx ecx, byte ptr ds : [esi]
        mov edx, ecx
        and edx, 0xF0
        mov ebx, edx
        sar ebx, 4
        or ebx, edx
        mov dl, byte ptr ds : [ebx+eax]
        and ecx, 0xF
        mov ebx, ecx
        shl ebx, 4
        or ebx, ecx
        mov cl, byte ptr ds : [ebx+eax]
        and dl, 0xF0
        shr cl, 4
        or dl, cl
        mov byte ptr ds : [esi], dl
        inc esi
        dec edi
        jne public_6d43379
        jmp public_6d433f3
        public_6d433ab : nop
        cmp cl, 8
        jne public_6d433c7
        test edx, edx
        mov ecx, dword ptr ss : [ebp+0xC]
        jbe public_6d433f3
        mov esi, edx
        public_6d433b9 : nop
        movzx edx, byte ptr ds : [ecx]
        mov dl, byte ptr ds : [edx+eax]
        mov byte ptr ds : [ecx], dl
        inc ecx
        dec esi
        jne public_6d433b9
        jmp public_6d433f3
        public_6d433c7 : nop
        cmp cl, 0x10
        jne public_6d433f3
        test edx, edx
        mov eax, dword ptr ss : [ebp+0xC]
        jbe public_6d433f3
        movzx ebx, byte ptr ss : [ebp+0x18]
        public_6d433d7 : nop
        movzx edi, byte ptr ds : [eax+1]
        mov cl, bl
        shr edi, cl
        movzx ecx, byte ptr ds : [eax]
        mov edi, dword ptr ds : [esi+edi*4]
        mov cx, word ptr ds : [edi+ecx*2]
        mov byte ptr ds : [eax], ch
        mov byte ptr ds : [eax+1], cl
        inc eax
        inc eax
        dec edx
        jne public_6d433d7
        public_6d433f3 : nop
        pop ebx
        public_6d433f4 : nop
        pop edi
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d430aa)
    }
}

#undef public_6d430cc
#undef public_6d430dd
#undef public_6d43118
#undef public_6d4313c
#undef public_6d4314e
#undef public_6d431a4
#undef public_6d431b6
#undef public_6d431c8
#undef public_6d431d7
#undef public_6d431f9
#undef public_6d4320b
#undef public_6d4322e
#undef public_6d43240
#undef public_6d43295
#undef public_6d432b6
#undef public_6d43360
#undef public_6d43379
#undef public_6d433ab
#undef public_6d433b9
#undef public_6d433c7
#undef public_6d433d7
#undef public_6d433f3
#undef public_6d433f4
