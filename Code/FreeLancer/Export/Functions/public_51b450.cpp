#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fd60);
CLANG_FORWARD_PROC_SYMBOL(public_51b450);

#define public_51b46d _public_51b46d

PROC_DECLARE(0x51b450, internal_51b450, public_51b450);
extern "C" NAKED register_t __cdecl internal_51b450()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        mov esi, ecx
        call public_40fd60
        mov bl, al
        test bl, bl
        je public_51b46d
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x5C]
        public_51b46d : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x51b450)
    }
}

#undef public_51b46d
