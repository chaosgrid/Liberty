#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6298590);
CLANG_FORWARD_PROC_SYMBOL(public_6298b10);
CLANG_FORWARD_PROC_SYMBOL(public_6299ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6299b70);

#define public_62985cd _public_62985cd
#define public_6298617 _public_6298617
#define public_6298626 _public_6298626
#define public_6298659 _public_6298659
#define public_6298668 _public_6298668
#define public_6298672 _public_6298672
#define public_629872d _public_629872d
#define public_6298737 _public_6298737

PROC_DECLARE(0x6298590, internal_6298590, public_6298590);
extern "C" NAKED register_t __cdecl internal_6298590()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x250]
        xor bl, bl
        test eax, eax
        je public_6298737
        add eax, 0xFFFFFF64
        test eax, eax
        je public_6298737
        mov eax, dword ptr ds : [esi+0x218]
        or ecx, 0xFFFFFFFF
        cmp eax, ecx
        jne public_62985cd
        cmp dword ptr ds : [esi+0x1FC], ecx
        je public_6298672
        public_62985cd : nop
        fld dword ptr ds : [esi+0x268]
        fcomp dword ptr ds : [public_639cedc]
        fnstsw ax
        test ah, 0x41
        jne public_6298672
        cmp dword ptr ds : [esi+0x1FC], ecx
        je public_6298626
        fld dword ptr ds : [esi+0x208]
        mov al, byte ptr ds : [esi+0x200]
        test al, al
        fsub dword ptr ds : [esi+0x204]
        fabs 
        jne public_6298617
        fcom dword ptr ds : [public_639d208]
        fnstsw ax
        test ah, 0x41
        jne public_6298617
        fsubr dword ptr ds : [public_639d208]
        public_6298617 : nop
        fcomp dword ptr ss : [esp+0x40]
        fnstsw ax
        test ah, 5
        jp public_629872d
        public_6298626 : nop
        cmp dword ptr ds : [esi+0x218], ecx
        je public_6298668
        fld dword ptr ds : [esi+0x224]
        mov al, byte ptr ds : [esi+0x21C]
        test al, al
        fsub dword ptr ds : [esi+0x220]
        fabs 
        jne public_6298659
        fcom dword ptr ds : [public_639d208]
        fnstsw ax
        test ah, 0x41
        jne public_6298659
        fsubr dword ptr ds : [public_639d208]
        public_6298659 : nop
        fcomp dword ptr ss : [esp+0x40]
        fnstsw ax
        test ah, 5
        jp public_629872d
        public_6298668 : nop
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x34
        ret 4
        public_6298672 : nop
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6298b10
        test al, al
        je public_6298737
        push 0
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, esi
        call public_6299ac0
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [eax]
        push 0
        fld dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x28]
        fsub dword ptr ds : [eax+4]
        push edx
        fld dword ptr ss : [esp+0x28]
        mov ecx, esi
        fsub dword ptr ds : [eax+8]
        fst dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fstp dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x1C]
        call public_6299b70
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x40]
        fcos 
        fxch 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_629872d
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x34
        ret 4
        public_629872d : nop
        pop esi
        xor al, al
        pop ebx
        add esp, 0x34
        ret 4
        public_6298737 : nop
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x6298590)
    }
}

#undef public_62985cd
#undef public_6298617
#undef public_6298626
#undef public_6298659
#undef public_6298668
#undef public_6298672
#undef public_629872d
#undef public_6298737
