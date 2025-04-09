#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57a610);
CLANG_FORWARD_PROC_SYMBOL(public_59fb60);

PROC_DECLARE(0x467030, internal_467030, public_467030);
extern "C" NAKED register_t __cdecl internal_467030()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x3C8]
        call public_57a610
        mov ecx, dword ptr ds : [esi+0x3A0]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi+0x3C8]
        call public_57a610
        mov ecx, dword ptr ds : [esi+0x3A4]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi+0x3C8]
        call public_57a610
        mov ecx, dword ptr ds : [esi+0x394]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi+0x3C8]
        call public_57a610
        mov ecx, dword ptr ds : [esi+0x398]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi+0x3C8]
        call public_57a610
        mov ecx, dword ptr ds : [esi+0x39C]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, esi
        pop esi
        jmp public_59fb60
        UNREACHABLE_TRAP(0x467030)
    }
}
