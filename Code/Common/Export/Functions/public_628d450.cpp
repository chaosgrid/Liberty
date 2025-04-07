#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628d450);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6350740);
CLANG_FORWARD_JUMP_SYMBOL(public_63934fb);

#define public_628d505 _public_628d505
#define public_628d520 _public_628d520
#define public_628d525 _public_628d525
#define public_628d545 _public_628d545

PROC_DECLARE(0x628d450, internal_628d450, public_628d450);
extern "C" NAKED register_t __cdecl internal_628d450()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63934fb @0x628d452*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63934fb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24C
        mov eax, dword ptr ss : [esp+0x25C]
        fld dword ptr ds : [eax+8]
        push ebp
        fld dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        mov edx, eax
        fstp dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ss : [esp+0x264]
        mov dword ptr ss : [esp+0x20], eax
        push esi
        lea eax, ss:[esp+0x38]
        push edi
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], 4
        mov dword ptr ss : [esp+0x38], eax
        mov word ptr ss : [esp+0x34], 0x80
        mov word ptr ss : [esp+0x36], 0
        mov ecx, dword ptr ds : [ecx+0x18]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x268], 0
        call public_6350740
        movzx edx, word ptr ss : [esp+0x36]
        mov edi, dword ptr ss : [esp+0x38]
        xor esi, esi
        xor ecx, ecx
        test edx, edx
        jle public_628d525
        mov ebp, dword ptr ss : [esp+0x270]
        public_628d505 : nop
        cmp esi, dword ptr ss : [esp+0x274]
        jge public_628d525
        mov eax, dword ptr ds : [edi+ecx*4]
        mov eax, dword ptr ds : [eax+0xA4]
        test eax, eax
        je public_628d520
        mov dword ptr ss : [ebp+esi*4], eax
        inc esi
        public_628d520 : nop
        inc ecx
        cmp ecx, edx
        jl public_628d505
        public_628d525 : nop
        lea eax, ss:[esp+0x3C]
        cmp edi, eax
        mov dword ptr ss : [esp+0x260], 0xFFFFFFFF
        je public_628d545
        test edi, edi
        je public_628d545
        push edi
        call public_6343fb0
        add esp, 4
        public_628d545 : nop
        mov ecx, dword ptr ss : [esp+0x258]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x258
        ret 0x10
        UNREACHABLE_TRAP(0x628d450)
    }
}

#undef public_628d505
#undef public_628d520
#undef public_628d525
#undef public_628d545
