#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_62fcfc4 _public_62fcfc4
#define public_62fcfce _public_62fcfce
#define public_62fcfd2 _public_62fcfd2
#define public_62fcfd7 _public_62fcfd7

PROC_DECLARE(0x62fcfb0, internal_62fcfb0, public_62fcfb0);
extern "C" NAKED register_t __cdecl internal_62fcfb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_62fcfd7
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_62fcfc4 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jae public_62fcfce
        mov edx, dword ptr ds : [edx+8]
        jmp public_62fcfd2
        public_62fcfce : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_62fcfd2 : nop
        cmp edx, ecx
        jne public_62fcfc4
        pop esi
        public_62fcfd7 : nop
        ret 4
        UNREACHABLE_TRAP(0x62fcfb0)
    }
}

#undef public_62fcfc4
#undef public_62fcfce
#undef public_62fcfd2
#undef public_62fcfd7
