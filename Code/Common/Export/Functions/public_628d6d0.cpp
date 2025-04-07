#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628d701 _public_628d701
#define public_628d720 _public_628d720
#define public_628d732 _public_628d732
#define public_628d740 _public_628d740
#define public_628d758 _public_628d758
#define public_628d765 _public_628d765
#define public_628d77d _public_628d77d
#define public_628d7b0 _public_628d7b0
#define public_628d7c3 _public_628d7c3

PROC_DECLARE(0x628d6d0, internal_628d6d0, public_628d6d0);
extern "C" NAKED register_t __cdecl internal_628d6d0()
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
        sar ebp, 2
        cmp ebp, ecx
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], ecx
        jbe public_628d7c3
        mov eax, ebp
        jge public_628d701
        xor eax, eax
        public_628d701 : nop
        lea edx, ds:[eax*4]
        push ebx
        push edx
        call public_6391d9c
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        test edi, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        je public_628d732
        nop 
        public_628d720 : nop
        push edi
        push ebx
        call public_630cd00
        add esp, 8
        add ebx, 4
        add edi, 4
        jne public_628d720
        public_628d732 : nop
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, dword ptr ss : [esp+0x18]
        je public_628d758
        lea esp, ss:[esp]
        public_628d740 : nop
        push edi
        push ebx
        call public_630cd00
        mov eax, dword ptr ss : [esp+0x20]
        add edi, 4
        add esp, 8
        add ebx, 4
        cmp edi, eax
        jne public_628d740
        public_628d758 : nop
        mov eax, dword ptr ds : [esi+8]
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_628d77d
        public_628d765 : nop
        lea eax, ds:[edi+ebx]
        push edi
        push eax
        call public_630cd00
        mov eax, dword ptr ss : [esp+0x20]
        add edi, 4
        add esp, 8
        cmp edi, eax
        jne public_628d765
        public_628d77d : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        lea eax, ds:[edx+ebp*4]
        mov dword ptr ds : [esi+0xC], eax
        pop ebx
        jne public_628d7b0
        xor eax, eax
        mov eax, ebp
        lea ecx, ds:[edx+eax*4]
        pop edi
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], edx
        mov eax, esi
        pop esi
        pop ebp
        ret 0xC
        public_628d7b0 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        add eax, ebp
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], edx
        public_628d7c3 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x628d6d0)
    }
}

#undef public_628d701
#undef public_628d720
#undef public_628d732
#undef public_628d740
#undef public_628d758
#undef public_628d765
#undef public_628d77d
#undef public_628d7b0
#undef public_628d7c3
