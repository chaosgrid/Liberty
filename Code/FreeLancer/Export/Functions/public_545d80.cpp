#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_533be0);
CLANG_FORWARD_PROC_SYMBOL(public_5379b0);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);

#define public_545d98 _public_545d98
#define public_545e1c _public_545e1c
#define public_545e36 _public_545e36
#define public_545e4b _public_545e4b
#define public_545e61 _public_545e61
#define public_545e76 _public_545e76

PROC_DECLARE(0x545d80, internal_545d80, public_545d80);
extern "C" NAKED register_t __cdecl internal_545d80()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xFC]
        push edi
        xor edi, edi
        cmp ecx, edi
        je public_545d98
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_545d98 : nop
        mov ecx, dword ptr ds : [esi+0xF8]
        cmp ecx, edi
        je public_545e1c
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
        mov ecx, dword ptr ds : [esi+0xF8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_545e1c : nop
        mov ecx, dword ptr ds : [esi+0x100]
        cmp ecx, edi
        je public_545e36
        call public_5379b0
        mov ecx, dword ptr ds : [esi+0x100]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_545e36 : nop
        mov ecx, dword ptr ds : [esi+0xFC]
        cmp ecx, edi
        je public_545e4b
        call public_4f7a90
        mov dword ptr ds : [esi+0xFC], edi
        public_545e4b : nop
        mov eax, dword ptr ds : [esi+0xF8]
        cmp eax, edi
        je public_545e61
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xF8], edi
        public_545e61 : nop
        mov ecx, dword ptr ds : [esi+0x100]
        cmp ecx, edi
        je public_545e76
        call public_537ad0
        mov dword ptr ds : [esi+0x100], edi
        public_545e76 : nop
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        mov ecx, esi
        mov dword ptr ds : [esi+0xF4], edi
        call public_533be0
        pop edi
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x545d80)
    }
}

#undef public_545d98
#undef public_545e1c
#undef public_545e36
#undef public_545e4b
#undef public_545e61
#undef public_545e76
