#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271610);

#define public_62bf265 _public_62bf265

PROC_DECLARE(0x62bf230, internal_62bf230, public_62bf230);
extern "C" NAKED register_t __cdecl internal_62bf230()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_62bf265
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        jne public_62bf265
        mov edx, dword ptr ds : [eax+0xEC]
        mov eax, dword ptr ds : [edx+8]
        push eax
        call public_6271610
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 4
        public_62bf265 : nop
        mov eax, 0xFFFFFFFD
        ret 4
        UNREACHABLE_TRAP(0x62bf230)
    }
}

#undef public_62bf265
