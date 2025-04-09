#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555f00);
CLANG_FORWARD_PROC_SYMBOL(public_556090);
CLANG_FORWARD_PROC_SYMBOL(public_558ed0);

#define public_558ee0 _public_558ee0
#define public_558f31 _public_558f31
#define public_558f55 _public_558f55
#define public_558f69 _public_558f69
#define public_558f76 _public_558f76

PROC_DECLARE(0x558ed0, internal_558ed0, public_558ed0);
extern "C" NAKED register_t __cdecl internal_558ed0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_679a0c]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        je public_558ee0
        xor al, al
        pop ebx
        ret 
        public_558ee0 : nop
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [public_679a04], 1
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [public_6799fc], eax
        mov ecx, dword ptr ds : [esi+4]
        push edx
        push esi
        mov dword ptr ds : [public_679a00], ecx
        call public_556090
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_679a08]
        add esp, 8
        cmp eax, ecx
        je public_558f55
        cmp ecx, ebx
        je public_558f31
        push esi
        mov byte ptr ds : [ecx+0xD], bl
        mov ecx, dword ptr ds : [public_679a08]
        push 2
        call public_555f00
        mov eax, dword ptr ss : [esp+0x10]
        public_558f31 : nop
        cmp eax, ebx
        mov ecx, eax
        mov dword ptr ds : [public_679a08], ecx
        je public_558f55
        push esi
        mov byte ptr ds : [eax+0xD], 1
        mov ecx, dword ptr ds : [public_679a08]
        push 1
        call public_555f00
        mov ecx, dword ptr ds : [public_679a08]
        public_558f55 : nop
        mov edx, dword ptr ss : [esp+0xC]
        or eax, 0xFFFFFFFF
        cmp edx, 0x201
        jne public_558f69
        mov eax, 3
        public_558f69 : nop
        cmp ecx, ebx
        je public_558f76
        push esi
        push eax
        call public_555f00
        mov bl, 1
        public_558f76 : nop
        pop esi
        mov al, bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x558ed0)
    }
}

#undef public_558ee0
#undef public_558f31
#undef public_558f55
#undef public_558f69
#undef public_558f76
