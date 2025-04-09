#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2d80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4a2d92 _public_4a2d92
#define public_4a2da7 _public_4a2da7
#define public_4a2dae _public_4a2dae

PROC_DECLARE(0x4a2d80, internal_4a2d80, public_4a2d80);
extern "C" NAKED register_t __cdecl internal_4a2d80()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        xor ebp, ebp
        cmp esi, ebx
        je public_4a2dae
        public_4a2d92 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, ebp
        je public_4a2da7
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        public_4a2da7 : nop
        add esi, 8
        cmp esi, ebx
        jne public_4a2d92
        public_4a2dae : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        mov dword ptr ds : [edi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4a2d80)
    }
}

#undef public_4a2d92
#undef public_4a2da7
#undef public_4a2dae
