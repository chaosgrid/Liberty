#include "ReadFile-PCH.h"


#define public_6b77484 _public_6b77484
#define public_6b7748f _public_6b7748f
#define public_6b77493 _public_6b77493
#define public_6b774a4 _public_6b774a4

PROC_DECLARE(0x6b77460, internal_6b77460, public_6b77460);
extern "C" NAKED register_t __cdecl internal_6b77460()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        jne public_6b774a4
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+4]
        dec eax
        je public_6b77484
        dec eax
        jne public_6b7748f
        mov eax, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        sub eax, edx
        jmp public_6b77493
        public_6b77484 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx+0x10]
        add eax, edx
        jmp public_6b77493
        public_6b7748f : nop
        mov eax, dword ptr ss : [esp+0xC]
        public_6b77493 : nop
        mov dword ptr ds : [ecx+0x10], eax
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_6b774a4
        mov dword ptr ds : [ecx], 0
        public_6b774a4 : nop
        ret 0x14
        UNREACHABLE_TRAP(0x6b77460)
    }
}

#undef public_6b77484
#undef public_6b7748f
#undef public_6b77493
#undef public_6b774a4
