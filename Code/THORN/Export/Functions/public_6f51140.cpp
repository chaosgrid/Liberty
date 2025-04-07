#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f270);
CLANG_FORWARD_PROC_SYMBOL(public_6f51140);

#define public_6f5114a _public_6f5114a

PROC_DECLARE(0x6f51140, internal_6f51140, public_6f51140);
extern "C" NAKED register_t __cdecl internal_6f51140()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor edi, edi
        mov esi, offset public_6f60e60
        public_6f5114a : nop
        mov eax, dword ptr ds : [esi]
        push eax
        lea ebx, ds:[edi+0x104]
        call public_6f4f270
        add esp, 4
        add esi, 4
        inc edi
        cmp esi, offset public_6f60ea0
        mov dword ptr ds : [eax+4], ebx
        jb public_6f5114a
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f51140)
    }
}

#undef public_6f5114a
