#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_6289a4f _public_6289a4f
#define public_6289a57 _public_6289a57

PROC_DECLARE(0x6289a20, internal_6289a20, public_6289a20);
extern "C" NAKED register_t __cdecl internal_6289a20()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_63fc098
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fc09c]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_6289a4f
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6289a4f
        lea eax, ss:[esp]
        jmp public_6289a57
        public_6289a4f : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_6289a57 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0x30]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [eax+0x34]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6289a20)
    }
}

#undef public_6289a4f
#undef public_6289a57
