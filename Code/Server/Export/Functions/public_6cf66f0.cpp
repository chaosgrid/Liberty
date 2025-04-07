#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf66f0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7260);

#define public_6cf6716 _public_6cf6716
#define public_6cf6729 _public_6cf6729

PROC_DECLARE(0x6cf66f0, internal_6cf66f0, public_6cf66f0);
extern "C" NAKED register_t __cdecl internal_6cf66f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        jne public_6cf6729
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call public_6cf7260
        test al, al
        mov eax, dword ptr ss : [esp+8]
        jne public_6cf6716
        mov cl, byte ptr ds : [eax+0xAC]
        test cl, cl
        je public_6cf6729
        public_6cf6716 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ds : [esi+0x38]
        push eax
        call dword ptr ds : [edx+0xB8]
        public_6cf6729 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6cf66f0)
    }
}

#undef public_6cf6716
#undef public_6cf6729
