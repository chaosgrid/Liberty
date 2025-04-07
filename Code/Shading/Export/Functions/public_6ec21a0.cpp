#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec60f0);

#define public_6ec21b0 _public_6ec21b0
#define public_6ec21e7 _public_6ec21e7
#define public_6ec21ef _public_6ec21ef
#define public_6ec2221 _public_6ec2221
#define public_6ec222a _public_6ec222a

PROC_DECLARE(0x6ec21a0, internal_6ec21a0, public_6ec21a0);
extern "C" NAKED register_t __cdecl internal_6ec21a0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, 0xFFFFFFFF
        jne public_6ec21b0
        or eax, eax
        pop ecx
        ret 0x10
        public_6ec21b0 : nop
        push ebx
        push esi
        or ebx, 0xFFFFFFFF
        test eax, eax
        push edi
        je public_6ec222a
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x3C]
        push eax
        mov ecx, esi
        call public_6ec60f0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6ec21e7
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6ec21e7
        lea eax, ss:[esp+0x14]
        jmp public_6ec21ef
        public_6ec21e7 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6ec21ef : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x40]
        je public_6ec222a
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6ec2221
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x1C]
        push esi
        push eax
        push edi
        call dword ptr ds : [public_6ed1028]
        add esp, 0xC
        mov byte ptr ds : [edi+esi-1], 0
        pop edi
        xor ebx, ebx
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0x10
        public_6ec2221 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [edx], 0
        xor ebx, ebx
        public_6ec222a : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6ec21a0)
    }
}

#undef public_6ec21b0
#undef public_6ec21e7
#undef public_6ec21ef
#undef public_6ec2221
#undef public_6ec222a
