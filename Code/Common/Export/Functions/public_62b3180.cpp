#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b430);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_62b3180);

#define public_62b31c0 _public_62b31c0
#define public_62b31df _public_62b31df
#define public_62b31e8 _public_62b31e8
#define public_62b31fa _public_62b31fa

PROC_DECLARE(0x62b3180, internal_62b3180, public_62b3180);
extern "C" NAKED register_t __cdecl internal_62b3180()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x88]
        mov ebx, dword ptr ds : [eax+0x144]
        cmp ebx, 0xFFFFFFFF
        push edi
        je public_62b31df
        push 0x10000
        lea ecx, ss:[esp+0x10]
        call public_629b990
        lea ecx, ss:[esp+0xC]
        lea edi, ds:[esi+0xE4]
        push ecx
        mov ecx, edi
        call public_629b430
        mov esi, eax
        test esi, esi
        je public_62b31df
        nop 
        public_62b31c0 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 0x1B
        je public_62b31e8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, edi
        call public_629b430
        mov esi, eax
        test esi, esi
        jne public_62b31c0
        public_62b31df : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 
        public_62b31e8 : nop
        mov esi, dword ptr ds : [esi+0x28]
        cmp esi, ebx
        jg public_62b31fa
        sub ebx, esi
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 
        public_62b31fa : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62b3180)
    }
}

#undef public_62b31c0
#undef public_62b31df
#undef public_62b31e8
#undef public_62b31fa
