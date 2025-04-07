#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e8f0);

#define public_636e906 _public_636e906
#define public_636e910 _public_636e910

PROC_DECLARE(0x636e8f0, internal_636e8f0, public_636e8f0);
extern "C" NAKED register_t __cdecl internal_636e8f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_636e910
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+edx*4+4]
        test ecx, ecx
        jne public_636e906
        mov eax, dword ptr ds : [eax+edx*4]
        ret 
        public_636e906 : nop
        cmp ecx, 1
        jle public_636e910
        mov eax, dword ptr ds : [eax+ecx*4-4]
        ret 
        public_636e910 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x636e8f0)
    }
}

#undef public_636e906
#undef public_636e910
