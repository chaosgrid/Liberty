#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4320);
CLANG_FORWARD_PROC_SYMBOL(public_4c45b0);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_548eb0);

#define public_53c69f _public_53c69f
#define public_53c6a1 _public_53c6a1
#define public_53c6cf _public_53c6cf
#define public_53c710 _public_53c710
#define public_53c721 _public_53c721

PROC_DECLARE(0x53c660, internal_53c660, public_53c660);
extern "C" NAKED register_t __cdecl internal_53c660()
{
    __asm
    {
        push esi
        call dword ptr ds : [public_5c60d0]
        test al, al
        mov esi, dword ptr ss : [esp+0xC]
        jne public_53c6cf
        mov eax, dword ptr ds : [esi]
        push 0
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_53c6cf
        add eax, 0xC
        test eax, eax
        je public_53c69f
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_53c69f
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_53c6a1
        public_53c69f : nop
        xor eax, eax
        public_53c6a1 : nop
        xor edx, edx
        mov dx, word ptr ds : [esi+4]
        lea ecx, ds:[eax+0xE4]
        push edx
        call dword ptr ds : [public_5c6574]
        push eax
        call dword ptr ds : [public_5c69a4]
        add esp, 4
        test eax, eax
        je public_53c6cf
        movzx ecx, word ptr ds : [esi+6]
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c694c]
        public_53c6cf : nop
        mov edx, dword ptr ds : [esi]
        push edx
        call public_548eb0
        add esp, 4
        test al, al
        je public_53c721
        xor eax, eax
        mov ax, word ptr ds : [esi+4]
        push eax
        call public_4c45b0
        add esp, 4
        test eax, eax
        je public_53c721
        movzx ecx, word ptr ds : [esi+6]
        cmp dword ptr ds : [eax+0x14], ecx
        push ecx
        jle public_53c710
        xor ecx, ecx
        mov cx, word ptr ds : [eax+2]
        push ecx
        push 1
        call public_4c4320
        add esp, 0xC
        pop esi
        ret 8
        public_53c710 : nop
        xor edx, edx
        mov dx, word ptr ds : [eax+2]
        push edx
        push 0
        call public_4c4320
        add esp, 0xC
        public_53c721 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x53c660)
    }
}

#undef public_53c69f
#undef public_53c6a1
#undef public_53c6cf
#undef public_53c710
#undef public_53c721
