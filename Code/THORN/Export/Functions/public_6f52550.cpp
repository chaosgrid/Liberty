#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52550);
CLANG_FORWARD_PROC_SYMBOL(public_6f52580);

#define public_6f5255b _public_6f5255b

PROC_DECLARE(0x6f52550, internal_6f52550, public_6f52550);
extern "C" NAKED register_t __cdecl internal_6f52550()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        jne public_6f5255b
        xor eax, eax
        ret 
        public_6f5255b : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea edx, ds:[eax+0x14]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], offset _public_6f52580
        mov dword ptr ds : [eax+0x10], ecx
        ret 
        UNREACHABLE_TRAP(0x6f52550)
    }
}

#undef public_6f5255b
