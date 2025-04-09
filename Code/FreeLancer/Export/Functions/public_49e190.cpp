#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d580);

#define public_49e1c7 _public_49e1c7

PROC_DECLARE(0x49e190, internal_49e190, public_49e190);
extern "C" NAKED register_t __cdecl internal_49e190()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xF
        push esi
        mov esi, ecx
        jne public_49e1c7
        mov al, byte ptr ds : [esi+0xBF8]
        test al, al
        je public_49e1c7
        call public_43d580
        mov eax, dword ptr ds : [esi-0x32C]
        push 0
        lea ecx, ds:[esi-0x32C]
        push 0
        push 0xEF02
        call dword ptr ds : [eax+0x5C]
        mov al, 1
        pop esi
        ret 4
        public_49e1c7 : nop
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x49e190)
    }
}

#undef public_49e1c7
