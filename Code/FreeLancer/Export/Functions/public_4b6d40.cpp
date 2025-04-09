#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_47b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_47b410);
CLANG_FORWARD_PROC_SYMBOL(public_47f240);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);

#define public_4b6d81 _public_4b6d81
#define public_4b6d99 _public_4b6d99
#define public_4b6db1 _public_4b6db1
#define public_4b6dc9 _public_4b6dc9
#define public_4b6de1 _public_4b6de1
#define public_4b6e03 _public_4b6e03
#define public_4b6e0e _public_4b6e0e

PROC_DECLARE(0x4b6d40, internal_4b6d40, public_4b6d40);
extern "C" NAKED register_t __cdecl internal_4b6d40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        mov ecx, esi
        call public_47b3e0
        mov bl, al
        test bl, bl
        je public_4b6e0e
        mov ecx, esi
        call public_47b410
        mov ecx, dword ptr ds : [esi+0x384]
        test ecx, ecx
        je public_4b6d81
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0xBCB
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        public_4b6d81 : nop
        mov ecx, dword ptr ds : [esi+0x4B0]
        test ecx, ecx
        je public_4b6d99
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        public_4b6d99 : nop
        mov ecx, dword ptr ds : [esi+0x3B4]
        test ecx, ecx
        je public_4b6db1
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        public_4b6db1 : nop
        mov ecx, dword ptr ds : [esi+0x340]
        test ecx, ecx
        je public_4b6dc9
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        public_4b6dc9 : nop
        mov ecx, dword ptr ds : [esi+0x4DC]
        test ecx, ecx
        je public_4b6de1
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        public_4b6de1 : nop
        mov ecx, dword ptr ds : [esi+0x4D0]
        test ecx, ecx
        je public_4b6e03
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov dword ptr ds : [esi+0x4D0], 0
        public_4b6e03 : nop
        push 1
        push 4
        mov ecx, esi
        call public_47f240
        public_4b6e0e : nop
        push 0xF
        lea ecx, ds:[esi+0x974]
        call public_5760d0
        pop esi
        mov al, bl
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x4b6d40)
    }
}

#undef public_4b6d81
#undef public_4b6d99
#undef public_4b6db1
#undef public_4b6dc9
#undef public_4b6de1
#undef public_4b6e03
#undef public_4b6e0e
