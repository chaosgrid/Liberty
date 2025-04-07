#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b430);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_62b3220);

#define public_62b3244 _public_62b3244
#define public_62b3270 _public_62b3270
#define public_62b328a _public_62b328a
#define public_62b3296 _public_62b3296
#define public_62b32ba _public_62b32ba
#define public_62b32cf _public_62b32cf

PROC_DECLARE(0x62b3220, internal_62b3220, public_62b3220);
extern "C" NAKED register_t __cdecl internal_62b3220()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ds : [public_63ed1d4]
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        test ebp, ebp
        push esi
        push edi
        mov esi, ecx
        jne public_62b3244
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x10
        ret 4
        public_62b3244 : nop
        push 0x10000
        lea ecx, ss:[esp+0x14]
        call public_629b990
        lea eax, ss:[esp+0x10]
        lea edi, ds:[esi+0xE4]
        push eax
        mov ecx, edi
        call public_629b430
        mov esi, eax
        test esi, esi
        je public_62b328a
        lea ebx, ds:[ebx]
        public_62b3270 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        cmp dword ptr ds : [ecx+8], ebp
        je public_62b3296
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, edi
        call public_629b430
        mov esi, eax
        test esi, esi
        jne public_62b3270
        public_62b328a : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 4
        public_62b3296 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 0x1F
        je public_62b32ba
        cmp eax, 0x20
        je public_62b32ba
        cmp eax, 0x21
        je public_62b32ba
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x10
        ret 4
        public_62b32ba : nop
        mov esi, dword ptr ds : [esi+0x28]
        cmp esi, ebx
        jg public_62b32cf
        pop edi
        sub ebx, esi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 4
        public_62b32cf : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62b3220)
    }
}

#undef public_62b3244
#undef public_62b3270
#undef public_62b328a
#undef public_62b3296
#undef public_62b32ba
#undef public_62b32cf
