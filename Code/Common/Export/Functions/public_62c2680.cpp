#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62c26a7 _public_62c26a7
#define public_62c26a9 _public_62c26a9
#define public_62c26b3 _public_62c26b3
#define public_62c26b8 _public_62c26b8

PROC_DECLARE(0x62c2680, internal_62c2680, public_62c2680);
extern "C" NAKED register_t __cdecl internal_62c2680()
{
    __asm
    {
        mov eax, ecx
        mov edx, dword ptr ds : [eax+0x800]
        cmp edx, dword ptr ds : [eax+0x804]
        jge public_62c26b8
        lea ecx, ds:[eax+edx*8]
        inc edx
        mov dword ptr ds : [eax+0x800], edx
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_62c26a7
        add eax, 8
        jmp public_62c26a9
        public_62c26a7 : nop
        xor eax, eax
        public_62c26a9 : nop
        cmp eax, dword ptr ds : [ecx]
        je public_62c26b3
        push eax
        call public_6341610
        public_62c26b3 : nop
        mov al, 1
        ret 4
        public_62c26b8 : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x62c2680)
    }
}

#undef public_62c26a7
#undef public_62c26a9
#undef public_62c26b3
#undef public_62c26b8
