#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68061a0);
CLANG_FORWARD_PROC_SYMBOL(public_6806460);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);

PROC_DECLARE(0x6806460, internal_6806460, public_6806460);
extern "C" NAKED register_t __cdecl internal_6806460()
{
    __asm
    {
        push esi
        push edi
        push 0x20
        xor edi, edi
        push edi
        call public_68065d0
        mov esi, eax
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov eax, dword ptr ds : [public_680e604]
        add eax, 0x40
        push esi
        push eax
        call public_68061a0
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x78]
        add esp, 0x10
        add ecx, 5
        mov dword ptr ds : [eax+0x78], ecx
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6806460)
    }
}
