#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_562fd0);
CLANG_FORWARD_PROC_SYMBOL(public_57c2c0);

#define public_5630e7 _public_5630e7

PROC_DECLARE(0x562fd0, internal_562fd0, public_562fd0);
extern "C" NAKED register_t __cdecl internal_562fd0()
{
    __asm
    {
        sub esp, 0x24
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x374]
        test eax, eax
        je public_5630e7
        mov ecx, dword ptr ds : [esi+0x338]
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+8]
        push edx
        push 0x2F
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        mov ecx, dword ptr ds : [esi+0x374]
        sete al
        mov byte ptr ds : [ecx+4], al
        mov ecx, dword ptr ds : [esi+0x344]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+8]
        push eax
        push 0x2F
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi+0x374]
        test eax, eax
        sete cl
        mov byte ptr ds : [edx+5], cl
        mov ecx, dword ptr ds : [esi+0x350]
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+8]
        push edx
        push 0x2F
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        mov ecx, dword ptr ds : [esi+0x374]
        sete al
        mov byte ptr ds : [ecx+6], al
        mov ecx, dword ptr ds : [esi+0x35C]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+8]
        push eax
        push 0x2F
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi+0x374]
        test eax, eax
        sete cl
        mov byte ptr ds : [edx+8], cl
        mov ecx, dword ptr ds : [esi+0x368]
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+8]
        push edx
        push 0x2F
        call dword ptr ds : [eax+0xA8]
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [esi+0x374]
        test edx, edx
        sete al
        push 0x10
        lea edx, ss:[esp+0xC]
        mov byte ptr ds : [ecx+9], al
        mov ecx, dword ptr ds : [esi+0x340]
        push edx
        call public_57c2c0
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [public_5c70b0]
        mov ecx, dword ptr ds : [esi+0x374]
        mov dword ptr ds : [ecx+0x10], eax
        mov edx, dword ptr ds : [esi+0x374]
        add esp, 4
        mov dword ptr ds : [edx+0xC], 0
        public_5630e7 : nop
        pop esi
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x562fd0)
    }
}

#undef public_5630e7
