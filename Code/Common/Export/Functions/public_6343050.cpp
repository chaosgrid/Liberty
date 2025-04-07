#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6342c80);
CLANG_FORWARD_PROC_SYMBOL(public_6343050);

PROC_DECLARE(0x6343050, internal_6343050, public_6343050);
extern "C" NAKED register_t __cdecl internal_6343050()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        mov esi, ecx
        push eax
        call public_6342c80
        mov dword ptr ds : [esi], offset public_63a53dc
        xor eax, eax
        mov dword ptr ds : [esi+0x60], eax
        mov ecx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [esi+0xBC], ecx
        mov edx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [esi+0xC0], edx
        mov ecx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [esi+0xC4], ecx
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [esi+0xC8], edx
        mov ecx, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [esi+0xCC], ecx
        mov dword ptr ds : [esi+0x78], eax
        mov ecx, 0x3F800000
        mov dword ptr ds : [esi+0x74], ecx
        mov dword ptr ds : [esi+0x9C], eax
        mov dword ptr ds : [esi+0xA0], eax
        mov dword ptr ds : [esi+0xA4], eax
        mov dword ptr ds : [esi+0xAC], eax
        mov dword ptr ds : [esi+0xB0], eax
        mov dword ptr ds : [esi+0xB4], eax
        mov dword ptr ds : [esi+0x84], eax
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ds : [esi+0x88], ecx
        mov dword ptr ds : [esi+0x94], eax
        mov dword ptr ds : [esi+0x90], eax
        mov dword ptr ds : [esi+0x8C], eax
        pop edi
        mov dword ptr ds : [esi+0x98], ecx
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6343050)
    }
}
