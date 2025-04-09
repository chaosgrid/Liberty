#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402d30);
CLANG_FORWARD_PROC_SYMBOL(public_402e30);
CLANG_FORWARD_PROC_SYMBOL(public_404670);
CLANG_FORWARD_PROC_SYMBOL(public_4127d0);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_412f35 _public_412f35
#define public_412f69 _public_412f69
#define public_412f78 _public_412f78
#define public_412f97 _public_412f97
#define public_412f99 _public_412f99
#define public_412fc0 _public_412fc0
#define public_412fc5 _public_412fc5
#define public_412ffa _public_412ffa
#define public_413008 _public_413008
#define public_413019 _public_413019
#define public_413020 _public_413020
#define public_413038 _public_413038
#define public_4133b3 _public_4133b3
#define public_4133c6 _public_4133c6
#define public_413419 _public_413419
#define public_41341e _public_41341e
#define public_41349d _public_41349d
#define public_4134b5 _public_4134b5
#define public_41350a _public_41350a
#define public_413519 _public_413519
#define public_413528 _public_413528

PROC_DECLARE(0x412e50, internal_412e50, public_412e50);
extern "C" NAKED register_t __cdecl internal_412e50()
{
    __asm
    {
        sub esp, 0xF0
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        push 8
        mov dword ptr ss : [esp+0x84], edi
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_413528
        mov eax, dword ptr ds : [edi+4]
        xor esi, esi
        cmp eax, esi
        je public_413528
        cmp word ptr ds : [eax], si
        je public_413528
        mov ebp, dword ptr ds : [public_610850]
        mov ebx, dword ptr ss : [esp+0x104]
        xor eax, eax
        cmp ebp, 0x320
        setg al
        sub esp, 8
        inc eax
        mov dword ptr ss : [esp+0x20], eax
        fild dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [ebx]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ds : [ebx+4]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        mov edx, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x64]
        add esp, 8
        lea eax, ss:[esp+0xE4]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x18]
        fld dword ptr ss : [esp+0x108]
        mov ecx, dword ptr ds : [public_610850]
        dec ecx
        sub esp, 8
        fstp qword ptr ss : [esp]
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x30], ecx
        call dword ptr ds : [public_5c71c4]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x114]
        mov ebx, eax
        fstp qword ptr ss : [esp]
        mov dword ptr ss : [esp+0x20], ebx
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        cmp eax, esi
        mov dword ptr ss : [esp+0x20], eax
        jg public_412f35
        cmp ebx, esi
        jle public_412f99
        public_412f35 : nop
        fild dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0xE4]
        mov dword ptr ss : [esp+0x50], edx
        mov dword ptr ss : [esp+0x54], esi
        fsubr dword ptr ss : [esp+0x58]
        fild qword ptr ss : [esp+0x50]
        fadd st, st(1)
        fisub dword ptr ss : [esp+0x20]
        call public_5b7ec0
        cmp eax, esi
        mov dword ptr ss : [esp+0x28], eax
        jge public_412f69
        xor eax, eax
        mov dword ptr ss : [esp+0x28], eax
        public_412f69 : nop
        mov ecx, dword ptr ds : [public_610850]
        dec ecx
        cmp eax, ecx
        jle public_412f78
        mov dword ptr ss : [esp+0x28], ecx
        public_412f78 : nop
        cmp ebx, esi
        jle public_412f97
        fld dword ptr ss : [esp+0x58]
        call public_5b7ec0
        fstp dword ptr ss : [esp+0x58]
        cmp eax, esi
        mov dword ptr ss : [esp+0x3C], eax
        jge public_412f99
        mov dword ptr ss : [esp+0x3C], esi
        jmp public_412f99
        public_412f97 : nop
        fstp st(0)
        public_412f99 : nop
        mov edx, dword ptr ds : [public_616670]
        push edx
        call public_402d30
        mov eax, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [public_6105b0]
        add esp, 4
        cmp eax, ecx
        je public_412ffa
        mov ebp, dword ptr ds : [edi+0x14]
        cmp ebp, esi
        je public_412ffa
        lea esp, ss:[esp]
        public_412fc0 : nop
        mov ebx, ebp
        mov ebp, dword ptr ss : [ebp+0x24]
        public_412fc5 : nop
        mov eax, ebx
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, dword ptr ds : [ebx+0x20]
        mov dword ptr ds : [eax+0x24], esi
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ds : [ecx+0x20], esi
        mov eax, dword ptr ds : [public_616648]
        push 1
        push eax
        mov ecx, offset public_616640
        call public_537260
        cmp ebx, esi
        jne public_412fc5
        cmp ebp, esi
        jne public_412fc0
        mov dword ptr ds : [edi+0x14], esi
        public_412ffa : nop
        cmp dword ptr ds : [edi+0x14], esi
        jne public_413008
        push 1
        mov ecx, edi
        call public_4127d0
        public_413008 : nop
        mov ebx, dword ptr ds : [edi+0x14]
        cmp ebx, esi
        mov dword ptr ss : [esp+0x1C], ebx
        je public_413528
        jmp public_413020
        public_413019 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[ecx]
        public_413020 : nop
        cmp ebx, esi
        je public_413519
        fild dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x20]
        fild dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x18]
        public_413038 : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [esp+0xDC], ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0xE0], esi
        fild qword ptr ss : [esp+0xDC]
        mov dword ptr ss : [esp+0xBC], edx
        mov dword ptr ss : [esp+0xC0], esi
        mov dword ptr ss : [esp+0xCC], eax
        fadd dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0xD0], esi
        mov dword ptr ss : [esp+0x84], ecx
        mov dword ptr ss : [esp+0x88], esi
        fsub dword ptr ds : [public_5c75e0]
        mov edx, dword ptr ds : [ebx+0x1C]
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0xA4], edx
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xA8], esi
        fild qword ptr ss : [esp+0xBC]
        mov dword ptr ss : [esp+0x94], eax
        mov dword ptr ss : [esp+0x98], esi
        mov ecx, dword ptr ds : [ebx]
        fadd dword ptr ss : [esp+0x5C]
        push esi
        lea edx, ss:[esp+0xF0]
        push 2
        fsub dword ptr ds : [public_5c75e0]
        push edx
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        fstp dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xF8], ecx
        fild qword ptr ss : [esp+0xD8]
        fidiv dword ptr ss : [esp+0x90]
        fstp dword ptr ss : [esp+0x74]
        fild qword ptr ss : [esp+0xB0]
        fidiv dword ptr ss : [esp+0xA0]
        fstp dword ptr ss : [esp+0x78]
        call public_402e30
        mov edx, dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [esp+0xA8], edx
        mov dword ptr ss : [esp+0xAC], esi
        fild qword ptr ss : [esp+0xA8]
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x38], eax
        fadd dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ebx+0x1C]
        mov dword ptr ss : [esp+0xB8], eax
        mov dword ptr ss : [esp+0xBC], esi
        fstp dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x1C]
        fild qword ptr ss : [esp+0xB8]
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 8
        mov dword ptr ss : [esp+0x34], ecx
        fadd dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x6C]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x70]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        call public_404670
        add esp, 0x1C
        test eax, eax
        je public_41350a
        fld dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [public_610854]
        fsub dword ptr ss : [esp+0x30]
        sub esp, 8
        dec ecx
        mov dword ptr ss : [esp+0x18], ecx
        fadd dword ptr ds : [public_5c75dc]
        lea edx, ss:[esp+0x74]
        lea eax, ss:[esp+0x6C]
        lea ecx, ss:[esp+0x40]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        push esi
        push edx
        push eax
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        call public_404670
        add esp, 0x1C
        test eax, eax
        je public_413528
        mov al, byte ptr ds : [edi+0x28]
        test al, al
        je public_413419
        mov eax, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0xC4], eax
        mov dword ptr ss : [esp+0xC8], esi
        fild qword ptr ss : [esp+0xC4]
        mov dword ptr ss : [esp+0xB4], ecx
        mov dword ptr ss : [esp+0xB8], esi
        mov edx, dword ptr ds : [ebx+0x1C]
        fidiv dword ptr ss : [esp+0xB4]
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0xD4], edx
        mov dword ptr ss : [esp+0xD8], esi
        mov dword ptr ss : [esp+0x8C], eax
        mov dword ptr ss : [esp+0x90], esi
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0
        fstp dword ptr ss : [esp+0x7C]
        fild qword ptr ss : [esp+0xD8]
        fidiv dword ptr ss : [esp+0x90]
        fstp dword ptr ss : [esp+0x80]
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x80]
        push ecx
        lea edx, ss:[esp+0x5C]
        push edx
        lea eax, ss:[esp+0x58]
        push eax
        call public_404670
        add esp, 0x1C
        test eax, eax
        je public_413419
        fld dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [public_610854]
        fsub dword ptr ss : [esp+0x44]
        sub esp, 8
        dec ecx
        mov dword ptr ss : [esp+0x18], ecx
        fadd dword ptr ds : [public_5c75dc]
        lea edx, ss:[esp+0x84]
        lea eax, ss:[esp+0x7C]
        lea ecx, ss:[esp+0x54]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        push esi
        push edx
        push eax
        push ecx
        lea edx, ss:[esp+0x5C]
        push edx
        call public_404670
        add esp, 0x1C
        test eax, eax
        je public_413419
        movzx esi, byte ptr ds : [public_616677]
        movzx eax, byte ptr ds : [edi+0x24]
        movzx ecx, byte ptr ds : [edi+0x25]
        movzx edx, byte ptr ds : [edi+0x26]
        mov edi, dword ptr ss : [ebp+0xC]
        shl esi, 8
        or esi, eax
        shl esi, 8
        or esi, ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        shl esi, 8
        lea eax, ds:[edi+1]
        or esi, edx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [ebp+0xC], eax
        jle public_4133c6
        add eax, 0x20
        mov dword ptr ss : [ebp+0x10], eax
        imul eax, 0x2C
        push eax
        call public_5b7e84
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        test edx, edx
        mov dword ptr ss : [esp+0x50], eax
        je public_4133b3
        mov ecx, edi
        imul ecx, 0x2C
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        mov esi, edx
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x14]
        public_4133b3 : nop
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x54]
        add esp, 4
        mov dword ptr ss : [ebp+8], edx
        public_4133c6 : nop
        mov eax, dword ptr ss : [ebp+8]
        imul edi, 0x2C
        mov ecx, dword ptr ss : [esp+0x40]
        add edi, eax
        mov eax, edi
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [eax+0xC], edx
        mov ecx, 0x3F800000
        mov dword ptr ds : [edi+0x10], ecx
        mov dword ptr ds : [edi+0x14], ecx
        mov edx, dword ptr ss : [esp+0x70]
        lea eax, ds:[edi+0x18]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x74]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x78]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ss : [esp+0x7C]
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [edi+0x28], esi
        jmp public_41341e
        public_413419 : nop
        mov ecx, 0x3F800000
        public_41341e : nop
        movzx edi, byte ptr ds : [public_616677]
        movzx eax, byte ptr ds : [public_616674]
        movzx edx, byte ptr ds : [public_616675]
        mov esi, dword ptr ss : [ebp+0xC]
        shl edi, 8
        or edi, eax
        movzx eax, byte ptr ds : [public_616676]
        shl edi, 8
        or edi, edx
        mov edx, dword ptr ss : [ebp+0x10]
        shl edi, 8
        or edi, eax
        lea eax, ds:[esi+1]
        cmp eax, edx
        mov dword ptr ss : [esp+0x50], edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [ebp+0xC], eax
        jle public_4134b5
        add eax, 0x20
        mov dword ptr ss : [ebp+0x10], eax
        imul eax, 0x2C
        push eax
        call public_5b7e84
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        test edx, edx
        mov dword ptr ss : [esp+0x14], eax
        je public_41349d
        mov ecx, esi
        imul ecx, 0x2C
        mov esi, edx
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x50]
        mov esi, dword ptr ss : [esp+0x10]
        public_41349d : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp+8], ecx
        add esp, 4
        mov ecx, 0x3F800000
        public_4134b5 : nop
        mov eax, dword ptr ss : [ebp+8]
        imul esi, 0x2C
        add esi, eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, esi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [esi+0x14], ecx
        mov dword ptr ds : [edx+0xC], eax
        mov edx, dword ptr ss : [esp+0x60]
        lea ecx, ds:[esi+0x18]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [esp+0x64]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [esi+0x28], edi
        mov edi, dword ptr ss : [esp+0x80]
        mov dword ptr ds : [ecx+0xC], eax
        xor esi, esi
        public_41350a : nop
        mov ebx, dword ptr ds : [ebx+0x20]
        cmp ebx, esi
        jne public_413038
        mov ebx, dword ptr ss : [esp+0x1C]
        public_413519 : nop
        mov ebx, dword ptr ds : [ebx+0x24]
        cmp ebx, esi
        mov dword ptr ss : [esp+0x1C], ebx
        jne public_413019
        public_413528 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xF0
        ret 0xC
        UNREACHABLE_TRAP(0x412e50)
    }
}

#undef public_412f35
#undef public_412f69
#undef public_412f78
#undef public_412f97
#undef public_412f99
#undef public_412fc0
#undef public_412fc5
#undef public_412ffa
#undef public_413008
#undef public_413019
#undef public_413020
#undef public_413038
#undef public_4133b3
#undef public_4133c6
#undef public_413419
#undef public_41341e
#undef public_41349d
#undef public_4134b5
#undef public_41350a
#undef public_413519
#undef public_413528
