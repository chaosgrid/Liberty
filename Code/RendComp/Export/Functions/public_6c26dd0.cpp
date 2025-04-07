#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26d70);
CLANG_FORWARD_PROC_SYMBOL(public_6c26dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6c26f70);
CLANG_FORWARD_PROC_SYMBOL(public_6c271c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c27640);
CLANG_FORWARD_PROC_SYMBOL(public_6c2fb50);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c26e0f _public_6c26e0f
#define public_6c26e14 _public_6c26e14
#define public_6c26e1c _public_6c26e1c
#define public_6c26e21 _public_6c26e21
#define public_6c26e2d _public_6c26e2d
#define public_6c26e50 _public_6c26e50
#define public_6c26e64 _public_6c26e64
#define public_6c26ecf _public_6c26ecf
#define public_6c26f10 _public_6c26f10
#define public_6c26f1d _public_6c26f1d
#define public_6c26f34 _public_6c26f34
#define public_6c26f43 _public_6c26f43
#define public_6c26f50 _public_6c26f50
#define public_6c26f5b _public_6c26f5b

PROC_DECLARE(0x6c26dd0, internal_6c26dd0, public_6c26dd0);
extern "C" NAKED register_t __cdecl internal_6c26dd0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, edi
        sub ecx, eax
        sub ebp, edx
        sar ebp, 2
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebp
        jae public_6c26ecf
        test edx, edx
        je public_6c26e0f
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6c26e14
        public_6c26e0f : nop
        mov ecx, 1
        public_6c26e14 : nop
        test edx, edx
        jne public_6c26e1c
        xor eax, eax
        jmp public_6c26e21
        public_6c26e1c : nop
        sub eax, edx
        sar eax, 2
        public_6c26e21 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6c26e2d
        xor eax, eax
        public_6c26e2d : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6c34eac
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        je public_6c26e64
        lea ebx, ds:[ebx]
        public_6c26e50 : nop
        push ebx
        push ebp
        call public_6c27640
        add ebx, 4
        add esp, 8
        add ebp, 4
        cmp ebx, edi
        jne public_6c26e50
        public_6c26e64 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_6c27640
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 4
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_6c26f70
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6c2fb50
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6c34ea0
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x20]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6c26d70
        mov ebp, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edi+eax*4+4]
        mov dword ptr ds : [esi+4], edi
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_6c26ecf : nop
        mov edx, eax
        sub edx, edi
        sar edx, 2
        cmp edx, 1
        jae public_6c26f1d
        lea ecx, ds:[edi+4]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_6c26f70
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, eax
        sub edx, edi
        sar edx, 2
        push ebx
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6c271c0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6c26f5b
        public_6c26f10 : nop
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6c26f10
        jmp public_6c26f5b
        public_6c26f1d : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, esi
        call public_6c26f70
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6c26f43
        public_6c26f34 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6c26f34
        public_6c26f43 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_6c26f5b
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_6c26f50 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6c26f50
        public_6c26f5b : nop
        add dword ptr ds : [esi+8], 4
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6c26dd0)
    }
}

#undef public_6c26e0f
#undef public_6c26e14
#undef public_6c26e1c
#undef public_6c26e21
#undef public_6c26e2d
#undef public_6c26e50
#undef public_6c26e64
#undef public_6c26ecf
#undef public_6c26f10
#undef public_6c26f1d
#undef public_6c26f34
#undef public_6c26f43
#undef public_6c26f50
#undef public_6c26f5b
