#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4eab);

#define public_6ef2a94 _public_6ef2a94
#define public_6ef2aa0 _public_6ef2aa0

PROC_DECLARE(0x6ef2a80, internal_6ef2a80, public_6ef2a80);
extern "C" NAKED register_t __cdecl internal_6ef2a80()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6f012d4]
        mov al, 1
        test al, cl
        jne public_6ef2a94
        or cl, al
        mov byte ptr ds : [public_6f012d4], cl
        public_6ef2a94 : nop
        jmp public_6ef2aa0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
/*FIXUP public_6ef2aa0 : nop
        push offset _public_6ef2ab0 @0x6ef2aa0*/
  FIXUP public_6ef2aa0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ef2ab0
        call public_6ef4eab
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef2a80)
    }
}

#undef public_6ef2a94
#undef public_6ef2aa0
