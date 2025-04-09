#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_442cb0);

#define public_442cc3 _public_442cc3
#define public_442cde _public_442cde
#define public_442ce2 _public_442ce2
#define public_442ce7 _public_442ce7
#define public_442d19 _public_442d19

PROC_DECLARE(0x442cb0, internal_442cb0, public_442cb0);
extern "C" NAKED register_t __cdecl internal_442cb0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        mov ebx, eax
        cmp esi, dword ptr ds : [edi+8]
        je public_442ce7
        public_442cc3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        call dword ptr ds : [public_5c6fa4]
        add esp, 8
        test al, al
        je public_442cde
        mov esi, dword ptr ds : [esi+8]
        jmp public_442ce2
        public_442cde : nop
        mov ebx, esi
        mov esi, dword ptr ds : [esi]
        public_442ce2 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_442cc3
        public_442ce7 : nop
        cmp ebx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0xC], ebx
        je public_442d19
        mov edx, dword ptr ss : [esp+0x18]
        add ebx, 0xC
        push ebx
        push edx
        call dword ptr ds : [public_5c6fa4]
        add esp, 8
        test al, al
        jne public_442d19
        lea eax, ss:[esp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_442d19 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x442cb0)
    }
}

#undef public_442cc3
#undef public_442cde
#undef public_442ce2
#undef public_442ce7
#undef public_442d19
