#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);

#define public_6d59eb4 _public_6d59eb4
#define public_6d59ebe _public_6d59ebe
#define public_6d59ec2 _public_6d59ec2
#define public_6d59ec7 _public_6d59ec7

PROC_DECLARE(0x6d59ea0, internal_6d59ea0, public_6d59ea0);
extern "C" NAKED register_t __cdecl internal_6d59ea0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6d59ec7
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6d59eb4 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jae public_6d59ebe
        mov edx, dword ptr ds : [edx+8]
        jmp public_6d59ec2
        public_6d59ebe : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_6d59ec2 : nop
        cmp edx, ecx
        jne public_6d59eb4
        pop esi
        public_6d59ec7 : nop
        ret 4
        UNREACHABLE_TRAP(0x6d59ea0)
    }
}

#undef public_6d59eb4
#undef public_6d59ebe
#undef public_6d59ec2
#undef public_6d59ec7
