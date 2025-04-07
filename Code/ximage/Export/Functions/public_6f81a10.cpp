#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f81a10);

#define public_6f81a24 _public_6f81a24
#define public_6f81a2d _public_6f81a2d
#define public_6f81a31 _public_6f81a31
#define public_6f81a39 _public_6f81a39
#define public_6f81a3b _public_6f81a3b

PROC_DECLARE(0x6f81a10, internal_6f81a10, public_6f81a10);
extern "C" NAKED register_t __cdecl internal_6f81a10()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        lea edx, ds:[ecx-1]
        test ecx, edx
        mov eax, 1
        je public_6f81a2d
        test ecx, ecx
        je public_6f81a3b
        public_6f81a24 : nop
        sar ecx, 1
        shl eax, 1
        test ecx, ecx
        jne public_6f81a24
        ret 
        public_6f81a2d : nop
        test ecx, ecx
        je public_6f81a39
        public_6f81a31 : nop
        sar ecx, 1
        shl eax, 1
        test ecx, ecx
        jne public_6f81a31
        public_6f81a39 : nop
        sar eax, 1
        public_6f81a3b : nop
        ret 
        UNREACHABLE_TRAP(0x6f81a10)
    }
}

#undef public_6f81a24
#undef public_6f81a2d
#undef public_6f81a31
#undef public_6f81a39
#undef public_6f81a3b
