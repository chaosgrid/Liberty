#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_631be30);

#define public_6310583 _public_6310583
#define public_6310588 _public_6310588

PROC_DECLARE(0x6310560, internal_6310560, public_6310560);
extern "C" NAKED register_t __cdecl internal_6310560()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x1564]
        test al, al
        je public_6310588
        mov ecx, dword ptr ds : [ecx+0x145C]
        test ecx, ecx
        je public_6310583
        movzx eax, byte ptr ds : [ecx+2]
        cmp dword ptr ss : [esp+4], eax
        jae public_6310583
        xor al, al
        ret 4
        public_6310583 : nop
        mov al, 1
        ret 4
        public_6310588 : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        add ecx, 0x828
        push ecx
        call public_631be30
        mov dl, byte ptr ds : [eax]
        xor ecx, ecx
        add esp, 8
        test dl, dl
        sete cl
        mov al, cl
        ret 4
        UNREACHABLE_TRAP(0x6310560)
    }
}

#undef public_6310583
#undef public_6310588
