#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_5a6ea0);
CLANG_FORWARD_PROC_SYMBOL(public_5a76e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a7ba0);
CLANG_FORWARD_PROC_SYMBOL(public_5a7bc0);
CLANG_FORWARD_PROC_SYMBOL(public_5a7cd0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_5a6ec0 _public_5a6ec0
#define public_5a6ed3 _public_5a6ed3
#define public_5a6ed6 _public_5a6ed6
#define public_5a6eda _public_5a6eda
#define public_5a6f39 _public_5a6f39
#define public_5a6f51 _public_5a6f51
#define public_5a6f5b _public_5a6f5b
#define public_5a6f5f _public_5a6f5f
#define public_5a6f70 _public_5a6f70
#define public_5a6fab _public_5a6fab
#define public_5a6fba _public_5a6fba
#define public_5a6fdb _public_5a6fdb
#define public_5a6ffc _public_5a6ffc
#define public_5a700a _public_5a700a
#define public_5a7029 _public_5a7029
#define public_5a7035 _public_5a7035
#define public_5a7051 _public_5a7051
#define public_5a706c _public_5a706c
#define public_5a7073 _public_5a7073
#define public_5a7096 _public_5a7096

PROC_DECLARE(0x5a6ea0, internal_5a6ea0, public_5a6ea0);
extern "C" NAKED register_t __cdecl internal_5a6ea0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_5a6eda
        lea esp, ss:[esp]
        public_5a6ec0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_5a6ed3
        mov ebp, dword ptr ss : [ebp]
        jmp public_5a6ed6
        public_5a6ed3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_5a6ed6 : nop
        cmp ebp, edx
        jne public_5a6ec0
        public_5a6eda : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_5a7051
        push 0
        push esi
        mov ecx, edi
        call public_5a7ba0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_5a7cd0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_5a6f39
        cmp ebp, dword ptr ds : [edi+8]
        jne public_5a6f39
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_5a6f39
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_5a6f5f
        mov dword ptr ds : [eax+8], ebx
        jmp public_5a6f5f
        public_5a6f39 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_5a6f51
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_5a6f5b
        public_5a6f51 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_5a6f5b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_5a6f5b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_5a6f5f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_5a7035
        lea ecx, ds:[ecx]
        public_5a6f70 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x54]
        test cl, cl
        jne public_5a7035
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_5a6fdb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_5a6fab
        mov byte ptr ds : [eax+0x54], 1
        mov byte ptr ds : [ecx+0x54], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_5a7029
        public_5a6fab : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_5a6fba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_5a6fba : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x54], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x54], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_5a7029
        public_5a6fdb : nop
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_5a6ffc
        mov byte ptr ds : [eax+0x54], 1
        mov byte ptr ds : [ecx+0x54], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x54], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_5a7029
        public_5a6ffc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_5a700a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_5a700a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x54], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_5a7029 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_5a6f70
        public_5a7035 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x54], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_5a7051 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_5a706c
        cmp esi, dword ptr ds : [ecx]
        je public_5a7073
        lea ecx, ss:[esp+0x10]
        call public_5a7bc0
        mov edx, dword ptr ss : [esp+0x10]
        public_5a706c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_5a7096
        public_5a7073 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_5a76e0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_5a7096 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x5a6ea0)
    }
}

#undef public_5a6ec0
#undef public_5a6ed3
#undef public_5a6ed6
#undef public_5a6eda
#undef public_5a6f39
#undef public_5a6f51
#undef public_5a6f5b
#undef public_5a6f5f
#undef public_5a6f70
#undef public_5a6fab
#undef public_5a6fba
#undef public_5a6fdb
#undef public_5a6ffc
#undef public_5a700a
#undef public_5a7029
#undef public_5a7035
#undef public_5a7051
#undef public_5a706c
#undef public_5a7073
#undef public_5a7096
