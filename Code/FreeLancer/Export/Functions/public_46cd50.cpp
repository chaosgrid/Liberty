#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46cd50);

#define public_46cd70 _public_46cd70
#define public_46cd7a _public_46cd7a
#define public_46cd7e _public_46cd7e
#define public_46cd83 _public_46cd83
#define public_46cda4 _public_46cda4

PROC_DECLARE(0x46cd50, internal_46cd50, public_46cd50);
extern "C" NAKED register_t __cdecl internal_46cd50()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, edx
        je public_46cd83
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_46cd70 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jbe public_46cd7a
        mov eax, dword ptr ds : [eax+8]
        jmp public_46cd7e
        public_46cd7a : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_46cd7e : nop
        cmp eax, ecx
        jne public_46cd70
        pop edi
        public_46cd83 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_46cda4
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        ja public_46cda4
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_46cda4 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x46cd50)
    }
}

#undef public_46cd70
#undef public_46cd7a
#undef public_46cd7e
#undef public_46cd83
#undef public_46cda4
