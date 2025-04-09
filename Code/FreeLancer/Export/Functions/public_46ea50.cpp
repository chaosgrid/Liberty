#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ea50);

#define public_46ea78 _public_46ea78

PROC_DECLARE(0x46ea50, internal_46ea50, public_46ea50);
extern "C" NAKED register_t __cdecl internal_46ea50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        cmp eax, ecx
        je public_46ea78
        mov word ptr ds : [eax+4], cx
        mov byte ptr ds : [eax+6], cl
        mov byte ptr ds : [eax+7], cl
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        public_46ea78 : nop
        ret 
        UNREACHABLE_TRAP(0x46ea50)
    }
}

#undef public_46ea78
