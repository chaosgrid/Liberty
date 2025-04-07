#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfe0);

#define public_62fcff0 _public_62fcff0
#define public_62fcffc _public_62fcffc

PROC_DECLARE(0x62fcfe0, internal_62fcfe0, public_62fcfe0);
extern "C" NAKED register_t __cdecl internal_62fcfe0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x41]
        test dl, dl
        jne public_62fcffc
        mov edi, edi
        public_62fcff0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x41]
        test dl, dl
        je public_62fcff0
        public_62fcffc : nop
        ret 
        UNREACHABLE_TRAP(0x62fcfe0)
    }
}

#undef public_62fcff0
#undef public_62fcffc
