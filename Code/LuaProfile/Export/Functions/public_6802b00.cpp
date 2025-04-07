#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802950);
CLANG_FORWARD_PROC_SYMBOL(public_6802b00);
CLANG_FORWARD_PROC_SYMBOL(public_6802b50);

PROC_DECLARE(0x6802b00, internal_6802b00, public_6802b00);
extern "C" NAKED register_t __cdecl internal_6802b00()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        call public_6802950
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+1]
        shl eax, 4
        sub edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0xC]
        push ecx
        push esi
        mov dword ptr ds : [edx+0xC], eax
        call public_6802b50
        add esp, 0xC
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6802b00)
    }
}
