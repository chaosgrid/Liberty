#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ecaf0);

#define public_62ecb0d _public_62ecb0d
#define public_62ecb10 _public_62ecb10
#define public_62ecb18 _public_62ecb18

PROC_DECLARE(0x62ecaf0, internal_62ecaf0, public_62ecaf0);
extern "C" NAKED register_t __cdecl internal_62ecaf0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xC5]
        test al, al
        jne public_62ecb18
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_62ecb0d
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62ecb0d
        mov ecx, dword ptr ds : [ecx+0x14]
        jmp public_62ecb10
        public_62ecb0d : nop
        mov ecx, dword ptr ds : [ecx+0xC]
        public_62ecb10 : nop
        test ecx, ecx
        je public_62ecb18
        lea eax, ds:[ecx-8]
        ret 
        public_62ecb18 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62ecaf0)
    }
}

#undef public_62ecb0d
#undef public_62ecb10
#undef public_62ecb18
