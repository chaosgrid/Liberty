#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345850);
CLANG_FORWARD_PROC_SYMBOL(public_6369280);
CLANG_FORWARD_PROC_SYMBOL(public_63694a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_63694c5 _public_63694c5
#define public_63694d8 _public_63694d8
#define public_6369507 _public_6369507
#define public_636951b _public_636951b
#define public_636957c _public_636957c
#define public_6369591 _public_6369591
#define public_63695ae _public_63695ae
#define public_63695df _public_63695df
#define public_636960c _public_636960c
#define public_636962f _public_636962f
#define public_636965a _public_636965a
#define public_636969d _public_636969d
#define public_636969f _public_636969f
#define public_63696ab _public_63696ab

PROC_DECLARE(0x63694a0, internal_63694a0, public_63694a0);
extern "C" NAKED register_t __cdecl internal_63694a0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x30]
        test eax, eax
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x10], ebp
        je public_63694c5
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x40], eax
        jmp public_63694d8
        public_63694c5 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ss : [ebp]
        push ecx
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx]
        fstp dword ptr ss : [esp+0x40]
        public_63694d8 : nop
        fld dword ptr ss : [esp+0x40]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        je public_6369507
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebp
        mov dword ptr ds : [eax+4], edx
        mov eax, 1
        pop ebx
        add esp, 0xC
        ret 0x28
        public_6369507 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        public_636951b : nop
        fld dword ptr ss : [esp+0x40]
        fsub dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [ebp+8]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x30]
        fst dword ptr ss : [esp+0x3C]
        fadd st, st(1)
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        je public_636969d
        fadd st(0), st
        fld dword ptr ss : [esp+0x3C]
        fadd st, st(1)
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_636957c
        fstp st(0)
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [public_63a545c]
        jmp public_6369591
        public_636957c : nop
        fcom qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 1
        je public_6369591
        fstp st(0)
        fld dword ptr ds : [public_63a53d4]
        public_6369591 : nop
        fmul dword ptr ds : [public_63a58ac]
        call public_6391dae
        cmp eax, 1
        mov dword ptr ss : [esp+0x3C], eax
        jge public_63695ae
        mov eax, 1
        mov dword ptr ss : [esp+0x3C], eax
        public_63695ae : nop
        fild dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x28], edx
        fmul dword ptr ds : [public_63a5654]
        add esi, eax
        mov dword ptr ss : [esp+0x24], ebp
        fadd dword ptr ss : [esp+0x18]
        fst dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        jne public_636960c
        public_63695df : nop
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [public_63a53d0]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [public_63a53d0]
        fst dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        je public_63695df
        mov ebp, dword ptr ss : [esp+0x24]
        public_636960c : nop
        mov eax, dword ptr ds : [ebx+esi*4+0x14]
        test eax, eax
        jne public_636962f
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, esi
        shl eax, 6
        lea eax, ds:[eax+ebx+0x68]
        push eax
        push ecx
        mov dword ptr ds : [ebx+esi*4+0x14], eax
        mov ecx, dword ptr ds : [ebx]
        push ebp
        call public_6345850
        public_636962f : nop
        mov eax, dword ptr ds : [edi+esi*4+0x14]
        test eax, eax
        mov edx, dword ptr ds : [ebx+esi*4+0x14]
        mov dword ptr ss : [esp+0x3C], edx
        jne public_636965a
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, esi
        shl eax, 6
        lea eax, ds:[eax+edi+0x68]
        push eax
        push ecx
        mov dword ptr ds : [edi+esi*4+0x14], eax
        mov ecx, dword ptr ds : [edi]
        push ebp
        call public_6345850
        public_636965a : nop
        mov eax, dword ptr ds : [edi+esi*4+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        push eax
        call dword ptr ds : [edx]
        fst dword ptr ss : [esp+0x3C]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_63696ab
        cmp esi, 0x14
        je public_636969f
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x14], ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x40], edx
        jmp public_636951b
        public_636969d : nop
        fstp st(0)
        public_636969f : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 0x28
        public_63696ab : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x3C]
        push eax
        mov eax, dword ptr ss : [esp+0x44]
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        push ebp
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        lea edx, ss:[esp+0x48]
        push edx
        call public_6369280
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        je public_636969f
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebp
        mov dword ptr ds : [eax+4], edx
        mov eax, 1
        pop ebx
        add esp, 0xC
        ret 0x28
        UNREACHABLE_TRAP(0x63694a0)
    }
}

#undef public_63694c5
#undef public_63694d8
#undef public_6369507
#undef public_636951b
#undef public_636957c
#undef public_6369591
#undef public_63695ae
#undef public_63695df
#undef public_636960c
#undef public_636962f
#undef public_636965a
#undef public_636969d
#undef public_636969f
#undef public_63696ab
