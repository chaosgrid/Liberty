#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6347c40);
CLANG_FORWARD_PROC_SYMBOL(public_6347c80);
CLANG_FORWARD_PROC_SYMBOL(public_6347d50);
CLANG_FORWARD_PROC_SYMBOL(public_634b600);
CLANG_FORWARD_PROC_SYMBOL(public_634b8d0);
CLANG_FORWARD_PROC_SYMBOL(public_634b9a0);
CLANG_FORWARD_PROC_SYMBOL(public_634b9d0);
CLANG_FORWARD_PROC_SYMBOL(public_634ba50);
CLANG_FORWARD_PROC_SYMBOL(public_6355310);
CLANG_FORWARD_PROC_SYMBOL(public_6355370);
CLANG_FORWARD_PROC_SYMBOL(public_63556b0);
CLANG_FORWARD_PROC_SYMBOL(public_63556e0);
CLANG_FORWARD_PROC_SYMBOL(public_6355710);
CLANG_FORWARD_PROC_SYMBOL(public_63557c0);
CLANG_FORWARD_PROC_SYMBOL(public_63557e0);
CLANG_FORWARD_PROC_SYMBOL(public_6355890);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63980c9);

#define public_63558ae _public_63558ae
#define public_63558d7 _public_63558d7
#define public_63558db _public_63558db
#define public_63558ee _public_63558ee
#define public_63558f0 _public_63558f0
#define public_6355915 _public_6355915
#define public_6355934 _public_6355934
#define public_6355960 _public_6355960
#define public_6355963 _public_6355963
#define public_6355976 _public_6355976
#define public_635597a _public_635597a
#define public_635599e _public_635599e
#define public_63559a3 _public_63559a3
#define public_63559bf _public_63559bf
#define public_63559e7 _public_63559e7
#define public_63559f6 _public_63559f6
#define public_63559ff _public_63559ff
#define public_6355a09 _public_6355a09
#define public_6355a13 _public_6355a13
#define public_6355a3d _public_6355a3d
#define public_6355a40 _public_6355a40
#define public_6355a4a _public_6355a4a
#define public_6355a57 _public_6355a57
#define public_6355a97 _public_6355a97
#define public_6355ab2 _public_6355ab2
#define public_6355abd _public_6355abd
#define public_6355aea _public_6355aea
#define public_6355b1e _public_6355b1e
#define public_6355b24 _public_6355b24
#define public_6355b31 _public_6355b31
#define public_6355b3f _public_6355b3f
#define public_6355b73 _public_6355b73
#define public_6355b79 _public_6355b79
#define public_6355b86 _public_6355b86
#define public_6355b90 _public_6355b90
#define public_6355b93 _public_6355b93

PROC_DECLARE(0x6355890, internal_6355890, public_6355890);
extern "C" NAKED register_t __cdecl internal_6355890()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63980c9 @0x6355898*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63980c9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        public_63558ae : nop
        push 0x4C
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x28], ebx
        je public_63558d7
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        mov ecx, eax
        call public_634b600
        mov dword ptr ss : [esp+0x10], eax
        jmp public_63558db
        public_63558d7 : nop
        mov dword ptr ss : [esp+0x10], ebx
        public_63558db : nop
        xor ebp, ebp
        mov bp, word ptr ds : [edi+0x26]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        dec ebp
        js public_6355963
        jmp public_63558f0
        public_63558ee : nop
        xor ebx, ebx
        public_63558f0 : nop
        mov edx, dword ptr ds : [edi+0x28]
        mov esi, dword ptr ds : [edx+ebp*4]
        test byte ptr ds : [esi], 0xC
        je public_6355934
        push 0xC
        call public_6391d9c
        add esp, 4
        cmp eax, ebx
        je public_6355915
        mov word ptr ds : [eax], bx
        mov word ptr ds : [eax+2], bx
        mov dword ptr ds : [eax+4], ebx
        mov ebx, eax
        public_6355915 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov dword ptr ds : [ebx+8], ecx
        call public_634b9d0
        push ebx
        mov ecx, esi
        call public_6347c80
        jmp public_6355960
        public_6355934 : nop
        mov ecx, esi
        call public_63557c0
        cmp eax, dword ptr ss : [esp+0x30]
        jne public_6355960
        push esi
        mov ecx, edi
        call public_634ba50
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov ecx, ebx
        call public_634b9d0
        push edi
        mov ecx, esi
        call public_6347c40
        mov dword ptr ds : [eax+8], ebx
        public_6355960 : nop
        dec ebp
        jns public_63558ee
        public_6355963 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x36]
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        js public_6355a4a
        jmp public_635597a
        public_6355976 : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_635597a : nop
        mov ecx, dword ptr ds : [edi+0x38]
        mov ebx, dword ptr ds : [ecx+eax*4]
        mov ebp, dword ptr ds : [ebx+0x28]
        mov esi, dword ptr ds : [ebx+0x2C]
        xor eax, eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        test byte ptr ss : [ebp], 0xC
        je public_635599e
        mov eax, esi
        mov esi, ebp
        mov ebp, eax
        jmp public_63559a3
        public_635599e : nop
        test byte ptr ds : [esi], 0xC
        je public_63559bf
        public_63559a3 : nop
        push edi
        mov ecx, esi
        call public_6347c40
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call public_6347c40
        mov dword ptr ss : [esp+0x1C], eax
        public_63559bf : nop
        mov ecx, ebp
        call public_63557c0
        cmp eax, dword ptr ss : [esp+0x30]
        jne public_6355a40
        push ebx
        mov ecx, edi
        call public_6355710
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        call public_63556e0
        xor ebp, ebp
        mov bp, word ptr ds : [ebx+2]
        dec ebp
        js public_6355a40
        public_63559e7 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax+ebp*4]
        mov eax, dword ptr ds : [edi+0x20]
        xor ecx, ecx
        test eax, eax
        je public_6355a09
        public_63559f6 : nop
        cmp eax, esi
        jne public_63559ff
        mov ecx, 1
        public_63559ff : nop
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_63559f6
        test ecx, ecx
        jne public_6355a13
        public_6355a09 : nop
        mov dword ptr ds : [0], 0
        public_6355a13 : nop
        push esi
        mov ecx, edi
        call public_634b8d0
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        call public_634b9a0
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        je public_6355a3d
        push esi
        call public_6355310
        mov ecx, dword ptr ss : [esp+0x1C]
        push esi
        call public_63556b0
        public_6355a3d : nop
        dec ebp
        jns public_63559e7
        public_6355a40 : nop
        dec dword ptr ss : [esp+0x14]
        jns public_6355976
        public_6355a4a : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x26]
        dec eax
        mov dword ptr ss : [esp+0x30], eax
        js public_6355abd
        public_6355a57 : nop
        mov ecx, dword ptr ds : [edi+0x28]
        mov esi, dword ptr ds : [ecx+eax*4]
        test byte ptr ds : [esi], 0xC
        je public_6355ab2
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov ecx, esi
        call public_6347c40
        push edi
        mov ecx, esi
        mov ebx, eax
        call public_6347c40
        mov ecx, ebx
        mov ebp, eax
        call public_6355370
        test eax, eax
        jne public_6355a97
        push ebx
        mov ecx, esi
        call public_6347d50
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        call public_634ba50
        public_6355a97 : nop
        mov ecx, ebp
        call public_6355370
        test eax, eax
        jne public_6355ab2
        push ebp
        mov ecx, esi
        call public_6347d50
        push esi
        mov ecx, edi
        call public_634ba50
        public_6355ab2 : nop
        mov eax, dword ptr ss : [esp+0x30]
        dec eax
        mov dword ptr ss : [esp+0x30], eax
        jns public_6355a57
        public_6355abd : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, 2
        cmp word ptr ds : [ecx+0x3C], ax
        jl public_6355aea
        cmp word ptr ds : [edi+0x3C], ax
        jl public_6355b3f
        mov ecx, edi
        call public_63557e0
        test eax, eax
        je public_6355b93
        mov dword ptr ss : [esp+0x30], eax
        jmp public_63558ae
        public_6355aea : nop
        mov eax, dword ptr ds : [ecx+0x28]
        mov edi, dword ptr ds : [eax]
        push ecx
        mov ecx, edi
        call public_6347c40
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6347d50
        xor edi, edi
        cmp esi, edi
        je public_6355b31
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        cmp eax, ecx
        je public_6355b24
        cmp eax, edi
        je public_6355b1e
        push eax
        call public_6343fb0
        add esp, 4
        public_6355b1e : nop
        mov dword ptr ds : [esi+4], edi
        mov word ptr ds : [esi], di
        public_6355b24 : nop
        push esi
        mov word ptr ds : [esi+2], di
        call public_6391d5a
        add esp, 4
        public_6355b31 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, edi
        je public_6355b93
        mov edx, dword ptr ds : [ecx]
        push 1
        jmp public_6355b90
        public_6355b3f : nop
        mov eax, dword ptr ds : [edi+0x28]
        mov ebx, dword ptr ds : [eax]
        push edi
        mov ecx, ebx
        call public_6347c40
        mov esi, eax
        push esi
        mov ecx, ebx
        call public_6347d50
        xor ebx, ebx
        cmp esi, ebx
        je public_6355b86
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        cmp eax, ecx
        je public_6355b79
        cmp eax, ebx
        je public_6355b73
        push eax
        call public_6343fb0
        add esp, 4
        public_6355b73 : nop
        mov dword ptr ds : [esi+4], ebx
        mov word ptr ds : [esi], bx
        public_6355b79 : nop
        push esi
        mov word ptr ds : [esi+2], bx
        call public_6391d5a
        add esp, 4
        public_6355b86 : nop
        cmp edi, ebx
        je public_6355b93
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        public_6355b90 : nop
        call dword ptr ds : [edx+0x18]
        public_6355b93 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6355890)
    }
}

#undef public_63558ae
#undef public_63558d7
#undef public_63558db
#undef public_63558ee
#undef public_63558f0
#undef public_6355915
#undef public_6355934
#undef public_6355960
#undef public_6355963
#undef public_6355976
#undef public_635597a
#undef public_635599e
#undef public_63559a3
#undef public_63559bf
#undef public_63559e7
#undef public_63559f6
#undef public_63559ff
#undef public_6355a09
#undef public_6355a13
#undef public_6355a3d
#undef public_6355a40
#undef public_6355a4a
#undef public_6355a57
#undef public_6355a97
#undef public_6355ab2
#undef public_6355abd
#undef public_6355aea
#undef public_6355b1e
#undef public_6355b24
#undef public_6355b31
#undef public_6355b3f
#undef public_6355b73
#undef public_6355b79
#undef public_6355b86
#undef public_6355b90
#undef public_6355b93
