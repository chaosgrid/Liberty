#include "Common-PCH.h"


#define public_629367c _public_629367c
#define public_629368c _public_629368c

PROC_DECLARE(0x6293650, internal_6293650, public_6293650);
extern "C" NAKED register_t __cdecl internal_6293650()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        xor bl, bl
        call dword ptr ds : [eax+0x58]
        test al, al
        je public_629368c
        mov al, byte ptr ds : [esi+0x38]
        test al, al
        jne public_629367c
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[esi+0x40]
        push eax
        lea ecx, ds:[esi+0x3C]
        push ecx
        mov ecx, esi
        mov byte ptr ds : [esi+0x38], 1
        call dword ptr ds : [edx+0x8C]
        public_629367c : nop
        mov edx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        mov dword ptr ds : [eax], edx
        mov al, 1
        pop ebx
        ret 4
        public_629368c : nop
        pop esi
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6293650)
    }
}

#undef public_629367c
#undef public_629368c
