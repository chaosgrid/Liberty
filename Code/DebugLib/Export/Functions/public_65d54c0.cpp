#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d54f0);
CLANG_FORWARD_PROC_SYMBOL(public_65d7753);

#define public_65d54d4 _public_65d54d4
#define public_65d54e0 _public_65d54e0

PROC_DECLARE(0x65d54c0, internal_65d54c0, public_65d54c0);
extern "C" NAKED register_t __cdecl internal_65d54c0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_65e66bf]
        mov al, 1
        test al, cl
        jne public_65d54d4
        or cl, al
        mov byte ptr ds : [public_65e66bf], cl
        public_65d54d4 : nop
        jmp public_65d54e0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
/*FIXUP public_65d54e0 : nop
        push offset _public_65d54f0 @0x65d54e0*/
  FIXUP public_65d54e0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65d54f0
        call public_65d7753
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65d54c0)
    }
}

#undef public_65d54d4
#undef public_65d54e0
