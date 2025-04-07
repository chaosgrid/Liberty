#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208b00);

#define public_6208b45 _public_6208b45

PROC_DECLARE(0x6208b00, internal_6208b00, public_6208b00);
extern "C" NAKED register_t __cdecl internal_6208b00()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x1C]
        xor eax, eax
        mov ax, word ptr ds : [ecx+6]
        add eax, 2
        cmp eax, edx
        jg public_6208b45
        mov edx, dword ptr ds : [ecx+0x14]
        mov ax, word ptr ss : [esp+4]
        mov word ptr ds : [edx], ax
        mov edx, dword ptr ds : [ecx+0x14]
        mov ax, word ptr ss : [esp+8]
        mov word ptr ds : [edx+2], ax
        mov edx, dword ptr ds : [ecx+0x14]
        mov ax, word ptr ss : [esp+0xC]
        mov word ptr ds : [edx+4], ax
        mov eax, dword ptr ds : [ecx+0x14]
        add word ptr ds : [ecx+6], 3
        add eax, 6
        inc word ptr ds : [ecx+0xC]
        mov dword ptr ds : [ecx+0x14], eax
        public_6208b45 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6208b00)
    }
}

#undef public_6208b45
