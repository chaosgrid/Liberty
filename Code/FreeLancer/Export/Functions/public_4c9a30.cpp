#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c9a30);

#define public_4c9a55 _public_4c9a55
#define public_4c9a6a _public_4c9a6a
#define public_4c9a75 _public_4c9a75

PROC_DECLARE(0x4c9a30, internal_4c9a30, public_4c9a30);
extern "C" NAKED register_t __cdecl internal_4c9a30()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_4c9a75
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x24]
        lea ecx, ds:[esi+0x254]
        lea eax, ds:[esi+0x44]
        mov edx, 4
        public_4c9a55 : nop
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        je public_4c9a6a
        mov dword ptr ds : [eax], 0
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        public_4c9a6a : nop
        add ecx, 4
        add eax, 0x84
        dec edx
        jne public_4c9a55
        public_4c9a75 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4c9a30)
    }
}

#undef public_4c9a55
#undef public_4c9a6a
#undef public_4c9a75
