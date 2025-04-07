#include "Movie-PCH.h"


#define public_6ad61f7 _public_6ad61f7
#define public_6ad620c _public_6ad620c
#define public_6ad6220 _public_6ad6220

PROC_DECLARE(0x6ad61d7, internal_6ad61d7, public_6ad61d7);
extern "C" NAKED register_t __cdecl internal_6ad61d7()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        and dword ptr ds : [public_6ae1100], 0
        cmp eax, 0xFFFFFFFE
        jne public_6ad61f7
        mov dword ptr ds : [public_6ae1100], 1
        jmp dword ptr ds : [public_6ada09c]
        public_6ad61f7 : nop
        cmp eax, 0xFFFFFFFD
        jne public_6ad620c
        mov dword ptr ds : [public_6ae1100], 1
        jmp dword ptr ds : [public_6ada0a0]
        public_6ad620c : nop
        cmp eax, 0xFFFFFFFC
        jne public_6ad6220
        mov eax, dword ptr ds : [public_6ae0f74]
        mov dword ptr ds : [public_6ae1100], 1
        public_6ad6220 : nop
        ret 
        UNREACHABLE_TRAP(0x6ad61d7)
    }
}

#undef public_6ad61f7
#undef public_6ad620c
#undef public_6ad6220
