#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57a620);
CLANG_FORWARD_PROC_SYMBOL(public_58f640);
CLANG_FORWARD_PROC_SYMBOL(public_595d60);
CLANG_FORWARD_PROC_SYMBOL(public_595db0);
CLANG_FORWARD_PROC_SYMBOL(public_595de0);
CLANG_FORWARD_PROC_SYMBOL(public_595e10);

#define public_58f669 _public_58f669
#define public_58f674 _public_58f674
#define public_58f6a9 _public_58f6a9
#define public_58f6d6 _public_58f6d6
#define public_58f6e1 _public_58f6e1

PROC_DECLARE(0x58f640, internal_58f640, public_58f640);
extern "C" NAKED register_t __cdecl internal_58f640()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x57C], edx
        mov dword ptr ds : [esi+0x580], edi
        mov ecx, dword ptr ds : [esi+0x4A4]
        test ecx, ecx
        jne public_58f669
        xor eax, eax
        jmp public_58f674
        public_58f669 : nop
        mov eax, dword ptr ds : [esi+0x4A8]
        sub eax, ecx
        sar eax, 2
        public_58f674 : nop
        sub eax, edi
        cmp edx, eax
        ja public_58f6a9
        mov ecx, dword ptr ds : [esi+0x588]
        push 0
        call public_595db0
        mov eax, dword ptr ds : [esi+0x588]
        mov cl, byte ptr ds : [eax+0x6C]
        and cl, 0xFC
        push 1
        mov byte ptr ds : [eax+0x6C], cl
        push 1
        mov ecx, esi
        call public_57a620
        pop edi
        pop esi
        add esp, 8
        ret 8
        public_58f6a9 : nop
        mov eax, dword ptr ds : [esi+0x588]
        fild dword ptr ss : [esp+0x14]
        or byte ptr ds : [eax+0x6C], 3
        push ecx
        mov ecx, dword ptr ds : [esi+0x588]
        fstp dword ptr ss : [esp]
        push 0
        call public_595d60
        mov ecx, dword ptr ds : [esi+0x4A4]
        test ecx, ecx
        jne public_58f6d6
        xor eax, eax
        jmp public_58f6e1
        public_58f6d6 : nop
        mov eax, dword ptr ds : [esi+0x4A8]
        sub eax, ecx
        sar eax, 2
        public_58f6e1 : nop
        sub eax, dword ptr ds : [esi+0x580]
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], 0
        fild qword ptr ss : [esp+8]
        push ecx
        mov ecx, dword ptr ds : [esi+0x588]
        fstp dword ptr ss : [esp]
        call public_595de0
        mov ecx, dword ptr ds : [esi+0x588]
        push 0x3F800000
        call public_595e10
        push 1
        push 1
        mov ecx, esi
        call public_57a620
        pop edi
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x58f640)
    }
}

#undef public_58f669
#undef public_58f674
#undef public_58f6a9
#undef public_58f6d6
#undef public_58f6e1
