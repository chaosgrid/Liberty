#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661db70);

#define public_661d94a _public_661d94a
#define public_661d959 _public_661d959
#define public_661d9a6 _public_661d9a6
#define public_661d9ad _public_661d9ad
#define public_661d9b4 _public_661d9b4
#define public_661d9bd _public_661d9bd
#define public_661d9c4 _public_661d9c4
#define public_661d9cb _public_661d9cb
#define public_661d9d3 _public_661d9d3
#define public_661d9ed _public_661d9ed
#define public_661da16 _public_661da16
#define public_661da48 _public_661da48
#define public_661da51 _public_661da51
#define public_661da75 _public_661da75
#define public_661da80 _public_661da80
#define public_661da8d _public_661da8d
#define public_661daa3 _public_661daa3
#define public_661db1f _public_661db1f
#define public_661db3a _public_661db3a
#define public_661db58 _public_661db58

PROC_DECLARE(0x661d8d0, internal_661d8d0, public_661d8d0);
extern "C" NAKED register_t __cdecl internal_661d8d0()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x54]
        test esi, esi
        push edi
        je public_661db58
        mov ecx, 0xB
        xor eax, eax
        lea edi, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x20], offset public_662a030
        rep stosd
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push esi
        mov dword ptr ss : [esp+0x34], 0x80000000
        mov dword ptr ss : [esp+0x38], 1
        mov dword ptr ss : [esp+0x40], 3
        mov dword ptr ss : [esp+0x44], 0x8000080
        mov dword ptr ss : [esp+0x30], offset public_662a30c
        mov dword ptr ss : [esp+0x24], 0x34
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x2C], offset public_662a308
        call dword ptr ds : [eax+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_661d959
        public_661d94a : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFA
        pop ebx
        add esp, 0x40
        ret 8
        public_661d959 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x58]
        push 0
        push eax
        lea ecx, ss:[esp+0x18]
        push 0xC
        push ecx
        push edi
        push esi
        call dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        mov ebx, eax
        call dword ptr ds : [edx+0x10]
        test ebx, ebx
        je public_661d94a
        cmp dword ptr ss : [esp+0x58], 0xC
        jne public_661d94a
        mov edi, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+4], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi+8], ecx
        xor ecx, ecx
        test al, 1
        mov dword ptr ds : [edi+0xC], eax
        je public_661d9a6
        mov ecx, 4
        public_661d9a6 : nop
        test al, 2
        je public_661d9ad
        add ecx, 0xC
        public_661d9ad : nop
        test al, 4
        je public_661d9b4
        add ecx, 0x10
        public_661d9b4 : nop
        test al, 8
        je public_661d9bd
        mov ecx, 4
        public_661d9bd : nop
        test al, 0x40
        je public_661d9c4
        add ecx, 6
        public_661d9c4 : nop
        test al, al
        jns public_661d9cb
        add ecx, 6
        public_661d9cb : nop
        test ah, 1
        je public_661d9d3
        add ecx, 8
        public_661d9d3 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_6629238]
        mov dword ptr ds : [edi+0x14], ecx
        fnstsw ax
        test ah, 5
        jp public_661d9ed
        add ecx, 4
        mov dword ptr ds : [edi+0x14], ecx
        public_661d9ed : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x1C]
        push eax
        push esi
        mov dword ptr ss : [esp+0x30], offset public_662a300
        call dword ptr ds : [edx+0x7C]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        jne public_661da16
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFA
        pop ebx
        add esp, 0x40
        ret 8
        public_661da16 : nop
        mov ecx, dword ptr ds : [esi]
        push 0
        push ebx
        push esi
        call dword ptr ds : [ecx+0x28]
        mov ebp, eax
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, 8
        je public_661da48
        mov edx, dword ptr ds : [edi+4]
        imul edx, dword ptr ds : [edi+0x14]
        cmp ebp, edx
        je public_661da48
        mov eax, dword ptr ds : [esi]
        push ebx
        push esi
        call dword ptr ds : [eax+0x10]
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x40
        ret 8
        public_661da48 : nop
        test al, 0xF0
        jne public_661da51
        test ah, 1
        je public_661da80
        public_661da51 : nop
        cmp ebp, dword ptr ds : [public_662b108]
        jbe public_661da75
        mov ecx, dword ptr ds : [public_662b104]
        push ebp
        push ecx
        call dword ptr ds : [public_662904c]
        add esp, 8
        mov dword ptr ds : [public_662b104], eax
        mov dword ptr ds : [public_662b108], ebp
        public_661da75 : nop
        mov edx, dword ptr ds : [public_662b104]
        mov dword ptr ds : [edi+0x10], edx
        jmp public_661da8d
        public_661da80 : nop
        push ebp
        call dword ptr ds : [public_662903c]
        add esp, 4
        mov dword ptr ds : [edi+0x10], eax
        public_661da8d : nop
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        jne public_661daa3
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        add esp, 0x40
        ret 8
        public_661daa3 : nop
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x58]
        push 0
        push edx
        push ebp
        push eax
        push ebx
        push esi
        call dword ptr ds : [ecx+0x14]
        push ebx
        push esi
        mov dword ptr ss : [esp+0x5C], eax
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x10]
        xor esi, esi
        cmp dword ptr ss : [esp+0x54], esi
        je public_661d94a
        cmp dword ptr ss : [esp+0x58], ebp
        jne public_661d94a
        mov ecx, edi
        call public_661db70
        fld dword ptr ds : [edi+8]
        fcomp dword ptr ds : [public_66291e0]
        mov ecx, dword ptr ds : [edi+4]
        dec ecx
        fnstsw ax
        test ah, 5
        jp public_661db3a
        fld dword ptr ds : [edi+8]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        and eax, 0x100
        jne public_661db1f
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], esi
        fild qword ptr ss : [esp+0x10]
        xor eax, eax
        fmul dword ptr ds : [edi+8]
        fstp dword ptr ds : [edi+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 8
        public_661db1f : nop
        mov edx, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ds : [edi+0x10]
        imul edx, ecx
        fld dword ptr ds : [edx+eax]
        xor eax, eax
        fstp dword ptr ds : [edi+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 8
        public_661db3a : nop
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], esi
        fild qword ptr ss : [esp+0x10]
        xor eax, eax
        fmul dword ptr ds : [edi+8]
        fstp dword ptr ds : [edi+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 8
        public_661db58 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x661d8d0)
    }
}

#undef public_661d94a
#undef public_661d959
#undef public_661d9a6
#undef public_661d9ad
#undef public_661d9b4
#undef public_661d9bd
#undef public_661d9c4
#undef public_661d9cb
#undef public_661d9d3
#undef public_661d9ed
#undef public_661da16
#undef public_661da48
#undef public_661da51
#undef public_661da75
#undef public_661da80
#undef public_661da8d
#undef public_661daa3
#undef public_661db1f
#undef public_661db3a
#undef public_661db58
