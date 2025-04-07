#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);

#define public_6f4f2ba _public_6f4f2ba
#define public_6f4f2c9 _public_6f4f2c9
#define public_6f4f2d6 _public_6f4f2d6
#define public_6f4f2f7 _public_6f4f2f7

PROC_DECLARE(0x6f4f2b0, internal_6f4f2b0, public_6f4f2b0);
extern "C" NAKED register_t __cdecl internal_6f4f2b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_6f4f2f7
        push ebx
        push esi
        public_6f4f2ba : nop
        cmp dword ptr ds : [ecx+0xC], 0xFFFFFFFF
        mov esi, dword ptr ds : [ecx]
        jne public_6f4f2c9
        mov eax, 1
        jmp public_6f4f2d6
        public_6f4f2c9 : nop
        mov eax, dword ptr ds : [ecx+0x20]
        cdq 
        and edx, 0x3F
        add eax, edx
        sar eax, 6
        inc eax
        public_6f4f2d6 : nop
        mov edx, dword ptr ds : [public_6f61e28]
        mov ebx, dword ptr ds : [edx+0x78]
        sub ebx, eax
        push 0
        push ecx
        mov dword ptr ds : [edx+0x78], ebx
        call public_6f4fe10
        add esp, 8
        test esi, esi
        mov ecx, esi
        jne public_6f4f2ba
        pop esi
        pop ebx
        public_6f4f2f7 : nop
        ret 
        UNREACHABLE_TRAP(0x6f4f2b0)
    }
}

#undef public_6f4f2ba
#undef public_6f4f2c9
#undef public_6f4f2d6
#undef public_6f4f2f7
