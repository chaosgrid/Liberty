#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6290390);

#define public_62903a0 _public_62903a0
#define public_62903ac _public_62903ac

PROC_DECLARE(0x6290390, internal_6290390, public_6290390);
extern "C" NAKED register_t __cdecl internal_6290390()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        jne public_62903ac
        mov edi, edi
        public_62903a0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        je public_62903a0
        public_62903ac : nop
        ret 
        UNREACHABLE_TRAP(0x6290390)
    }
}

#undef public_62903a0
#undef public_62903ac
