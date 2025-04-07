#include "Content-PCH.h"


#define public_6f70543 _public_6f70543

PROC_DECLARE(0x6f70530, internal_6f70530, public_6f70530);
extern "C" NAKED register_t __cdecl internal_6f70530()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        push edi
        mov edx, offset public_6fd1d6c
        mov esi, 0x20
        or ebp, 0xFFFFFFFF
        public_6f70543 : nop
        mov dword ptr ds : [edx-0x10], ebx
        mov dword ptr ds : [edx], ebx
        mov dword ptr ds : [edx+4], ebp
        mov dword ptr ds : [edx+8], ebp
        mov byte ptr ds : [edx-0x14], 1
        mov byte ptr ds : [edx+0x4C], bl
        lea edi, ds:[edx+0x50]
        xor eax, eax
        mov ecx, 0x20
        add edx, 0xE4
        dec esi
        rep stosd
        jne public_6f70543
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f70530)
    }
}

#undef public_6f70543
