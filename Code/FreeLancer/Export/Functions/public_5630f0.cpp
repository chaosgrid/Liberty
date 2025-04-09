#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5630f0);
CLANG_FORWARD_PROC_SYMBOL(public_57c0e0);

#define public_5631bb _public_5631bb

PROC_DECLARE(0x5630f0, internal_5630f0, public_5630f0);
extern "C" NAKED register_t __cdecl internal_5630f0()
{
    __asm
    {
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x374]
        test eax, eax
        je public_5631bb
        movzx eax, byte ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x338]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x30
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x374]
        movzx eax, byte ptr ds : [eax+5]
        mov ecx, dword ptr ds : [esi+0x344]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x30
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x374]
        movzx eax, byte ptr ds : [eax+6]
        mov ecx, dword ptr ds : [esi+0x350]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x30
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x374]
        movzx eax, byte ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+0x35C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x30
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x374]
        movzx eax, byte ptr ds : [eax+9]
        mov ecx, dword ptr ds : [esi+0x368]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x30
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ds : [esi+0x374]
        mov eax, dword ptr ds : [edx+0x10]
        push 0xA
        lea ecx, ss:[esp+8]
        push ecx
        push eax
        call dword ptr ds : [public_5c7134]
        add esp, 0xC
        push 0
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, dword ptr ds : [esi+0x340]
        call public_57c0e0
        public_5631bb : nop
        pop esi
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x5630f0)
    }
}

#undef public_5631bb
