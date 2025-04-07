#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b37f8a _public_6b37f8a
#define public_6b37f90 _public_6b37f90
#define public_6b37fba _public_6b37fba

PROC_DECLARE(0x6b37f30, internal_6b37f30, public_6b37f30);
extern "C" NAKED register_t __cdecl internal_6b37f30()
{
    __asm
    {
        push ecx
        push ebp
        lea eax, ss:[esp+4]
        push eax
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+4]
        push 5
        push 1
        call public_6b3b480
        test eax, eax
        jne public_6b37fba
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        xor edx, edx
        cmp esi, edx
        push edi
        mov edi, eax
        je public_6b37f8a
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, edx
        je public_6b37f8a
        push ebx
        lea ebx, ds:[eax+0x28]
        push ecx
        mov dword ptr ds : [ebx], ecx
        call public_6b6a134
        mov ecx, dword ptr ds : [ebx]
        mov edx, ecx
        mov dword ptr ds : [edi+0x2C], eax
        shr ecx, 2
        mov edi, eax
        rep movsd
        add esp, 4
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop ebx
        jmp public_6b37f90
        public_6b37f8a : nop
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [edi+0x2C], edx
        public_6b37f90 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x20], eax
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+0x24], ecx
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [ebp-4]
        movzx eax, ax
        lea ecx, ss:[ebp-4]
        push esi
        push eax
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        public_6b37fba : nop
        pop ebp
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6b37f30)
    }
}

#undef public_6b37f8a
#undef public_6b37f90
#undef public_6b37fba
