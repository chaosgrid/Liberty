#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eec320);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eec351 _public_6eec351
#define public_6eec356 _public_6eec356
#define public_6eec35e _public_6eec35e
#define public_6eec363 _public_6eec363
#define public_6eec36f _public_6eec36f
#define public_6eec390 _public_6eec390
#define public_6eec3a4 _public_6eec3a4
#define public_6eec409 _public_6eec409
#define public_6eec424 _public_6eec424
#define public_6eec463 _public_6eec463
#define public_6eec480 _public_6eec480
#define public_6eec495 _public_6eec495
#define public_6eec4a4 _public_6eec4a4
#define public_6eec4b1 _public_6eec4b1
#define public_6eec4bc _public_6eec4bc

PROC_DECLARE(0x6eec320, internal_6eec320, public_6eec320);
extern "C" NAKED register_t __cdecl internal_6eec320()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        push edi
        mov edi, eax
        jae public_6eec424
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6eec351
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6eec356
        public_6eec351 : nop
        mov ecx, 1
        public_6eec356 : nop
        test edx, edx
        jne public_6eec35e
        xor eax, eax
        jmp public_6eec363
        public_6eec35e : nop
        sub eax, edx
        sar eax, 2
        public_6eec363 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6eec36f
        xor eax, eax
        public_6eec36f : nop
        lea edx, ds:[eax*4]
        push ebp
        push edx
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, eax
        je public_6eec3a4
        lea ecx, ds:[ecx]
        public_6eec390 : nop
        push ebp
        push ebx
        call public_6eb6740
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        jne public_6eec390
        public_6eec3a4 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_6f38a50
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 4
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edx+eax*4]
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xC], ecx
        pop ebp
        jne public_6eec409
        xor ecx, ecx
        lea eax, ds:[edx+ecx*4+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_6eec409 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        lea eax, ds:[edx+ecx*4+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_6eec424 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6eec480
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x18]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        push ebx
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6f38a50
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6eec4bc
        public_6eec463 : nop
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_6eec463
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_6eec480 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6eec4a4
        public_6eec495 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6eec495
        public_6eec4a4 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6eec4bc
        mov edx, dword ptr ss : [esp+0x18]
        public_6eec4b1 : nop
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], edi
        add eax, 4
        cmp eax, ecx
        jne public_6eec4b1
        public_6eec4bc : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6eec320)
    }
}

#undef public_6eec351
#undef public_6eec356
#undef public_6eec35e
#undef public_6eec363
#undef public_6eec36f
#undef public_6eec390
#undef public_6eec3a4
#undef public_6eec409
#undef public_6eec424
#undef public_6eec463
#undef public_6eec480
#undef public_6eec495
#undef public_6eec4a4
#undef public_6eec4b1
#undef public_6eec4bc
