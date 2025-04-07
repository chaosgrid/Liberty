#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62226f0);

#define public_6222707 _public_6222707
#define public_6222712 _public_6222712
#define public_622271f _public_622271f
#define public_6222729 _public_6222729
#define public_6222735 _public_6222735
#define public_622273e _public_622273e

PROC_DECLARE(0x62226f0, internal_62226f0, public_62226f0);
extern "C" NAKED register_t __cdecl internal_62226f0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x1D]
        test al, al
        jne public_622271f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6222712
        public_6222707 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6222707
        public_6222712 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_622271f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6222735
        public_6222729 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6222729
        public_6222735 : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_622273e
        mov dword ptr ds : [ecx], eax
        public_622273e : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62226f0)
    }
}

#undef public_6222707
#undef public_6222712
#undef public_622271f
#undef public_6222729
#undef public_6222735
#undef public_622273e
