#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712ac0);

#define public_6711b0d _public_6711b0d

PROC_DECLARE(0x6711af0, internal_6711af0, public_6711af0);
extern "C" NAKED register_t __cdecl internal_6711af0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x14]
        mov bl, al
        test bl, bl
        je public_6711b0d
        push edi
        mov ecx, esi
        call public_6712ac0
        public_6711b0d : nop
        pop edi
        mov al, bl
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6711af0)
    }
}

#undef public_6711b0d
