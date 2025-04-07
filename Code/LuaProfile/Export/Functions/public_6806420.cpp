#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68061a0);
CLANG_FORWARD_PROC_SYMBOL(public_6806420);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);

PROC_DECLARE(0x6806420, internal_6806420, public_6806420);
extern "C" NAKED register_t __cdecl internal_6806420()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        lea eax, ds:[edi+2]
        shl eax, 4
        push eax
        push 0
        call public_68065d0
        mov ecx, dword ptr ds : [public_680e604]
        mov esi, eax
        add ecx, 0x48
        push esi
        push ecx
        call public_68061a0
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x78]
        add esp, 0x10
        inc ecx
        mov dword ptr ds : [eax+0x78], ecx
        mov dword ptr ds : [esi+8], edi
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6806420)
    }
}
