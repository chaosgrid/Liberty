#include "EngBase-PCH.h"

PROC_DECLARE(0x661cfa0, internal_661cfa0, public_661cfa0);
extern "C" NAKED register_t __cdecl internal_661cfa0()
{
    __asm
    {
        sub esp, 0x18
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        push esi
        fld dword ptr ds : [edx]
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [edx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [edx+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0xC]
        fld qword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x28]
        fxch 
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+4]
        fxch 
        fadd dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [esp+4]
        fstp dword ptr ss : [esp+8]
        fadd dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, eax
        fstp dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+8], esi
        pop esi
        fld dword ptr ds : [ecx+0x30]
        fmul dword ptr ds : [ecx+0x2C]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        add esp, 0x18
        ret 0x14
        UNREACHABLE_TRAP(0x661cfa0)
    }
}
