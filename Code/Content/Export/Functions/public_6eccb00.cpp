#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f47ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6eccb2b _public_6eccb2b

PROC_DECLARE(0x6eccb00, internal_6eccb00, public_6eccb00);
extern "C" NAKED register_t __cdecl internal_6eccb00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6eccb2b
        mov eax, dword ptr ds : [esi+4]
        xor edx, edx
        mov dl, byte ptr ds : [esi+0xC]
        lea ecx, ds:[esi+0x10]
        push ecx
        mov ecx, dword ptr ds : [eax+8]
        push edx
        call public_6f47ba0
        public_6eccb2b : nop
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eccb00)
    }
}

#undef public_6eccb2b
