#include "Server-PCH.h"


#define public_6d2b784 _public_6d2b784
#define public_6d2b786 _public_6d2b786
#define public_6d2b78e _public_6d2b78e
#define public_6d2b79e _public_6d2b79e

PROC_DECLARE(0x6d2b760, internal_6d2b760, public_6d2b760);
extern "C" NAKED register_t __cdecl internal_6d2b760()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp word ptr ds : [eax], 0
        je public_6d2b79e
        mov ecx, dword ptr ds : [ecx+4]
        add eax, 2
        test ecx, ecx
        je public_6d2b78e
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+8]
        push eax
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d2b784 : nop
        je public_6d2b79e
        public_6d2b786 : nop
        mov eax, 1
        ret 8
        public_6d2b78e : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        je public_6d2b786
        cmp dword ptr ds : [ecx+8], eax
        jmp public_6d2b784
        public_6d2b79e : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6d2b760)
    }
}

#undef public_6d2b784
#undef public_6d2b786
#undef public_6d2b78e
#undef public_6d2b79e
