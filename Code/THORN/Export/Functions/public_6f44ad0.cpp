#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);

#define public_6f44afd _public_6f44afd
#define public_6f44b05 _public_6f44b05
#define public_6f44b2f _public_6f44b2f
#define public_6f44b38 _public_6f44b38

PROC_DECLARE(0x6f44ad0, internal_6f44ad0, public_6f44ad0);
extern "C" NAKED register_t __cdecl internal_6f44ad0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea esi, ds:[ebx+0x14]
        push esi
        mov ecx, edi
        call public_6f4af00
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f44afd
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f44afd
        lea eax, ss:[esp+0x14]
        jmp public_6f44b05
        public_6f44afd : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6f44b05 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6f44b38
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xE8]
        test eax, eax
        je public_6f44b38
        test ebx, ebx
        je public_6f44b2f
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x28]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_6f44b2f : nop
        mov edx, dword ptr ds : [eax]
        xor ecx, ecx
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        public_6f44b38 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f44ad0)
    }
}

#undef public_6f44afd
#undef public_6f44b05
#undef public_6f44b2f
#undef public_6f44b38
