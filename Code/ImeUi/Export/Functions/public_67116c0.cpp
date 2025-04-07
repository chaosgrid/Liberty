#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712ac0);

#define public_67116e6 _public_67116e6
#define public_67116ea _public_67116ea

PROC_DECLARE(0x67116c0, internal_67116c0, public_67116c0);
extern "C" NAKED register_t __cdecl internal_67116c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+0x10]
        xor al, al
        test esi, esi
        je public_67116ea
        mov eax, dword ptr ds : [esi]
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        mov bl, al
        test bl, bl
        je public_67116e6
        push edi
        mov ecx, esi
        call public_6712ac0
        public_67116e6 : nop
        mov al, bl
        pop edi
        pop ebx
        public_67116ea : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x67116c0)
    }
}

#undef public_67116e6
#undef public_67116ea
