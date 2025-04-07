#include "Common-PCH.h"


#define public_62f9548 _public_62f9548
#define public_62f9552 _public_62f9552
#define public_62f955e _public_62f955e

PROC_DECLARE(0x62f9530, internal_62f9530, public_62f9530);
extern "C" NAKED register_t __cdecl internal_62f9530()
{
    __asm
    {
        mov cx, word ptr ss : [esp+4]
        test cx, cx
        je public_62f955e
        mov edx, dword ptr ds : [public_63fcb00]
        test edx, edx
        jne public_62f9548
        xor eax, eax
        jmp public_62f9552
        public_62f9548 : nop
        mov eax, dword ptr ds : [public_63fcb04]
        sub eax, edx
        sar eax, 2
        public_62f9552 : nop
        movzx ecx, cx
        cmp ecx, eax
        ja public_62f955e
        mov eax, dword ptr ds : [edx+ecx*4-4]
        ret 
        public_62f955e : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62f9530)
    }
}

#undef public_62f9548
#undef public_62f9552
#undef public_62f955e
