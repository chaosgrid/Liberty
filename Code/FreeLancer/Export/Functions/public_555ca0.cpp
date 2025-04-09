#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555ca0);

#define public_555cd0 _public_555cd0

PROC_DECLARE(0x555ca0, internal_555ca0, public_555ca0);
extern "C" NAKED register_t __cdecl internal_555ca0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi]
        cmp ecx, 0xFFFFFFFF
        je public_555cd0
        mov eax, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [public_5c6d40]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_555cd0 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x555ca0)
    }
}

#undef public_555cd0
