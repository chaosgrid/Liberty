#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6266ac0 _public_6266ac0
#define public_6266ae0 _public_6266ae0
#define public_6266af2 _public_6266af2
#define public_6266b00 _public_6266b00
#define public_6266b18 _public_6266b18
#define public_6266b25 _public_6266b25
#define public_6266b3d _public_6266b3d
#define public_6266b70 _public_6266b70
#define public_6266b82 _public_6266b82

PROC_DECLARE(0x6266a90, internal_6266a90, public_6266a90);
extern "C" NAKED register_t __cdecl internal_6266a90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        push edi
        sub ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [esi], cl
        xor ecx, ecx
        sar ebp, 1
        cmp ebp, ecx
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], ecx
        jbe public_6266b82
        mov eax, ebp
        jge public_6266ac0
        xor eax, eax
        public_6266ac0 : nop
        lea edx, ds:[eax+eax]
        push ebx
        push edx
        call public_6391d9c
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        test edi, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        je public_6266af2
        lea ebx, ds:[ebx]
        public_6266ae0 : nop
        push edi
        push ebx
        call public_626c1c0
        add esp, 8
        add ebx, 2
        add edi, 2
        jne public_6266ae0
        public_6266af2 : nop
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, dword ptr ss : [esp+0x18]
        je public_6266b18
        lea esp, ss:[esp]
        public_6266b00 : nop
        push edi
        push ebx
        call public_626c1c0
        mov eax, dword ptr ss : [esp+0x20]
        add edi, 2
        add esp, 8
        add ebx, 2
        cmp edi, eax
        jne public_6266b00
        public_6266b18 : nop
        mov eax, dword ptr ds : [esi+8]
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6266b3d
        public_6266b25 : nop
        lea eax, ds:[edi+ebx]
        push edi
        push eax
        call public_626c1c0
        mov eax, dword ptr ss : [esp+0x20]
        add edi, 2
        add esp, 8
        cmp edi, eax
        jne public_6266b25
        public_6266b3d : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        lea eax, ds:[edx+ebp*2]
        mov dword ptr ds : [esi+0xC], eax
        pop ebx
        jne public_6266b70
        xor eax, eax
        mov eax, ebp
        lea ecx, ds:[edx+eax*2]
        pop edi
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], edx
        mov eax, esi
        pop esi
        pop ebp
        ret 0xC
        public_6266b70 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 1
        add eax, ebp
        lea ecx, ds:[edx+eax*2]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], edx
        public_6266b82 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6266a90)
    }
}

#undef public_6266ac0
#undef public_6266ae0
#undef public_6266af2
#undef public_6266b00
#undef public_6266b18
#undef public_6266b25
#undef public_6266b3d
#undef public_6266b70
#undef public_6266b82
