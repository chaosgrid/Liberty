#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42ec80);
CLANG_FORWARD_PROC_SYMBOL(public_4e5ab0);
CLANG_FORWARD_PROC_SYMBOL(public_4f5e50);
CLANG_FORWARD_PROC_SYMBOL(public_4f6150);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf3c2);

#define public_4f5e7f _public_4f5e7f
#define public_4f5e87 _public_4f5e87
#define public_4f5e90 _public_4f5e90
#define public_4f5ea1 _public_4f5ea1
#define public_4f5ea6 _public_4f5ea6
#define public_4f5ebc _public_4f5ebc
#define public_4f5ec0 _public_4f5ec0
#define public_4f5ec4 _public_4f5ec4
#define public_4f5ed2 _public_4f5ed2
#define public_4f5ee6 _public_4f5ee6
#define public_4f5eea _public_4f5eea
#define public_4f5ef0 _public_4f5ef0
#define public_4f5f11 _public_4f5f11
#define public_4f5f20 _public_4f5f20
#define public_4f5f3a _public_4f5f3a
#define public_4f5f40 _public_4f5f40
#define public_4f5f4a _public_4f5f4a
#define public_4f5f5c _public_4f5f5c
#define public_4f5f77 _public_4f5f77
#define public_4f5f94 _public_4f5f94
#define public_4f5f9c _public_4f5f9c
#define public_4f5fa4 _public_4f5fa4
#define public_4f5fb1 _public_4f5fb1
#define public_4f5fc0 _public_4f5fc0
#define public_4f5fcb _public_4f5fcb
#define public_4f5fcf _public_4f5fcf
#define public_4f5fe2 _public_4f5fe2
#define public_4f5fea _public_4f5fea
#define public_4f5ff3 _public_4f5ff3
#define public_4f6000 _public_4f6000
#define public_4f601f _public_4f601f
#define public_4f602d _public_4f602d
#define public_4f602f _public_4f602f
#define public_4f604d _public_4f604d
#define public_4f605b _public_4f605b
#define public_4f60ad _public_4f60ad
#define public_4f60e3 _public_4f60e3
#define public_4f60ec _public_4f60ec
#define public_4f611b _public_4f611b
#define public_4f6124 _public_4f6124
#define public_4f6138 _public_4f6138

PROC_DECLARE(0x4f5e50, internal_4f5e50, public_4f5e50);
extern "C" NAKED register_t __cdecl internal_4f5e50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf3c2 @0x4f5e52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf3c2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        xor ebx, ebx
        cmp eax, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        jne public_4f5e7f
        xor edi, edi
        jmp public_4f5e87
        public_4f5e7f : nop
        mov edi, dword ptr ss : [ebp+0x10]
        sub edi, eax
        sar edi, 2
        public_4f5e87 : nop
        xor esi, esi
        cmp edi, ebx
        jle public_4f5ea6
        lea ecx, ds:[ecx]
        public_4f5e90 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+esi*4]
        cmp ecx, ebx
        je public_4f5ea1
        push 1
        call public_4f6150
        public_4f5ea1 : nop
        inc esi
        cmp esi, edi
        jl public_4f5e90
        public_4f5ea6 : nop
        lea ecx, ss:[ebp+8]
        call public_42ec80
        mov ebp, dword ptr ss : [esp+0x4C]
        cmp ebp, ebx
        jle public_4f6138
        jmp public_4f5ec0
        public_4f5ebc : nop
        xor ebx, ebx
        mov edi, edi
        public_4f5ec0 : nop
        cmp ebp, ebx
        jle public_4f5ee6
        public_4f5ec4 : nop
        mov edi, dword ptr ss : [esp+0x48]
        mov al, byte ptr ds : [edi]
        cmp al, 0x30
        jb public_4f5ed2
        cmp al, 0x39
        jbe public_4f5eea
        public_4f5ed2 : nop
        cmp al, 0x20
        jb public_4f6138
        inc edi
        dec ebp
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x48], edi
        jg public_4f5ec4
        jmp public_4f5eea
        public_4f5ee6 : nop
        mov edi, dword ptr ss : [esp+0x48]
        public_4f5eea : nop
        xor esi, esi
        cmp ebp, ebx
        jle public_4f5f5c
        public_4f5ef0 : nop
        mov al, byte ptr ds : [edi]
        cmp al, 0x30
        jb public_4f5f11
        cmp al, 0x39
        ja public_4f5f11
        xor edx, edx
        mov dl, al
        inc edi
        dec ebp
        cmp ebp, ebx
        lea ecx, ds:[esi+esi*4]
        lea esi, ds:[edx+ecx*2-0x30]
        jg public_4f5ef0
        mov dword ptr ss : [esp+0x48], edi
        jmp public_4f5f5c
        public_4f5f11 : nop
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x48], edi
        jle public_4f5f5c
        lea esp, ss:[esp]
        public_4f5f20 : nop
        mov al, byte ptr ds : [edi]
        cmp al, 0x2C
        je public_4f5f3a
        cmp al, 0x20
        jb public_4f6138
        inc edi
        dec ebp
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x48], edi
        jg public_4f5f20
        jmp public_4f5f5c
        public_4f5f3a : nop
        cmp ebp, ebx
        jle public_4f5f5c
        mov edi, edi
        public_4f5f40 : nop
        mov al, byte ptr ds : [edi]
        cmp al, 0x2C
        je public_4f5f4a
        cmp al, 0x20
        jne public_4f5f5c
        public_4f5f4a : nop
        cmp al, 0x20
        jb public_4f6138
        inc edi
        dec ebp
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x48], edi
        jg public_4f5f40
        public_4f5f5c : nop
        mov al, byte ptr ss : [esp+0x48]
        push ebx
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x2C], al
        call dword ptr ds : [public_5c7084]
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x40], ebx
        jle public_4f5fcf
        public_4f5f77 : nop
        mov al, byte ptr ds : [edi]
        cmp al, 0x20
        jb public_4f5f9c
        je public_4f5f94
        mov byte ptr ss : [esp+0x14], al
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push 1
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c6fd8]
        public_4f5f94 : nop
        inc edi
        dec ebp
        cmp ebp, ebx
        jg public_4f5f77
        jmp public_4f5fcb
        public_4f5f9c : nop
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x48], edi
        jle public_4f5fcf
        public_4f5fa4 : nop
        cmp byte ptr ds : [edi], 0x20
        jbe public_4f5fb1
        inc edi
        dec ebp
        cmp ebp, ebx
        jg public_4f5fa4
        jmp public_4f5fcb
        public_4f5fb1 : nop
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x48], edi
        jle public_4f5fcf
        lea esp, ss:[esp]
        public_4f5fc0 : nop
        cmp byte ptr ds : [edi], 0x20
        jae public_4f5fcb
        inc edi
        dec ebp
        cmp ebp, ebx
        jg public_4f5fc0
        public_4f5fcb : nop
        mov dword ptr ss : [esp+0x48], edi
        public_4f5fcf : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x4C], ebx
        jne public_4f5fe2
        xor ecx, ecx
        jmp public_4f5fea
        public_4f5fe2 : nop
        mov ecx, dword ptr ds : [edx+0x10]
        sub ecx, eax
        sar ecx, 2
        public_4f5fea : nop
        xor eax, eax
        cmp ecx, ebx
        jle public_4f6000
        mov edx, dword ptr ds : [edx+0xC]
        public_4f5ff3 : nop
        mov edi, dword ptr ds : [edx+eax*4]
        cmp dword ptr ds : [edi+0x10], esi
        je public_4f601f
        inc eax
        cmp eax, ecx
        jl public_4f5ff3
        public_4f6000 : nop
        push 0x14
        call public_5b7e84
        add esp, 4
        cmp eax, ebx
        je public_4f602d
        mov cl, byte ptr ss : [esp+0x48]
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0xC], ebx
        jmp public_4f602f
        public_4f601f : nop
        cmp eax, 0xFFFFFFFF
        je public_4f6000
        mov edx, dword ptr ds : [edx+eax*4]
        mov dword ptr ss : [esp+0x4C], edx
        jmp public_4f604d
        public_4f602d : nop
        xor eax, eax
        public_4f602f : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ds:[edx+8]
        lea edx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x4C], eax
        push edx
        mov dword ptr ds : [eax+0x10], esi
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        call public_537260
        public_4f604d : nop
        mov esi, dword ptr ss : [esp+0x2C]
        cmp esi, ebx
        jne public_4f605b
        mov esi, dword ptr ds : [public_5c7078]
        public_4f605b : nop
        mov al, byte ptr ss : [esp+0x48]
        push ebx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1C], al
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        push 1
        push ebx
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4f60ad
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ds : [eax+ebx], 0
        public_4f60ad : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [ecx+8]
        lea edx, ss:[esp+0x18]
        push edx
        push 1
        push eax
        mov byte ptr ss : [esp+0x4C], 1
        call public_4e5ab0
        mov eax, dword ptr ss : [esp+0x1C]
        xor esi, esi
        cmp eax, esi
        je public_4f60ec
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4f60e3
        cmp cl, 0xFF
        je public_4f60e3
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4f60ec
        public_4f60e3 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4f60ec : nop
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, esi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        je public_4f6124
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4f611b
        cmp cl, 0xFF
        je public_4f611b
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4f6124
        public_4f611b : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4f6124 : nop
        cmp ebp, esi
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], esi
        jg public_4f5ebc
        public_4f6138 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 8
        UNREACHABLE_TRAP(0x4f5e50)
    }
}

#undef public_4f5e7f
#undef public_4f5e87
#undef public_4f5e90
#undef public_4f5ea1
#undef public_4f5ea6
#undef public_4f5ebc
#undef public_4f5ec0
#undef public_4f5ec4
#undef public_4f5ed2
#undef public_4f5ee6
#undef public_4f5eea
#undef public_4f5ef0
#undef public_4f5f11
#undef public_4f5f20
#undef public_4f5f3a
#undef public_4f5f40
#undef public_4f5f4a
#undef public_4f5f5c
#undef public_4f5f77
#undef public_4f5f94
#undef public_4f5f9c
#undef public_4f5fa4
#undef public_4f5fb1
#undef public_4f5fc0
#undef public_4f5fcb
#undef public_4f5fcf
#undef public_4f5fe2
#undef public_4f5fea
#undef public_4f5ff3
#undef public_4f6000
#undef public_4f601f
#undef public_4f602d
#undef public_4f602f
#undef public_4f604d
#undef public_4f605b
#undef public_4f60ad
#undef public_4f60e3
#undef public_4f60ec
#undef public_4f611b
#undef public_4f6124
#undef public_4f6138
