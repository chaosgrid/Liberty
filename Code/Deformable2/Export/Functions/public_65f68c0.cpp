#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f68c0);
CLANG_FORWARD_PROC_SYMBOL(public_6600de0);

#define public_65f68fd _public_65f68fd
#define public_65f691e _public_65f691e

PROC_DECLARE(0x65f68c0, internal_65f68c0, public_65f68c0);
extern "C" NAKED register_t __cdecl internal_65f68c0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+0x10]
        mov bl, al
        test bl, bl
        je public_65f691e
        mov ecx, dword ptr ds : [edi]
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_66031a4]
        add edi, 0xC
        test eax, eax
        jne public_65f68fd
        call public_6600de0
        mov dword ptr ds : [public_66031a4], eax
        public_65f68fd : nop
        mov edx, dword ptr ds : [eax]
        push esi
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ecx
        public_65f691e : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x65f68c0)
    }
}

#undef public_65f68fd
#undef public_65f691e
