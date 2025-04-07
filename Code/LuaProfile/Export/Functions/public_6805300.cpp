#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805300);
CLANG_FORWARD_PROC_SYMBOL(public_6805370);
CLANG_FORWARD_PROC_SYMBOL(public_68060b0);
CLANG_FORWARD_PROC_SYMBOL(public_68061a0);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);

PROC_DECLARE(0x6805300, internal_6805300, public_6805300);
extern "C" NAKED register_t __cdecl internal_6805300()
{
    __asm
    {
        push esi
        push edi
        push 0x18
        push 0
        call public_68065d0
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x14]
        lea eax, ds:[eax+eax*2]
        cdq 
        sub eax, edx
        sar eax, 1
        push eax
        call public_68060b0
        mov edi, eax
        push edi
        call public_6805370
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [esi+0x14], 0xFFFFFFFD
        mov eax, dword ptr ds : [public_680e604]
        add eax, 0x50
        push esi
        push eax
        call public_68061a0
        mov ecx, dword ptr ds : [public_680e604]
        mov eax, edi
        cdq 
        and edx, 0xF
        add eax, edx
        mov edx, dword ptr ds : [ecx+0x78]
        add esp, 0x18
        sar eax, 4
        inc eax
        add edx, eax
        pop edi
        mov eax, esi
        mov dword ptr ds : [ecx+0x78], edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6805300)
    }
}
