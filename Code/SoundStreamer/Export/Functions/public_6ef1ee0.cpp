#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1080);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef23c0);

#define public_6ef1f39 _public_6ef1f39
#define public_6ef1f59 _public_6ef1f59
#define public_6ef1f96 _public_6ef1f96
#define public_6ef1fa0 _public_6ef1fa0

PROC_DECLARE(0x6ef1ee0, internal_6ef1ee0, public_6ef1ee0);
extern "C" NAKED register_t __cdecl internal_6ef1ee0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xFC]
        test eax, eax
        jbe public_6ef1fa0
        call public_6ef1080
        mov ecx, dword ptr ds : [esi+0xBC]
        sub ecx, eax
        mov eax, dword ptr ds : [esi+0xFC]
        cmp ecx, eax
        jb public_6ef1fa0
        push eax
        mov ecx, esi
        call public_6ef23c0
        test al, al
        je public_6ef1f96
        mov ecx, dword ptr ds : [esi+0x104]
        test ecx, ecx
        push edi
        jbe public_6ef1f39
        mov edi, dword ptr ds : [esi+0x100]
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        public_6ef1f39 : nop
        mov ecx, dword ptr ds : [esi+0x10C]
        test ecx, ecx
        jbe public_6ef1f59
        mov edi, dword ptr ds : [esi+0x108]
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        public_6ef1f59 : nop
        mov edx, dword ptr ds : [esi+0x10C]
        mov eax, dword ptr ds : [esi+0xB8]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [esi+0x108]
        push edx
        mov edx, dword ptr ds : [esi+0x104]
        push edx
        mov edx, dword ptr ds : [esi+0x100]
        push edx
        push eax
        call dword ptr ds : [ecx+0x4C]
        mov dword ptr ds : [esi+0x100], 0
        mov dword ptr ds : [esi+0x108], 0
        pop edi
        public_6ef1f96 : nop
        mov dword ptr ds : [esi+0xFC], 0
        public_6ef1fa0 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef1ee0)
    }
}

#undef public_6ef1f39
#undef public_6ef1f59
#undef public_6ef1f96
#undef public_6ef1fa0
