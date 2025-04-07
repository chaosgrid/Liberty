#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec8210);

#define public_6ec8230 _public_6ec8230

PROC_DECLARE(0x6ec8210, internal_6ec8210, public_6ec8210);
extern "C" NAKED register_t __cdecl internal_6ec8210()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_6ec8230
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov dword ptr ds : [ecx+4], eax
        je public_6ec8230
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6ec8230 : nop
        ret 
        UNREACHABLE_TRAP(0x6ec8210)
    }
}

#undef public_6ec8230
