#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633daa0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_633dae0 _public_633dae0
#define public_633db2f _public_633db2f
#define public_633db37 _public_633db37
#define public_633db73 _public_633db73
#define public_633db7b _public_633db7b
#define public_633dbb3 _public_633dbb3
#define public_633dc04 _public_633dc04
#define public_633dc31 _public_633dc31
#define public_633dc45 _public_633dc45
#define public_633dc48 _public_633dc48
#define public_633dc82 _public_633dc82

PROC_DECLARE(0x633daa0, internal_633daa0, public_633daa0);
extern "C" NAKED register_t __cdecl internal_633daa0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x30
        mov eax, dword ptr ss : [ebp+8]
        fld dword ptr ds : [eax]
        push ebx
        push esi
        mov esi, ecx
        fsub dword ptr ds : [esi+0x24]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        fsub dword ptr ds : [esi+0x2C]
        fstp dword ptr ss : [esp+0x34]
        jne public_633dae0
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_633dae0 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        push esi
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x14]
        fabs 
        xor bl, bl
        fsub dword ptr ds : [esi+0x30]
        fst dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_633db2f
        fld dword ptr ss : [esp+0x14]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x30]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991e0]
        fstp dword ptr ss : [esp+0x30]
        add esp, 0x10
        mov bl, 1
        jmp public_633db37
        public_633db2f : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], eax
        public_633db37 : nop
        fld dword ptr ss : [esp+0x18]
        fabs 
        fsub dword ptr ds : [esi+0x34]
        fst dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_633db73
        fld dword ptr ss : [esp+0x18]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x34]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991e0]
        fstp dword ptr ss : [esp+0x34]
        add esp, 0x10
        mov bl, 1
        jmp public_633db7b
        public_633db73 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x24], ecx
        public_633db7b : nop
        fld dword ptr ss : [esp+0x1C]
        fabs 
        fsub dword ptr ds : [esi+0x38]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_633dbb3
        fld dword ptr ss : [esp+0x1C]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x38]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991e0]
        mov bl, 1
        jmp public_633dc45
        public_633dbb3 : nop
        test bl, bl
        fld dword ptr ss : [esp+0x1C]
        fst dword ptr ss : [esp+0x28]
        jne public_633dc48
        fstp st(0)
        sub esp, 0x10
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 1
        jne public_633dc04
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 1
        jne public_633dc31
        fld dword ptr ss : [esp+0x24]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x30]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991e0]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x38]
        jmp public_633dc45
        public_633dc04 : nop
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 1
        jne public_633dc31
        fld dword ptr ss : [esp+0x28]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x34]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991e0]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        jmp public_633dc45
        public_633dc31 : nop
        fld dword ptr ss : [esp+0x2C]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x38]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991e0]
        public_633dc45 : nop
        add esp, 0x10
        public_633dc48 : nop
        test bl, bl
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x30]
        fsubr dword ptr ss : [esp+0x1C]
        fld st(0)
        fmulp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        jne public_633dc82
        fchs 
        public_633dc82 : nop
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x633daa0)
    }
}

#undef public_633dae0
#undef public_633db2f
#undef public_633db37
#undef public_633db73
#undef public_633db7b
#undef public_633dbb3
#undef public_633dc04
#undef public_633dc31
#undef public_633dc45
#undef public_633dc48
#undef public_633dc82
