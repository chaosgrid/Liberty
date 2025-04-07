#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec0e50);
CLANG_FORWARD_PROC_SYMBOL(public_6ec3bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec44a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eceba0);

#define public_6ec292e _public_6ec292e
#define public_6ec2936 _public_6ec2936
#define public_6ec2978 _public_6ec2978
#define public_6ec29a1 _public_6ec29a1
#define public_6ec29bc _public_6ec29bc

PROC_DECLARE(0x6ec28e0, internal_6ec28e0, public_6ec28e0);
extern "C" NAKED register_t __cdecl internal_6ec28e0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        or ebp, 0xFFFFFFFF
        call dword ptr ds : [public_6ed1000]
        mov ebx, dword ptr ss : [esp+0x20]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x20]
        lea esi, ds:[ebx+0x54]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call public_6eceba0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, eax
        je public_6ec292e
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6ec292e
        lea eax, ss:[esp+0x1C]
        jmp public_6ec2936
        public_6ec292e : nop
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        public_6ec2936 : nop
        mov eax, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        call public_6ec3bf0
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [ebx+0x58]
        je public_6ec29bc
        mov edi, dword ptr ss : [esp+0x20]
        test edi, edi
        je public_6ec29bc
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_6ec44a0
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6ec2978
        push eax
        call dword ptr ds : [public_6ed1054]
        add esp, 4
        public_6ec2978 : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_6ec29a1
        push eax
        call dword ptr ds : [public_6ed108c]
        add esp, 4
        push edi
        push edi
        mov ecx, ebx
        mov dword ptr ds : [edi], eax
        call public_6ec0e50
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6ec29a1 : nop
        push edi
        push edi
        mov ecx, ebx
        mov dword ptr ds : [edi], 0
        call public_6ec0e50
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6ec29bc : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6ec28e0)
    }
}

#undef public_6ec292e
#undef public_6ec2936
#undef public_6ec2978
#undef public_6ec29a1
#undef public_6ec29bc
