#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1b610);

#define public_6ec938b _public_6ec938b

PROC_DECLARE(0x6ec9330, internal_6ec9330, public_6ec9330);
extern "C" NAKED register_t __cdecl internal_6ec9330()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        add edi, 0x68
        mov ecx, edi
        call dword ptr ds : [public_6fb3068]
        xor eax, eax
        mov ecx, 6
        rep stosd
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        add ecx, 0x68
        call dword ptr ds : [public_6fb303c]
        mov ecx, dword ptr ds : [esi+4]
        add ecx, 0x68
        call dword ptr ds : [public_6fb3038]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0x6C]
        cmp ecx, 1
        je public_6ec938b
        test ecx, ecx
        je public_6ec938b
        push 1
        lea ecx, ds:[eax+0x68]
        push 8
        push ecx
        add eax, 0xC
        push eax
        call dword ptr ds : [public_6fb369c]
        add esp, 0x10
        public_6ec938b : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6f1b610
        pop edi
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec9330)
    }
}

#undef public_6ec938b
