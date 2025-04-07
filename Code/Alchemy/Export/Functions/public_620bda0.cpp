#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208570);
CLANG_FORWARD_PROC_SYMBOL(public_6208590);
CLANG_FORWARD_PROC_SYMBOL(public_620b7d0);
CLANG_FORWARD_PROC_SYMBOL(public_620bda0);
CLANG_FORWARD_JUMP_SYMBOL(public_6247870);

#define public_620bdf2 _public_620bdf2
#define public_620be30 _public_620be30
#define public_620be68 _public_620be68
#define public_620be78 _public_620be78

PROC_DECLARE(0x620bda0, internal_620bda0, public_620bda0);
extern "C" NAKED register_t __cdecl internal_620bda0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247870 @0x620bda2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247870
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
        call public_6208590
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x24], 0
        push ecx
        mov ecx, esi
        call public_6208570
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+4]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x24], 1
        je public_620be78
        public_620bdf2 : nop
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [eax+0x24]
        fstp dword ptr ds : [eax+0x24]
        mov ecx, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [ecx+0x24]
        fcomp dword ptr ds : [ecx+0x28]
        fnstsw ax
        and eax, 0x4100
        jne public_620be30
        push ecx
        lea edx, ss:[esp+0xC]
        mov eax, esp
        mov dword ptr ss : [esp+0x10], esp
        push edx
        mov dword ptr ds : [eax], ecx
        mov ecx, esi
        call public_620b7d0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], 0
        jmp public_620be68
        public_620be30 : nop
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
        public_620be68 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x2C], eax
        cmp eax, ecx
        jne public_620bdf2
        public_620be78 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x620bda0)
    }
}

#undef public_620bdf2
#undef public_620be30
#undef public_620be68
#undef public_620be78
