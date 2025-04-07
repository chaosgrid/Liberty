#include "Common-PCH.h"


#define public_62c0e93 _public_62c0e93
#define public_62c0f01 _public_62c0f01
#define public_62c0f10 _public_62c0f10

PROC_DECLARE(0x62c0e30, internal_62c0e30, public_62c0e30);
extern "C" NAKED register_t __cdecl internal_62c0e30()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_62c0f10
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_62c0f10
        mov cl, byte ptr ds : [eax+0xE0]
        test cl, cl
        jns public_62c0f10
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x2C]
        test eax, eax
        je public_62c0e93
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], eax
        public_62c0e93 : nop
        mov eax, dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ds : [eax+0x24]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [eax+0x28]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [eax+0x2C]
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fxch st(2)
        fmul dword ptr ss : [esp+0x18]
        faddp st(2), st
        fxch st(2)
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_62c0f01
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 1
        mov byte ptr ds : [ecx], al
        xor eax, eax
        pop esi
        add esp, 0x1C
        ret 8
        public_62c0f01 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        xor eax, eax
        mov byte ptr ds : [ecx], al
        pop esi
        add esp, 0x1C
        ret 8
        public_62c0f10 : nop
        mov eax, 0xFFFFFFFC
        pop esi
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x62c0e30)
    }
}

#undef public_62c0e93
#undef public_62c0f01
#undef public_62c0f10
