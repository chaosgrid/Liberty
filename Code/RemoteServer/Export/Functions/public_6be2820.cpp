#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc850);

#define public_6be2831 _public_6be2831

PROC_DECLARE(0x6be2820, internal_6be2820, public_6be2820);
extern "C" NAKED register_t __cdecl internal_6be2820()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        test eax, eax
        je public_6be2831
        mov ecx, dword ptr ss : [esp+4]
        push eax
        call public_6bdc850
        public_6be2831 : nop
        ret 4
        UNREACHABLE_TRAP(0x6be2820)
    }
}

#undef public_6be2831
