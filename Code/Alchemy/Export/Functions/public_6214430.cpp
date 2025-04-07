#include "Alchemy-PCH.h"

PROC_DECLARE(0x6214430, internal_6214430, public_6214430);
extern "C" NAKED register_t __cdecl internal_6214430()
{
    __asm
    {
        sub esp, 0xC
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        add eax, 0xC
        fld dword ptr ds : [ecx+0xA8]
        fld dword ptr ds : [ecx+0xAC]
        fsub dword ptr ds : [eax]
        fmul st, st(1)
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+0xB0]
        fsub dword ptr ds : [eax+4]
        fmul st, st(1)
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0xB4]
        fsub dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp+4]
        fmul st, st(1)
        fadd dword ptr ds : [eax+8]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        fstp st(0)
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6214430)
    }
}
