#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a82f0);
CLANG_FORWARD_PROC_SYMBOL(public_62bf070);
CLANG_FORWARD_PROC_SYMBOL(public_63415e0);
CLANG_FORWARD_JUMP_SYMBOL(public_639497b);

#define public_62bf0ca _public_62bf0ca

PROC_DECLARE(0x62bf070, internal_62bf070, public_62bf070);
extern "C" NAKED register_t __cdecl internal_62bf070()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639497b @0x62bf072*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639497b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        lea ecx, ds:[esi-0xC]
        neg ecx
        sbb ecx, ecx
        and ecx, esi
        mov dword ptr ss : [esp+0x10], 0
        call public_62a82f0
        lea eax, ds:[esi-0xC]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        pop esi
        je public_62bf0ca
        lea ecx, ds:[eax+8]
        call public_63415e0
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_62bf0ca : nop
        xor ecx, ecx
        call public_63415e0
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62bf070)
    }
}

#undef public_62bf0ca
