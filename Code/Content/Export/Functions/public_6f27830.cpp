#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c80);

#define public_6f27856 _public_6f27856

PROC_DECLARE(0x6f27830, internal_6f27830, public_6f27830);
extern "C" NAKED register_t __cdecl internal_6f27830()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        mov ecx, edi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+0x114]
        test eax, eax
        jne public_6f27856
        mov ecx, edi
        call public_6f57c80
        mov dword ptr ds : [esi+0x114], eax
        public_6f27856 : nop
        add esi, 0x10C
        push esi
        mov ecx, edi
        call public_6f57c60
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f27830)
    }
}

#undef public_6f27856
