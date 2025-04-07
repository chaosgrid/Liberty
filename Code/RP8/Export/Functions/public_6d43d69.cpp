#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43a60);
CLANG_FORWARD_PROC_SYMBOL(public_6d43d69);

#define public_6d43da3 _public_6d43da3
#define public_6d43dd7 _public_6d43dd7
#define public_6d43e1b _public_6d43e1b
#define public_6d43e1d _public_6d43e1d
#define public_6d43e25 _public_6d43e25
#define public_6d43e29 _public_6d43e29
#define public_6d43e31 _public_6d43e31
#define public_6d43e35 _public_6d43e35
#define public_6d43e46 _public_6d43e46
#define public_6d43e77 _public_6d43e77

PROC_DECLARE(0x6d43d69, internal_6d43d69, public_6d43d69);
extern "C" NAKED register_t __cdecl internal_6d43d69()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        test dword ptr ds : [esi+0x60], 0x602000
        push edi
        movzx edi, byte ptr ds : [esi+0x116]
        je public_6d43dd7
        push esi
        call public_6d43a60
        cmp edi, 3
        pop ecx
        jne public_6d43dd7
        movzx ecx, word ptr ds : [esi+0x108]
        test ecx, ecx
        mov eax, dword ptr ds : [esi+0x104]
        jle public_6d43dd7
        add eax, 2
        public_6d43da3 : nop
        movzx edx, byte ptr ds : [eax-2]
        mov ebx, dword ptr ds : [esi+0x138]
        mov dl, byte ptr ds : [edx+ebx]
        mov byte ptr ds : [eax-2], dl
        movzx edx, byte ptr ds : [eax-1]
        mov ebx, dword ptr ds : [esi+0x138]
        mov dl, byte ptr ds : [edx+ebx]
        mov byte ptr ds : [eax-1], dl
        movzx edx, byte ptr ds : [eax]
        mov ebx, dword ptr ds : [esi+0x138]
        mov dl, byte ptr ds : [edx+ebx]
        mov byte ptr ds : [eax], dl
        add eax, 3
        dec ecx
        jne public_6d43da3
        public_6d43dd7 : nop
        push 8
        pop edx
        test byte ptr ds : [esi+0x60], dl
        je public_6d43e77
        cmp edi, 3
        jne public_6d43e77
        movzx eax, byte ptr ds : [esi+0x150]
        movzx ecx, byte ptr ds : [esi+0x151]
        movzx edi, byte ptr ds : [esi+0x152]
        mov ebx, edx
        sub ebx, eax
        mov eax, edx
        sub eax, ecx
        mov ecx, edx
        sub ecx, edi
        test ebx, ebx
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp-4], ecx
        jl public_6d43e1b
        cmp ebx, edx
        jle public_6d43e1d
        public_6d43e1b : nop
        xor ebx, ebx
        public_6d43e1d : nop
        test eax, eax
        jl public_6d43e25
        cmp eax, edx
        jle public_6d43e29
        public_6d43e25 : nop
        and dword ptr ss : [ebp+8], 0
        public_6d43e29 : nop
        test ecx, ecx
        jl public_6d43e31
        cmp ecx, edx
        jle public_6d43e35
        public_6d43e31 : nop
        and dword ptr ss : [ebp-4], 0
        public_6d43e35 : nop
        mov cx, word ptr ds : [esi+0x108]
        test cx, cx
        jbe public_6d43e77
        xor eax, eax
        movzx edi, cx
        public_6d43e46 : nop
        mov ecx, dword ptr ds : [esi+0x104]
        lea edx, ds:[eax+ecx]
        mov cl, bl
        shr byte ptr ds : [edx], cl
        mov ecx, dword ptr ds : [esi+0x104]
        lea edx, ds:[eax+ecx+1]
        mov cl, byte ptr ss : [ebp+8]
        shr byte ptr ds : [edx], cl
        mov ecx, dword ptr ds : [esi+0x104]
        lea edx, ds:[eax+ecx+2]
        mov cl, byte ptr ss : [ebp-4]
        shr byte ptr ds : [edx], cl
        add eax, 3
        dec edi
        jne public_6d43e46
        public_6d43e77 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d43d69)
    }
}

#undef public_6d43da3
#undef public_6d43dd7
#undef public_6d43e1b
#undef public_6d43e1d
#undef public_6d43e25
#undef public_6d43e29
#undef public_6d43e31
#undef public_6d43e35
#undef public_6d43e46
#undef public_6d43e77
