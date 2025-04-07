#include "EngBase-PCH.h"


#define public_662240d _public_662240d
#define public_6622412 _public_6622412
#define public_6622423 _public_6622423

PROC_DECLARE(0x6622400, internal_6622400, public_6622400);
extern "C" NAKED register_t __cdecl internal_6622400()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_662240d
        test ecx, ecx
        jne public_6622412
        public_662240d : nop
        xor eax, eax
        ret 8
        public_6622412 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        test eax, eax
        jne public_6622423
        xor edx, edx
        test edx, edx
        setne al
        ret 8
        public_6622423 : nop
        mov ecx, dword ptr ds : [ecx+0x20]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        xor eax, eax
        test edx, edx
        setne al
        ret 8
        UNREACHABLE_TRAP(0x6622400)
    }
}

#undef public_662240d
#undef public_6622412
#undef public_6622423
