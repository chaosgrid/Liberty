#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62748a0);
CLANG_FORWARD_PROC_SYMBOL(public_62887a0);
CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c5a70);
CLANG_FORWARD_PROC_SYMBOL(public_62d3af0);
CLANG_FORWARD_PROC_SYMBOL(public_62e0480);
CLANG_FORWARD_PROC_SYMBOL(public_62e04a0);
CLANG_FORWARD_PROC_SYMBOL(public_632f8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6339f20);
CLANG_FORWARD_PROC_SYMBOL(public_633cb50);
CLANG_FORWARD_PROC_SYMBOL(public_633cc20);
CLANG_FORWARD_PROC_SYMBOL(public_633d1e0);

#define public_633c761 _public_633c761
#define public_633c82a _public_633c82a
#define public_633c8cb _public_633c8cb
#define public_633c905 _public_633c905
#define public_633c920 _public_633c920
#define public_633c98a _public_633c98a
#define public_633c99d _public_633c99d
#define public_633ca36 _public_633ca36
#define public_633ca71 _public_633ca71
#define public_633ca87 _public_633ca87
#define public_633cae9 _public_633cae9
#define public_633caf6 _public_633caf6
#define public_633cb3d _public_633cb3d

PROC_DECLARE(0x633c6d0, internal_633c6d0, public_633c6d0);
extern "C" NAKED register_t __cdecl internal_633c6d0()
{
    __asm
    {
        sub esp, 0x154
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x168]
        test esi, esi
        push edi
        je public_633cae9
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        cmp eax, 2
        jne public_633caf6
        lea ecx, ss:[esp+0xDC]
        call public_62748a0
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x64]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x10C], 0
        mov dword ptr ss : [esp+0x108], 0
        mov dword ptr ss : [esp+0x104], 0
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov ebx, eax
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0xDC]
        rep movsd
        push ebx
        lea ecx, ss:[esp+0xE0]
        call public_6339f20
        mov esi, dword ptr ss : [esp+0x168]
        xor edi, edi
        public_633c761 : nop
        push edi
        lea eax, ss:[esp+0x158]
        push eax
        mov ecx, esi
        call public_633cc20
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], edx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], ecx
        mov edx, dword ptr ds : [eax+0xC]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0xE0]
        mov dword ptr ss : [esp+0x28], edx
        call public_633cb50
        cmp eax, 2
        mov dword ptr ss : [esp+edi*4+0x40], eax
        je public_633cb3d
        inc edi
        cmp edi, 6
        jb public_633c761
        mov eax, dword ptr ss : [esp+0x44]
        test eax, eax
        jne public_633cae9
        mov ebx, dword ptr ss : [esp+0x54]
        mov edi, dword ptr ss : [esp+0x50]
        xor ecx, ecx
        test ebx, ebx
        sete cl
        xor edx, edx
        test edi, edi
        sete dl
        lea eax, ds:[edx+ecx*2]
        mov edx, dword ptr ss : [esp+0x4C]
        xor ecx, ecx
        test edx, edx
        sete cl
        lea edx, ds:[ecx+eax*2]
        mov ecx, dword ptr ss : [esp+0x48]
        xor eax, eax
        test ecx, ecx
        mov ecx, dword ptr ds : [esi+0x38]
        sete al
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, esi
        lea ebx, ds:[eax+edx*2]
        lea edx, ss:[esp+0x13C]
        push edx
        call public_62d3af0
        lea ecx, ss:[esp+0x70]
        push ecx
        mov ecx, eax
        call public_62c5a70
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, ebx
        and eax, 3
        cmp eax, 1
        je public_633c82a
        cmp eax, 2
        jne public_633c98a
        public_633c82a : nop
        fld dword ptr ds : [esi+0x30]
        lea edx, ss:[esp+0x58]
        fmul qword ptr ds : [public_639df88]
        push edx
        mov ecx, esi
        fptan 
        fstp st(0)
        fmul dword ptr ds : [esi+0x38]
        fstp dword ptr ss : [esp+0x18]
        call public_62e0480
        lea eax, ss:[esp+0x148]
        push eax
        mov ecx, esi
        call public_62e04a0
        push ebp
        lea ecx, ss:[esp+0x74]
        push ecx
        lea edx, ss:[esp+0xB4]
        push edx
        call public_6288830
        lea eax, ss:[esp+0xB8]
        push eax
        lea ecx, ds:[esi+0x24]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        call public_62887d0
        add esp, 0x18
        test bl, 1
        je public_633c8cb
        fld dword ptr ss : [esp+0x14]
        push ecx
        fchs 
        lea eax, ss:[esp+0x5C]
        fstp dword ptr ss : [esp]
        push eax
        lea ecx, ss:[esp+0x9C]
        push ecx
        call public_6288830
        add esp, 0xC
        lea edx, ss:[esp+0x94]
        push edx
        lea ecx, ss:[esp+0x2C]
        call public_62887a0
        fld dword ptr ds : [esi+0x30]
        fadd dword ptr ds : [public_639d208]
        fmul qword ptr ds : [public_63a0748]
        jmp public_633c905
        public_633c8cb : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea edx, ss:[esp+0xD8]
        push edx
        call public_6288830
        add esp, 0xC
        lea eax, ss:[esp+0xD0]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_62887a0
        fld dword ptr ds : [esi+0x30]
        fadd dword ptr ds : [public_639d208]
        fmul qword ptr ds : [public_639df88]
        public_633c905 : nop
        mov eax, dword ptr ds : [public_63edc78]
        fstp dword ptr ss : [esp+0x14]
        mov edi, 1
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], edi
        jle public_633c98a
        nop 
        lea esp, ss:[esp]
        public_633c920 : nop
        fild dword ptr ss : [esp+0x10]
        push ecx
        fmul dword ptr ss : [esp+0x18]
        fidiv dword ptr ds : [public_63edc78]
        fld st(0)
        fcos 
        fchs 
        fstp dword ptr ss : [esp]
        push 0
        push ecx
        fsin 
        lea ecx, ss:[esp+0x94]
        fstp dword ptr ss : [esp]
        call public_628b030
        lea ecx, ss:[esp+0x88]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_632f8b0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0xE0]
        call public_633cb50
        cmp eax, 1
        je public_633cb3d
        mov eax, dword ptr ds : [public_63edc78]
        inc edi
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], edi
        jl public_633c920
        public_633c98a : nop
        mov eax, ebx
        and eax, 0xC
        cmp eax, 4
        je public_633c99d
        cmp eax, 8
        jne public_633cae9
        public_633c99d : nop
        fld dword ptr ds : [esi+0x34]
        lea ecx, ss:[esp+0x7C]
        fmul qword ptr ds : [public_639df88]
        push ecx
        mov ecx, esi
        fptan 
        fstp st(0)
        fmul dword ptr ds : [esi+0x38]
        fstp dword ptr ss : [esp+0x14]
        call public_62e04a0
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, esi
        call public_62e0480
        push ebp
        lea eax, ss:[esp+0x74]
        push eax
        lea ecx, ss:[esp+0xC0]
        push ecx
        call public_6288830
        lea edx, ss:[esp+0xC4]
        push edx
        lea eax, ds:[esi+0x24]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        call public_62887d0
        add esp, 0x18
        test bl, 4
        lea eax, ss:[esp+0x7C]
        je public_633ca36
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        lea ecx, ss:[esp+0xA8]
        push ecx
        call public_6288830
        add esp, 0xC
        lea edx, ss:[esp+0xA0]
        push edx
        lea ecx, ss:[esp+0x38]
        call public_62887a0
        fld dword ptr ds : [esi+0x34]
        fadd dword ptr ds : [public_639d208]
        fmul qword ptr ds : [public_639df88]
        jmp public_633ca71
        public_633ca36 : nop
        fld dword ptr ss : [esp+0x10]
        push ecx
        fchs 
        lea ecx, ss:[esp+0xC8]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        call public_6288830
        add esp, 0xC
        lea edx, ss:[esp+0xC4]
        push edx
        lea ecx, ss:[esp+0x38]
        call public_62887a0
        fld dword ptr ds : [esi+0x34]
        fadd dword ptr ds : [public_639d208]
        fmul qword ptr ds : [public_63a0748]
        public_633ca71 : nop
        mov eax, dword ptr ds : [public_63edc78]
        fstp dword ptr ss : [esp+0x10]
        mov esi, 1
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], esi
        jle public_633cae9
        public_633ca87 : nop
        fild dword ptr ss : [esp+0x14]
        sub esp, 8
        lea ecx, ss:[esp+0x6C]
        fmul dword ptr ss : [esp+0x18]
        fidiv dword ptr ds : [public_63edc78]
        fld st(0)
        fcos 
        fchs 
        fstp dword ptr ss : [esp+4]
        fsin 
        fstp dword ptr ss : [esp]
        push 0
        call public_628b030
        lea eax, ss:[esp+0x64]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_632f8b0
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0xE0]
        call public_633cb50
        cmp eax, 1
        je public_633cb3d
        mov eax, dword ptr ds : [public_63edc78]
        inc esi
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], esi
        jl public_633ca87
        public_633cae9 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x154
        ret 
        public_633caf6 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [esp+0x168]
        push edx
        push eax
        mov dword ptr ss : [esp+0x2C], ecx
        call public_633d1e0
        add esp, 8
        test al, al
        je public_633cae9
        public_633cb3d : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x154
        ret 
        UNREACHABLE_TRAP(0x633c6d0)
    }
}

#undef public_633c761
#undef public_633c82a
#undef public_633c8cb
#undef public_633c905
#undef public_633c920
#undef public_633c98a
#undef public_633c99d
#undef public_633ca36
#undef public_633ca71
#undef public_633ca87
#undef public_633cae9
#undef public_633caf6
#undef public_633cb3d
