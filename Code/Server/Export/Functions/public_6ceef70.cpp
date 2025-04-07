#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ceef70);

#define public_6ceef82 _public_6ceef82
#define public_6ceef84 _public_6ceef84

PROC_DECLARE(0x6ceef70, internal_6ceef70, public_6ceef70);
extern "C" NAKED register_t __cdecl internal_6ceef70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6ceef82
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6ceef84
        public_6ceef82 : nop
        xor eax, eax
        public_6ceef84 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], ecx
        mov ecx, eax
        jmp dword ptr ds : [edx+0x98]
        UNREACHABLE_TRAP(0x6ceef70)
    }
}

#undef public_6ceef82
#undef public_6ceef84
