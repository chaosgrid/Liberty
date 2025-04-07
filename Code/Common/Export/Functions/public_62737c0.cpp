#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b1b0);
CLANG_FORWARD_PROC_SYMBOL(public_627b1d0);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

PROC_DECLARE(0x62737c0, internal_62737c0, public_62737c0);
extern "C" NAKED register_t __cdecl internal_62737c0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        push edi
        push esi
        call public_6334430
        lea edi, ds:[esi+0x34]
        add esp, 4
        mov ecx, edi
        call public_627b1d0
        xor ecx, ecx
        mov dword ptr ds : [esi], ecx
        lea eax, ds:[esi+4]
        mov esi, ecx
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov dword ptr ds : [edx+4], esi
        mov dword ptr ds : [edx+8], esi
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov ecx, edi
        pop edi
        mov edx, 0x3F800000
        pop esi
        mov dword ptr ds : [eax+0x2C], edx
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax+0xC], edx
        add esp, 0xC
        jmp public_627b1b0
        UNREACHABLE_TRAP(0x62737c0)
    }
}
