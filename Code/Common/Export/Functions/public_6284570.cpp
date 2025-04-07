#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284570);
CLANG_FORWARD_PROC_SYMBOL(public_63456f0);

#define public_6284647 _public_6284647

PROC_DECLARE(0x6284570, internal_6284570, public_6284570);
extern "C" NAKED register_t __cdecl internal_6284570()
{
    __asm
    {
        sub esp, 0x68
        push esi
        mov esi, dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ds : [esi+0x54]
        lea eax, ss:[esp+0x2C]
        push eax
        call public_63456f0
        mov ecx, dword ptr ds : [esi+0x5C]
        test ecx, ecx
        pop esi
        je public_6284647
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x6C]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x48]
        mov edx, eax
        fmul dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0xC]
        fadd st, st(2)
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0xC]
        fadd st, st(1)
        fstp dword ptr ss : [esp+4]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp]
        fadd dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x10]
        fadd st, st(3)
        fadd dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        fxch 
        fstp dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+4], ecx
        fstp st(0)
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], ecx
        add esp, 0x68
        ret 
        public_6284647 : nop
        fld dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x5C]
        mov ecx, eax
        fld dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        fxch 
        mov dword ptr ss : [esp+0x10], edx
        fstp dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x68
        ret 
        UNREACHABLE_TRAP(0x6284570)
    }
}

#undef public_6284647
