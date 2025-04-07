#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66128f0);
CLANG_FORWARD_PROC_SYMBOL(public_661b070);

#define public_66128fc _public_66128fc
#define public_6612915 _public_6612915

PROC_DECLARE(0x66128f0, internal_66128f0, public_66128f0);
extern "C" NAKED register_t __cdecl internal_66128f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        push edi
        mov edi, dword ptr ds : [ecx+0x10]
        cmp esi, edi
        jae public_6612915
        public_66128fc : nop
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ds : [eax+0x38]
        and dl, 0xFE
        mov byte ptr ds : [eax+0x38], dl
        mov ecx, dword ptr ds : [esi]
        call public_661b070
        add esi, 4
        cmp esi, edi
        jb public_66128fc
        public_6612915 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x66128f0)
    }
}

#undef public_66128fc
#undef public_6612915
