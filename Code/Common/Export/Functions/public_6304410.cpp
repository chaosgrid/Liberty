#include "Common-PCH.h"


#define public_6304450 _public_6304450
#define public_6304463 _public_6304463
#define public_6304480 _public_6304480
#define public_6304491 _public_6304491
#define public_63044b3 _public_63044b3
#define public_63044c2 _public_63044c2

PROC_DECLARE(0x6304410, internal_6304410, public_6304410);
extern "C" NAKED register_t __cdecl internal_6304410()
{
    __asm
    {
        sub esp, 0x104
        mov eax, dword ptr ss : [esp+0x108]
        push ebx
        push ebp
        push esi
        push edi
        push 0x104
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call dword ptr ds : [public_63992e0]
        mov edi, dword ptr ds : [public_6399300]
        lea edx, ss:[esp+0x1C]
        push 0x2F
        push edx
        mov byte ptr ss : [esp+0x127], 0
        call edi
        add esp, 0x14
        test eax, eax
        je public_6304463
        public_6304450 : nop
        mov byte ptr ds : [eax], 0x5C
        lea eax, ss:[esp+0x10]
        push 0x2F
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6304450
        public_6304463 : nop
        mov cl, byte ptr ss : [esp+0x10]
        test cl, cl
        lea eax, ss:[esp+0x10]
        je public_63044c2
        mov ebx, dword ptr ds : [public_639922c]
        mov ebp, dword ptr ds : [public_6399228]
        nop 
        lea esp, ss:[esp]
        public_6304480 : nop
        push 0x5C
        push eax
        call edi
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_6304491
        mov byte ptr ds : [esi], 0
        public_6304491 : nop
        mov al, byte ptr ss : [esp+0x10]
        test al, al
        je public_63044b3
        lea ecx, ss:[esp+0x10]
        push 0
        push ecx
        call ebx
        add esp, 8
        test eax, eax
        je public_63044b3
        lea edx, ss:[esp+0x10]
        push edx
        call ebp
        add esp, 4
        public_63044b3 : nop
        test esi, esi
        je public_63044c2
        lea eax, ds:[esi+1]
        mov byte ptr ds : [esi], 0x5C
        cmp byte ptr ds : [eax], 0
        jne public_6304480
        public_63044c2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x6304410)
    }
}

#undef public_6304450
#undef public_6304463
#undef public_6304480
#undef public_6304491
#undef public_63044b3
#undef public_63044c2
