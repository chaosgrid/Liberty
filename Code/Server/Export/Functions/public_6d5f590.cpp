#include "Server-PCH.h"


#define public_6d5f5cb _public_6d5f5cb

PROC_DECLARE(0x6d5f590, internal_6d5f590, public_6d5f590);
extern "C" NAKED register_t __cdecl internal_6d5f590()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 8
        push esi
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d643a0]
        add esp, 8
        test eax, eax
        jne public_6d5f5cb
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+4], edx
        mov dword ptr ss : [esp+8], eax
        fild qword ptr ss : [esp+4]
        pop esi
        fstp dword ptr ds : [ecx]
        add esp, 8
        ret 
        public_6d5f5cb : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, esi
        mov dword ptr ds : [edx], 0
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d5f590)
    }
}

#undef public_6d5f5cb
