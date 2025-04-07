#include "Alchemy-PCH.h"

PROC_DECLARE(0x6212c20, internal_6212c20, public_6212c20);
extern "C" NAKED register_t __cdecl internal_6212c20()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push ecx
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        fstp dword ptr ds : [esi+0xD8]
        call dword ptr ds : [eax+0x44]
        mov edx, dword ptr ds : [esi+0x9C]
        mov eax, dword ptr ds : [edx+0x50]
        mov edx, dword ptr ds : [esi+0x84]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        fst dword ptr ds : [esi+0xA0]
        fld st(0)
        fmul st, st(1)
        xor eax, eax
        fstp dword ptr ds : [esi+0xA4]
        pop esi
        fstp st(0)
        ret 8
        UNREACHABLE_TRAP(0x6212c20)
    }
}
