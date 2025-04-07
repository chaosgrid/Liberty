#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f84576 _public_6f84576
#define public_6f84580 _public_6f84580
#define public_6f845a0 _public_6f845a0
#define public_6f845b5 _public_6f845b5
#define public_6f845c2 _public_6f845c2
#define public_6f845c9 _public_6f845c9
#define public_6f845f2 _public_6f845f2
#define public_6f845f7 _public_6f845f7
#define public_6f845ff _public_6f845ff
#define public_6f84604 _public_6f84604
#define public_6f84610 _public_6f84610
#define public_6f84679 _public_6f84679
#define public_6f846c0 _public_6f846c0
#define public_6f846cf _public_6f846cf
#define public_6f846e4 _public_6f846e4
#define public_6f846f3 _public_6f846f3
#define public_6f84700 _public_6f84700
#define public_6f8470d _public_6f8470d
#define public_6f84713 _public_6f84713
#define public_6f8472e _public_6f8472e

PROC_DECLARE(0x6f84540, internal_6f84540, public_6f84540);
extern "C" NAKED register_t __cdecl internal_6f84540()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, edi
        mov esi, ecx
        push eax
        mov ecx, ebx
        inc edi
        call dword ptr ds : [public_6fb3020]
        push edi
        mov ecx, ebx
        mov dword ptr ds : [esi+0x1C], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f8472e
        push ebp
        add esi, 0x20
        jmp public_6f84580
        public_6f84576 : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov edi, edi
        public_6f84580 : nop
        mov eax, edi
        inc edi
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], edi
        call dword ptr ds : [public_6fb3048]
        mov ebp, eax
        mov edi, offset public_6fce868
        xor ebx, ebx
        lea esp, ss:[esp]
        public_6f845a0 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6f845b5
        push eax
        push ebp
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6f845c2
        public_6f845b5 : nop
        add ebx, 8
        add edi, 8
        cmp ebx, 0x78
        jb public_6f845a0
        jmp public_6f845c9
        public_6f845c2 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x10], eax
        public_6f845c9 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov edi, eax
        jae public_6f84679
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6f845f2
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6f845f7
        public_6f845f2 : nop
        mov ecx, 1
        public_6f845f7 : nop
        test edx, edx
        jne public_6f845ff
        xor eax, eax
        jmp public_6f84604
        public_6f845ff : nop
        sub eax, edx
        sar eax, 2
        public_6f84604 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f84610
        xor eax, eax
        public_6f84610 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edi
        push eax
        mov ecx, esi
        call public_6eed270
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ebp, eax
        push 1
        push ebp
        mov ecx, esi
        call public_6f38a50
        mov edx, dword ptr ds : [esi+8]
        add ebp, 4
        push ebp
        push edx
        push edi
        mov ecx, esi
        call public_6eed270
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ds:[ebx+ecx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_6fa3db0
        lea eax, ds:[ebx+eax*4+4]
        mov dword ptr ds : [esi+4], ebx
        jmp public_6f84713
        public_6f84679 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6f846cf
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x10]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6f38a50
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6f8470d
        lea ebx, ds:[ebx]
        public_6f846c0 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6f846c0
        jmp public_6f8470d
        public_6f846cf : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6f846f3
        public_6f846e4 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6f846e4
        public_6f846f3 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6f8470d
        lea esp, ss:[esp]
        public_6f84700 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6f84700
        public_6f8470d : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        public_6f84713 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f84576
        pop ebp
        public_6f8472e : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f84540)
    }
}

#undef public_6f84576
#undef public_6f84580
#undef public_6f845a0
#undef public_6f845b5
#undef public_6f845c2
#undef public_6f845c9
#undef public_6f845f2
#undef public_6f845f7
#undef public_6f845ff
#undef public_6f84604
#undef public_6f84610
#undef public_6f84679
#undef public_6f846c0
#undef public_6f846cf
#undef public_6f846e4
#undef public_6f846f3
#undef public_6f84700
#undef public_6f8470d
#undef public_6f84713
#undef public_6f8472e
