#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54e040);

#define public_54e056 _public_54e056
#define public_54e120 _public_54e120

PROC_DECLARE(0x54e040, internal_54e040, public_54e040);
extern "C" NAKED register_t __cdecl internal_54e040()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        jne public_54e056
        mov al, 1
        pop esi
        add esp, 0x10
        ret 4
        public_54e056 : nop
        fld dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        fadd dword ptr ds : [esi]
        fmul dword ptr ds : [public_5c9804]
        fstp dword ptr ss : [esp+4]
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x18]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
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
        je public_54e120
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0x18]
        fsqrt 
        lea edx, ss:[esp+8]
        push edx
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        fstp st(0)
        call dword ptr ds : [eax+0x40]
        fsubr dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jp public_54e120
        mov al, 1
        pop esi
        add esp, 0x10
        ret 4
        public_54e120 : nop
        xor al, al
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x54e040)
    }
}

#undef public_54e056
#undef public_54e120
