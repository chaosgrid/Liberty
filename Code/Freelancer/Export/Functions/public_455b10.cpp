#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_44f9d0);
CLANG_FORWARD_PROC_SYMBOL(public_455b10);

#define public_455b36 _public_455b36
#define public_455b60 _public_455b60
#define public_455b7e _public_455b7e

PROC_DECLARE(0x455b10, internal_455b10, public_455b10);
extern "C" NAKED register_t __cdecl internal_455b10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi+0x10C]
        test al, al
        mov byte ptr ds : [esi+0x10D], 1
        je public_455b7e
        mov ecx, dword ptr ds : [esi+0x110]
        test ecx, ecx
        je public_455b36
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_455b36 : nop
        mov al, byte ptr ds : [esi+6]
        test al, al
        mov dword ptr ds : [esi+0x110], 0
        je public_455b60
        push 0x40400000
        push 0x3F800000
        call public_41a0f0
        push 0
        call public_41dda0
        add esp, 0xC
        public_455b60 : nop
        mov ecx, dword ptr ds : [esi+0xC0]
        mov edx, dword ptr ds : [esi+0xB4]
        shl ecx, 6
        mov ecx, dword ptr ds : [ecx+edx]
        call public_44f9d0
        mov byte ptr ds : [esi+0x10C], 0
        public_455b7e : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x455b10)
    }
}

#undef public_455b36
#undef public_455b60
#undef public_455b7e
