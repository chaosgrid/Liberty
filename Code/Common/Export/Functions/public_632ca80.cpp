#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632ca80);
CLANG_FORWARD_PROC_SYMBOL(public_632d1a0);
CLANG_FORWARD_PROC_SYMBOL(public_632d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_632d480);
CLANG_FORWARD_PROC_SYMBOL(public_632d5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_632caa0 _public_632caa0
#define public_632cab5 _public_632cab5
#define public_632cab8 _public_632cab8
#define public_632cabc _public_632cabc
#define public_632cb1d _public_632cb1d
#define public_632cb35 _public_632cb35
#define public_632cb3f _public_632cb3f
#define public_632cb43 _public_632cb43
#define public_632cb51 _public_632cb51
#define public_632cb8f _public_632cb8f
#define public_632cb9e _public_632cb9e
#define public_632cbbf _public_632cbbf
#define public_632cbe0 _public_632cbe0
#define public_632cbee _public_632cbee
#define public_632cc0d _public_632cc0d
#define public_632cc19 _public_632cc19
#define public_632cc35 _public_632cc35
#define public_632cc50 _public_632cc50
#define public_632cc59 _public_632cc59
#define public_632cc7c _public_632cc7c

PROC_DECLARE(0x632ca80, internal_632ca80, public_632ca80);
extern "C" NAKED register_t __cdecl internal_632ca80()
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
        je public_632cabc
        lea esp, ss:[esp]
        public_632caa0 : nop
        mov ax, word ptr ds : [ebx]
        cmp ax, word ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_632cab5
        mov ebp, dword ptr ss : [ebp]
        jmp public_632cab8
        public_632cab5 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_632cab8 : nop
        cmp ebp, edx
        jne public_632caa0
        public_632cabc : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_632cc35
        push 0
        push esi
        mov ecx, edi
        call public_632d3f0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_632d5e0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_632cb1d
        cmp ebp, dword ptr ds : [edi+8]
        jne public_632cb1d
        mov ax, word ptr ds : [ebx]
        cmp ax, word ptr ds : [esi+0xC]
        jb public_632cb1d
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_632cb43
        mov dword ptr ds : [eax+8], ebx
        jmp public_632cb43
        public_632cb1d : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_632cb35
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_632cb3f
        public_632cb35 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_632cb3f
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_632cb3f : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_632cb43 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_632cc19
        public_632cb51 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        jne public_632cc19
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_632cbbf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_632cb8f
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_632cc0d
        public_632cb8f : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_632cb9e
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_632cb9e : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x1C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_632cc0d
        public_632cbbf : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_632cbe0
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x1C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_632cc0d
        public_632cbe0 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_632cbee
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_632cbee : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_632cc0d : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_632cb51
        public_632cc19 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_632cc35 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_632cc50
        cmp esi, dword ptr ds : [ecx]
        je public_632cc59
        lea ecx, ss:[esp+0x10]
        call public_632d480
        mov edx, dword ptr ss : [esp+0x10]
        public_632cc50 : nop
        mov ax, word ptr ds : [edx+0xC]
        cmp ax, word ptr ds : [ebx]
        jae public_632cc7c
        public_632cc59 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_632d1a0
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
        public_632cc7c : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x632ca80)
    }
}

#undef public_632caa0
#undef public_632cab5
#undef public_632cab8
#undef public_632cabc
#undef public_632cb1d
#undef public_632cb35
#undef public_632cb3f
#undef public_632cb43
#undef public_632cb51
#undef public_632cb8f
#undef public_632cb9e
#undef public_632cbbf
#undef public_632cbe0
#undef public_632cbee
#undef public_632cc0d
#undef public_632cc19
#undef public_632cc35
#undef public_632cc50
#undef public_632cc59
#undef public_632cc7c
