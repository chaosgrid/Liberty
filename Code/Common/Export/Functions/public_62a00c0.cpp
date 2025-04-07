#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a00c0);

#define public_62a00d0 _public_62a00d0
#define public_62a00e1 _public_62a00e1

PROC_DECLARE(0x62a00c0, internal_62a00c0, public_62a00c0);
extern "C" NAKED register_t __cdecl internal_62a00c0()
{
    __asm
    {
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        je public_62a00e1
        push esi
        lea ebx, ds:[ebx]
        public_62a00d0 : nop
        mov eax, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [ecx+4]
        push 1
        call dword ptr ds : [eax+8]
        test esi, esi
        mov ecx, esi
        jne public_62a00d0
        pop esi
        public_62a00e1 : nop
        mov dword ptr ds : [edi+4], 0
        mov dword ptr ds : [edi], 0
        pop edi
        ret 
        UNREACHABLE_TRAP(0x62a00c0)
    }
}

#undef public_62a00d0
#undef public_62a00e1
