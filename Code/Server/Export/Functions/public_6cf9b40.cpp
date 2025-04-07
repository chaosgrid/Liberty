#include "Server-PCH.h"


#define public_6cf9bc9 _public_6cf9bc9

PROC_DECLARE(0x6cf9b40, internal_6cf9b40, public_6cf9b40);
extern "C" NAKED register_t __cdecl internal_6cf9b40()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        sub esp, 0x118
        test ecx, 0x3FFFFFFF
        mov eax, 0xFFFFFFFC
        je public_6cf9bc9
        mov edx, dword ptr ss : [esp+0x120]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x108], eax
        mov eax, dword ptr ss : [esp+0x124]
        mov dword ptr ss : [esp+0x110], edx
        mov edx, dword ptr ss : [esp+0x12C]
        push edx
        mov dword ptr ss : [esp+0x110], ecx
        mov ecx, dword ptr ds : [eax]
        lea eax, ss:[esp+8]
        push 0x104
        push eax
        mov dword ptr ss : [esp+0x120], ecx
        call dword ptr ds : [public_6d644d0]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        lea eax, ss:[esp]
        push eax
        mov eax, dword ptr ss : [esp+0x12C]
        push eax
        call dword ptr ds : [edx+0xF8]
        xor eax, eax
        public_6cf9bc9 : nop
        add esp, 0x118
        ret 
        UNREACHABLE_TRAP(0x6cf9b40)
    }
}

#undef public_6cf9bc9
