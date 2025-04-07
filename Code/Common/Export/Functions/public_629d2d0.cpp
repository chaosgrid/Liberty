#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285d60);
CLANG_FORWARD_PROC_SYMBOL(public_629b010);

#define public_629d306 _public_629d306
#define public_629d308 _public_629d308
#define public_629d384 _public_629d384
#define public_629d393 _public_629d393

PROC_DECLARE(0x629d2d0, internal_629d2d0, public_629d2d0);
extern "C" NAKED register_t __cdecl internal_629d2d0()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi-0x4C]
        push edi
        lea edi, ds:[esi-0x4C]
        mov ecx, edi
        mov byte ptr ds : [esi+0x14], 0
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_629d393
        mov ecx, dword ptr ds : [esi-0x48]
        test ecx, ecx
        je public_629d306
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_629d308
        public_629d306 : nop
        xor ecx, ecx
        public_629d308 : nop
        mov eax, dword ptr ds : [esi-0x40]
        fld dword ptr ds : [eax+0x88]
        mov edx, dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [edx]
        fld dword ptr ds : [ecx+0x2A0]
        fld st(1)
        fcomp 
        fnstsw ax
        test ah, 0x41
        jp public_629d384
        fsub st, st(1)
        fstp dword ptr ds : [ecx+0x2A0]
        mov ecx, dword ptr ds : [esi-0x40]
        mov eax, dword ptr ds : [esi-0x48]
        fstp st(0)
        add eax, 8
        fld dword ptr ds : [ecx+0x8C]
        push ecx
        fld dword ptr ds : [eax+8]
        mov ecx, esi
        fld dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+0x20]
        fstp dword ptr ss : [esp+0x20]
        fxch 
        fchs 
        fstp dword ptr ss : [esp+0xC]
        fchs 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [edx]
        lea edx, ss:[esp+0xC]
        fstp dword ptr ss : [esp]
        push edx
        call public_6285d60
        pop edi
        mov byte ptr ds : [esi+0x14], 1
        pop esi
        add esp, 0x18
        ret 8
        public_629d384 : nop
        push 0
        fstp st(0)
        push 0xF
        fstp st(0)
        mov ecx, edi
        call public_629b010
        public_629d393 : nop
        pop edi
        pop esi
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x629d2d0)
    }
}

#undef public_629d306
#undef public_629d308
#undef public_629d384
#undef public_629d393
