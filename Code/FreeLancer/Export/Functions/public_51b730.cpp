#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51b730);
CLANG_FORWARD_PROC_SYMBOL(public_51ec80);
CLANG_FORWARD_PROC_SYMBOL(public_51ed20);
CLANG_FORWARD_PROC_SYMBOL(public_51f140);
CLANG_FORWARD_PROC_SYMBOL(public_5553a0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_51b79c _public_51b79c
#define public_51b7a0 _public_51b7a0
#define public_51b864 _public_51b864
#define public_51b870 _public_51b870
#define public_51b8dd _public_51b8dd
#define public_51b8df _public_51b8df
#define public_51b8ea _public_51b8ea
#define public_51b912 _public_51b912
#define public_51b95d _public_51b95d
#define public_51b95f _public_51b95f
#define public_51b96a _public_51b96a
#define public_51b97b _public_51b97b
#define public_51b99b _public_51b99b
#define public_51b99d _public_51b99d
#define public_51b9a8 _public_51b9a8
#define public_51b9c7 _public_51b9c7
#define public_51b9f6 _public_51b9f6

PROC_DECLARE(0x51b730, internal_51b730, public_51b730);
extern "C" NAKED register_t __cdecl internal_51b730()
{
    __asm
    {
        fld dword ptr ds : [public_6164d0]
        sub esp, 0x20
        fmul dword ptr ds : [public_6164d0]
        push ebx
        push ebp
        push esi
        xor eax, eax
        push edi
        fstp dword ptr ds : [public_675230]
        push 0x25
        mov ebp, ecx
        mov dword ptr ds : [public_675244], eax
        mov dword ptr ds : [public_67524c], eax
        mov dword ptr ds : [public_675248], eax
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51b9f6
        push 0x27
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51b9f6
        call public_5553a0
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x1C], ecx
        je public_51b9f6
        jmp public_51b7a0
        public_51b79c : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        public_51b7a0 : nop
        mov ebx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x4C]
        mov ecx, dword ptr ss : [ebp]
        push ebp
        mov esi, eax
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov edi, eax
        call dword ptr ds : [edx+0x10]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+8]
        mov ecx, 0x5F3759DF
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fst dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        fld dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x24]
        fmul dword ptr ss : [esp+0x14]
        push eax
        mov ecx, esi
        fmul st, st(1)
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp+0x1C]
        fst dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [esi]
        fstp st(0)
        call dword ptr ds : [edx+0x40]
        fld dword ptr ss : [esp+0x18]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jp public_51b864
        mov dword ptr ss : [esp+0x10], 0
        jmp public_51b870
        public_51b864 : nop
        fsubr dword ptr ss : [esp+0x18]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        public_51b870 : nop
        mov eax, dword ptr ds : [public_67524c]
        fstp st(0)
        test eax, eax
        jne public_51b97b
        mov ecx, dword ptr ss : [ebp]
        mov esi, dword ptr ds : [ebx]
        push ebp
        call dword ptr ds : [ecx+0xC]
        push eax
        mov ecx, ebx
        call dword ptr ds : [esi+0x20]
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 1
        je public_51b9c7
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_51b912
        mov eax, dword ptr ds : [public_675244]
        test eax, eax
        je public_51b8ea
        push 0xC
        call public_51ec80
        add esp, 4
        test eax, eax
        je public_51b8dd
        fld dword ptr ds : [public_675230]
        mov ecx, dword ptr ds : [public_675244]
        fstp dword ptr ds : [eax+4]
        mov dword ptr ds : [eax], offset public_5dc01c
        mov dword ptr ds : [eax+8], ecx
        jmp public_51b8df
        public_51b8dd : nop
        xor eax, eax
        public_51b8df : nop
        push eax
        mov ecx, offset public_675360
        call public_51f140
        public_51b8ea : nop
        mov dword ptr ds : [public_67524c], 1
        mov dword ptr ds : [public_675244], ebx
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x40]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ds : [public_675248]
        fstp st(0)
        jmp public_51b9a8
        public_51b912 : nop
        mov eax, dword ptr ds : [public_67524c]
        test eax, eax
        jne public_51b97b
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_675230]
        fnstsw ax
        test ah, 5
        jp public_51b97b
        mov eax, dword ptr ds : [public_675244]
        test eax, eax
        je public_51b96a
        push 0xC
        call public_51ec80
        add esp, 4
        test eax, eax
        je public_51b95d
        fld dword ptr ds : [public_675230]
        mov ecx, dword ptr ds : [public_675244]
        fstp dword ptr ds : [eax+4]
        mov dword ptr ds : [eax], offset public_5dc01c
        mov dword ptr ds : [eax+8], ecx
        jmp public_51b95f
        public_51b95d : nop
        xor eax, eax
        public_51b95f : nop
        push eax
        mov ecx, offset public_675360
        call public_51f140
        public_51b96a : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [public_675230], eax
        mov dword ptr ds : [public_675244], ebx
        jmp public_51b9a8
        public_51b97b : nop
        push 0xC
        call public_51ec80
        add esp, 4
        test eax, eax
        je public_51b99b
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], offset public_5dc01c
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ecx
        jmp public_51b99d
        public_51b99b : nop
        xor eax, eax
        public_51b99d : nop
        push eax
        mov ecx, offset public_675360
        call public_51f140
        public_51b9a8 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x20]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x1C], eax
        jne public_51b79c
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        public_51b9c7 : nop
        mov dword ptr ds : [public_67524c], 2
        fstp st(0)
        mov dword ptr ds : [public_675244], ebx
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x40]
        fld st(0)
        fmul st, st(1)
        mov ecx, offset public_675360
        fstp dword ptr ds : [public_675248]
        fstp st(0)
        call public_51ed20
        public_51b9f6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x51b730)
    }
}

#undef public_51b79c
#undef public_51b7a0
#undef public_51b864
#undef public_51b870
#undef public_51b8dd
#undef public_51b8df
#undef public_51b8ea
#undef public_51b912
#undef public_51b95d
#undef public_51b95f
#undef public_51b96a
#undef public_51b97b
#undef public_51b99b
#undef public_51b99d
#undef public_51b9a8
#undef public_51b9c7
#undef public_51b9f6
