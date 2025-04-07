#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec60f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec2100 _public_6ec2100
#define public_6ec213b _public_6ec213b
#define public_6ec2143 _public_6ec2143
#define public_6ec2180 _public_6ec2180
#define public_6ec218a _public_6ec218a
#define public_6ec218c _public_6ec218c

PROC_DECLARE(0x6ec20f0, internal_6ec20f0, public_6ec20f0);
extern "C" NAKED register_t __cdecl internal_6ec20f0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, 0xFFFFFFFF
        jne public_6ec2100
        or eax, eax
        pop ecx
        ret 0xC
        public_6ec2100 : nop
        push ebx
        push esi
        or ebx, 0xFFFFFFFF
        test eax, eax
        push edi
        je public_6ec218c
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x3C]
        push eax
        mov ecx, esi
        call public_6ec60f0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6ec213b
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6ec213b
        lea eax, ss:[esp+0x14]
        jmp public_6ec2143
        public_6ec213b : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6ec2143 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [edi+0x40]
        je public_6ec218c
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        call public_6ed0c50
        mov ebx, dword ptr ss : [esp+0x20]
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [esi+0x10], 0
        je public_6ec218a
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        push ecx
        call public_6ed0c5c
        add esp, 4
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, ebx
        mov edx, eax
        public_6ec2180 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6ec2180
        public_6ec218a : nop
        xor ebx, ebx
        public_6ec218c : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec20f0)
    }
}

#undef public_6ec2100
#undef public_6ec213b
#undef public_6ec2143
#undef public_6ec2180
#undef public_6ec218a
#undef public_6ec218c
