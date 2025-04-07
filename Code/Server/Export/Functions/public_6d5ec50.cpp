#include "Server-PCH.h"


#define public_6d5ecb0 _public_6d5ecb0
#define public_6d5ece5 _public_6d5ece5
#define public_6d5ecfb _public_6d5ecfb

PROC_DECLARE(0x6d5ec50, internal_6d5ec50, public_6d5ec50);
extern "C" NAKED register_t __cdecl internal_6d5ec50()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [ebp]
        push eax
        xor ebx, ebx
        mov dword ptr ss : [esp+0xC], offset public_6d6bae4
        mov dword ptr ss : [esp+0x10], offset public_6d6af00
        mov dword ptr ss : [esp+0x14], offset public_6d6badc
        mov dword ptr ss : [esp+0x18], offset public_6d6bad0
        mov dword ptr ss : [esp+0x1C], offset public_6d6bac4
        mov dword ptr ss : [esp+0x20], offset public_6d6bab8
        mov dword ptr ss : [esp+0x24], offset public_6d6baac
        call dword ptr ds : [public_6d64798]
        mov ecx, eax
        call dword ptr ds : [public_6d64a08]
        test eax, eax
        je public_6d5ecfb
        push esi
        push edi
        xor edi, edi
        lea ecx, ds:[ecx]
        public_6d5ecb0 : nop
        mov ecx, dword ptr ss : [esp+edi*4+0x10]
        mov edx, dword ptr ss : [ebp]
        push ecx
        push edx
        call dword ptr ds : [public_6d6479c]
        mov esi, eax
        add esp, 8
        push esi
        call dword ptr ds : [public_6d64798]
        mov ecx, eax
        call dword ptr ds : [public_6d64a04]
        test eax, eax
        je public_6d5ece5
        cmp ebx, dword ptr ss : [esp+0x38]
        jae public_6d5ece5
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+ebx*4], esi
        inc ebx
        public_6d5ece5 : nop
        inc edi
        cmp edi, 7
        jb public_6d5ecb0
        mov ecx, dword ptr ss : [esp+0x3C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], ebx
        xor eax, eax
        pop ebx
        add esp, 0x1C
        ret 
        public_6d5ecfb : nop
        mov edx, dword ptr ss : [esp+0x34]
        pop ebp
        mov dword ptr ds : [edx], ebx
        xor eax, eax
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d5ec50)
    }
}

#undef public_6d5ecb0
#undef public_6d5ece5
#undef public_6d5ecfb
