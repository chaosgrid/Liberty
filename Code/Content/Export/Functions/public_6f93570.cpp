#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93570);

#define public_6f93583 _public_6f93583

PROC_DECLARE(0x6f93570, internal_6f93570, public_6f93570);
extern "C" NAKED register_t __cdecl internal_6f93570()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6f93583
        xor eax, eax
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret 
        public_6f93583 : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret 
        UNREACHABLE_TRAP(0x6f93570)
    }
}

#undef public_6f93583
