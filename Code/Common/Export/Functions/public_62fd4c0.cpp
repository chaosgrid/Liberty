#include "Common-PCH.h"


#define public_62fd4e0 _public_62fd4e0
#define public_62fd4f3 _public_62fd4f3
#define public_62fd514 _public_62fd514
#define public_62fd532 _public_62fd532

PROC_DECLARE(0x62fd4c0, internal_62fd4c0, public_62fd4c0);
extern "C" NAKED register_t __cdecl internal_62fd4c0()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        mov ebx, dword ptr ss : [esp+0x28]
        push ebp
        mov ebp, dword ptr ds : [public_6399390]
        push esi
        mov esi, dword ptr ds : [public_6399380]
        push edi
        mov edi, dword ptr ds : [public_6399384]
        lea ecx, ds:[ecx]
        public_62fd4e0 : nop
        push 1
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        call esi
        test eax, eax
        je public_62fd514
        public_62fd4f3 : nop
        cmp dword ptr ss : [esp+0x14], 0x12
        je public_62fd532
        lea ecx, ss:[esp+0x10]
        push ecx
        call edi
        push 1
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x20]
        push edx
        call esi
        test eax, eax
        jne public_62fd4f3
        public_62fd514 : nop
        push 0xFF
        push ebx
        push 0
        lea eax, ss:[esp+0x3C]
        push eax
        push 1
        call ebp
        cmp eax, 1
        je public_62fd4e0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        public_62fd532 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x102
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x62fd4c0)
    }
}

#undef public_62fd4e0
#undef public_62fd4f3
#undef public_62fd514
#undef public_62fd532
