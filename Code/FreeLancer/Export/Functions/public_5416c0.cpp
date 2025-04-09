#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_540fc0);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_541700 _public_541700
#define public_541714 _public_541714
#define public_541716 _public_541716
#define public_541740 _public_541740
#define public_541754 _public_541754
#define public_541756 _public_541756
#define public_541780 _public_541780
#define public_541794 _public_541794
#define public_541796 _public_541796
#define public_5417c0 _public_5417c0
#define public_5417d4 _public_5417d4
#define public_5417d6 _public_5417d6
#define public_541800 _public_541800
#define public_541814 _public_541814
#define public_541816 _public_541816
#define public_541835 _public_541835
#define public_54184d _public_54184d
#define public_541864 _public_541864
#define public_54187c _public_54187c
#define public_54187e _public_54187e
#define public_541880 _public_541880

PROC_DECLARE(0x5416c0, internal_5416c0, public_5416c0);
extern "C" NAKED register_t __cdecl internal_5416c0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        xor eax, eax
        test ebx, 0x3FFFFFFF
        push edi
        je public_541880
        mov eax, dword ptr ss : [esp+0x14]
        xor edi, edi
        test eax, eax
        jne public_54184d
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 1
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_541716
        mov edi, edi
        public_541700 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        cmp eax, ebx
        je public_541714
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541700
        jmp public_541716
        public_541714 : nop
        mov edi, esi
        public_541716 : nop
        test edi, edi
        jne public_54187e
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 4
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_541756
        lea esp, ss:[esp]
        public_541740 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        cmp eax, ebx
        je public_541754
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541740
        jmp public_541756
        public_541754 : nop
        mov edi, esi
        public_541756 : nop
        test edi, edi
        jne public_54187e
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 5
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_541796
        lea esp, ss:[esp]
        public_541780 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        cmp eax, ebx
        je public_541794
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541780
        jmp public_541796
        public_541794 : nop
        mov edi, esi
        public_541796 : nop
        test edi, edi
        jne public_54187e
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 6
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_5417d6
        lea esp, ss:[esp]
        public_5417c0 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        cmp eax, ebx
        je public_5417d4
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_5417c0
        jmp public_5417d6
        public_5417d4 : nop
        mov edi, esi
        public_5417d6 : nop
        test edi, edi
        jne public_54187e
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 7
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_541816
        lea esp, ss:[esp]
        public_541800 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        cmp eax, ebx
        je public_541814
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541800
        jmp public_541816
        public_541814 : nop
        mov edi, esi
        public_541816 : nop
        test edi, edi
        jne public_54187e
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 2
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_54187e
        public_541835 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        cmp eax, ebx
        je public_54187c
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541835
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 
        public_54184d : nop
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_54187e
        public_541864 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        cmp eax, ebx
        je public_54187c
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_541864
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 
        public_54187c : nop
        mov edi, esi
        public_54187e : nop
        mov eax, edi
        public_541880 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5416c0)
    }
}

#undef public_541700
#undef public_541714
#undef public_541716
#undef public_541740
#undef public_541754
#undef public_541756
#undef public_541780
#undef public_541794
#undef public_541796
#undef public_5417c0
#undef public_5417d4
#undef public_5417d6
#undef public_541800
#undef public_541814
#undef public_541816
#undef public_541835
#undef public_54184d
#undef public_541864
#undef public_54187c
#undef public_54187e
#undef public_541880
