#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420350);
CLANG_FORWARD_PROC_SYMBOL(public_424c60);

#define public_424c83 _public_424c83

PROC_DECLARE(0x424c60, internal_424c60, public_424c60);
extern "C" NAKED register_t __cdecl internal_424c60()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6679f0]
        test cl, cl
        mov eax, dword ptr ss : [esp+4]
        je public_424c83
        mov dl, byte ptr ds : [public_610865]
        test dl, dl
        jne public_424c83
        test al, al
        je public_424c83
        mov byte ptr ds : [public_610864], 0
        public_424c83 : nop
        mov edx, dword ptr ds : [public_610850]
        push ecx
        mov ecx, dword ptr ds : [public_610854]
        push ecx
        push edx
        push eax
        mov byte ptr ds : [public_610865], al
        call public_420350
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x424c60)
    }
}

#undef public_424c83
