#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4be6c0);

#define public_4be702 _public_4be702
#define public_4be743 _public_4be743
#define public_4be745 _public_4be745
#define public_4be762 _public_4be762
#define public_4be7a0 _public_4be7a0
#define public_4be7b2 _public_4be7b2

PROC_DECLARE(0x4be6c0, internal_4be6c0, public_4be6c0);
extern "C" NAKED register_t __cdecl internal_4be6c0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp+4]
        push esi
        push edi
        push eax
        call dword ptr ds : [public_5c629c]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [public_5c69a0]
        add esp, 4
        mov ecx, ebx
        mov esi, eax
        call edi
        mov ecx, dword ptr ss : [esp+0x1C]
        call edi
        test esi, esi
        je public_4be762
        mov eax, dword ptr ds : [esi+0x78]
        test eax, eax
        je public_4be702
        mov cl, byte ptr ss : [esp+0x28]
        test cl, cl
        jne public_4be702
        mov dword ptr ds : [ebx], eax
        jmp public_4be745
        public_4be702 : nop
        mov eax, dword ptr ds : [esi+0x74]
        mov dword ptr ds : [ebx], eax
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        call edi
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call dword ptr ds : [public_5c603c]
        mov ecx, dword ptr ds : [esi+0x7C]
        add esp, 4
        test ecx, ecx
        jne public_4be743
        test eax, eax
        je public_4be745
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4be745
        mov ecx, dword ptr ds : [eax+0x24]
        test ecx, ecx
        je public_4be745
        mov eax, dword ptr ds : [eax+0x28]
        sub eax, ecx
        sar eax, 3
        test eax, eax
        jbe public_4be745
        mov ecx, dword ptr ds : [ecx]
        public_4be743 : nop
        mov dword ptr ds : [ebx], ecx
        public_4be745 : nop
        mov edx, dword ptr ds : [esi+0x88]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x8C]
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 
        public_4be762 : nop
        mov ebp, dword ptr ss : [ebp+4]
        push ebp
        call dword ptr ds : [public_5c603c]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_4be7b2
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx], eax
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        call edi
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_4be7a0
        mov ecx, dword ptr ds : [eax+0x24]
        test ecx, ecx
        je public_4be7a0
        mov eax, dword ptr ds : [eax+0x28]
        sub eax, ecx
        sar eax, 3
        test eax, eax
        jbe public_4be7a0
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [ebx], ecx
        public_4be7a0 : nop
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx], ecx
        public_4be7b2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4be6c0)
    }
}

#undef public_4be702
#undef public_4be743
#undef public_4be745
#undef public_4be762
#undef public_4be7a0
#undef public_4be7b2
