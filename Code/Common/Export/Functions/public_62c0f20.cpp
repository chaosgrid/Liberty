#include "Common-PCH.h"


#define public_62c0fc0 _public_62c0fc0
#define public_62c0fcf _public_62c0fcf

PROC_DECLARE(0x62c0f20, internal_62c0f20, public_62c0f20);
extern "C" NAKED register_t __cdecl internal_62c0f20()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_62c0fcf
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_62c0fcf
        mov cl, byte ptr ds : [eax+0xE0]
        test cl, cl
        jns public_62c0fcf
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x14]
        mov ecx, esi
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+0x20]
        mov eax, dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0xC]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ecx+0x24]
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [ecx+0x28]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+0x2C]
        fsub dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fxch st(2)
        fmul dword ptr ss : [esp+8]
        faddp st(2), st
        fxch st(2)
        fmul dword ptr ss : [esp+4]
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_62c0fc0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, 1
        mov byte ptr ds : [ecx], al
        xor eax, eax
        pop esi
        add esp, 0xC
        ret 8
        public_62c0fc0 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        xor eax, eax
        mov byte ptr ds : [ecx], al
        pop esi
        add esp, 0xC
        ret 8
        public_62c0fcf : nop
        mov eax, 0xFFFFFFFC
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x62c0f20)
    }
}

#undef public_62c0fc0
#undef public_62c0fcf
