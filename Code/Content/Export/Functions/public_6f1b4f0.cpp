#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1b4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d110);

#define public_6f1b536 _public_6f1b536
#define public_6f1b574 _public_6f1b574
#define public_6f1b59e _public_6f1b59e
#define public_6f1b5b3 _public_6f1b5b3
#define public_6f1b5c0 _public_6f1b5c0
#define public_6f1b5c8 _public_6f1b5c8
#define public_6f1b5d2 _public_6f1b5d2
#define public_6f1b5d9 _public_6f1b5d9
#define public_6f1b5e4 _public_6f1b5e4
#define public_6f1b5fe _public_6f1b5fe

PROC_DECLARE(0x6f1b4f0, internal_6f1b4f0, public_6f1b4f0);
extern "C" NAKED register_t __cdecl internal_6f1b4f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub eax, 2
        push ebx
        push esi
        mov ebx, ecx
        je public_6f1b5e4
        sub eax, 0x1E
        je public_6f1b536
        sub eax, 0x16
        jne public_6f1b5fe
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+0xC]
        cmp dword ptr ds : [ecx+4], eax
        jne public_6f1b5fe
        test eax, 0x3FFFFFFF
        je public_6f1b5fe
        pop esi
        mov byte ptr ds : [public_6fce594], 1
        pop ebx
        ret 8
        public_6f1b536 : nop
        mov al, byte ptr ds : [public_6fce594]
        test al, al
        je public_6f1b5fe
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edx]
        fadd dword ptr ds : [ebx+0x84]
        fst dword ptr ds : [ebx+0x84]
        fcomp dword ptr ds : [public_6fb8df8]
        fnstsw ax
        test ah, 1
        jne public_6f1b5fe
        mov eax, dword ptr ds : [ebx+0x40]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f1b5fe
        push edi
        public_6f1b574 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ebx]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0xC]
        mov edi, eax
        test edi, edi
        je public_6f1b59e
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx+4]
        mov ecx, edi
        call public_6f1d110
        mov eax, dword ptr ds : [edi]
        push 0
        mov ecx, edi
        call dword ptr ds : [eax+4]
        public_6f1b59e : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6f1b5c0
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6f1b5d9
        public_6f1b5b3 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6f1b5b3
        jmp public_6f1b5d9
        public_6f1b5c0 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f1b5d2
        public_6f1b5c8 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6f1b5c8
        public_6f1b5d2 : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6f1b5d9
        mov esi, eax
        public_6f1b5d9 : nop
        cmp esi, dword ptr ds : [ebx+0x40]
        jne public_6f1b574
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6f1b5e4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+0xC]
        cmp dword ptr ds : [ecx+4], eax
        jne public_6f1b5fe
        test eax, 0x3FFFFFFF
        je public_6f1b5fe
        mov byte ptr ds : [public_6fce594], 0
        public_6f1b5fe : nop
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f1b4f0)
    }
}

#undef public_6f1b536
#undef public_6f1b574
#undef public_6f1b59e
#undef public_6f1b5b3
#undef public_6f1b5c0
#undef public_6f1b5c8
#undef public_6f1b5d2
#undef public_6f1b5d9
#undef public_6f1b5e4
#undef public_6f1b5fe
