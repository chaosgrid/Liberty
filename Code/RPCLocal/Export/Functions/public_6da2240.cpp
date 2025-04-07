#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d913e0);
CLANG_FORWARD_PROC_SYMBOL(public_6da2240);

#define public_6da225f _public_6da225f
#define public_6da2261 _public_6da2261
#define public_6da227f _public_6da227f
#define public_6da2286 _public_6da2286
#define public_6da2292 _public_6da2292
#define public_6da22ce _public_6da22ce
#define public_6da22e0 _public_6da22e0
#define public_6da22fa _public_6da22fa
#define public_6da2321 _public_6da2321
#define public_6da234e _public_6da234e
#define public_6da237a _public_6da237a
#define public_6da23a8 _public_6da23a8
#define public_6da23d2 _public_6da23d2
#define public_6da23fd _public_6da23fd
#define public_6da2430 _public_6da2430
#define public_6da2473 _public_6da2473

PROC_DECLARE(0x6da2240, internal_6da2240, public_6da2240);
extern "C" NAKED register_t __cdecl internal_6da2240()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x20]
        test ecx, ecx
        push esi
        push edi
        je public_6da225f
        call public_6d913e0
        test eax, eax
        je public_6da225f
        mov cx, word ptr ds : [eax+8]
        jmp public_6da2261
        public_6da225f : nop
        xor ecx, ecx
        public_6da2261 : nop
        mov esi, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [ebx+0x14]
        mov ebp, 2
        add esi, ebp
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx+0x10], esi
        mov edi, 0x16
        jbe public_6da227f
        mov dword ptr ds : [ebx+0x1C], edi
        public_6da227f : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6da2292
        public_6da2286 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6da2292 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov word ptr ds : [eax], cx
        add eax, 2
        test cx, cx
        mov dword ptr ds : [ebx+0x18], eax
        jbe public_6da2473
        mov ecx, dword ptr ds : [ebx+0x20]
        call public_6d913e0
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6da2473
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6da2473
        jmp public_6da22e0
        public_6da22ce : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, 0x16
        mov ebp, 2
        lea esp, ss:[esp]
        public_6da22e0 : nop
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ds : [ebx+0x14]
        mov ecx, 4
        add eax, ecx
        cmp eax, esi
        mov dword ptr ds : [ebx+0x10], eax
        jbe public_6da22fa
        mov dword ptr ds : [ebx+0x1C], edi
        public_6da22fa : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6da2286
        mov eax, dword ptr ds : [ebx+0x18]
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax], esi
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov eax, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ds : [ebx+0x14]
        add eax, ecx
        cmp eax, esi
        mov dword ptr ds : [ebx+0x10], eax
        jbe public_6da2321
        mov dword ptr ds : [ebx+0x1C], edi
        public_6da2321 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6da2286
        fld dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [ebx+0x18]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov esi, dword ptr ds : [ebx+0x10]
        add esi, ecx
        mov ecx, dword ptr ds : [ebx+0x14]
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6da234e
        mov dword ptr ds : [ebx+0x1C], edi
        public_6da234e : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6da2286
        mov eax, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov esi, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        add esi, ebp
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6da237a
        mov dword ptr ds : [ebx+0x1C], edi
        public_6da237a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6da2286
        mov eax, dword ptr ds : [ebx+0x18]
        mov cx, word ptr ds : [edx+0xC]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [ebx+0x18], eax
        mov esi, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        inc esi
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6da23a8
        mov dword ptr ds : [ebx+0x1C], edi
        public_6da23a8 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6da2286
        mov esi, dword ptr ds : [ebx+0x18]
        mov al, byte ptr ds : [edx+0xE]
        mov byte ptr ds : [esi], al
        inc esi
        mov dword ptr ds : [ebx+0x18], esi
        mov esi, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        inc esi
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6da23d2
        mov dword ptr ds : [ebx+0x1C], edi
        public_6da23d2 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6da2286
        mov esi, dword ptr ds : [ebx+0x18]
        mov cl, byte ptr ds : [edx+0xF]
        mov byte ptr ds : [esi], cl
        inc esi
        mov dword ptr ds : [ebx+0x18], esi
        mov esi, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        add esi, ebp
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6da23fd
        mov dword ptr ds : [ebx+0x1C], edi
        public_6da23fd : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6da2286
        mov eax, dword ptr ds : [ebx+0x18]
        mov cx, word ptr ds : [edx+0x10]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [ebx+0x18], eax
        movzx eax, word ptr ds : [edx+0x10]
        mov esi, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        add esi, eax
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6da2430
        mov dword ptr ds : [ebx+0x1C], edi
        public_6da2430 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6da2286
        movzx eax, word ptr ds : [edx+0x10]
        mov esi, dword ptr ds : [edx+0x14]
        mov ebp, dword ptr ds : [ebx+0x18]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ebp, eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x18], ebp
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6da22ce
        public_6da2473 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6da2240)
    }
}

#undef public_6da225f
#undef public_6da2261
#undef public_6da227f
#undef public_6da2286
#undef public_6da2292
#undef public_6da22ce
#undef public_6da22e0
#undef public_6da22fa
#undef public_6da2321
#undef public_6da234e
#undef public_6da237a
#undef public_6da23a8
#undef public_6da23d2
#undef public_6da23fd
#undef public_6da2430
#undef public_6da2473
