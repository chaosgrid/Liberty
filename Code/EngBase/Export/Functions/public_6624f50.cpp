#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6624f50);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6624f70 _public_6624f70
#define public_6624f7a _public_6624f7a

PROC_DECLARE(0x6624f50, internal_6624f50, public_6624f50);
extern "C" NAKED register_t __cdecl internal_6624f50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_662b18c]
        test eax, eax
        je public_6624f70
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_662b18c], ecx
        mov ecx, dword ptr ds : [public_662b198]
        dec ecx
        mov dword ptr ds : [public_662b198], ecx
        jmp public_6624f7a
        public_6624f70 : nop
        push 0x18
        call public_66281dc
        add esp, 4
        public_6624f7a : nop
        mov edx, dword ptr ss : [esp+4]
        mov cl, byte ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], edx
        mov byte ptr ds : [eax+0x14], cl
        mov byte ptr ds : [eax+0x15], 0
        ret 8
        UNREACHABLE_TRAP(0x6624f50)
    }
}

#undef public_6624f70
#undef public_6624f7a
