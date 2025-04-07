#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285c90);
CLANG_FORWARD_PROC_SYMBOL(public_629aed0);

#define public_629d263 _public_629d263

PROC_DECLARE(0x629d240, internal_629d240, public_629d240);
extern "C" NAKED register_t __cdecl internal_629d240()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push eax
        mov esi, ecx
        call public_629aed0
        mov bl, al
        test bl, bl
        je public_629d263
        lea ecx, ds:[esi+0x4C]
        call public_6285c90
        pop esi
        mov al, bl
        pop ebx
        ret 4
        public_629d263 : nop
        mov byte ptr ds : [esi+0x60], 0
        pop esi
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x629d240)
    }
}

#undef public_629d263
