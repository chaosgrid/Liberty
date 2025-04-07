#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16310);
CLANG_FORWARD_PROC_SYMBOL(public_6d163f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d19aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1a920);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b480);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b650);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bc60);
CLANG_FORWARD_PROC_SYMBOL(public_6d1c770);
CLANG_FORWARD_PROC_SYMBOL(public_6d1f040);

#define public_6d122f6 _public_6d122f6
#define public_6d123a0 _public_6d123a0
#define public_6d12402 _public_6d12402
#define public_6d12415 _public_6d12415
#define public_6d124b6 _public_6d124b6
#define public_6d124d5 _public_6d124d5
#define public_6d124db _public_6d124db
#define public_6d124eb _public_6d124eb
#define public_6d124f2 _public_6d124f2
#define public_6d1252e _public_6d1252e
#define public_6d1254d _public_6d1254d
#define public_6d1256a _public_6d1256a
#define public_6d12590 _public_6d12590
#define public_6d125b6 _public_6d125b6
#define public_6d125d4 _public_6d125d4
#define public_6d1262a _public_6d1262a
#define public_6d12649 _public_6d12649
#define public_6d126a4 _public_6d126a4
#define public_6d126b2 _public_6d126b2
#define public_6d126b5 _public_6d126b5

PROC_DECLARE(0x6d1228c, internal_6d1228c, public_6d1228c);
extern "C" NAKED register_t __cdecl internal_6d1228c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xB0
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x120], 0
        jne public_6d122f6
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x1C]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x1C]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x1C], ecx
/*FIXUP push offset public_6d695e0 @0x6d122cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d695e0
        push 0x1028
/*FIXUP push offset public_6d69618 @0x6d122d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69618
/*FIXUP push offset public_6d69664 @0x6d122db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69664
        mov edx, dword ptr ss : [ebp-0x1C]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d126b5
        public_6d122f6 : nop
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d126b2
        cmp dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        jne public_6d124d5
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ds : [ecx+0x68]
        mov dword ptr ss : [ebp-0xA0], edx
        mov eax, dword ptr ss : [ebp+8]
        sub eax, 0x10
        mov dword ptr ss : [ebp-0x9C], eax
        push 0x200
        lea ecx, ss:[ebp-0x80]
        call public_6d1b480
        push eax
        lea ecx, ss:[ebp-0xA0]
        push ecx
        lea ecx, ss:[ebp-0x5C]
        call public_6d1a920
        push eax
        lea edx, ss:[ebp-0x88]
        push edx
        mov ecx, dword ptr ss : [ebp-0x9C]
        add ecx, 0x16C
        call public_6d19aa0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x34], eax
        lea ecx, ss:[ebp-0x58]
        call public_6d1bc60
        lea ecx, ss:[ebp-0x80]
        call public_6d1bc60
        mov ecx, dword ptr ss : [ebp-0x34]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, dword ptr ss : [ebp-0x20]
        xor eax, eax
        cmp dword ptr ds : [edx+0x20], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d123a0
        mov edx, dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ds : [edx+8]
        cmp eax, dword ptr ss : [ebp+0x1C]
        jae public_6d124b6
        public_6d123a0 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [ecx+4]
        push edx
        call public_6d163f0
        add esp, 4
        mov dword ptr ss : [ebp-0x8C], eax
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ss : [ebp-0x8C]
        imul ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x90], ecx
        mov edx, dword ptr ss : [ebp-0x90]
        mov dword ptr ss : [ebp-0x2C], edx
        mov eax, dword ptr ss : [ebp-0x9C]
        mov ecx, dword ptr ds : [eax+0x180]
        sub ecx, dword ptr ss : [ebp-0x2C]
        mov edx, dword ptr ss : [ebp-0x9C]
        mov dword ptr ds : [edx+0x180], ecx
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x30], ecx
        cmp dword ptr ss : [ebp-0x30], 0
        jne public_6d12402
        mov dword ptr ss : [ebp-0x30], 0x400
        public_6d12402 : nop
        mov edx, dword ptr ss : [ebp-0x30]
        cmp edx, dword ptr ss : [ebp+0x1C]
        jae public_6d12415
        mov eax, dword ptr ss : [ebp+0x1C]
        add eax, 0x3FF
        mov dword ptr ss : [ebp-0x30], eax
        public_6d12415 : nop
        mov ecx, dword ptr ss : [ebp-0x30]
        shr ecx, 0xA
        shl ecx, 0xA
        mov dword ptr ss : [ebp-0x28], ecx
        mov edx, dword ptr ss : [ebp-0x28]
        push edx
        mov eax, dword ptr ss : [ebp-0xA0]
        push eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov edx, dword ptr ds : [ecx+0x130]
        push edx
        mov ecx, dword ptr ss : [ebp-0x20]
        call public_6d1b650
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        call public_6d163f0
        add esp, 4
        mov dword ptr ss : [ebp-0x94], eax
        mov edx, dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ss : [ebp-0x94]
        imul eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x98], eax
        mov ecx, dword ptr ss : [ebp-0x98]
        mov dword ptr ss : [ebp-0x24], ecx
        mov edx, dword ptr ss : [ebp-0x9C]
        mov eax, dword ptr ds : [edx+0x180]
        add eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ss : [ebp-0x9C]
        mov dword ptr ds : [ecx+0x180], eax
        mov edx, dword ptr ss : [ebp-0x9C]
        mov eax, dword ptr ss : [ebp-0x20]
        cmp eax, dword ptr ds : [edx+0x13C]
        jne public_6d124b6
        push 0
        mov ecx, dword ptr ss : [ebp-0x9C]
        add ecx, 0x10
        mov edx, dword ptr ss : [ebp-0x9C]
        mov eax, dword ptr ds : [edx+0x10]
        push ecx
        call dword ptr ds : [eax+0x28]
        public_6d124b6 : nop
        push 0
        mov ecx, dword ptr ss : [ebp-0x20]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x9C]
        add ecx, 0x138
        call public_6d1c770
        mov edx, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x14], edx
        jmp public_6d124db
        public_6d124d5 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x14], eax
        public_6d124db : nop
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d124eb
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x10], edx
        jmp public_6d124f2
        public_6d124eb : nop
        mov dword ptr ss : [ebp-0x10], 0
        public_6d124f2 : nop
        mov dword ptr ss : [ebp-0xC], 0
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0xB0], ecx
        mov dword ptr ss : [ebp-0xA4], 0
        mov edx, dword ptr ss : [ebp-0xB0]
        and edx, 0xC
        cmp edx, 0xC
        jne public_6d1252e
        mov eax, dword ptr ss : [ebp-0xA4]
        add eax, 0x1C
        mov dword ptr ss : [ebp-0xA4], eax
        jmp public_6d1256a
        public_6d1252e : nop
        mov ecx, dword ptr ss : [ebp-0xB0]
        and ecx, 4
        cmp ecx, 4
        jne public_6d1254d
        mov edx, dword ptr ss : [ebp-0xA4]
        add edx, 0x10
        mov dword ptr ss : [ebp-0xA4], edx
        jmp public_6d1256a
        public_6d1254d : nop
        mov eax, dword ptr ss : [ebp-0xB0]
        and eax, 2
        cmp eax, 2
        jne public_6d1256a
        mov ecx, dword ptr ss : [ebp-0xA4]
        add ecx, 0xC
        mov dword ptr ss : [ebp-0xA4], ecx
        public_6d1256a : nop
        mov dword ptr ss : [ebp-0xA8], 0
        mov edx, dword ptr ss : [ebp-0xB0]
        and edx, 0x10
        test edx, edx
        je public_6d12590
        mov eax, dword ptr ss : [ebp-0xA8]
        add eax, 0xC
        mov dword ptr ss : [ebp-0xA8], eax
        public_6d12590 : nop
        mov dword ptr ss : [ebp-0xAC], 0
        mov ecx, dword ptr ss : [ebp-0xB0]
        and ecx, 0x40
        test ecx, ecx
        je public_6d125b6
        mov edx, dword ptr ss : [ebp-0xAC]
        add edx, 4
        mov dword ptr ss : [ebp-0xAC], edx
        public_6d125b6 : nop
        mov eax, dword ptr ss : [ebp-0xB0]
        and eax, 0x80
        test eax, eax
        je public_6d125d4
        mov ecx, dword ptr ss : [ebp-0xAC]
        add ecx, 4
        mov dword ptr ss : [ebp-0xAC], ecx
        public_6d125d4 : nop
        mov edx, dword ptr ss : [ebp-0xB0]
        push edx
        call public_6d16310
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0xA4]
        add ecx, dword ptr ss : [ebp-0xA8]
        add ecx, dword ptr ss : [ebp-0xAC]
        add ecx, eax
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        xor eax, eax
        cmp dword ptr ds : [edx+0x10], 0
        setne al
        mov byte ptr ss : [ebp-0x15], al
        movzx ecx, byte ptr ss : [ebp-0x15]
        test ecx, ecx
        je public_6d1262a
        mov edx, dword ptr ss : [ebp-8]
        imul edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-0x14]
        add edx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [ebp-0xC], edx
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d12649
        public_6d1262a : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        push ecx
        lea edx, ss:[ebp-0xC]
        push edx
        lea eax, ss:[ebp-0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [ecx+0x1C]
        mov dword ptr ss : [ebp-4], eax
        public_6d12649 : nop
        cmp dword ptr ss : [ebp-4], 0
        jl public_6d126b2
        mov edx, dword ptr ss : [ebp-8]
        imul edx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [ebp-0xC]
        sub eax, edx
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp+0x1C]
        push ecx
        mov edx, dword ptr ss : [ebp+0x18]
        push edx
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx+4]
        push edx
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        call public_6d1f040
        add esp, 0x14
        movzx ecx, byte ptr ss : [ebp-0x15]
        test ecx, ecx
        jne public_6d126a4
        mov edx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [edx+0x10], 0
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax+0x20]
        push ecx
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x30]
        mov dword ptr ss : [ebp-4], eax
        public_6d126a4 : nop
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d126b2
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx], eax
        public_6d126b2 : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6d126b5 : nop
        mov esp, ebp
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d1228c)
    }
}

#undef public_6d122f6
#undef public_6d123a0
#undef public_6d12402
#undef public_6d12415
#undef public_6d124b6
#undef public_6d124d5
#undef public_6d124db
#undef public_6d124eb
#undef public_6d124f2
#undef public_6d1252e
#undef public_6d1254d
#undef public_6d1256a
#undef public_6d12590
#undef public_6d125b6
#undef public_6d125d4
#undef public_6d1262a
#undef public_6d12649
#undef public_6d126a4
#undef public_6d126b2
#undef public_6d126b5
