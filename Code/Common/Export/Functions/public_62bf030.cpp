#include "Common-PCH.h"


#define public_62bf040 _public_62bf040
#define public_62bf042 _public_62bf042
#define public_62bf058 _public_62bf058

PROC_DECLARE(0x62bf030, internal_62bf030, public_62bf030);
extern "C" NAKED register_t __cdecl internal_62bf030()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        push esi
        mov eax, ecx
        je public_62bf040
        lea esi, ds:[edx+8]
        jmp public_62bf042
        public_62bf040 : nop
        xor esi, esi
        public_62bf042 : nop
        test edx, edx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax+8], ecx
        pop esi
        je public_62bf058
        lea ecx, ds:[edx+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+0x10], edx
        ret 4
        public_62bf058 : nop
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+0x10], edx
        ret 4
        UNREACHABLE_TRAP(0x62bf030)
    }
}

#undef public_62bf040
#undef public_62bf042
#undef public_62bf058
