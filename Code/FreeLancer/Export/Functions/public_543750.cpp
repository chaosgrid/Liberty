#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_543750);
CLANG_FORWARD_PROC_SYMBOL(public_548ed0);

#define public_543777 _public_543777
#define public_543779 _public_543779

PROC_DECLARE(0x543750, internal_543750, public_543750);
extern "C" NAKED register_t __cdecl internal_543750()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_543777
        add eax, 0xC
        test eax, eax
        je public_543777
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_543777
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_543779
        public_543777 : nop
        xor eax, eax
        public_543779 : nop
        mov edx, dword ptr ds : [eax+0x1B4]
        lea eax, ss:[esp+4]
        push 0
        push eax
        mov dword ptr ss : [esp+0xC], edx
        call public_548ed0
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x543750)
    }
}

#undef public_543777
#undef public_543779
