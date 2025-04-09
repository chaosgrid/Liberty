#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e7090);
CLANG_FORWARD_PROC_SYMBOL(public_595840);
CLANG_FORWARD_PROC_SYMBOL(public_595ca0);
CLANG_FORWARD_PROC_SYMBOL(public_59d8d0);
CLANG_FORWARD_PROC_SYMBOL(public_59d960);
CLANG_FORWARD_PROC_SYMBOL(public_59d9b0);
CLANG_FORWARD_PROC_SYMBOL(public_59da70);
CLANG_FORWARD_PROC_SYMBOL(public_5a0650);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_596d4d _public_596d4d
#define public_596d62 _public_596d62
#define public_596e01 _public_596e01
#define public_596eb0 _public_596eb0
#define public_596ecd _public_596ecd
#define public_596ed7 _public_596ed7
#define public_596ef8 _public_596ef8
#define public_596f09 _public_596f09
#define public_596f72 _public_596f72
#define public_596fd5 _public_596fd5
#define public_597074 _public_597074
#define public_597085 _public_597085
#define public_597125 _public_597125
#define public_59712b _public_59712b
#define public_597131 _public_597131
#define public_59717e _public_59717e
#define public_597180 _public_597180
#define public_5971b1 _public_5971b1
#define public_5971b3 _public_5971b3
#define public_5971be _public_5971be

PROC_DECLARE(0x596d30, internal_596d30, public_596d30);
extern "C" NAKED register_t __cdecl internal_596d30()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x32C]
        test al, al
        jne public_596d4d
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x24
        ret 4
        public_596d4d : nop
        mov ebp, dword ptr ss : [esp+0x34]
        cmp dword ptr ss : [ebp], 0xFFFFFFFF
        je public_596d62
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x24
        ret 4
        public_596d62 : nop
        lea eax, ss:[esp+0x24]
        push edi
        push eax
        xor bl, bl
        call public_59da70
        fld dword ptr ds : [esi+0x68]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], eax
        fdiv dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        add esp, 4
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[esi+0x3DC]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x2C]
        call public_4e7090
        mov dword ptr ds : [esi+0x3B8], 0xFFFFFFFF
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, 2
        je public_596e01
        cmp eax, 3
        je public_596e01
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_596e01
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edi, eax
        test edi, edi
        je public_596e01
        mov edx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [edi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+8]
        push eax
        push 0x29
        mov ecx, edi
        call dword ptr ss : [ebp+0xA8]
        mov ebp, dword ptr ss : [esp+0x38]
        public_596e01 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_597180
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+0x334]
        fnstsw ax
        test ah, 5
        jp public_597180
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_597180
        fld dword ptr ds : [esi+0x338]
        fchs 
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_597180
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+0x38C]
        fnstsw ax
        test ah, 1
        jne public_596ef8
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+0x394]
        fnstsw ax
        test ah, 0x41
        jp public_596ef8
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [esi+0x390]
        fnstsw ax
        test ah, 0x41
        jp public_596ef8
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [esi+0x398]
        fnstsw ax
        test ah, 1
        jne public_596ef8
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, 2
        je public_596eb0
        cmp eax, 3
        jne public_59717e
        public_596eb0 : nop
        mov al, byte ptr ds : [esi+0x42C]
        test al, al
        mov byte ptr ds : [esi+0x3D4], 1
        je public_596ecd
        fld dword ptr ds : [esi+0x38C]
        fsub dword ptr ss : [esp+0x10]
        jmp public_596ed7
        public_596ecd : nop
        fld dword ptr ds : [esi+0x390]
        fsub dword ptr ss : [esp+0x14]
        public_596ed7 : nop
        fstp dword ptr ds : [esi+0x3D8]
        call public_59d9b0
        cmp eax, esi
        je public_59717e
        push esi
        call public_59d8d0
        add esp, 4
        jmp public_59717e
        public_596ef8 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, 2
        je public_596f09
        cmp eax, 3
        jne public_59717e
        public_596f09 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+0x33C]
        fnstsw ax
        test ah, 1
        jne public_596f72
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+0x344]
        fnstsw ax
        test ah, 0x41
        jp public_596f72
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [esi+0x340]
        fnstsw ax
        test ah, 0x41
        jp public_596f72
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [esi+0x348]
        fnstsw ax
        test ah, 1
        jne public_596f72
        fld dword ptr ds : [esi+0x3C8]
        mov dword ptr ds : [esi+0x3B8], 0
        fsub dword ptr ds : [esi+0x3D0]
        mov dword ptr ds : [esi+0x3BC], 0x3E99999A
        jmp public_597131
        public_596f72 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+0x350]
        fnstsw ax
        test ah, 1
        jne public_596fd5
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+0x358]
        fnstsw ax
        test ah, 0x41
        jp public_596fd5
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [esi+0x354]
        fnstsw ax
        test ah, 0x41
        jp public_596fd5
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [esi+0x35C]
        fnstsw ax
        test ah, 1
        jne public_596fd5
        fld dword ptr ds : [esi+0x3D0]
        mov dword ptr ds : [esi+0x3B8], 1
        mov dword ptr ds : [esi+0x3BC], 0x3E99999A
        jmp public_59712b
        public_596fd5 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+0x364]
        fnstsw ax
        test ah, 1
        jne public_597085
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+0x36C]
        fnstsw ax
        test ah, 0x41
        jp public_597085
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [esi+0x368]
        fnstsw ax
        test ah, 0x41
        jp public_597085
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [esi+0x370]
        fnstsw ax
        test ah, 1
        jne public_597085
        mov al, byte ptr ds : [esi+0x3B4]
        test al, al
        je public_597074
        fld dword ptr ds : [esi+0x3C4]
        fsub dword ptr ds : [esi+0x3C0]
        fmul dword ptr ds : [public_5d3ee0]
        fsubr dword ptr ds : [esi+0x3C8]
        call public_5b7ec0
        mov dword ptr ss : [esp+0x38], eax
        fild dword ptr ss : [esp+0x38]
        fcom dword ptr ds : [esi+0x3C8]
        fnstsw ax
        test ah, 0x44
        jp public_597131
        fstp st(0)
        fld dword ptr ds : [esi+0x3C8]
        fsub dword ptr ds : [public_5c75dc]
        jmp public_597131
        public_597074 : nop
        fld dword ptr ds : [esi+0x3C8]
        fsub dword ptr ds : [esi+0x3CC]
        jmp public_597131
        public_597085 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+0x378]
        fnstsw ax
        test ah, 1
        jne public_59717e
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+0x380]
        fnstsw ax
        test ah, 0x41
        jp public_59717e
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [esi+0x37C]
        fnstsw ax
        test ah, 0x41
        jp public_59717e
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [esi+0x384]
        fnstsw ax
        test ah, 1
        jne public_59717e
        mov al, byte ptr ds : [esi+0x3B4]
        test al, al
        je public_597125
        fld dword ptr ds : [esi+0x3C4]
        fsub dword ptr ds : [esi+0x3C0]
        fmul dword ptr ds : [public_5d3ee0]
        fadd dword ptr ds : [esi+0x3C8]
        call public_5b7ec0
        mov dword ptr ss : [esp+0x38], eax
        fild dword ptr ss : [esp+0x38]
        fcom dword ptr ds : [esi+0x3C8]
        fnstsw ax
        test ah, 0x44
        jp public_597131
        fstp st(0)
        fld dword ptr ds : [esi+0x3C8]
        fadd dword ptr ds : [public_5c75dc]
        jmp public_597131
        public_597125 : nop
        fld dword ptr ds : [esi+0x3CC]
        public_59712b : nop
        fadd dword ptr ds : [esi+0x3C8]
        public_597131 : nop
        mov ecx, esi
        fstp dword ptr ds : [esi+0x3C8]
        call public_595ca0
        call public_595840
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_59717e
        mov eax, dword ptr ds : [ecx]
        push 0
        push esi
        push 0xF005
        call dword ptr ds : [eax+0x5C]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov edi, eax
        test edi, edi
        je public_59717e
        fld dword ptr ds : [esi+0x3C8]
        mov ebx, dword ptr ds : [edi]
        call public_5b7ec0
        push eax
        push esi
        push 0x3E
        mov ecx, edi
        call dword ptr ds : [ebx+0xA8]
        public_59717e : nop
        mov bl, 1
        public_597180 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, 2
        pop edi
        je public_5971be
        cmp eax, 3
        je public_5971be
        mov al, byte ptr ds : [esi+0x3D4]
        test al, al
        je public_5971be
        mov byte ptr ds : [esi+0x3D4], 0
        call public_59d9b0
        cmp eax, esi
        jne public_5971b1
        push esi
        call public_59d960
        add esp, 4
        public_5971b1 : nop
        mov bl, 1
        public_5971b3 : nop
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x24
        ret 4
        public_5971be : nop
        test bl, bl
        jne public_5971b3
        push ebp
        mov ecx, esi
        call public_5a0650
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x596d30)
    }
}

#undef public_596d4d
#undef public_596d62
#undef public_596e01
#undef public_596eb0
#undef public_596ecd
#undef public_596ed7
#undef public_596ef8
#undef public_596f09
#undef public_596f72
#undef public_596fd5
#undef public_597074
#undef public_597085
#undef public_597125
#undef public_59712b
#undef public_597131
#undef public_59717e
#undef public_597180
#undef public_5971b1
#undef public_5971b3
#undef public_5971be
