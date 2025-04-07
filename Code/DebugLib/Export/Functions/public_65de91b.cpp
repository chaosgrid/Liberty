#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65de88a);
CLANG_FORWARD_PROC_SYMBOL(public_65de893);
CLANG_FORWARD_PROC_SYMBOL(public_65de91b);

#define public_65de946 _public_65de946

PROC_DECLARE(0x65de91b, internal_65de91b, public_65de91b);
extern "C" NAKED register_t __cdecl internal_65de91b()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_65e7a40]
        jae public_65de946
        mov ecx, eax
        and eax, 0x1F
        sar ecx, 5
        lea eax, ds:[eax+eax*8]
        mov ecx, dword ptr ds : [ecx*4+public_65e7940]
        test byte ptr ds : [ecx+eax*4+4], 1
        lea eax, ds:[ecx+eax*4]
        je public_65de946
        mov eax, dword ptr ds : [eax]
        ret 
        public_65de946 : nop
        call public_65de88a
        mov dword ptr ds : [eax], 9
        call public_65de893
        and dword ptr ds : [eax], 0
        or eax, 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x65de91b)
    }
}

#undef public_65de946
