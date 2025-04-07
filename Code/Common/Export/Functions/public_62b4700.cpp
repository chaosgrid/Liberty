#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bb610);

#define public_62b4761 _public_62b4761
#define public_62b4778 _public_62b4778
#define public_62b4787 _public_62b4787

PROC_DECLARE(0x62b4700, internal_62b4700, public_62b4700);
extern "C" NAKED register_t __cdecl internal_62b4700()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, ecx
        push eax
        push edi
        lea ecx, ds:[esi+0x230]
        call public_62bb610
        mov ecx, dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi+0x88]
        fld dword ptr ds : [esi+0x2C0]
        add eax, 0x108
        test edi, edi
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x10]
        jne public_62b4761
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        fstp dword ptr ds : [edx]
        pop esi
        add esp, 0xC
        ret 0x10
        public_62b4761 : nop
        cmp edi, 1
        jne public_62b4778
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x24]
        pop edi
        fstp dword ptr ds : [eax]
        pop esi
        add esp, 0xC
        ret 0x10
        public_62b4778 : nop
        cmp edi, 2
        jne public_62b4787
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [ecx]
        public_62b4787 : nop
        pop edi
        pop esi
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x62b4700)
    }
}

#undef public_62b4761
#undef public_62b4778
#undef public_62b4787
