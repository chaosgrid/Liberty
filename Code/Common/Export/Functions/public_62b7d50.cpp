#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ab190);
CLANG_FORWARD_PROC_SYMBOL(public_62bac30);

#define public_62b7d7f _public_62b7d7f
#define public_62b7d8b _public_62b7d8b

PROC_DECLARE(0x62b7d50, internal_62b7d50, public_62b7d50);
extern "C" NAKED register_t __cdecl internal_62b7d50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xE0]
        mov edx, eax
        and edx, 0xC40
        cmp eax, edx
        jne public_62b7d7f
        push esi
        lea esi, ds:[ecx+0x1BC]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx+8]
        push esi
        push 1
        push eax
        call public_62bac30
        mov al, byte ptr ds : [esi]
        pop esi
        ret 4
        public_62b7d7f : nop
        shr eax, 7
        test al, 1
        je public_62b7d8b
        xor al, al
        ret 4
        public_62b7d8b : nop
        jmp public_62ab190
        UNREACHABLE_TRAP(0x62b7d50)
    }
}

#undef public_62b7d7f
#undef public_62b7d8b
