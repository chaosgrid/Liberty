#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661af30);

PROC_DECLARE(0x661af30, internal_661af30, public_661af30);
extern "C" NAKED register_t __cdecl internal_661af30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x20], ecx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0x28], edx
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0x2C], ecx
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [esi+0x30], edx
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi+0x34]
        and al, 0xFC
        mov dword ptr ds : [esi+0x34], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x661af30)
    }
}
