#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284290);
CLANG_FORWARD_PROC_SYMBOL(public_62b3ce0);
CLANG_FORWARD_PROC_SYMBOL(public_62b42f0);
CLANG_FORWARD_PROC_SYMBOL(public_62bb610);

#define public_62b3cfe _public_62b3cfe
#define public_62b3d16 _public_62b3d16

PROC_DECLARE(0x62b3ce0, internal_62b3ce0, public_62b3ce0);
extern "C" NAKED register_t __cdecl internal_62b3ce0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        push edi
        je public_62b3cfe
        lea eax, ss:[esp+0xC]
        push esi
        push eax
        call public_6284290
        add esp, 8
        jmp public_62b3d16
        public_62b3cfe : nop
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        public_62b3d16 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        lea edi, ds:[esi+0x230]
        push 0
        mov ecx, edi
        call public_62bb610
        fdiv dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push 1
        mov ecx, edi
        fstp dword ptr ss : [esp+0x10]
        call public_62bb610
        fld dword ptr ds : [esi+0x2C0]
        mov eax, dword ptr ds : [esi+0x88]
        fmul dword ptr ds : [eax+0x10C]
        fxch 
        mov ecx, dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        push ecx
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x28]
        push eax
        fmul dword ptr ss : [esp+0x2C]
        push ecx
        fld dword ptr ss : [esp+0x1C]
        mov ecx, esi
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp]
        call public_62b42f0
        pop edi
        pop esi
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x62b3ce0)
    }
}

#undef public_62b3cfe
#undef public_62b3d16
