#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a270);

#define public_6c29f94 _public_6c29f94
#define public_6c29fb6 _public_6c29fb6
#define public_6c29fc2 _public_6c29fc2

PROC_DECLARE(0x6c29f70, internal_6c29f70, public_6c29f70);
extern "C" NAKED register_t __cdecl internal_6c29f70()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+4]
        mov al, byte ptr ds : [esi+0x28]
        inc ecx
        test al, al
        mov dword ptr ds : [esi+4], ecx
        je public_6c29f94
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [esp+0xC]
        jne public_6c29f94
        inc dword ptr ds : [esi+8]
        jmp public_6c29fb6
        public_6c29f94 : nop
        lea edx, ss:[esp+0xC]
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ds:[esi+0xC]
        call public_6c2a270
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [esi+0x10]
        je public_6c29fb6
        mov dword ptr ds : [esi+0x24], eax
        mov byte ptr ds : [esi+0x28], 1
        public_6c29fb6 : nop
        cmp eax, dword ptr ds : [esi+0x10]
        pop esi
        jne public_6c29fc2
        or eax, 0xFFFFFFFF
        ret 0x14
        public_6c29fc2 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx]
        xor ecx, ecx
        test eax, eax
        setge cl
        dec ecx
        mov eax, ecx
        ret 0x14
        UNREACHABLE_TRAP(0x6c29f70)
    }
}

#undef public_6c29f94
#undef public_6c29fb6
#undef public_6c29fc2
