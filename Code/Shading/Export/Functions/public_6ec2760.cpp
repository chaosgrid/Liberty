#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec0f10);
CLANG_FORWARD_PROC_SYMBOL(public_6eceba0);

#define public_6ec27ad _public_6ec27ad
#define public_6ec27b5 _public_6ec27b5
#define public_6ec27c9 _public_6ec27c9

PROC_DECLARE(0x6ec2760, internal_6ec2760, public_6ec2760);
extern "C" NAKED register_t __cdecl internal_6ec2760()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ds : [public_6ed1000]
        push esi
        push edi
        push ebx
        call ebp
        mov esi, dword ptr ss : [esp+0x20]
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x20]
        lea edi, ds:[esi+0x54]
        push ecx
        mov ecx, edi
        call public_6eceba0
        mov edi, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, edi
        je public_6ec27ad
        mov edx, dword ptr ss : [esp+0x20]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6ec27ad
        lea eax, ss:[esp+0x1C]
        jmp public_6ec27b5
        public_6ec27ad : nop
        mov dword ptr ss : [esp+0x20], edi
        lea eax, ss:[esp+0x20]
        public_6ec27b5 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+0x58]
        je public_6ec27c9
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 8
        ret 0xC
        public_6ec27c9 : nop
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        push ebx
        push 0
        mov ecx, esi
        call public_6ec0f10
        push ebx
        mov dword ptr ss : [esp+0x14], ebx
        call ebp
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        push esi
        call dword ptr ds : [ecx+0x30]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6ec2760)
    }
}

#undef public_6ec27ad
#undef public_6ec27b5
#undef public_6ec27c9
