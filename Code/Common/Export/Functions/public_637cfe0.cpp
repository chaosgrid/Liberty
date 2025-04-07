#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637cfe0);

#define public_637d00e _public_637d00e
#define public_637d026 _public_637d026
#define public_637d02c _public_637d02c

PROC_DECLARE(0x637cfe0, internal_637cfe0, public_637cfe0);
extern "C" NAKED register_t __cdecl internal_637cfe0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov cl, byte ptr ds : [edx+public_658c540]
        cmp cl, 5
        jle public_637d00e
        fld qword ptr ds : [edx*8+public_658b9d8]
        mov eax, ecx
        and eax, 0xFF
        fcomp qword ptr ds : [eax*8+public_658c6c8]
        fnstsw ax
        test ah, 0x40
        jne public_637d026
        cmp cl, 5
        public_637d00e : nop
        jge public_637d02c
        mov edx, dword ptr ds : [edx*8+public_658b9d8]
        and ecx, 0xFF
        cmp edx, dword ptr ds : [ecx*8+public_658c6c8]
        jne public_637d02c
        public_637d026 : nop
        mov eax, 1
        ret 
        public_637d02c : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x637cfe0)
    }
}

#undef public_637d00e
#undef public_637d026
#undef public_637d02c
