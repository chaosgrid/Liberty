#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6292340);

PROC_DECLARE(0x6292340, internal_6292340, public_6292340);
extern "C" NAKED register_t __cdecl internal_6292340()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax]
        fmul dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fmul dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fmul dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+4]
        fstp dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6292340)
    }
}
