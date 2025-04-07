#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284290);

PROC_DECLARE(0x6284290, internal_6284290, public_6284290);
extern "C" NAKED register_t __cdecl internal_6284290()
{
    __asm
    {
        sub esp, 0x1C
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax+0x54]
        mov eax, dword ptr ds : [ecx+0x98]
        fld dword ptr ds : [eax+0x14]
        add eax, 0x14
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        fxch 
        mov dword ptr ss : [esp+8], edx
        fstp dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp]
        mov ecx, eax
        fstp dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6284290)
    }
}
