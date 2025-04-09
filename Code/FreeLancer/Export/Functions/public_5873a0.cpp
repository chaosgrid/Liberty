#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_5873a0);

#define public_5873c0 _public_5873c0
#define public_587404 _public_587404
#define public_587410 _public_587410
#define public_587431 _public_587431

PROC_DECLARE(0x5873a0, internal_5873a0, public_5873a0);
extern "C" NAKED register_t __cdecl internal_5873a0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ds : [ecx+8]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        cmp ebp, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov esi, eax
        je public_587404
        lea edi, ss:[ebp+0x18]
        sub ebp, eax
        nop 
        public_5873c0 : nop
        mov eax, dword ptr ds : [edi-0x18]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ds:[esi+ebp+4]
        push eax
        lea ecx, ds:[esi+4]
        call dword ptr ds : [public_5c6f9c]
        mov ecx, dword ptr ds : [edi-4]
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [edi+4]
        add edi, 0x20
        mov dword ptr ds : [esi+0x1C], eax
        lea ecx, ds:[edi-0x18]
        add esi, 0x20
        cmp ecx, ebx
        jne public_5873c0
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        public_587404 : nop
        mov ebx, dword ptr ds : [ecx+8]
        cmp esi, ebx
        mov edi, esi
        je public_587431
        lea ecx, ds:[ecx]
        public_587410 : nop
        mov ecx, edi
        call public_455e90
        add edi, 0x20
        cmp edi, ebx
        jne public_587410
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [edx+8], esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_587431 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x5873a0)
    }
}

#undef public_5873c0
#undef public_587404
#undef public_587410
#undef public_587431
