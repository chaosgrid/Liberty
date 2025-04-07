#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6274540);
CLANG_FORWARD_PROC_SYMBOL(public_62748a0);
CLANG_FORWARD_PROC_SYMBOL(public_6279fb0);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_630cb40);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);

#define public_6274560 _public_6274560

PROC_DECLARE(0x6274540, internal_6274540, public_6274540);
extern "C" NAKED register_t __cdecl internal_6274540()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        xor eax, eax
        lea ecx, ds:[esi+0x14]
        lea ebx, ds:[ebx]
        public_6274560 : nop
        mov dword ptr ds : [ecx], ebx
        mov byte ptr ds : [esi+eax+0x94], bl
        inc eax
        add ecx, 4
        cmp eax, 0x20
        jl public_6274560
        lea ecx, ds:[esi+0xCC]
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov byte ptr ds : [esi+0xC0], bl
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC8], ebx
        call public_6333e40
        lea ecx, ds:[esi+0xD0]
        mov byte ptr ds : [esi+0xD4], 1
        call public_6333e40
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+0xD8]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0xC]
        lea edx, ds:[esi+0xE8]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        lea ecx, ds:[esi+0xF4]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+0x100]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0xC]
        lea edx, ds:[esi+0x110]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        lea ecx, ds:[esi+0x11C]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [esi+0xD5], 1
        mov byte ptr ds : [esi+0xE4], bl
        mov byte ptr ds : [esi+0xE5], 1
        mov byte ptr ds : [esi+0x10C], bl
        mov byte ptr ds : [esi+0x10D], 1
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        lea eax, ds:[esi+0x128]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push ebx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        push ebx
        mov dword ptr ds : [esi+0x1C4], ebx
        push ebx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [esi+0x1C8], ebx
        lea edi, ds:[esi+0x1CC]
        call public_628b030
        mov ecx, dword ptr ds : [eax]
        mov edx, edi
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        lea ecx, ds:[edi+0xC]
        mov dword ptr ds : [edx+8], eax
        call public_62748a0
        lea ecx, ds:[esi+0x134]
        mov dword ptr ds : [esi+0x1FC], 0x420C0000
        mov dword ptr ds : [esi+0x200], 0x3E800000
        mov dword ptr ds : [esi+0x204], 0x49742400
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+4]
        push edx
        push eax
        call public_6279fb0
        mov edx, dword ptr ds : [esi+0x14C]
        mov eax, dword ptr ds : [esi+0x148]
        lea ecx, ds:[esi+0x144]
        push edx
        push eax
        call public_6279fb0
        mov edx, dword ptr ds : [esi+0x15C]
        mov eax, dword ptr ds : [esi+0x158]
        lea ecx, ds:[esi+0x154]
        push edx
        push eax
        call public_6279fb0
        mov edx, dword ptr ds : [esi+0x16C]
        mov eax, dword ptr ds : [esi+0x168]
        lea ecx, ds:[esi+0x164]
        push edx
        push eax
        call public_6279fb0
        mov edx, dword ptr ds : [esi+0x17C]
        mov eax, dword ptr ds : [esi+0x178]
        lea ecx, ds:[esi+0x174]
        push edx
        push eax
        call public_6279fb0
        mov edx, dword ptr ds : [esi+0x18C]
        mov eax, dword ptr ds : [esi+0x188]
        lea ecx, ds:[esi+0x184]
        push edx
        push eax
        call public_6279fb0
        mov edx, dword ptr ds : [esi+0x19C]
        mov eax, dword ptr ds : [esi+0x198]
        lea ecx, ds:[esi+0x194]
        push edx
        push eax
        call public_6279fb0
        mov ecx, dword ptr ds : [esi+0x1A8]
        mov eax, dword ptr ds : [esi+0x1AC]
        lea edi, ds:[esi+0x1A4]
        push ecx
        push eax
        push eax
        call public_630cb40
        mov ecx, dword ptr ds : [edi+8]
        add esp, 0xC
        push ecx
        mov ebx, eax
        push ebx
        mov ecx, edi
        call public_628f050
        mov dword ptr ds : [edi+8], ebx
        mov ecx, dword ptr ds : [esi+0x1B8]
        mov eax, dword ptr ds : [esi+0x1BC]
        add esi, 0x1B4
        push ecx
        push eax
        push eax
        call public_630cb40
        mov edx, dword ptr ds : [esi+8]
        add esp, 0xC
        mov edi, eax
        push edx
        push edi
        mov ecx, esi
        call public_628f050
        mov dword ptr ds : [esi+8], edi
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6274540)
    }
}

#undef public_6274560
