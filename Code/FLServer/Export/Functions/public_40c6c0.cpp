#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a9e);
CLANG_FORWARD_JUMP_SYMBOL(public_41a07b);

#define public_40c6f3 _public_40c6f3
#define public_40c710 _public_40c710
#define public_40c71e _public_40c71e
#define public_40c777 _public_40c777
#define public_40c79e _public_40c79e
#define public_40c7b4 _public_40c7b4
#define public_40c7c4 _public_40c7c4
#define public_40c7d0 _public_40c7d0
#define public_40c7da _public_40c7da
#define public_40c7e3 _public_40c7e3
#define public_40c80a _public_40c80a
#define public_40c80c _public_40c80c
#define public_40c820 _public_40c820

PROC_DECLARE(0x40c6c0, internal_40c6c0, public_40c6c0);
extern "C" NAKED register_t __cdecl internal_40c6c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a07b @0x40c6c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a07b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xB7C]
        push edi
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0xC], esi
        jle public_40c71e
        lea ebx, ds:[esi+0xA7C]
        public_40c6f3 : nop
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_40c710
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [public_41b8d8]
        add esp, 8
        test al, al
        jne public_40c79e
        public_40c710 : nop
        mov eax, dword ptr ds : [esi+0xB7C]
        inc edi
        add ebx, 4
        cmp edi, eax
        jl public_40c6f3
        public_40c71e : nop
        cmp dword ptr ds : [esi+0xB7C], 0x40
        jge public_40c820
        push ebp
        push 0x10
        call public_418a9e
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], ebp
        xor edx, edx
        cmp ebp, edx
        mov dword ptr ss : [esp+0x20], edx
        je public_40c80a
        mov al, byte ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [esp+0x28]
        or ecx, 0xFFFFFFFF
        mov byte ptr ss : [ebp], al
        xor eax, eax
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        cmp ebx, 0xFFFFFFFD
        jbe public_40c777
        call dword ptr ds : [public_41b8a0]
        xor edx, edx
        public_40c777 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, edx
        je public_40c7b4
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_40c7b4
        cmp cl, 0xFF
        je public_40c7b4
        cmp ebx, edx
        jne public_40c7da
        dec cl
        mov byte ptr ds : [eax-1], cl
        push edx
        mov ecx, ebp
        call dword ptr ds : [public_41b870]
        jmp public_40c80c
        public_40c79e : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        public_40c7b4 : nop
        cmp ebx, edx
        jne public_40c7c4
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_41b870]
        jmp public_40c80c
        public_40c7c4 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_40c7d0
        cmp eax, ebx
        jae public_40c7e3
        public_40c7d0 : nop
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_41b870]
        public_40c7da : nop
        mov ecx, ebp
        push ebx
        call dword ptr ds : [public_41b89c]
        public_40c7e3 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x28]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+eax], 0
        jmp public_40c80c
        public_40c80a : nop
        xor ebp, ebp
        public_40c80c : nop
        mov ecx, dword ptr ds : [esi+0xB7C]
        mov dword ptr ds : [esi+ecx*4+0xA7C], ebp
        inc dword ptr ds : [esi+0xB7C]
        pop ebp
        public_40c820 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x40c6c0)
    }
}

#undef public_40c6f3
#undef public_40c710
#undef public_40c71e
#undef public_40c777
#undef public_40c79e
#undef public_40c7b4
#undef public_40c7c4
#undef public_40c7d0
#undef public_40c7da
#undef public_40c7e3
#undef public_40c80a
#undef public_40c80c
#undef public_40c820
