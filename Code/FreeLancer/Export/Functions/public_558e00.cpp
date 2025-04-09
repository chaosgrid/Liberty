#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555f00);
CLANG_FORWARD_PROC_SYMBOL(public_556090);
CLANG_FORWARD_PROC_SYMBOL(public_558e00);

#define public_558e0c _public_558e0c
#define public_558e5d _public_558e5d
#define public_558e7f _public_558e7f

PROC_DECLARE(0x558e00, internal_558e00, public_558e00);
extern "C" NAKED register_t __cdecl internal_558e00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_679a0c]
        test eax, eax
        je public_558e0c
        xor al, al
        ret 
        public_558e0c : nop
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov byte ptr ds : [public_679a04], 1
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+8]
        mov dword ptr ds : [public_6799fc], eax
        mov ecx, dword ptr ds : [esi+4]
        push edx
        push esi
        mov dword ptr ds : [public_679a00], ecx
        call public_556090
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_679a08]
        add esp, 8
        cmp ecx, eax
        je public_558e7f
        test eax, eax
        je public_558e5d
        push esi
        mov byte ptr ds : [eax+0xD], 0
        mov ecx, dword ptr ds : [public_679a08]
        push 2
        call public_555f00
        mov ecx, dword ptr ss : [esp+8]
        public_558e5d : nop
        test ecx, ecx
        mov eax, ecx
        mov dword ptr ds : [public_679a08], eax
        je public_558e7f
        push esi
        mov byte ptr ds : [ecx+0xD], 1
        mov ecx, dword ptr ds : [public_679a08]
        push 1
        call public_555f00
        mov eax, dword ptr ds : [public_679a08]
        public_558e7f : nop
        test eax, eax
        setne al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x558e00)
    }
}

#undef public_558e0c
#undef public_558e5d
#undef public_558e7f
