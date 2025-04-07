#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a7bf0);

#define public_62a7c00 _public_62a7c00
#define public_62a7c0c _public_62a7c0c

PROC_DECLARE(0x62a7bf0, internal_62a7bf0, public_62a7bf0);
extern "C" NAKED register_t __cdecl internal_62a7bf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x69]
        test dl, dl
        jne public_62a7c0c
        mov edi, edi
        public_62a7c00 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x69]
        test dl, dl
        je public_62a7c00
        public_62a7c0c : nop
        ret 
        UNREACHABLE_TRAP(0x62a7bf0)
    }
}

#undef public_62a7c00
#undef public_62a7c0c
