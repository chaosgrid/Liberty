#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41ef20);
CLANG_FORWARD_PROC_SYMBOL(public_577850);
CLANG_FORWARD_PROC_SYMBOL(public_5b0b60);

#define public_5b0b97 _public_5b0b97
#define public_5b0bbf _public_5b0bbf
#define public_5b0bf0 _public_5b0bf0
#define public_5b0c0d _public_5b0c0d
#define public_5b0c21 _public_5b0c21

PROC_DECLARE(0x5b0b60, internal_5b0b60, public_5b0b60);
extern "C" NAKED register_t __cdecl internal_5b0b60()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        push edi
        mov bl, 1
        call public_41ef20
        mov edi, dword ptr ds : [public_5c7230]
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        call edi
        test eax, eax
        je public_5b0c21
        mov ebp, dword ptr ds : [public_5c7244]
        mov esi, dword ptr ds : [public_5c6e80]
        public_5b0b97 : nop
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x1C]
        push ecx
        call ebp
        test eax, eax
        je public_5b0c0d
        call esi
        test eax, eax
        je public_5b0bbf
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, eax
        call dword ptr ds : [public_5c6ebc]
        test al, al
        jne public_5b0bf0
        public_5b0bbf : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        push edx
        call public_577850
        add esp, 0xC
        test al, al
        jne public_5b0bf0
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [public_5c7234]
        lea ecx, ss:[esp+0x10]
        push ecx
        call dword ptr ds : [public_5c722c]
        public_5b0bf0 : nop
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x20]
        push edx
        call edi
        test eax, eax
        jne public_5b0b97
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x1C
        ret 
        public_5b0c0d : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        xor al, al
        pop ebx
        add esp, 0x1C
        ret 
        public_5b0c21 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x5b0b60)
    }
}

#undef public_5b0b97
#undef public_5b0bbf
#undef public_5b0bf0
#undef public_5b0c0d
#undef public_5b0c21
