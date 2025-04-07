#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6355d60);
CLANG_FORWARD_PROC_SYMBOL(public_6356000);

PROC_DECLARE(0x6356000, internal_6356000, public_6356000);
extern "C" NAKED register_t __cdecl internal_6356000()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x54]
        mov ecx, dword ptr ds : [esi+0x50]
        mov edx, dword ptr ds : [esi+0x4C]
        push eax
        mov eax, dword ptr ds : [esi+0x48]
        push ecx
        mov ecx, dword ptr ds : [esi+0x44]
        push edx
        push eax
        push ecx
        call public_6355d60
        fstp dword ptr ds : [esi+0x58]
        mov edx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [esi+0x38]
        push edx
        mov edx, dword ptr ds : [esi+0x34]
        push eax
        mov eax, dword ptr ds : [esi+0x30]
        push ecx
        push edx
        push eax
        call public_6355d60
        fst dword ptr ds : [esi+0x5C]
        fadd dword ptr ds : [esi+0x58]
        add esp, 0x28
        fstp dword ptr ds : [esi+0x68]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6356000)
    }
}
