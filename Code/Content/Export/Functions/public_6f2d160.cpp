#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d160);

#define public_6f2d174 _public_6f2d174

PROC_DECLARE(0x6f2d160, internal_6f2d160, public_6f2d160);
extern "C" NAKED register_t __cdecl internal_6f2d160()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3030]
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea esi, ss:[ebp+0x28]
        mov edi, 0xA
        public_6f2d174 : nop
        mov ecx, esi
        call ebx
        add esi, 4
        dec edi
        jne public_6f2d174
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xF0], 0
        mov eax, ebp
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f2d160)
    }
}

#undef public_6f2d174
