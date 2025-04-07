#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f78d90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f78da0 _public_6f78da0
#define public_6f78daf _public_6f78daf

PROC_DECLARE(0x6f78d90, internal_6f78d90, public_6f78d90);
extern "C" NAKED register_t __cdecl internal_6f78d90()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_6f78daf
        nop 
        public_6f78da0 : nop
        lea ecx, ds:[esi+4]
        call public_6eec8d0
        add esi, 0x18
        cmp esi, ebx
        jne public_6f78da0
        public_6f78daf : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f78d90)
    }
}

#undef public_6f78da0
#undef public_6f78daf
