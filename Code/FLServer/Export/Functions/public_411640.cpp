#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411640);

#define public_411654 _public_411654
#define public_41165e _public_41165e
#define public_411662 _public_411662
#define public_411667 _public_411667

PROC_DECLARE(0x411640, internal_411640, public_411640);
extern "C" NAKED register_t __cdecl internal_411640()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_411667
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_411654 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jae public_41165e
        mov edx, dword ptr ds : [edx+8]
        jmp public_411662
        public_41165e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_411662 : nop
        cmp edx, ecx
        jne public_411654
        pop esi
        public_411667 : nop
        ret 4
        UNREACHABLE_TRAP(0x411640)
    }
}

#undef public_411654
#undef public_41165e
#undef public_411662
#undef public_411667
