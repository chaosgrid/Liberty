#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_515640);
CLANG_FORWARD_PROC_SYMBOL(public_5379b0);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);

#define public_515652 _public_515652
#define public_5156d0 _public_5156d0
#define public_5156e4 _public_5156e4
#define public_5156f7 _public_5156f7
#define public_51570b _public_51570b
#define public_51571e _public_51571e

PROC_DECLARE(0x515640, internal_515640, public_515640);
extern "C" NAKED register_t __cdecl internal_515640()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_515652
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_515652 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_5156d0
        lea eax, ss:[esp+4]
        push eax
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+8], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov edx, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        call dword ptr ds : [edx+0x94]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_5156d0 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_5156e4
        call public_5379b0
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_5156e4 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_5156f7
        call public_4f7a90
        mov dword ptr ds : [esi+8], 0
        public_5156f7 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_51570b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], 0
        public_51570b : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_51571e
        call public_537ad0
        mov dword ptr ds : [esi+0xC], 0
        public_51571e : nop
        mov dword ptr ds : [esi], 0
        pop esi
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x515640)
    }
}

#undef public_515652
#undef public_5156d0
#undef public_5156e4
#undef public_5156f7
#undef public_51570b
#undef public_51571e
