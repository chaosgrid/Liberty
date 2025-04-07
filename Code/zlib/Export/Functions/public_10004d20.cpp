#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10004d20);

#define public_10004d58 _public_10004d58

PROC_DECLARE(0x10004d20, internal_10004d20, public_10004d20);
extern "C" NAKED register_t __cdecl internal_10004d20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x28]
        push 0x1C
        push 1
        push ecx
        call dword ptr ds : [eax+0x20]
        add esp, 0xC
        test eax, eax
        je public_10004d58
        mov dl, byte ptr ss : [esp+4]
        mov cl, byte ptr ss : [esp+8]
        mov byte ptr ds : [eax+0x10], dl
        mov edx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [eax+0x11], cl
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x18], ecx
        public_10004d58 : nop
        ret 
        UNREACHABLE_TRAP(0x10004d20)
    }
}

#undef public_10004d58
