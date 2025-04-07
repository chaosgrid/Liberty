#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f680);
CLANG_FORWARD_PROC_SYMBOL(public_6d1f7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1f850);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62818);

#define public_6d21190 _public_6d21190
#define public_6d211b0 _public_6d211b0
#define public_6d211b7 _public_6d211b7
#define public_6d211c9 _public_6d211c9
#define public_6d211f1 _public_6d211f1
#define public_6d211f8 _public_6d211f8
#define public_6d21207 _public_6d21207
#define public_6d2121d _public_6d2121d
#define public_6d2122c _public_6d2122c
#define public_6d2123c _public_6d2123c
#define public_6d21253 _public_6d21253
#define public_6d21261 _public_6d21261
#define public_6d21263 _public_6d21263
#define public_6d21279 _public_6d21279
#define public_6d2129d _public_6d2129d
#define public_6d212a1 _public_6d212a1
#define public_6d212d5 _public_6d212d5
#define public_6d212e0 _public_6d212e0
#define public_6d212fd _public_6d212fd
#define public_6d2131b _public_6d2131b
#define public_6d2131d _public_6d2131d

PROC_DECLARE(0x6d21130, internal_6d21130, public_6d21130);
extern "C" NAKED register_t __cdecl internal_6d21130()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62818 @0x6d21132*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62818
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        xor eax, eax
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x18], offset public_6d68e2c
        mov ebx, dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ds : [ecx+0x28]
        mov esi, dword ptr ds : [ecx+0x2C]
        mov edi, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [eax+4]
        shl ebp, 5
        add ebp, eax
        shl esi, 5
        add esi, ebp
        cmp ebp, esi
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x34], esi
        je public_6d211b7
        mov edi, edi
        public_6d21190 : nop
        push 0x20
        mov ecx, edi
        call public_6d1f680
        test eax, eax
        je public_6d211b0
        mov ecx, 8
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ss : [esp+0x10]
        public_6d211b0 : nop
        add ebp, 0x20
        cmp ebp, esi
        jne public_6d21190
        public_6d211b7 : nop
        push 4
        mov ecx, edi
        call public_6d1f680
        test eax, eax
        je public_6d211c9
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [eax], ecx
        public_6d211c9 : nop
        mov edx, dword ptr ds : [ebx+0x10]
        mov ebp, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ss : [ebp+0x1008]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ss : [esp+0x18]
        push ebx
        lea ecx, ss:[esp+0x1C]
        lea esi, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x38], eax
        call dword ptr ds : [edx+8]
        test al, al
        je public_6d21261
        public_6d211f1 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        test eax, eax
        je public_6d2121d
        public_6d211f8 : nop
        push 4
        mov ecx, ebp
        call public_6d1f680
        test eax, eax
        je public_6d21207
        mov dword ptr ds : [eax], esi
        public_6d21207 : nop
        mov esi, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        je public_6d2123c
        mov eax, dword ptr ds : [ebx+0x18]
        test eax, eax
        jne public_6d211f8
        public_6d2121d : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d2122c
        mov ecx, dword ptr ds : [ebx+8]
        cmp ecx, dword ptr ds : [ebx+0x10]
        je public_6d21253
        public_6d2122c : nop
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, ebp
        call public_6d1f850
        mov cl, 1
        jmp public_6d21263
        public_6d2123c : nop
        mov edx, dword ptr ss : [esp+0x34]
        cmp edx, dword ptr ss : [ebp+0x1008]
        je public_6d21261
        push 4
        mov ecx, ebp
        call public_6d1f7f0
        mov esi, dword ptr ds : [eax]
        public_6d21253 : nop
        mov eax, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_6d2123c
        jmp public_6d211f1
        public_6d21261 : nop
        xor cl, cl
        public_6d21263 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp byte ptr ds : [eax+0x24], cl
        jne public_6d212a1
        cmp dword ptr ds : [eax+0x18], 0xFFFFFFFF
        jne public_6d21279
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x10], edx
        public_6d21279 : nop
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+0x18], eax
        mov dword ptr ss : [esp+0x18], offset public_6d68d00
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        mov dword ptr ss : [esp+0x2C], 1
        je public_6d2129d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d2129d : nop
        mov al, 1
        jmp public_6d2131d
        public_6d212a1 : nop
        mov ecx, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [ecx+4]
        mov edi, dword ptr ds : [ebx+0x14]
        mov ebp, dword ptr ds : [eax+0x2C]
        shl esi, 5
        add esi, ecx
        shl ebp, 5
        push 4
        mov ecx, edi
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x18], esi
        add ebp, esi
        call public_6d1f7f0
        cmp esi, ebp
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ebx+0x10], edx
        je public_6d212fd
        jmp public_6d212e0
        public_6d212d5 : nop
        mov edi, dword ptr ss : [esp+0x34]
        lea esp, ss:[esp]
        public_6d212e0 : nop
        push 0x20
        mov ecx, edi
        sub ebp, 0x20
        call public_6d1f7f0
        mov esi, eax
        cmp ebp, dword ptr ss : [esp+0x14]
        mov ecx, 8
        mov edi, ebp
        rep movsd
        jne public_6d212d5
        public_6d212fd : nop
        mov dword ptr ss : [esp+0x18], offset public_6d68d00
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        mov dword ptr ss : [esp+0x2C], 2
        je public_6d2131b
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d2131b : nop
        xor al, al
        public_6d2131d : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x6d21130)
    }
}

#undef public_6d21190
#undef public_6d211b0
#undef public_6d211b7
#undef public_6d211c9
#undef public_6d211f1
#undef public_6d211f8
#undef public_6d21207
#undef public_6d2121d
#undef public_6d2122c
#undef public_6d2123c
#undef public_6d21253
#undef public_6d21261
#undef public_6d21263
#undef public_6d21279
#undef public_6d2129d
#undef public_6d212a1
#undef public_6d212d5
#undef public_6d212e0
#undef public_6d212fd
#undef public_6d2131b
#undef public_6d2131d
