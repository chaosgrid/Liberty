#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_453d70);

PROC_DECLARE(0x453d70, internal_453d70, public_453d70);
extern "C" NAKED register_t __cdecl internal_453d70()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_44fbe0
        xor ecx, ecx
        mov dword ptr ds : [esi+0x6C], ecx
        mov dword ptr ds : [esi+0x70], ecx
        lea eax, ds:[esi+0x78]
        mov dword ptr ds : [esi], offset public_5cdc2c
        mov dword ptr ds : [esi+4], offset public_5cdbfc
        mov dword ptr ds : [esi+8], offset public_5cdbe0
        mov dword ptr ds : [esi+0xC], offset public_5cdbc0
        mov dword ptr ds : [esi+0x10], offset public_5cdb88
        mov dword ptr ds : [esi+0x14], offset public_5cdb60
        mov dword ptr ds : [esi+0x18], offset public_5cdb3c
        mov dword ptr ds : [esi+0x1C], offset public_5cdb04
        mov dword ptr ds : [esi+0x20], offset public_5cdaec
        mov dword ptr ds : [esi+0x74], ecx
        mov edi, ecx
        mov edx, eax
        mov dword ptr ds : [edx], edi
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], edi
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+0x2C], edx
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], ecx
        pop edi
        mov dword ptr ds : [esi+0xA8], ecx
        mov eax, esi
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], ecx
        pop esi
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x453d70)
    }
}
