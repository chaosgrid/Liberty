#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6d00697 _public_6d00697
#define public_6d0069b _public_6d0069b
#define public_6d006b4 _public_6d006b4

PROC_DECLARE(0x6d00670, internal_6d00670, public_6d00670);
extern "C" NAKED register_t __cdecl internal_6d00670()
{
    __asm
    {
        sub esp, 8
        push esi
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        call public_6d006c0
        add esp, 0xC
        test al, al
        jne public_6d00697
        xor esi, esi
        mov dword ptr ss : [esp+4], esi
        jmp public_6d0069b
        public_6d00697 : nop
        mov esi, dword ptr ss : [esp+4]
        public_6d0069b : nop
        test esi, esi
        je public_6d006b4
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x160]
        test al, al
        je public_6d006b4
        xor eax, eax
        pop esi
        add esp, 8
        ret 
        public_6d006b4 : nop
        mov eax, esi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d00670)
    }
}

#undef public_6d00697
#undef public_6d0069b
#undef public_6d006b4
