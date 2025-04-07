#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec63d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec63e9 _public_6ec63e9
#define public_6ec63f3 _public_6ec63f3

PROC_DECLARE(0x6ec63d0, internal_6ec63d0, public_6ec63d0);
extern "C" NAKED register_t __cdecl internal_6ec63d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed57d4]
        test eax, eax
        je public_6ec63e9
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_6ed57d4], ecx
        dec dword ptr ds : [public_6ed57e0]
        jmp public_6ec63f3
        public_6ec63e9 : nop
        push 0x50
        call public_6ed0c5c
        add esp, 4
        public_6ec63f3 : nop
        mov edx, dword ptr ss : [esp+4]
        mov cl, byte ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], edx
        mov byte ptr ds : [eax+0x48], cl
        mov byte ptr ds : [eax+0x49], 0
        ret 8
        UNREACHABLE_TRAP(0x6ec63d0)
    }
}

#undef public_6ec63e9
#undef public_6ec63f3
