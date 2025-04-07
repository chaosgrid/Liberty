#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4eab);

#define public_6ef3e54 _public_6ef3e54
#define public_6ef3e60 _public_6ef3e60

PROC_DECLARE(0x6ef3e40, internal_6ef3e40, public_6ef3e40);
extern "C" NAKED register_t __cdecl internal_6ef3e40()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6f012d4]
        mov al, 1
        test al, cl
        jne public_6ef3e54
        or cl, al
        mov byte ptr ds : [public_6f012d4], cl
        public_6ef3e54 : nop
        jmp public_6ef3e60
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
/*FIXUP public_6ef3e60 : nop
        push offset _public_6ef2ab0 @0x6ef3e60*/
  FIXUP public_6ef3e60 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ef2ab0
        call public_6ef4eab
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef3e40)
    }
}

#undef public_6ef3e54
#undef public_6ef3e60
