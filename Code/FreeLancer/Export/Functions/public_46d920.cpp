#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46d920);

#define public_46d934 _public_46d934
#define public_46d93e _public_46d93e
#define public_46d942 _public_46d942
#define public_46d947 _public_46d947

PROC_DECLARE(0x46d920, internal_46d920, public_46d920);
extern "C" NAKED register_t __cdecl internal_46d920()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_46d947
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_46d934 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jbe public_46d93e
        mov eax, dword ptr ds : [eax+8]
        jmp public_46d942
        public_46d93e : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_46d942 : nop
        cmp eax, ecx
        jne public_46d934
        pop esi
        public_46d947 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x46d920)
    }
}

#undef public_46d934
#undef public_46d93e
#undef public_46d942
#undef public_46d947
