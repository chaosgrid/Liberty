#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9a18f);

PROC_DECLARE(0x6f9a170, internal_6f9a170, public_6f9a170);
extern "C" NAKED register_t __cdecl internal_6f9a170()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+5]
        test al, al
        jne public_6f9a18f
        mov al, byte ptr ds : [ecx+6]
        test al, al
        jne public_6f9a18f
        mov al, byte ptr ds : [ecx+7]
        test al, al
        jne public_6f9a18f
        mov al, byte ptr ds : [ecx+8]
        test al, al
        jne public_6f9a18f
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6f9a170)
    }
}
