#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4cd30);

#define public_6f4b4ee _public_6f4b4ee
#define public_6f4b4f4 _public_6f4b4f4

PROC_DECLARE(0x6f4b4c0, internal_6f4b4c0, public_6f4b4c0);
extern "C" NAKED register_t __cdecl internal_6f4b4c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f4b4f4
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 4
        mov ecx, dword ptr ds : [edx+eax-0x10]
        cmp ecx, 0xFFFFFFFF
        lea eax, ds:[edx+eax-0x10]
        je public_6f4b4ee
        push eax
        call public_6f4cd30
        add esp, 4
        test eax, eax
        jne public_6f4b4f4
        public_6f4b4ee : nop
        mov eax, 1
        ret 
        public_6f4b4f4 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4b4c0)
    }
}

#undef public_6f4b4ee
#undef public_6f4b4f4
