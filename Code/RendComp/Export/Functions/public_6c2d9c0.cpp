#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2d480);
CLANG_FORWARD_PROC_SYMBOL(public_6c2d490);

#define public_6c2d9f8 _public_6c2d9f8
#define public_6c2d9ff _public_6c2d9ff

PROC_DECLARE(0x6c2d9c0, internal_6c2d9c0, public_6c2d9c0);
extern "C" NAKED register_t __cdecl internal_6c2d9c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, 0xFFFFFFFF
        je public_6c2d9ff
        test esi, esi
        je public_6c2d9ff
        mov ecx, dword ptr ds : [esi+0x14]
        dec ecx
        mov eax, ecx
        test eax, eax
        push edi
        mov dword ptr ds : [esi+0x14], ecx
        jg public_6c2d9f8
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_6c2d9f8
        mov edi, dword ptr ds : [eax+0x28]
        test edi, edi
        je public_6c2d9f8
        mov ecx, edi
        call public_6c2d480
        mov ecx, edi
        call public_6c2d490
        public_6c2d9f8 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        pop edi
        public_6c2d9ff : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6c2d9c0)
    }
}

#undef public_6c2d9f8
#undef public_6c2d9ff
