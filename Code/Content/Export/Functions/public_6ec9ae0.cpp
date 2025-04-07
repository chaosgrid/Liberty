#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1b610);

PROC_DECLARE(0x6ec9ae0, internal_6ec9ae0, public_6ec9ae0);
extern "C" NAKED register_t __cdecl internal_6ec9ae0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        add edi, 0x50
        mov ecx, edi
        call dword ptr ds : [public_6fb3068]
        xor eax, eax
        mov ecx, 6
        rep stosd
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        add ecx, 0x50
        call dword ptr ds : [public_6fb303c]
        mov ecx, dword ptr ds : [esi+4]
        add ecx, 0x50
        call dword ptr ds : [public_6fb3038]
        mov ecx, dword ptr ds : [esi+4]
        call public_6f1b610
        pop edi
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec9ae0)
    }
}
