#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f3520);

#define public_65f3536 _public_65f3536

PROC_DECLARE(0x65f3520, internal_65f3520, public_65f3520);
extern "C" NAKED register_t __cdecl internal_65f3520()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_65f3536
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_65f3536 : nop
        ret 
        UNREACHABLE_TRAP(0x65f3520)
    }
}

#undef public_65f3536
