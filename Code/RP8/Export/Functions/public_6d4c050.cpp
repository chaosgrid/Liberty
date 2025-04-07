#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4bdad);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c050);

#define public_6d4c097 _public_6d4c097
#define public_6d4c0ad _public_6d4c0ad

PROC_DECLARE(0x6d4c050, internal_6d4c050, public_6d4c050);
extern "C" NAKED register_t __cdecl internal_6d4c050()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+4]
        push edi
        push 0x50
        push 1
        push esi
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x194], eax
        mov dword ptr ds : [eax], offset _public_6d4bdad
        lea edi, ds:[eax+0x38]
        xor eax, eax
        stosd 
        stosd 
        stosd 
        stosd 
        mov ecx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [esi+4]
        shl ecx, 8
        push ecx
        push 1
        push esi
        call dword ptr ds : [eax]
        xor edx, edx
        add esp, 0x18
        cmp dword ptr ds : [esi+0x20], edx
        mov dword ptr ds : [esi+0x8C], eax
        mov ebx, eax
        jle public_6d4c0ad
        public_6d4c097 : nop
        push 0x40
        or eax, 0xFFFFFFFF
        mov edi, ebx
        add ebx, 0x100
        pop ecx
        inc edx
        rep stosd
        cmp edx, dword ptr ds : [esi+0x20]
        jl public_6d4c097
        public_6d4c0ad : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d4c050)
    }
}

#undef public_6d4c097
#undef public_6d4c0ad
