#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea95e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46730);

#define public_6ea95f6 _public_6ea95f6
#define public_6ea9600 _public_6ea9600
#define public_6ea960b _public_6ea960b
#define public_6ea961d _public_6ea961d
#define public_6ea9625 _public_6ea9625

PROC_DECLARE(0x6ea95e0, internal_6ea95e0, public_6ea95e0);
extern "C" NAKED register_t __cdecl internal_6ea95e0()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x74]
        mov edx, dword ptr ds : [eax]
        cmp edx, eax
        mov dword ptr ss : [esp+8], edx
        je public_6ea961d
        mov esi, dword ptr ss : [esp+0x18]
        public_6ea95f6 : nop
        mov ecx, dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6ea960b
        nop 
        public_6ea9600 : nop
        cmp dword ptr ds : [eax+0x14], esi
        je public_6ea9625
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6ea9600
        public_6ea960b : nop
        lea ecx, ss:[esp+8]
        call public_6f46730
        mov edx, dword ptr ss : [esp+8]
        cmp edx, dword ptr ds : [edi+0x74]
        jne public_6ea95f6
        public_6ea961d : nop
        pop edi
        pop esi
        xor al, al
        pop ecx
        ret 0xC
        public_6ea9625 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        add edx, 0x10
        pop esi
        mov dword ptr ds : [eax], edx
        mov al, 1
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ea95e0)
    }
}

#undef public_6ea95f6
#undef public_6ea9600
#undef public_6ea960b
#undef public_6ea961d
#undef public_6ea9625
