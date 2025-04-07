#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_538200);

#define public_538219 _public_538219
#define public_53822b _public_53822b
#define public_538270 _public_538270
#define public_538296 _public_538296
#define public_53829a _public_53829a
#define public_5382c3 _public_5382c3
#define public_5382dd _public_5382dd

PROC_DECLARE(0x538200, internal_538200, public_538200);
extern "C" NAKED register_t __cdecl internal_538200()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor esi, esi
        test edi, edi
        mov dword ptr ss : [esp+8], ecx
        jne public_538219
        pop edi
        xor eax, eax
        pop esi
        pop ecx
        ret 0xC
        public_538219 : nop
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_53822b
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        mov esi, 1
        public_53822b : nop
        mov eax, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [edi+0x18]
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebp
        mov ebp, dword ptr ds : [ebx+8]
        sub ebp, eax
        mov eax, dword ptr ds : [ebx+0xC]
        sub eax, edx
        mov edx, dword ptr ds : [ebx+0x10]
        cmp ebp, edx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x1C], edx
        jge public_53829a
        cmp eax, edx
        jge public_538270
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push edx
        lea edx, ds:[eax+esi*4]
        push edx
        call public_538200
        mov ecx, dword ptr ss : [esp+0x10]
        add esi, eax
        mov eax, dword ptr ss : [esp+0x20]
        public_538270 : nop
        mov edx, eax
        neg edx
        cmp edx, dword ptr ss : [esp+0x1C]
        jge public_538296
        mov eax, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ss : [esp+0x18]
        push ebx
        push eax
        lea eax, ds:[edx+esi*4]
        push eax
        call public_538200
        mov ecx, dword ptr ss : [esp+0x10]
        add esi, eax
        mov eax, dword ptr ss : [esp+0x20]
        public_538296 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        public_53829a : nop
        neg ebp
        cmp ebp, edx
        jge public_5382dd
        cmp eax, edx
        jge public_5382c3
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push edx
        lea edx, ds:[eax+esi*4]
        push edx
        call public_538200
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x1C]
        add esi, eax
        mov eax, dword ptr ss : [esp+0x20]
        public_5382c3 : nop
        neg eax
        cmp eax, edx
        jge public_5382dd
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [esp+0x18]
        push ebx
        push eax
        lea eax, ds:[edx+esi*4]
        push eax
        call public_538200
        add esi, eax
        public_5382dd : nop
        pop ebp
        pop ebx
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x538200)
    }
}

#undef public_538219
#undef public_53822b
#undef public_538270
#undef public_538296
#undef public_53829a
#undef public_5382c3
#undef public_5382dd
