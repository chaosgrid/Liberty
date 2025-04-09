#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4285c0);

#define public_4285d1 _public_4285d1
#define public_4285e5 _public_4285e5
#define public_4285ea _public_4285ea

PROC_DECLARE(0x4285c0, internal_4285c0, public_4285c0);
extern "C" NAKED register_t __cdecl internal_4285c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_667c70]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_4285ea
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        public_4285d1 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp dword ptr ds : [ecx+0x18], edi
        mov esi, dword ptr ds : [esi]
        jne public_4285e5
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [public_667c70]
        public_4285e5 : nop
        cmp esi, eax
        jne public_4285d1
        pop edi
        public_4285ea : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4285c0)
    }
}

#undef public_4285d1
#undef public_4285e5
#undef public_4285ea
