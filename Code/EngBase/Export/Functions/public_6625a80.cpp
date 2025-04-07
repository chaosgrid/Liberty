#include "EngBase-PCH.h"

PROC_DECLARE(0x6625a80, internal_6625a80, public_6625a80);
extern "C" NAKED register_t __cdecl internal_6625a80()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x24]
        push esi
        push edi
        lea esi, ds:[eax+0x1C]
        mov ecx, 9
        mov edi, edx
        add edx, 0x24
        rep movsd
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        fld dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0x14]
        fxch 
        fadd dword ptr ds : [eax+0x10]
        fstp dword ptr ss : [esp]
        fadd dword ptr ds : [eax+0x14]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [eax+0x18]
        mov eax, dword ptr ss : [esp]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6625a80)
    }
}
