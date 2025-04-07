#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ae80);

#define public_629943a _public_629943a
#define public_629944c _public_629944c
#define public_629945e _public_629945e

PROC_DECLARE(0x6299410, internal_6299410, public_6299410);
extern "C" NAKED register_t __cdecl internal_6299410()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_629ae80
        test byte ptr ds : [edi], 6
        jne public_629945e
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xA0]
        test eax, eax
        jne public_629943a
        or dword ptr ds : [edi+4], 4
        pop edi
        pop esi
        ret 4
        public_629943a : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xB0]
        test al, al
        je public_629944c
        or dword ptr ds : [edi+4], 8
        public_629944c : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xBC]
        test al, al
        je public_629945e
        or dword ptr ds : [edi+4], 2
        public_629945e : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6299410)
    }
}

#undef public_629943a
#undef public_629944c
#undef public_629945e
