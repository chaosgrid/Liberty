#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6217b60);
CLANG_FORWARD_PROC_SYMBOL(public_6217b80);
CLANG_FORWARD_PROC_SYMBOL(public_62188c0);
CLANG_FORWARD_JUMP_SYMBOL(public_62484d0);

#define public_6218912 _public_6218912
#define public_6218950 _public_6218950
#define public_6218988 _public_6218988
#define public_6218998 _public_6218998

PROC_DECLARE(0x62188c0, internal_62188c0, public_62188c0);
extern "C" NAKED register_t __cdecl internal_62188c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62484d0 @0x62188c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62484d0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        lea eax, ss:[esp+4]
        mov ecx, esi
        push eax
        call public_6217b80
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x24], 0
        push ecx
        mov ecx, esi
        call public_6217b60
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+4]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x24], 1
        je public_6218998
        public_6218912 : nop
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [eax+0x24]
        fstp dword ptr ds : [eax+0x24]
        mov ecx, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [ecx+0x24]
        fcomp dword ptr ds : [ecx+0x28]
        fnstsw ax
        and eax, 0x4100
        jne public_6218950
        push ecx
        lea edx, ss:[esp+0xC]
        mov eax, esp
        mov dword ptr ss : [esp+0x10], esp
        push edx
        mov dword ptr ds : [eax], ecx
        mov ecx, esi
        call public_6217ae0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], 0
        jmp public_6218988
        public_6218950 : nop
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [ecx+0x18]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [ecx+0x1C]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [ecx+0x20]
        lea eax, ds:[ecx+0xC]
        fstp dword ptr ss : [esp+0x18]
        fxch 
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [eax]
        public_6218988 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x2C], eax
        cmp eax, ecx
        jne public_6218912
        public_6218998 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x62188c0)
    }
}

#undef public_6218912
#undef public_6218950
#undef public_6218988
#undef public_6218998
