#include "Common-PCH.h"


#define public_62befdf _public_62befdf
#define public_62befe1 _public_62befe1
#define public_62beffc _public_62beffc
#define public_62beffe _public_62beffe

PROC_DECLARE(0x62befd0, internal_62befd0, public_62befd0);
extern "C" NAKED register_t __cdecl internal_62befd0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_62befdf
        lea edx, ds:[ecx+8]
        jmp public_62befe1
        public_62befdf : nop
        xor edx, edx
        public_62befe1 : nop
        test ecx, ecx
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax], offset public_639f1d4
        mov dword ptr ds : [eax+4], offset public_639f154
        je public_62beffc
        add ecx, 0xC
        jmp public_62beffe
        public_62beffc : nop
        xor ecx, ecx
        public_62beffe : nop
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0xC], offset public_639e004
        mov dword ptr ds : [eax], offset public_639effc
        mov dword ptr ds : [eax+4], offset public_639ef7c
        mov dword ptr ds : [eax+0xC], offset public_639ef74
        ret 4
        UNREACHABLE_TRAP(0x62befd0)
    }
}

#undef public_62befdf
#undef public_62befe1
#undef public_62beffc
#undef public_62beffe
