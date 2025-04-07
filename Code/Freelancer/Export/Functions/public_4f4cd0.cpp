#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f4cd0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4f4d1e _public_4f4d1e

PROC_DECLARE(0x4f4cd0, internal_4f4cd0, public_4f4cd0);
extern "C" NAKED register_t __cdecl internal_4f4cd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_674bc8]
        test eax, eax
        je public_4f4d1e
        call public_54baf0
        test eax, eax
        je public_4f4d1e
        mov edx, dword ptr ds : [public_674bc8]
        mov ecx, dword ptr ds : [edx+0x364]
        test ecx, ecx
        je public_4f4d1e
        add ecx, 0xFFFFFFF8
        test ecx, ecx
        je public_4f4d1e
        mov cl, byte ptr ds : [edx+0x38C]
        test cl, cl
        je public_4f4d1e
        mov edx, dword ptr ds : [public_673344]
        push edx
        mov edx, dword ptr ds : [public_5c6368]
        movzx edx, word ptr ds : [edx]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        push 0
        call dword ptr ds : [eax+0x48]
        public_4f4d1e : nop
        ret 
        UNREACHABLE_TRAP(0x4f4cd0)
    }
}

#undef public_4f4d1e
