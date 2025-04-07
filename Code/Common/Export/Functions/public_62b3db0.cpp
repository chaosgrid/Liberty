#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284290);
CLANG_FORWARD_PROC_SYMBOL(public_62b3db0);
CLANG_FORWARD_PROC_SYMBOL(public_62b42f0);
CLANG_FORWARD_PROC_SYMBOL(public_62bb610);

#define public_62b3dcd _public_62b3dcd
#define public_62b3de5 _public_62b3de5

PROC_DECLARE(0x62b3db0, internal_62b3db0, public_62b3db0);
extern "C" NAKED register_t __cdecl internal_62b3db0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        je public_62b3dcd
        lea eax, ss:[esp+4]
        push esi
        push eax
        call public_6284290
        add esp, 8
        jmp public_62b3de5
        public_62b3dcd : nop
        mov dword ptr ss : [esp+4], 0
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        public_62b3de5 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push 2
        lea ecx, ds:[esi+0x230]
        call public_62bb610
        fld dword ptr ds : [esi+0x2C0]
        mov edx, dword ptr ds : [esi+0x88]
        fmul dword ptr ds : [edx+0x110]
        fxch 
        mov eax, dword ptr ss : [esp+0x1C]
        fdiv dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call public_62b42f0
        pop esi
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x62b3db0)
    }
}

#undef public_62b3dcd
#undef public_62b3de5
