#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208b50);

#define public_6208bb2 _public_6208bb2

PROC_DECLARE(0x6208b50, internal_6208b50, public_6208b50);
extern "C" NAKED register_t __cdecl internal_6208b50()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x1C]
        xor eax, eax
        mov ax, word ptr ds : [ecx+6]
        add eax, 5
        cmp eax, edx
        jg public_6208bb2
        mov edx, dword ptr ds : [ecx+0x14]
        mov ax, word ptr ss : [esp+4]
        push esi
        mov word ptr ds : [edx], ax
        mov edx, dword ptr ds : [ecx+0x14]
        mov ax, word ptr ss : [esp+0xC]
        mov word ptr ds : [edx+2], ax
        mov esi, dword ptr ds : [ecx+0x14]
        mov dx, word ptr ss : [esp+0x10]
        mov word ptr ds : [esi+4], dx
        mov esi, dword ptr ds : [ecx+0x14]
        mov word ptr ds : [esi+6], dx
        mov edx, dword ptr ds : [ecx+0x14]
        mov word ptr ds : [edx+8], ax
        mov eax, dword ptr ds : [ecx+0x14]
        mov dx, word ptr ss : [esp+0x14]
        mov word ptr ds : [eax+0xA], dx
        mov esi, dword ptr ds : [ecx+0x14]
        add word ptr ds : [ecx+6], 6
        add esi, 0xC
        add word ptr ds : [ecx+0xC], 2
        mov dword ptr ds : [ecx+0x14], esi
        pop esi
        public_6208bb2 : nop
        ret 0x10
        UNREACHABLE_TRAP(0x6208b50)
    }
}

#undef public_6208bb2
