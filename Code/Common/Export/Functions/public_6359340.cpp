#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347c40);
CLANG_FORWARD_PROC_SYMBOL(public_6359340);

#define public_6359357 _public_6359357
#define public_6359370 _public_6359370

PROC_DECLARE(0x6359340, internal_6359340, public_6359340);
extern "C" NAKED register_t __cdecl internal_6359340()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        call public_6347c40
        xor edx, edx
        mov dx, word ptr ds : [eax+2]
        dec edx
        js public_6359370
        push edi
        public_6359357 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+edx*4]
        mov ecx, dword ptr ds : [ecx+0x40]
        mov edi, dword ptr ds : [ecx+0x54]
        and edi, 0xFFFFFF00
        dec edx
        mov dword ptr ds : [ecx+0x54], edi
        jns public_6359357
        pop edi
        public_6359370 : nop
        ret 4
        UNREACHABLE_TRAP(0x6359340)
    }
}

#undef public_6359357
#undef public_6359370
