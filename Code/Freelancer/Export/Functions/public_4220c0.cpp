#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4220c0);

PROC_DECLARE(0x4220c0, internal_4220c0, public_4220c0);
extern "C" NAKED register_t __cdecl internal_4220c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [public_5c6de0]
        push ecx
        mov dword ptr ds : [public_6648bc], ecx
        mov dword ptr ds : [public_6648c0], eax
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push 0x13
        push eax
        call dword ptr ds : [edx+0xF0]
        mov edx, dword ptr ds : [public_6648c0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x14
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_6648b8]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x1B
        push eax
        call dword ptr ds : [ecx+0xF0]
        ret 
        UNREACHABLE_TRAP(0x4220c0)
    }
}
