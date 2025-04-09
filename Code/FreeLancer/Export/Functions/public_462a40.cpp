#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_462e30);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0840);

#define public_462a69 _public_462a69
#define public_462a7b _public_462a7b
#define public_462a90 _public_462a90
#define public_462aa2 _public_462aa2

PROC_DECLARE(0x462a40, internal_462a40, public_462a40);
extern "C" NAKED register_t __cdecl internal_462a40()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov eax, ecx
        sub eax, 0xEF01
        je public_462a90
        dec eax
        je public_462a69
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        push edx
        push ecx
        mov ecx, esi
        call public_5a0840
        pop esi
        ret 0xC
        public_462a69 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_462a7b
        push 0
        push esi
        call public_59dd00
        add esp, 8
        public_462a7b : nop
        mov al, byte ptr ds : [esi+0x6C]
        and al, 0xFC
        mov ecx, esi
        mov byte ptr ds : [esi+0x6C], al
        call public_462e30
        mov al, 1
        pop esi
        ret 0xC
        public_462a90 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_462aa2
        mov edx, dword ptr ds : [esi]
        add eax, 0x60
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        public_462aa2 : nop
        mov ecx, esi
        call public_462e30
        mov al, 1
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x462a40)
    }
}

#undef public_462a69
#undef public_462a7b
#undef public_462a90
#undef public_462aa2
