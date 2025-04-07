#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348860);
CLANG_FORWARD_PROC_SYMBOL(public_63488a0);
CLANG_FORWARD_PROC_SYMBOL(public_6348900);
CLANG_FORWARD_PROC_SYMBOL(public_63491d0);
CLANG_FORWARD_PROC_SYMBOL(public_63492c0);

#define public_63491ea _public_63491ea

PROC_DECLARE(0x63491d0, internal_63491d0, public_63491d0);
extern "C" NAKED register_t __cdecl internal_63491d0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        push edi
        call public_6348860
        test eax, eax
        jne public_63491ea
        push edi
        mov ecx, esi
        call public_6348900
        public_63491ea : nop
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        push edi
        mov ecx, esi
        call public_63488a0
        mov ecx, esi
        call public_63492c0
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x63491d0)
    }
}

#undef public_63491ea
