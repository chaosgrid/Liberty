#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289a70);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_6289a9f _public_6289a9f
#define public_6289aa7 _public_6289aa7

PROC_DECLARE(0x6289a70, internal_6289a70, public_6289a70);
extern "C" NAKED register_t __cdecl internal_6289a70()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_63fc098
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fc09c]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_6289a9f
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6289a9f
        lea eax, ss:[esp]
        jmp public_6289aa7
        public_6289a9f : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_6289aa7 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+0xFC]
        mov dword ptr ds : [eax+4], ecx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6289a70)
    }
}

#undef public_6289a9f
#undef public_6289aa7
