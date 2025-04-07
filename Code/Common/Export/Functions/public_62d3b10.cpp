#include "Common-PCH.h"


#define public_62d3b50 _public_62d3b50

PROC_DECLARE(0x62d3b10, internal_62d3b10, public_62d3b10);
extern "C" NAKED register_t __cdecl internal_62d3b10()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC0]
        mov byte ptr ds : [esi+0xD8], 1
        mov ecx, dword ptr ds : [esi+eax*4+0x174]
        test ecx, ecx
        je public_62d3b50
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+4]
        push eax
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [edx+0x30]
        public_62d3b50 : nop
        mov dword ptr ds : [esi+0x124], 0
        mov dword ptr ds : [esi+0x128], 0
        mov dword ptr ds : [esi+0x12C], 0
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62d3b10)
    }
}

#undef public_62d3b50
