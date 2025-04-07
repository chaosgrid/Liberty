#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6357340);

#define public_635739b _public_635739b
#define public_63573f5 _public_63573f5

PROC_DECLARE(0x6357340, internal_6357340, public_6357340);
extern "C" NAKED register_t __cdecl internal_6357340()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0xEC]
        test byte ptr ds : [eax], 0xC
        jne public_635739b
        fld dword ptr ds : [ecx+0x28]
        fsub dword ptr ds : [ecx+0x68]
        fld dword ptr ds : [ecx+0x2C]
        fsub dword ptr ds : [ecx+0x6C]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+0x24]
        mov edx, dword ptr ss : [esp]
        fsub dword ptr ds : [ecx+0x64]
        mov dword ptr ds : [ecx+0x2C], edx
        fstp dword ptr ds : [ecx+0x24]
        fstp dword ptr ds : [ecx+0x28]
        fld dword ptr ds : [ecx+0x48]
        fsub dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [ecx+0x4C]
        fsub dword ptr ds : [ecx+0x8C]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+0x44]
        mov eax, dword ptr ss : [esp]
        fsub dword ptr ds : [ecx+0x84]
        mov dword ptr ds : [ecx+0x4C], eax
        fstp dword ptr ds : [ecx+0x44]
        fstp dword ptr ds : [ecx+0x48]
        public_635739b : nop
        mov edx, dword ptr ds : [ecx+0xF0]
        test byte ptr ds : [edx], 0xC
        jne public_63573f5
        fld dword ptr ds : [ecx+0x38]
        fsub dword ptr ds : [ecx+0x78]
        fld dword ptr ds : [ecx+0x3C]
        fsub dword ptr ds : [ecx+0x7C]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ss : [esp]
        fsub dword ptr ds : [ecx+0x74]
        mov dword ptr ds : [ecx+0x3C], eax
        fstp dword ptr ds : [ecx+0x34]
        fstp dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [ecx+0x58]
        fsub dword ptr ds : [ecx+0x98]
        fld dword ptr ds : [ecx+0x5C]
        fsub dword ptr ds : [ecx+0x9C]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+0x54]
        mov edx, dword ptr ss : [esp]
        fsub dword ptr ds : [ecx+0x94]
        mov dword ptr ds : [ecx+0x5C], edx
        fstp dword ptr ds : [ecx+0x54]
        fstp dword ptr ds : [ecx+0x58]
        public_63573f5 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6357340)
    }
}

#undef public_635739b
#undef public_63573f5
