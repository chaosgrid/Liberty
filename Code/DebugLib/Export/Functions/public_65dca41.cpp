#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dc749);
CLANG_FORWARD_PROC_SYMBOL(public_65dca41);
CLANG_FORWARD_PROC_SYMBOL(public_65dcc49);
CLANG_FORWARD_PROC_SYMBOL(public_65ddb10);

#define public_65dca4f _public_65dca4f
#define public_65dca7a _public_65dca7a
#define public_65dca9d _public_65dca9d
#define public_65dcab4 _public_65dcab4
#define public_65dcab7 _public_65dcab7
#define public_65dcaca _public_65dcaca
#define public_65dcae9 _public_65dcae9
#define public_65dcafa _public_65dcafa
#define public_65dcafd _public_65dcafd
#define public_65dcb0c _public_65dcb0c
#define public_65dcb1c _public_65dcb1c
#define public_65dcb23 _public_65dcb23
#define public_65dcb2f _public_65dcb2f
#define public_65dcb3b _public_65dcb3b
#define public_65dcb59 _public_65dcb59
#define public_65dcb6a _public_65dcb6a
#define public_65dcba7 _public_65dcba7
#define public_65dcbd1 _public_65dcbd1
#define public_65dcbdd _public_65dcbdd
#define public_65dcbeb _public_65dcbeb
#define public_65dcbed _public_65dcbed
#define public_65dcc10 _public_65dcc10
#define public_65dcc42 _public_65dcc42
#define public_65dcc44 _public_65dcc44

PROC_DECLARE(0x65dca41, internal_65dca41, public_65dca41);
extern "C" NAKED register_t __cdecl internal_65dca41()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ds : [public_65e55e8]
        push edi
        public_65dca4f : nop
        mov edx, dword ptr ds : [esi+0x10]
        cmp edx, 0xFFFFFFFF
        je public_65dcafa
        mov edi, dword ptr ds : [esi+8]
        lea ecx, ds:[esi+0x2018]
        mov eax, edi
        sub eax, esi
        sub eax, 0x18
        sar eax, 3
        shl eax, 0xC
        add eax, edx
        cmp edi, ecx
        mov dword ptr ss : [ebp-4], eax
        jae public_65dcab4
        public_65dca7a : nop
        mov ecx, dword ptr ds : [edi]
        mov ebx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        jl public_65dca9d
        cmp dword ptr ds : [edi+4], ebx
        jbe public_65dca9d
        push ebx
        push ecx
        push eax
        call public_65dcc49
        add esp, 0xC
        test eax, eax
        jne public_65dcb0c
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edi+4], ebx
        public_65dca9d : nop
        add edi, 8
        lea ecx, ds:[esi+0x2018]
        add eax, 0x1000
        cmp edi, ecx
        mov dword ptr ss : [ebp-4], eax
        jb public_65dca7a
        jmp public_65dcab7
        public_65dcab4 : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_65dcab7 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0x10]
        lea edi, ds:[esi+0x18]
        mov dword ptr ss : [ebp-8], eax
        cmp edi, eax
        mov dword ptr ss : [ebp-4], ecx
        jae public_65dcafd
        public_65dcaca : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        jl public_65dcae9
        cmp dword ptr ds : [edi+4], ebx
        jbe public_65dcae9
        push ebx
        push eax
        push dword ptr ss : [ebp-4]
        call public_65dcc49
        add esp, 0xC
        test eax, eax
        jne public_65dcb0c
        mov dword ptr ds : [edi+4], ebx
        public_65dcae9 : nop
        add dword ptr ss : [ebp-4], 0x1000
        add edi, 8
        cmp edi, dword ptr ss : [ebp-8]
        jb public_65dcaca
        jmp public_65dcafd
        public_65dcafa : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_65dcafd : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_65e55e8]
        je public_65dcb1c
        jmp public_65dca4f
        public_65dcb0c : nop
        mov dword ptr ds : [public_65e55e8], esi
        sub dword ptr ds : [edi], ebx
        mov dword ptr ds : [esi+8], edi
        jmp public_65dcc44
        public_65dcb1c : nop
        mov eax, offset public_65e35c8
        mov edi, eax
        public_65dcb23 : nop
        cmp dword ptr ds : [edi+0x10], 0xFFFFFFFF
        je public_65dcb2f
        cmp dword ptr ds : [edi+0xC], 0
        jne public_65dcb3b
        public_65dcb2f : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        je public_65dcc10
        jmp public_65dcb23
        public_65dcb3b : nop
        mov ebx, dword ptr ds : [edi+0xC]
        and dword ptr ss : [ebp-4], 0
        mov esi, ebx
        mov eax, ebx
        sub esi, edi
        sub esi, 0x18
        sar esi, 3
        shl esi, 0xC
        add esi, dword ptr ds : [edi+0x10]
        cmp dword ptr ds : [ebx], 0xFFFFFFFF
        jne public_65dcb6a
        public_65dcb59 : nop
        cmp dword ptr ss : [ebp-4], 0x10
        jge public_65dcb6a
        add eax, 8
        inc dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        je public_65dcb59
        public_65dcb6a : nop
        mov eax, dword ptr ss : [ebp-4]
        push 4
        shl eax, 0xC
        push 0x1000
        push eax
        push esi
        mov dword ptr ss : [ebp-8], eax
        call dword ptr ds : [public_65e10d4]
        cmp eax, esi
        jne public_65dcc42
        push 0
        push dword ptr ss : [ebp-8]
        push esi
        call public_65ddb10
        mov edx, dword ptr ss : [ebp-4]
        add esp, 0xC
        test edx, edx
        mov ecx, ebx
        jle public_65dcbd1
        lea eax, ds:[esi+4]
        mov dword ptr ss : [ebp-4], edx
        public_65dcba7 : nop
        or byte ptr ds : [eax+0xF4], 0xFF
        lea edx, ds:[eax+4]
        mov dword ptr ds : [eax-4], edx
        mov edx, 0xF0
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], 0xF1
        add eax, 0x1000
        add ecx, 8
        dec dword ptr ss : [ebp-4]
        jne public_65dcba7
        public_65dcbd1 : nop
        mov dword ptr ds : [public_65e55e8], edi
        lea eax, ds:[edi+0x2018]
        public_65dcbdd : nop
        cmp ecx, eax
        jae public_65dcbed
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        je public_65dcbeb
        add ecx, 8
        jmp public_65dcbdd
        public_65dcbeb : nop
        cmp ecx, eax
        public_65dcbed : nop
        sbb eax, eax
        and eax, ecx
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ss : [ebp+8]
        mov byte ptr ds : [esi+8], al
        mov dword ptr ds : [edi+8], ebx
        sub dword ptr ds : [ebx], eax
        sub dword ptr ds : [esi+4], eax
        lea ecx, ds:[esi+eax+8]
        lea eax, ds:[esi+0x100]
        mov dword ptr ds : [esi], ecx
        jmp public_65dcc44
        public_65dcc10 : nop
        call public_65dc749
        test eax, eax
        je public_65dcc42
        mov ecx, dword ptr ds : [eax+0x10]
        mov byte ptr ds : [ecx+8], bl
        lea edx, ds:[ecx+ebx+8]
        mov dword ptr ds : [public_65e55e8], eax
        mov dword ptr ds : [ecx], edx
        mov edx, 0xF0
        sub edx, ebx
        mov dword ptr ds : [ecx+4], edx
        movzx edx, bl
        sub dword ptr ds : [eax+0x18], edx
        lea eax, ds:[ecx+0x100]
        jmp public_65dcc44
        public_65dcc42 : nop
        xor eax, eax
        public_65dcc44 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65dca41)
    }
}

#undef public_65dca4f
#undef public_65dca7a
#undef public_65dca9d
#undef public_65dcab4
#undef public_65dcab7
#undef public_65dcaca
#undef public_65dcae9
#undef public_65dcafa
#undef public_65dcafd
#undef public_65dcb0c
#undef public_65dcb1c
#undef public_65dcb23
#undef public_65dcb2f
#undef public_65dcb3b
#undef public_65dcb59
#undef public_65dcb6a
#undef public_65dcba7
#undef public_65dcbd1
#undef public_65dcbdd
#undef public_65dcbeb
#undef public_65dcbed
#undef public_65dcc10
#undef public_65dcc42
#undef public_65dcc44
