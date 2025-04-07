#include "Common-PCH.h"


#define public_62629c8 _public_62629c8

PROC_DECLARE(0x6262980, internal_6262980, public_6262980);
extern "C" NAKED register_t __cdecl internal_6262980()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        mov ebp, ecx
        je public_62629c8
        mov ebx, dword ptr ss : [esp+0x14]
        test ebx, ebx
        je public_62629c8
        push edi
        push ebx
        call dword ptr ds : [public_6399328]
        mov dword ptr ss : [ebp+0x18], eax
        mov ecx, ebx
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        add esp, 4
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x1C], ebx
        mov dword ptr ss : [ebp+0x20], 0
        pop ebp
        mov al, 1
        pop ebx
        ret 8
        public_62629c8 : nop
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6262980)
    }
}

#undef public_62629c8
