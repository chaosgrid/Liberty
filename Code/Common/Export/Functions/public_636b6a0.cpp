#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635ada0);
CLANG_FORWARD_PROC_SYMBOL(public_636b6a0);
CLANG_FORWARD_PROC_SYMBOL(public_636d650);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

PROC_DECLARE(0x636b6a0, internal_636b6a0, public_636b6a0);
extern "C" NAKED register_t __cdecl internal_636b6a0()
{
    __asm
    {
        sub esp, 0x28
        push esi
        push edi
        mov esi, ecx
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        call public_636d650
        lea eax, ss:[esp+0x18]
        push eax
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call public_635ada0
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [eax+0x10], edx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [eax+0x14], ecx
        mov edx, dword ptr ss : [esp+0x2C]
        add eax, 0xC
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+0x18], ecx
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_63a54b4]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ds : [esi+0x1C]
        add esp, 0x1C
        fdivr dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [public_63a53d0]
        call public_6391dae
        xor eax, edi
        and eax, 0xFF
        xor eax, edi
        pop edi
        mov dword ptr ds : [esi+0x1C], eax
        pop esi
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x636b6a0)
    }
}
