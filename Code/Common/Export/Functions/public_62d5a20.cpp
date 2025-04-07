#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d5a20);
CLANG_FORWARD_PROC_SYMBOL(public_62e5b70);

#define public_62d5a38 _public_62d5a38
#define public_62d5a3f _public_62d5a3f
#define public_62d5a46 _public_62d5a46
#define public_62d5a4a _public_62d5a4a

PROC_DECLARE(0x62d5a20, internal_62d5a20, public_62d5a20);
extern "C" NAKED register_t __cdecl internal_62d5a20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, 0
        je public_62d5a3f
        dec eax
        je public_62d5a38
        dec eax
        jne public_62d5a46
        mov eax, 4
        jmp public_62d5a4a
        public_62d5a38 : nop
        mov eax, 3
        jmp public_62d5a4a
        public_62d5a3f : nop
        mov eax, 1
        jmp public_62d5a4a
        public_62d5a46 : nop
        mov eax, dword ptr ss : [esp+8]
        public_62d5a4a : nop
        mov ecx, dword ptr ds : [esi+4]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        call public_62e5b70
        fstp dword ptr ds : [esi+0x40]
        add esp, 0xC
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62d5a20)
    }
}

#undef public_62d5a38
#undef public_62d5a3f
#undef public_62d5a46
#undef public_62d5a4a
