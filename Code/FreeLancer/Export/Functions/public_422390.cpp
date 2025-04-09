#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422390);

#define public_4223c1 _public_4223c1

PROC_DECLARE(0x422390, internal_422390, public_422390);
extern "C" NAKED register_t __cdecl internal_422390()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xBA2
        jne public_4223c1
        mov ecx, dword ptr ds : [public_664994]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [public_664998]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [public_66499c]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [public_6649a0]
        mov dword ptr ds : [eax+0xC], edx
        public_4223c1 : nop
        ret 
        UNREACHABLE_TRAP(0x422390)
    }
}

#undef public_4223c1
