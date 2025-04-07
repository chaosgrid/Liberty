#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2850);

#define public_6ef28b0 _public_6ef28b0

PROC_DECLARE(0x6ef2850, internal_6ef2850, public_6ef2850);
extern "C" NAKED register_t __cdecl internal_6ef2850()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ef28b0
        mov edx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push 0
        push 2
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x18], eax
        je public_6ef28b0
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0
        push 4
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov edx, dword ptr ds : [esi+0x14]
        push 0
        mov dword ptr ds : [esi+0x1C], eax
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi+0x20], eax
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [esi+0x24], 0
        setne al
        pop esi
        ret 
        public_6ef28b0 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef2850)
    }
}

#undef public_6ef28b0
