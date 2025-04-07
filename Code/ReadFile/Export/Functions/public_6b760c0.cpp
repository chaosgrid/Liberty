#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b760c0);
CLANG_FORWARD_PROC_SYMBOL(public_6b761a0);

#define public_6b760f1 _public_6b760f1
#define public_6b760fd _public_6b760fd
#define public_6b76103 _public_6b76103
#define public_6b7610f _public_6b7610f
#define public_6b76117 _public_6b76117
#define public_6b7613f _public_6b7613f
#define public_6b7614a _public_6b7614a
#define public_6b76177 _public_6b76177

PROC_DECLARE(0x6b760c0, internal_6b760c0, public_6b760c0);
extern "C" NAKED register_t __cdecl internal_6b760c0()
{
    __asm
    {
        sub esp, 0x210
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6b79068]
        push esi
        push edi
        mov esi, edx
        push 0x2E
        push esi
        mov ebx, ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6b7610f
        cmp eax, esi
        mov eax, esi
        jne public_6b760fd
        lea edx, ss:[esp+0x11]
        mov byte ptr ss : [esp+0x10], 0x2A
        sub edx, esi
        public_6b760f1 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6b760f1
        jmp public_6b7613f
        public_6b760fd : nop
        lea edx, ss:[esp+0x10]
        sub edx, esi
        public_6b76103 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6b76103
        jmp public_6b7613f
        public_6b7610f : nop
        lea edx, ss:[esp+0x10]
        mov eax, esi
        sub edx, esi
        public_6b76117 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6b76117
        lea edi, ss:[esp+0x10]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov ax, word ptr ds : [public_6b7a1e0]
        mov cl, byte ptr ds : [public_6b7a1e2]
        dec edi
        mov word ptr ds : [edi], ax
        mov byte ptr ds : [edi+2], cl
        public_6b7613f : nop
        lea edx, ss:[esp+0x118]
        mov eax, ebx
        sub edx, ebx
        public_6b7614a : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6b7614a
        push 0x2E
        push ebx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6b76177
        lea edi, ss:[esp+0x118]
        or ecx, 0xFFFFFFFF
        mov dx, word ptr ds : [public_6b7a1dc]
        repne scasb
        mov word ptr ds : [edi-1], dx
        public_6b76177 : nop
        lea edx, ss:[esp+0x10]
        lea ecx, ss:[esp+0x118]
        call public_6b761a0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x210
        ret 
        UNREACHABLE_TRAP(0x6b760c0)
    }
}

#undef public_6b760f1
#undef public_6b760fd
#undef public_6b76103
#undef public_6b7610f
#undef public_6b76117
#undef public_6b7613f
#undef public_6b7614a
#undef public_6b76177
