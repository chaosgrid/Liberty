#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24100);

PROC_DECLARE(0x6f24100, internal_6f24100, public_6f24100);
extern "C" NAKED register_t __cdecl internal_6f24100()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        fadd dword ptr ds : [ecx]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0xC]
        ret 
        UNREACHABLE_TRAP(0x6f24100)
    }
}
