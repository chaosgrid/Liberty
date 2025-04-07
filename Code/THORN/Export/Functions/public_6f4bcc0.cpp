#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b140);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bcc0);

#define public_6f4bcea _public_6f4bcea

PROC_DECLARE(0x6f4bcc0, internal_6f4bcc0, public_6f4bcc0);
extern "C" NAKED register_t __cdecl internal_6f4bcc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        call public_6f4af60
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f4bcea
        push esi
        call public_6f4b140
        add esp, 4
        cmp eax, 0xFFFFFFF9
        jne public_6f4bcea
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+8]
        pop esi
        ret 
        public_6f4bcea : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4bcc0)
    }
}

#undef public_6f4bcea
