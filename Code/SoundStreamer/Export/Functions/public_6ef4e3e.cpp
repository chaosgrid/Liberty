#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4e3e);
CLANG_FORWARD_PROC_SYMBOL(public_6ef81b8);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8547);

#define public_6ef4e80 _public_6ef4e80
#define public_6ef4e9d _public_6ef4e9d

PROC_DECLARE(0x6ef4e3e, internal_6ef4e3e, public_6ef4e3e);
extern "C" NAKED register_t __cdecl internal_6ef4e3e()
{
    __asm
    {
        push esi
        push dword ptr ds : [public_6f02650]
        call public_6ef8547
        mov edx, dword ptr ds : [public_6f02650]
        pop ecx
        mov ecx, dword ptr ds : [public_6f0264c]
        mov esi, ecx
        sub esi, edx
        add esi, 4
        cmp eax, esi
        pop esi
        jae public_6ef4e9d
        push edx
        call public_6ef8547
        add eax, 0x10
        push eax
        push dword ptr ds : [public_6f02650]
        call public_6ef81b8
        add esp, 0xC
        test eax, eax
        jne public_6ef4e80
        ret 
        public_6ef4e80 : nop
        mov ecx, dword ptr ds : [public_6f0264c]
        sub ecx, dword ptr ds : [public_6f02650]
        mov dword ptr ds : [public_6f02650], eax
        sar ecx, 2
        lea ecx, ds:[eax+ecx*4]
        mov dword ptr ds : [public_6f0264c], ecx
        public_6ef4e9d : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        add dword ptr ds : [public_6f0264c], 4
        ret 
        UNREACHABLE_TRAP(0x6ef4e3e)
    }
}

#undef public_6ef4e80
#undef public_6ef4e9d
