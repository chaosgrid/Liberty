#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93400);

#define public_6f9340f _public_6f9340f

PROC_DECLARE(0x6f93400, internal_6f93400, public_6f93400);
extern "C" NAKED register_t __cdecl internal_6f93400()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f9340f
        xor edx, edx
        test edx, edx
        sete al
        ret 
        public_6f9340f : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x6BCA1AF3
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        xor eax, eax
        test edx, edx
        sete al
        ret 
        UNREACHABLE_TRAP(0x6f93400)
    }
}

#undef public_6f9340f
