#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0498);

#define public_52d3d5 _public_52d3d5

PROC_DECLARE(0x52d280, internal_52d280, public_52d280);
extern "C" NAKED register_t __cdecl internal_52d280()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0498 @0x52d282*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0498
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x28]
        push eax
        call dword ptr ds : [public_5c68c0]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        call dword ptr ds : [public_5c68bc]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x1C]
        fmul dword ptr ss : [esp+0x18]
        push eax
        mov ecx, esi
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5dd55c]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        call dword ptr ds : [edx+0xC]
        mov bl, al
        xor eax, eax
        cmp bl, al
        je public_52d3d5
        mov cl, byte ptr ss : [esp+0xB]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], 0x7F7FFFFF
        mov dword ptr ss : [esp+0x3C], 0x7F7FFFFF
        mov dword ptr ss : [esp+0x40], 0x7F7FFFFF
        mov byte ptr ss : [esp+0x44], cl
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x50], eax
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x5C], eax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [esi+4]
        xor ecx, ecx
        mov cx, word ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x4C]
        lea edx, ss:[esp+0xC]
        push edx
        push 1
        push eax
        mov dword ptr ss : [esp+0x18], ecx
        lea ecx, ss:[esp+0x50]
        call dword ptr ds : [public_5c6898]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x40], eax
        lea eax, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, dword ptr ds : [public_67ecd0]
        push eax
        mov eax, dword ptr ds : [public_673344]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x48]
        push ecx
        call public_5b7e1d
        add esp, 4
        public_52d3d5 : nop
        mov ecx, dword ptr ss : [esp+0x54]
        pop esi
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 
        UNREACHABLE_TRAP(0x52d280)
    }
}

#undef public_52d3d5
