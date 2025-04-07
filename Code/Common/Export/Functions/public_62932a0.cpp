#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62932a0);
CLANG_FORWARD_PROC_SYMBOL(public_629eda0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62932e7 _public_62932e7
#define public_62932f2 _public_62932f2
#define public_62932f4 _public_62932f4
#define public_629332e _public_629332e
#define public_6293340 _public_6293340
#define public_629336b _public_629336b
#define public_6293376 _public_6293376

PROC_DECLARE(0x62932a0, internal_62932a0, public_62932a0);
extern "C" NAKED register_t __cdecl internal_62932a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        mov edi, ecx
        call public_629eda0
        test al, al
        je public_6293376
        push esi
        call dword ptr ds : [public_6399024]
        mov edx, dword ptr ds : [edi+0x24]
        mov esi, eax
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        push edx
        push eax
        call dword ptr ds : [ecx+0x80]
        mov ecx, dword ptr ds : [eax+0x58]
        test ecx, ecx
        je public_6293340
        mov eax, dword ptr ds : [ecx+0x24]
        mov ecx, dword ptr ds : [ecx+0x28]
        cmp eax, ecx
        je public_62932f2
        public_62932e7 : nop
        cmp dword ptr ds : [eax], esi
        je public_62932f4
        add eax, 4
        cmp eax, ecx
        jne public_62932e7
        public_62932f2 : nop
        mov eax, ecx
        public_62932f4 : nop
        cmp eax, ecx
        je public_6293340
        push 0x10
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_629332e
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov dword ptr ds : [eax+8], 0
        mov byte ptr ds : [eax+0xC], 0
        mov dword ptr ds : [eax], offset public_639c6cc
        mov dword ptr ds : [edi+0x28], eax
        mov edx, dword ptr ds : [eax]
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        pop edi
        pop esi
        ret 4
        public_629332e : nop
        xor eax, eax
        mov dword ptr ds : [edi+0x28], eax
        mov edx, dword ptr ds : [eax]
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        pop edi
        pop esi
        ret 4
        public_6293340 : nop
        push 8
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_629336b
        mov ecx, eax
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], offset public_639c6e8
        mov dword ptr ds : [edi+0x28], ecx
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x10]
        pop edi
        pop esi
        ret 4
        public_629336b : nop
        xor ecx, ecx
        mov dword ptr ds : [edi+0x28], ecx
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x10]
        public_6293376 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62932a0)
    }
}

#undef public_62932e7
#undef public_62932f2
#undef public_62932f4
#undef public_629332e
#undef public_6293340
#undef public_629336b
#undef public_6293376
