#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6da3720);
CLANG_FORWARD_PROC_SYMBOL(public_6db20de);

#define public_6d97d70 _public_6d97d70
#define public_6d97d96 _public_6d97d96
#define public_6d97da5 _public_6d97da5
#define public_6d97db4 _public_6d97db4
#define public_6d97dcb _public_6d97dcb
#define public_6d97de1 _public_6d97de1
#define public_6d97e05 _public_6d97e05
#define public_6d97e1b _public_6d97e1b
#define public_6d97e75 _public_6d97e75
#define public_6d97e88 _public_6d97e88
#define public_6d97ea2 _public_6d97ea2
#define public_6d97eb5 _public_6d97eb5
#define public_6d97ed7 _public_6d97ed7
#define public_6d97eea _public_6d97eea
#define public_6d97f1a _public_6d97f1a
#define public_6d97f2d _public_6d97f2d
#define public_6d97f47 _public_6d97f47
#define public_6d97f5a _public_6d97f5a
#define public_6d97f96 _public_6d97f96
#define public_6d97fac _public_6d97fac
#define public_6d97fd3 _public_6d97fd3
#define public_6d97fe9 _public_6d97fe9
#define public_6d97ffe _public_6d97ffe
#define public_6d98025 _public_6d98025
#define public_6d9803b _public_6d9803b
#define public_6d98068 _public_6d98068
#define public_6d9807e _public_6d9807e
#define public_6d980c2 _public_6d980c2
#define public_6d980d8 _public_6d980d8
#define public_6d98107 _public_6d98107
#define public_6d9811d _public_6d9811d
#define public_6d9812c _public_6d9812c
#define public_6d98149 _public_6d98149
#define public_6d98170 _public_6d98170
#define public_6d98186 _public_6d98186
#define public_6d981bf _public_6d981bf
#define public_6d981d5 _public_6d981d5
#define public_6d981de _public_6d981de
#define public_6d98204 _public_6d98204
#define public_6d9823a _public_6d9823a

PROC_DECLARE(0x6d97d20, internal_6d97d20, public_6d97d20);
extern "C" NAKED register_t __cdecl internal_6d97d20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        lea ebp, ds:[ebx+0x10]
        mov dword ptr ss : [ebp+4], edi
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+0xC], 0
        mov edx, dword ptr ds : [ebx+0x14]
        push ebp
        push edx
        lea esi, ds:[ebx+0x18]
        push esi
        mov ecx, ebx
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6d97d70
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d97d70 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        push edi
        push ecx
        mov ecx, ebx
        call public_6da3720
        mov al, byte ptr ds : [ebx+0x9C]
        test al, al
        mov byte ptr ss : [esp+0x20], 0
        je public_6d97d96
        mov byte ptr ss : [esp+0x20], 1
        public_6d97d96 : nop
        mov eax, dword ptr ds : [ebx+0xBC]
        test eax, eax
        je public_6d97da5
        or byte ptr ss : [esp+0x20], 4
        public_6d97da5 : nop
        mov al, byte ptr ds : [ebx+0xE8]
        test al, al
        je public_6d97db4
        or byte ptr ss : [esp+0x20], 2
        public_6d97db4 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6d97dcb
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6d97dcb : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d97de1
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d97de1 : nop
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6d97e05
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6d97e05 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d97e1b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d97e1b : nop
        mov eax, dword ptr ds : [ebx+0xA0]
        mov ecx, dword ptr ds : [ebx+0xA4]
        mov edi, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ebx+0xA8]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], edx
        call public_6d8f510
        fld dword ptr ds : [ebx+0xB8]
        fmul qword ptr ds : [public_6db3fd8]
        add edi, 0xC
        mov dword ptr ds : [esi], edi
        call public_6db20de
        mov ecx, dword ptr ss : [ebp]
        mov dl, al
        mov eax, dword ptr ss : [ebp+4]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [ebp], ecx
        mov edi, 0x16
        jbe public_6d97e75
        mov dword ptr ss : [ebp+0xC], edi
        public_6d97e75 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d97e88
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d97e88 : nop
        mov ecx, dword ptr ds : [esi]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+4]
        add ecx, 2
        cmp ecx, eax
        mov dword ptr ss : [ebp], ecx
        jbe public_6d97ea2
        mov dword ptr ss : [ebp+0xC], edi
        public_6d97ea2 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d97eb5
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d97eb5 : nop
        mov ecx, dword ptr ds : [esi]
        mov dx, word ptr ds : [ebx+0xC0]
        mov word ptr ds : [ecx], dx
        add ecx, 2
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+4]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [ebp], ecx
        jbe public_6d97ed7
        mov dword ptr ss : [ebp+0xC], edi
        public_6d97ed7 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d97eea
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d97eea : nop
        mov ecx, dword ptr ds : [esi]
        mov al, byte ptr ds : [ebx+0xC2]
        mov byte ptr ds : [ecx], al
        mov al, byte ptr ss : [esp+0x20]
        inc ecx
        test al, 4
        mov dword ptr ds : [esi], ecx
        je public_6d97ffe
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+4]
        mov dl, byte ptr ds : [ebx+0xBC]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [ebp], ecx
        jbe public_6d97f1a
        mov dword ptr ss : [ebp+0xC], edi
        public_6d97f1a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d97f2d
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d97f2d : nop
        mov ecx, dword ptr ds : [esi]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+4]
        add ecx, 2
        cmp ecx, eax
        mov dword ptr ss : [ebp], ecx
        jbe public_6d97f47
        mov dword ptr ss : [ebp+0xC], edi
        public_6d97f47 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d97f5a
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d97f5a : nop
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [ebx+0xC4]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_6db305c]
        test al, al
        jne public_6d98149
        mov edi, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        mov cl, byte ptr ds : [ebx+0xD8]
        inc edi
        mov eax, edi
        cmp eax, edx
        mov dword ptr ss : [ebp], edi
        jbe public_6d97f96
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6d97f96 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d97fac
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d97fac : nop
        mov eax, dword ptr ds : [esi]
        mov byte ptr ds : [eax], cl
        mov edx, dword ptr ds : [ebx+0xD8]
        inc eax
        mov dword ptr ds : [esi], eax
        mov edi, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        shl edx, 1
        add edi, edx
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ss : [ebp], edi
        jbe public_6d97fd3
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6d97fd3 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d97fe9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d97fe9 : nop
        mov eax, dword ptr ds : [ebx+0xD8]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ds : [ebx+0xDC]
        shl eax, 1
        jmp public_6d9812c
        public_6d97ffe : nop
        call dword ptr ds : [public_6db305c]
        test al, al
        jne public_6d98149
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6d98025
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6d98025 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d9803b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d9803b : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ebx+0xC8]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [ebx+0xC8]
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6d98068
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6d98068 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d9807e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d9807e : nop
        mov eax, dword ptr ds : [ebx+0xC8]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ds : [ebx+0xCC]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x20], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov dword ptr ds : [ebx+0x18], ecx
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6d980c2
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6d980c2 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d980d8
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d980d8 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [ebx+0xD0]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov eax, dword ptr ds : [ebx+0xD0]
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6d98107
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6d98107 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d9811d
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d9811d : nop
        mov eax, dword ptr ds : [ebx+0xD0]
        mov edi, dword ptr ds : [ebx+0x18]
        mov esi, dword ptr ds : [ebx+0xD4]
        public_6d9812c : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x20], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov dword ptr ds : [ebx+0x18], ecx
        public_6d98149 : nop
        call dword ptr ds : [public_6db305c]
        test al, al
        jne public_6d981de
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6d98170
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6d98170 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d98186
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d98186 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [ebx+0xE0]
        mov dword ptr ds : [eax], edx
        fld dword ptr ds : [ebx+0xE4]
        fmul qword ptr ds : [public_6db3fd8]
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        call public_6db20de
        mov esi, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        inc esi
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ss : [ebp], esi
        jbe public_6d981bf
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6d981bf : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        je public_6d981d5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d981d5 : nop
        mov ecx, dword ptr ds : [ebx+0x18]
        mov byte ptr ds : [ecx], al
        inc ecx
        mov dword ptr ds : [ebx+0x18], ecx
        public_6d981de : nop
        mov eax, dword ptr ds : [ebx+0x14]
        push ebp
        push eax
        lea eax, ds:[ebx+0x18]
        push eax
        mov ecx, ebx
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6d98204
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d98204 : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        call public_6da16b0
        mov ecx, eax
        mov ebx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebx
        mov dword ptr ds : [ecx], ebx
        mov edx, dword ptr ss : [ebp]
        add edi, edx
        mov dword ptr ds : [ecx+0x18], edi
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        mov esi, ebx
        jbe public_6d9823a
        mov dword ptr ds : [ecx+0x10], ebp
        public_6d9823a : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6d97d20)
    }
}

#undef public_6d97d70
#undef public_6d97d96
#undef public_6d97da5
#undef public_6d97db4
#undef public_6d97dcb
#undef public_6d97de1
#undef public_6d97e05
#undef public_6d97e1b
#undef public_6d97e75
#undef public_6d97e88
#undef public_6d97ea2
#undef public_6d97eb5
#undef public_6d97ed7
#undef public_6d97eea
#undef public_6d97f1a
#undef public_6d97f2d
#undef public_6d97f47
#undef public_6d97f5a
#undef public_6d97f96
#undef public_6d97fac
#undef public_6d97fd3
#undef public_6d97fe9
#undef public_6d97ffe
#undef public_6d98025
#undef public_6d9803b
#undef public_6d98068
#undef public_6d9807e
#undef public_6d980c2
#undef public_6d980d8
#undef public_6d98107
#undef public_6d9811d
#undef public_6d9812c
#undef public_6d98149
#undef public_6d98170
#undef public_6d98186
#undef public_6d981bf
#undef public_6d981d5
#undef public_6d981de
#undef public_6d98204
#undef public_6d9823a
