#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a53c0);

#define public_62a53d6 _public_62a53d6
#define public_62a545b _public_62a545b
#define public_62a54af _public_62a54af
#define public_62a54b5 _public_62a54b5
#define public_62a54cc _public_62a54cc

PROC_DECLARE(0x62a53c0, internal_62a53c0, public_62a53c0);
extern "C" NAKED register_t __cdecl internal_62a53c0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        jne public_62a53d6
        mov al, 1
        pop esi
        add esp, 0x10
        ret 4
        public_62a53d6 : nop
        mov edx, dword ptr ds : [esi+0x44]
        mov eax, dword ptr ds : [esi+0x48]
        add eax, edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_639dfdc]
        fstp dword ptr ss : [esp+4]
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x28]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x30]
        fadd dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fst dword ptr ss : [esp+0x18]
        fld st(1)
        fmul st, st(2)
        fxch 
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_62a545b
        xor al, al
        pop esi
        add esp, 0x10
        ret 4
        public_62a545b : nop
        fld dword ptr ss : [esp+0x18]
        fsqrt 
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_639dfd8]
        fnstsw ax
        test ah, 0x41
        jne public_62a54af
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0x28]
        fdivr qword ptr ds : [public_6399410]
        lea eax, ss:[esp+8]
        push eax
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        fstp st(0)
        call dword ptr ds : [edx+0x40]
        fsubr dword ptr ss : [esp+0x18]
        jmp public_62a54b5
        public_62a54af : nop
        fld dword ptr ds : [public_6399408]
        public_62a54b5 : nop
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jp public_62a54cc
        mov eax, 1
        pop esi
        add esp, 0x10
        ret 4
        public_62a54cc : nop
        xor eax, eax
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62a53c0)
    }
}

#undef public_62a53d6
#undef public_62a545b
#undef public_62a54af
#undef public_62a54b5
#undef public_62a54cc
