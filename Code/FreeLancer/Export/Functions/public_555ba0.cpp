#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555ba0);

PROC_DECLARE(0x555ba0, internal_555ba0, public_555ba0);
extern "C" NAKED register_t __cdecl internal_555ba0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        lea edx, ds:[ecx+eax*4]
        push edi
        push edx
        call dword ptr ds : [public_5c60cc]
        mov eax, dword ptr ds : [public_5c6d40]
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+8]
        fstp dword ptr ds : [ecx+eax*4]
        mov eax, dword ptr ds : [esi+0x14]
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x14], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x555ba0)
    }
}
