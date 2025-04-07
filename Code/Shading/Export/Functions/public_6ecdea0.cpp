#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecdea0);

#define public_6ecdeb7 _public_6ecdeb7
#define public_6ecdec2 _public_6ecdec2
#define public_6ecdecf _public_6ecdecf
#define public_6ecdee0 _public_6ecdee0
#define public_6ecdeec _public_6ecdeec
#define public_6ecdef5 _public_6ecdef5

PROC_DECLARE(0x6ecdea0, internal_6ecdea0, public_6ecdea0);
extern "C" NAKED register_t __cdecl internal_6ecdea0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x19]
        test al, al
        jne public_6ecdecf
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        jne public_6ecdec2
        public_6ecdeb7 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        je public_6ecdeb7
        public_6ecdec2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6ecdecf : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6ecdeec
        lea esp, ss:[esp]
        public_6ecdee0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6ecdee0
        public_6ecdeec : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6ecdef5
        mov dword ptr ds : [ecx], eax
        public_6ecdef5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ecdea0)
    }
}

#undef public_6ecdeb7
#undef public_6ecdec2
#undef public_6ecdecf
#undef public_6ecdee0
#undef public_6ecdeec
#undef public_6ecdef5
