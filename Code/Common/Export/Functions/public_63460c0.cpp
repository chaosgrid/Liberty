#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63460c0);
CLANG_FORWARD_PROC_SYMBOL(public_6346170);

PROC_DECLARE(0x63460c0, internal_63460c0, public_63460c0);
extern "C" NAKED register_t __cdecl internal_63460c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6346170
        mov eax, dword ptr ds : [esi+0x98]
        mov ecx, dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+4]
        add eax, 0x74
        fadd dword ptr ds : [eax+4]
        pop esi
        fld dword ptr ds : [ecx+8]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fadd dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+8], ecx
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        ret 4
        UNREACHABLE_TRAP(0x63460c0)
    }
}
