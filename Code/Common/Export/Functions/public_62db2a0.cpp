#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62dae20);

PROC_DECLARE(0x62db2a0, internal_62db2a0, public_62db2a0);
extern "C" NAKED register_t __cdecl internal_62db2a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi+4], 0x11
        mov dword ptr ds : [esi+8], edi
        call public_62dae20
        mov dword ptr ds : [esi+0x84], edi
        mov dword ptr ds : [esi+0x88], edi
        mov dword ptr ds : [esi+0x80], 4
        mov dword ptr ds : [esi+0x7C], offset public_639e11c
        mov dword ptr ds : [esi+0x8C], 0x43160000
        mov dword ptr ds : [esi+0x90], edi
        mov dword ptr ds : [esi+0x94], edi
        mov dword ptr ds : [esi+0x98], edi
        mov ecx, 0x43C80000
        mov dword ptr ds : [esi+0x9C], ecx
        mov eax, 0x41200000
        mov dword ptr ds : [esi+0xA4], eax
        mov dword ptr ds : [esi+0xB0], eax
        pop edi
        mov dword ptr ds : [esi], offset public_639e1a4
        mov byte ptr ds : [esi+0xA0], 1
        mov dword ptr ds : [esi+0xA8], 0x3EC90FDB
        mov dword ptr ds : [esi+0xAC], 3
        mov dword ptr ds : [esi+0xB4], 0xC1200000
        mov dword ptr ds : [esi+0xB8], ecx
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62db2a0)
    }
}
