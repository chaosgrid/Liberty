#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802900);
CLANG_FORWARD_PROC_SYMBOL(public_6804270);
CLANG_FORWARD_PROC_SYMBOL(public_6804d80);

PROC_DECLARE(0x6804d80, internal_6804d80, public_6804d80);
extern "C" NAKED register_t __cdecl internal_6804d80()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+4]
        push eax
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        sub ecx, dword ptr ds : [eax+4]
        sar ecx, 4
        sub ecx, esi
        push ecx
        push esi
        call public_6804270
        push esi
        call public_6802900
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x10
        add ecx, 0x10
        mov dword ptr ds : [eax], ecx
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6804d80)
    }
}
