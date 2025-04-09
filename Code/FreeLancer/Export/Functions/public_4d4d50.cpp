#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d4d50);

#define public_4d4d6a _public_4d4d6a
#define public_4d4d75 _public_4d4d75
#define public_4d4d80 _public_4d4d80
#define public_4d4d8e _public_4d4d8e
#define public_4d4d99 _public_4d4d99
#define public_4d4da3 _public_4d4da3
#define public_4d4dad _public_4d4dad

PROC_DECLARE(0x4d4d50, internal_4d4d50, public_4d4d50);
extern "C" NAKED register_t __cdecl internal_4d4d50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xE0]
        test cl, 1
        mov eax, 0x4A7
        je public_4d4d6a
        mov eax, 0x4A0
        ret 
        public_4d4d6a : nop
        test cl, 2
        je public_4d4d75
        mov eax, 0x4A1
        ret 
        public_4d4d75 : nop
        test cl, 4
        je public_4d4d80
        mov eax, 0x4A2
        ret 
        public_4d4d80 : nop
        test ecx, 0x8010
        je public_4d4d8e
        mov eax, 0x4A3
        ret 
        public_4d4d8e : nop
        test cl, 0x40
        je public_4d4d99
        mov eax, 0x4A4
        ret 
        public_4d4d99 : nop
        test cl, cl
        jns public_4d4da3
        mov eax, 0x4A5
        ret 
        public_4d4da3 : nop
        test ch, 1
        je public_4d4dad
        mov eax, 0x4A6
        public_4d4dad : nop
        ret 
        UNREACHABLE_TRAP(0x4d4d50)
    }
}

#undef public_4d4d6a
#undef public_4d4d75
#undef public_4d4d80
#undef public_4d4d8e
#undef public_4d4d99
#undef public_4d4da3
#undef public_4d4dad
