#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a890);

#define public_6c2a8a7 _public_6c2a8a7
#define public_6c2a8b2 _public_6c2a8b2
#define public_6c2a8bf _public_6c2a8bf
#define public_6c2a8d0 _public_6c2a8d0
#define public_6c2a8dc _public_6c2a8dc
#define public_6c2a8e5 _public_6c2a8e5

PROC_DECLARE(0x6c2a890, internal_6c2a890, public_6c2a890);
extern "C" NAKED register_t __cdecl internal_6c2a890()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x15]
        test al, al
        jne public_6c2a8bf
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6c2a8b2
        public_6c2a8a7 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6c2a8a7
        public_6c2a8b2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6c2a8bf : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6c2a8dc
        lea esp, ss:[esp]
        public_6c2a8d0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6c2a8d0
        public_6c2a8dc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6c2a8e5
        mov dword ptr ds : [ecx], eax
        public_6c2a8e5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6c2a890)
    }
}

#undef public_6c2a8a7
#undef public_6c2a8b2
#undef public_6c2a8bf
#undef public_6c2a8d0
#undef public_6c2a8dc
#undef public_6c2a8e5
