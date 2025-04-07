#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63036a0);

#define public_63036c0 _public_63036c0

PROC_DECLARE(0x63036a0, internal_63036a0, public_63036a0);
extern "C" NAKED register_t __cdecl internal_63036a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push eax
        push edi
        call dword ptr ds : [esi+4]
        add esp, 8
        test al, al
        je public_63036c0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edi
        add dword ptr ds : [esi], 4
        public_63036c0 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63036a0)
    }
}

#undef public_63036c0
