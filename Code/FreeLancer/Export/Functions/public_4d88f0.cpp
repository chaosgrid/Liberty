#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_4d88f0);
CLANG_FORWARD_PROC_SYMBOL(public_4d8bf0);
CLANG_FORWARD_PROC_SYMBOL(public_4d95b0);
CLANG_FORWARD_PROC_SYMBOL(public_4d9750);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_59da70);

#define public_4d892d _public_4d892d
#define public_4d892f _public_4d892f
#define public_4d8957 _public_4d8957
#define public_4d8974 _public_4d8974
#define public_4d899c _public_4d899c
#define public_4d89a0 _public_4d89a0
#define public_4d89cc _public_4d89cc
#define public_4d89d6 _public_4d89d6
#define public_4d89f8 _public_4d89f8
#define public_4d8a08 _public_4d8a08
#define public_4d8a87 _public_4d8a87
#define public_4d8ab4 _public_4d8ab4
#define public_4d8ad4 _public_4d8ad4
#define public_4d8b23 _public_4d8b23
#define public_4d8b44 _public_4d8b44
#define public_4d8b63 _public_4d8b63
#define public_4d8b90 _public_4d8b90
#define public_4d8bcf _public_4d8bcf
#define public_4d8bd5 _public_4d8bd5
#define public_4d8be3 _public_4d8be3

PROC_DECLARE(0x4d88f0, internal_4d88f0, public_4d88f0);
extern "C" NAKED register_t __cdecl internal_4d88f0()
{
    __asm
    {
        sub esp, 0x34
        push ebp
        push esi
        mov ebp, ecx
        call public_54baf0
        xor esi, esi
        cmp eax, esi
        je public_4d8be3
        add eax, 0xC
        cmp eax, esi
        mov dword ptr ss : [esp+8], esi
        je public_4d892d
        mov eax, dword ptr ds : [eax+4]
        cmp eax, esi
        je public_4d892d
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4d892d
        mov ecx, eax
        jmp public_4d892f
        public_4d892d : nop
        xor ecx, ecx
        public_4d892f : nop
        push ebx
        push edi
        call dword ptr ds : [public_5c62e8]
        mov ebx, eax
        mov eax, dword ptr ss : [ebp+0x380]
        cmp eax, esi
        mov edx, dword ptr ds : [ebx+0xC0]
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x14], edx
        jne public_4d8957
        mov dword ptr ss : [esp+0x20], esi
        jmp public_4d8974
        public_4d8957 : nop
        mov ecx, dword ptr ss : [ebp+0x384]
        sub ecx, eax
        mov eax, 0x63E7063F
        imul ecx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x20], edx
        public_4d8974 : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x38], 2
        mov dword ptr ss : [esp+0x3C], 1
        mov dword ptr ss : [esp+0x40], 3
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x18], eax
        jmp public_4d89a0
        public_4d899c : nop
        mov ebx, dword ptr ss : [esp+0x24]
        public_4d89a0 : nop
        mov esi, dword ptr ss : [esp+eax*4+0x34]
        mov edx, dword ptr ss : [ebp+0x380]
        mov edi, esi
        imul edi, 0x148
        mov eax, dword ptr ds : [edi+edx+0x138]
        add edi, edx
        cmp eax, 0xFFFFFFFF
        mov byte ptr ds : [edi+0x13C], 0
        je public_4d89cc
        cmp eax, 0x12
        jne public_4d89d6
        public_4d89cc : nop
        cmp dword ptr ss : [esp+0x14], eax
        jne public_4d8ad4
        public_4d89d6 : nop
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_5c6514]
        cmp eax, 2
        jne public_4d8a08
        cmp dword ptr ds : [edi+0x138], 7
        jne public_4d89f8
        mov ecx, ebp
        call public_4d9750
        test al, al
        jne public_4d8a08
        public_4d89f8 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [edi+0x138]
        jne public_4d8ad4
        public_4d8a08 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [ebp+esi*4+0x36C]
        push 0
        inc edx
        push 0
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], edi
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi]
        push 0
/*FIXUP push offset public_679b94 @0x4d8a30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679b94
        push 0x33
        mov ecx, esi
        call dword ptr ds : [eax+0xA8]
        mov edx, dword ptr ds : [edi+0x138]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp edx, ecx
        mov edx, dword ptr ds : [esi]
        sete bl
        xor eax, eax
        mov al, bl
        push 0
        mov ecx, esi
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        test bl, bl
        jne public_4d8a87
        call public_45a740
        test al, al
        jne public_4d8ab4
        mov ebx, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x28]
        push ecx
        call public_59da70
        add esp, 4
        push eax
        mov ecx, esi
        call dword ptr ds : [ebx+0x10]
        test al, al
        je public_4d8ab4
        public_4d8a87 : nop
        mov eax, dword ptr ds : [edi+0xA8]
        test eax, eax
        je public_4d8ab4
        mov edx, dword ptr ds : [esi]
        push 0
        lea eax, ds:[edi+0xAC]
        push eax
        push 4
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0x144]
        mov dword ptr ds : [esi+0x338], ecx
        jmp public_4d8b23
        public_4d8ab4 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        lea eax, ds:[edi+0x28]
        push eax
        push 4
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0x140]
        mov dword ptr ds : [esi+0x338], ecx
        jmp public_4d8b23
        public_4d8ad4 : nop
        mov esi, dword ptr ss : [ebp+esi*4+0x36C]
        mov edx, dword ptr ds : [esi]
        push 0
        push 0
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi]
        push 0
        lea ecx, ds:[edi+0xAC]
        push ecx
        push 4
        mov ecx, esi
        call dword ptr ds : [eax+0xA8]
        mov edx, dword ptr ds : [edi+0x144]
        mov eax, dword ptr ds : [esi]
        push 1
/*FIXUP push offset public_679b94 @0x4d8b0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679b94
        push 0x33
        mov ecx, esi
        mov dword ptr ds : [esi+0x338], edx
        call dword ptr ds : [eax+0xA8]
        inc dword ptr ss : [esp+0x10]
        public_4d8b23 : nop
        mov eax, dword ptr ss : [esp+0x18]
        inc eax
        cmp eax, 4
        mov dword ptr ss : [esp+0x18], eax
        jl public_4d899c
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_4d8b44
        mov byte ptr ds : [eax+0x13C], 1
        public_4d8b44 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        push ebx
        mov ecx, ebp
        call public_4d95b0
        fld dword ptr ds : [public_5c7474]
        test bl, 1
        jne public_4d8b63
        fstp st(0)
        fld dword ptr ds : [public_5d1fe4]
        public_4d8b63 : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, ebx
        cdq 
        sub eax, edx
        sar eax, 1
        test edi, edi
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5d845c]
        fsubr st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        jle public_4d8bd5
        lea esi, ss:[ebp+0x36C]
        mov edi, edi
        public_4d8b90 : nop
        mov ecx, dword ptr ds : [esi]
        test byte ptr ds : [ecx+0x6C], 2
        je public_4d8bcf
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x28], edx
        push 0
        lea edx, ss:[esp+0x2C]
        push edx
        push 6
        mov dword ptr ss : [esp+0x38], 0x3E35F6FD
        mov dword ptr ss : [esp+0x3C], 0x3F000000
        call dword ptr ds : [eax+0xA8]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_5d845c]
        fstp dword ptr ss : [esp+0x10]
        public_4d8bcf : nop
        add esi, 4
        dec edi
        jne public_4d8b90
        public_4d8bd5 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov ecx, ebp
        call public_4d8bf0
        pop edi
        pop ebx
        public_4d8be3 : nop
        pop esi
        pop ebp
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x4d88f0)
    }
}

#undef public_4d892d
#undef public_4d892f
#undef public_4d8957
#undef public_4d8974
#undef public_4d899c
#undef public_4d89a0
#undef public_4d89cc
#undef public_4d89d6
#undef public_4d89f8
#undef public_4d8a08
#undef public_4d8a87
#undef public_4d8ab4
#undef public_4d8ad4
#undef public_4d8b23
#undef public_4d8b44
#undef public_4d8b63
#undef public_4d8b90
#undef public_4d8bcf
#undef public_4d8bd5
#undef public_4d8be3
