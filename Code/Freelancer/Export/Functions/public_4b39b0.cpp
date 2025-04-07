#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438060);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_43b630);
CLANG_FORWARD_PROC_SYMBOL(public_45a7c0);
CLANG_FORWARD_PROC_SYMBOL(public_4b39b0);
CLANG_FORWARD_PROC_SYMBOL(public_4b49a0);
CLANG_FORWARD_PROC_SYMBOL(public_4b4b50);
CLANG_FORWARD_PROC_SYMBOL(public_4b4ba0);
CLANG_FORWARD_PROC_SYMBOL(public_4c3e10);
CLANG_FORWARD_PROC_SYMBOL(public_4c3f00);
CLANG_FORWARD_PROC_SYMBOL(public_4c4060);
CLANG_FORWARD_PROC_SYMBOL(public_4c4f70);
CLANG_FORWARD_PROC_SYMBOL(public_5835f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd059);

#define public_4b3a3c _public_4b3a3c
#define public_4b3a58 _public_4b3a58
#define public_4b3a5a _public_4b3a5a
#define public_4b3a5c _public_4b3a5c
#define public_4b3aa1 _public_4b3aa1
#define public_4b3ab8 _public_4b3ab8
#define public_4b3b0a _public_4b3b0a
#define public_4b3b0f _public_4b3b0f
#define public_4b3b5f _public_4b3b5f
#define public_4b3b69 _public_4b3b69
#define public_4b3ba6 _public_4b3ba6
#define public_4b3c9c _public_4b3c9c
#define public_4b3cbf _public_4b3cbf
#define public_4b3cd1 _public_4b3cd1
#define public_4b3d2f _public_4b3d2f
#define public_4b3d31 _public_4b3d31
#define public_4b3d3d _public_4b3d3d
#define public_4b3d49 _public_4b3d49
#define public_4b3d51 _public_4b3d51
#define public_4b3d74 _public_4b3d74
#define public_4b3da1 _public_4b3da1

PROC_DECLARE(0x4b39b0, internal_4b39b0, public_4b39b0);
extern "C" NAKED register_t __cdecl internal_4b39b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd059 @0x4b39b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd059
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x7C
        mov eax, dword ptr ds : [ecx+0x338]
        push ebx
        lea ebx, ds:[ecx+0x330]
        push esi
        push edi
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        mov ecx, ebx
        call public_4b4b50
        mov ecx, offset public_668708
        call public_43b630
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x14], eax
        call public_4c4f70
        fstp dword ptr ss : [esp+0xC]
        xor edi, edi
        xor esi, esi
        mov dword ptr ss : [esp+0x10], edi
        call public_4c3e10
        cmp eax, edi
        je public_4b3a3c
        push eax
        call dword ptr ds : [public_5c61fc]
        add esp, 4
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], eax
        je public_4b3a3c
        fld dword ptr ds : [public_5c75dc]
        fsub dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+0x1C]
        fmul dword ptr ss : [esp+0x14]
        call public_5b7ec0
        mov esi, eax
        public_4b3a3c : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x44
        jnp public_4b3a58
        cmp esi, edi
        jne public_4b3a5a
        mov esi, 1
        jmp public_4b3a5c
        public_4b3a58 : nop
        cmp esi, edi
        public_4b3a5a : nop
        jle public_4b3aa1
        public_4b3a5c : nop
        fld dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x48], edi
        fmul dword ptr ds : [public_5ca230]
        mov word ptr ss : [esp+0x4C], di
        mov dword ptr ss : [esp+0x50], 0x428
        mov dword ptr ss : [esp+0x54], esi
        mov dword ptr ss : [esp+0x5C], edi
        mov dword ptr ss : [esp+0x60], edi
        call public_5b7ec0
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [ebx+8]
        push ecx
        push eax
        mov ecx, ebx
        mov byte ptr ss : [esp+0x6C], 1
        call public_4b49a0
        public_4b3aa1 : nop
        push ebp
        call public_4c3f00
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_4b3b69
        public_4b3ab8 : nop
        cmp dword ptr ds : [esi+0xC], 0x3F800000
        je public_4b3b5f
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, edi
        mov ebp, 0x429
        je public_4b3b0a
        xor edx, edx
        mov dx, word ptr ds : [esi+8]
        push edx
        call dword ptr ds : [public_5c6220]
        mov edi, eax
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_45a7c0
        fld dword ptr ds : [public_5c75dc]
        fsub dword ptr ds : [esi+0xC]
        add esp, 4
        fimul dword ptr ds : [edi+0x10]
        mov ebp, eax
        fmul dword ptr ss : [esp+0x18]
        call public_5b7ec0
        mov edi, eax
        test edi, edi
        jne public_4b3b0f
        public_4b3b0a : nop
        mov edi, 1
        public_4b3b0f : nop
        fld dword ptr ds : [esi+0xC]
        fmul dword ptr ds : [public_5ca230]
        call public_5b7ec0
        mov cx, word ptr ds : [esi+8]
        mov word ptr ss : [esp+0x50], cx
        xor ecx, ecx
        mov dword ptr ss : [esp+0x60], ecx
        mov dword ptr ss : [esp+0x64], ecx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x5C], eax
        mov eax, dword ptr ds : [ebx+8]
        push ecx
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x54], 1
        mov dword ptr ss : [esp+0x5C], ebp
        mov dword ptr ss : [esp+0x60], edi
        mov byte ptr ss : [esp+0x70], 1
        call public_4b49a0
        mov eax, dword ptr ss : [esp+0x10]
        xor edi, edi
        public_4b3b5f : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_4b3ab8
        public_4b3b69 : nop
        call public_4c4060
        push eax
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c6190]
        mov eax, dword ptr ds : [public_66873c]
        push eax
        mov ecx, offset public_668708
        mov dword ptr ss : [esp+0x98], edi
        call public_43a510
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x44]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x28], eax
        je public_4b3d3d
        public_4b3ba6 : nop
        mov eax, dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x28], edi
        call public_5835f0
        add esp, 0xC
        cmp eax, 1
        je public_4b3d31
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call dword ptr ds : [public_5c632c]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov ebp, eax
        push ebp
        call public_438060
        call public_5b7ec0
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], edi
        fild qword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_5d51b4]
        call public_5b7ec0
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x3C], edi
        fild qword ptr ss : [esp+0x38]
        push eax
        fld dword ptr ds : [esi+0x18]
        fsubr dword ptr ds : [public_5c75dc]
        fmulp 
        fimul dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x18]
        call dword ptr ds : [public_5c603c]
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_4b3d2f
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        mov dword ptr ss : [esp+0x24], eax
        je public_4b3d2f
        fld dword ptr ds : [esi+0x18]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x44
        jnp public_4b3d2f
        push ebp
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [public_5c6088]
        add esp, 4
        test eax, eax
        je public_4b3c9c
        mov ebp, dword ptr ds : [eax+0x78]
        test ebp, ebp
        jne public_4b3cbf
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov ebp, dword ptr ds : [eax+0x74]
        je public_4b3cbf
        mov ecx, dword ptr ds : [edi+0x24]
        test ecx, ecx
        je public_4b3cbf
        mov eax, dword ptr ds : [edi+0x28]
        sub eax, ecx
        sar eax, 3
        test eax, eax
        jbe public_4b3cbf
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], edx
        jmp public_4b3cbf
        public_4b3c9c : nop
        mov ebp, dword ptr ds : [edi+0xC]
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        je public_4b3cbf
        mov ecx, dword ptr ds : [edi+0x24]
        test ecx, ecx
        je public_4b3cbf
        mov eax, dword ptr ds : [edi+0x28]
        sub eax, ecx
        sar eax, 3
        test eax, eax
        jbe public_4b3cbf
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], eax
        public_4b3cbf : nop
        fld dword ptr ss : [esp+0x14]
        call public_5b7ec0
        test eax, eax
        jne public_4b3cd1
        mov eax, 1
        public_4b3cd1 : nop
        fld dword ptr ds : [esi+0x18]
        mov cx, word ptr ds : [esi+0xA]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x78], eax
        mov eax, dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5ca230]
        mov dword ptr ss : [esp+0x6C], 2
        mov word ptr ss : [esp+0x70], cx
        mov dword ptr ss : [esp+0x74], edx
        mov dword ptr ss : [esp+0x80], ebp
        mov dword ptr ss : [esp+0x84], eax
        call public_5b7ec0
        mov edx, dword ptr ds : [ebx+8]
        lea ecx, ss:[esp+0x6C]
        push ecx
        push 1
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x88], eax
        mov byte ptr ss : [esp+0x94], 1
        call public_4b4ba0
        public_4b3d2f : nop
        xor edi, edi
        public_4b3d31 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x28]
        jne public_4b3ba6
        public_4b3d3d : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, edi
        pop ebp
        jne public_4b3d49
        xor ebx, ebx
        jmp public_4b3d51
        public_4b3d49 : nop
        mov ebx, dword ptr ds : [ebx+8]
        sub ebx, eax
        sar ebx, 5
        public_4b3d51 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax+0x46C]
        mov edx, dword ptr ds : [ecx]
        dec ebx
        push ebx
        push edi
        push 0x37
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [esp+0x40]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_4b3da1
        public_4b3d74 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x48]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x44], ecx
        jne public_4b3d74
        mov eax, dword ptr ss : [esp+0x40]
        public_4b3da1 : nop
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x8C]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x88
        ret 
        UNREACHABLE_TRAP(0x4b39b0)
    }
}

#undef public_4b3a3c
#undef public_4b3a58
#undef public_4b3a5a
#undef public_4b3a5c
#undef public_4b3aa1
#undef public_4b3ab8
#undef public_4b3b0a
#undef public_4b3b0f
#undef public_4b3b5f
#undef public_4b3b69
#undef public_4b3ba6
#undef public_4b3c9c
#undef public_4b3cbf
#undef public_4b3cd1
#undef public_4b3d2f
#undef public_4b3d31
#undef public_4b3d3d
#undef public_4b3d49
#undef public_4b3d51
#undef public_4b3d74
#undef public_4b3da1
