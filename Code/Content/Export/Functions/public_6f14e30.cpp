#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f14e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f14e43 _public_6f14e43
#define public_6f14e56 _public_6f14e56
#define public_6f14e75 _public_6f14e75

PROC_DECLARE(0x6f14e30, internal_6f14e30, public_6f14e30);
extern "C" NAKED register_t __cdecl internal_6f14e30()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        push edi
        je public_6f14e75
        mov edx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [edx]
        public_6f14e43 : nop
        mov edi, dword ptr ds : [eax+8]
        cmp dword ptr ds : [edi+4], edx
        je public_6f14e56
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f14e43
        pop edi
        pop esi
        ret 4
        public_6f14e56 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+0x24]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+0x24], eax
        public_6f14e75 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f14e30)
    }
}

#undef public_6f14e43
#undef public_6f14e56
#undef public_6f14e75
