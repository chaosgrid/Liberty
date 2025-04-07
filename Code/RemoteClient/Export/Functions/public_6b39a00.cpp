#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d0e);

#define public_6b39a2e _public_6b39a2e
#define public_6b39a50 _public_6b39a50

PROC_DECLARE(0x6b39a00, internal_6b39a00, public_6b39a00);
extern "C" NAKED register_t __cdecl internal_6b39a00()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x210]
        dec ecx
        test esi, esi
        mov dword ptr ds : [edi+0x210], ecx
        jbe public_6b39a2e
        cmp esi, 0x80
        ja public_6b39a2e
        mov ecx, dword ptr ds : [edi+esi*4+0xC]
        test ecx, ecx
        je public_6b39a2e
        call public_6b69d0e
        public_6b39a2e : nop
        mov ecx, dword ptr ds : [public_6b73d48]
        mov eax, dword ptr ds : [ecx]
        push 0
        push esi
        call dword ptr ds : [eax+0x40]
        test esi, esi
        jbe public_6b39a50
        cmp esi, 0x80
        ja public_6b39a50
        mov dword ptr ds : [edi+esi*4+0xC], 0
        public_6b39a50 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b39a00)
    }
}

#undef public_6b39a2e
#undef public_6b39a50
