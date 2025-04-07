#include "Server-PCH.h"

PROC_DECLARE(0x6ce94b0, internal_6ce94b0, public_6ce94b0);
extern "C" NAKED register_t __cdecl internal_6ce94b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+0x80]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_6d64270]
        fmul dword ptr ds : [ecx]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        add eax, 0x88
        fadd dword ptr ds : [eax-4]
        push eax
        mov ecx, edi
        fstp dword ptr ss : [esp+0x14]
        call dword ptr ds : [public_6d6426c]
        fmul dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        fstp dword ptr ss : [esp]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x214]
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6ce94b0)
    }
}
