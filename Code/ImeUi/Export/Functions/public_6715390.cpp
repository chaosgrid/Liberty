#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67152f0);
CLANG_FORWARD_PROC_SYMBOL(public_6715390);
CLANG_FORWARD_PROC_SYMBOL(public_67153d0);

#define public_67153b4 _public_67153b4
#define public_67153c8 _public_67153c8

PROC_DECLARE(0x6715390, internal_6715390, public_6715390);
extern "C" NAKED register_t __cdecl internal_6715390()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 2
        jb public_67153c8
        cmp eax, 3
        ja public_67153c8
        mov ecx, dword ptr ds : [public_671cfc4]
        and ecx, 0x3FF
        cmp ecx, 0x12
        jne public_67153b4
        mov eax, 3
        public_67153b4 : nop
        push 1
        mov dword ptr ds : [public_671b400], eax
        call public_67152f0
        add esp, 4
        jmp public_67153d0
        public_67153c8 : nop
        ret 
        UNREACHABLE_TRAP(0x6715390)
    }
}

#undef public_67153b4
#undef public_67153c8
