#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422820);
CLANG_FORWARD_PROC_SYMBOL(public_422910);

PROC_DECLARE(0x422910, internal_422910, public_422910);
extern "C" NAKED register_t __cdecl internal_422910()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x24]
        push ecx
        mov ecx, dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        push esi
        call dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [esi]
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call dword ptr ds : [eax+0x1C]
        push ecx
        fstp dword ptr ss : [esp]
        call public_422820
        add esp, 0x10
        pop esi
        ret 
        UNREACHABLE_TRAP(0x422910)
    }
}
