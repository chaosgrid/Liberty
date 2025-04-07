#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef52cb);

PROC_DECLARE(0x6ef52cb, internal_6ef52cb, public_6ef52cb);
extern "C" NAKED register_t __cdecl internal_6ef52cb()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push edi
        push 8
        pop ecx
        mov esi, offset public_6efc2f8
        lea edi, ss:[ebp-0x20]
        rep movsd
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], eax
        lea eax, ss:[ebp-0xC]
        push eax
        push dword ptr ss : [ebp-0x10]
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp-0x20]
        call dword ptr ds : [public_6efc018]
        pop edi
        pop esi
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6ef52cb)
    }
}
