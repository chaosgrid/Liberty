#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344580);
CLANG_FORWARD_PROC_SYMBOL(public_6350350);

#define public_6350375 _public_6350375
#define public_6350385 _public_6350385

PROC_DECLARE(0x6350350, internal_6350350, public_6350350);
extern "C" NAKED register_t __cdecl internal_6350350()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x14]
        test ah, 0xC
        je public_6350385
        and eax, 0xFFFCF3FF
        mov dword ptr ds : [esi+0x14], eax
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_6350375
        push esi
        call public_6344580
        public_6350375 : nop
        mov ecx, dword ptr ds : [esi+0x44]
        mov ecx, dword ptr ds : [ecx+0x1C]
        test ecx, ecx
        je public_6350385
        push esi
        call public_6344580
        public_6350385 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6350350)
    }
}

#undef public_6350375
#undef public_6350385
