#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_52cd40);

#define public_52dc5b _public_52dc5b
#define public_52dce2 _public_52dce2

PROC_DECLARE(0x52dbf0, internal_52dbf0, public_52dbf0);
extern "C" NAKED register_t __cdecl internal_52dbf0()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        je public_52dce2
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_52dce2
        mov edi, dword ptr ds : [public_5c68c8]
        call edi
        test al, al
        je public_52dc5b
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_52dce2
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [eax]
        add ecx, 0x84
        push 0
        push ecx
        call public_42ae40
        mov ecx, dword ptr ds : [esi+0x40]
        add esp, 4
        push eax
        call dword ptr ds : [edi+0x58]
        mov ecx, dword ptr ss : [esp+0x3C]
        push ecx
        mov ecx, esi
        call public_52cd40
        pop edi
        pop esi
        add esp, 0x30
        ret 4
        public_52dc5b : nop
        mov ecx, dword ptr ds : [esi+4]
        call edi
        test al, al
        jne public_52dce2
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        je public_52dce2
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov ecx, dword ptr ds : [esi+0x40]
        lea eax, ss:[esp+8]
        push eax
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov edx, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        call dword ptr ds : [edx+0x94]
        public_52dce2 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        push ecx
        mov ecx, esi
        call public_52cd40
        pop edi
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x52dbf0)
    }
}

#undef public_52dc5b
#undef public_52dce2
