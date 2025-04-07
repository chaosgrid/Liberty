#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62b9530);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_6323900);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62fedd0 _public_62fedd0
#define public_62fedd5 _public_62fedd5
#define public_62feddd _public_62feddd
#define public_62fede2 _public_62fede2
#define public_62fedee _public_62fedee
#define public_62fee10 _public_62fee10
#define public_62fee24 _public_62fee24
#define public_62fee89 _public_62fee89
#define public_62feea3 _public_62feea3
#define public_62feee2 _public_62feee2
#define public_62fef07 _public_62fef07
#define public_62fef20 _public_62fef20
#define public_62fef35 _public_62fef35
#define public_62fef40 _public_62fef40
#define public_62fef54 _public_62fef54

PROC_DECLARE(0x62fed90, internal_62fed90, public_62fed90);
extern "C" NAKED register_t __cdecl internal_62fed90()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ds : [esi+8]
        sub edx, eax
        sar edx, 3
        cmp edx, 1
        push edi
        mov dword ptr ss : [esp+0xC], ecx
        mov edi, eax
        jae public_62feea3
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_62fedd0
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        cmp ecx, 1
        ja public_62fedd5
        public_62fedd0 : nop
        mov ecx, 1
        public_62fedd5 : nop
        test edx, edx
        jne public_62feddd
        xor eax, eax
        jmp public_62fede2
        public_62feddd : nop
        sub eax, edx
        sar eax, 3
        public_62fede2 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_62fedee
        xor eax, eax
        public_62fedee : nop
        push ebx
        shl eax, 3
        push ebp
        push eax
        call public_6391d9c
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        je public_62fee24
        lea esp, ss:[esp]
        public_62fee10 : nop
        push ebp
        push ebx
        call public_62bee40
        add ebp, 8
        add esp, 8
        add ebx, 8
        cmp ebp, edi
        jne public_62fee10
        public_62fee24 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push ebx
        mov ecx, esi
        call public_6323900
        mov edx, dword ptr ds : [esi+8]
        add ebx, 8
        push ebx
        push edx
        push edi
        mov ecx, esi
        call public_62b9530
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_628f050
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        lea ecx, ds:[edx+eax*8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        pop ebp
        mov dword ptr ds : [esi+0xC], ecx
        pop ebx
        jne public_62fee89
        xor ecx, ecx
        lea eax, ds:[edx+ecx*8+8]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 8
        public_62fee89 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 3
        lea eax, ds:[edx+ecx*8+8]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 8
        public_62feea3 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 3
        cmp ecx, 1
        mov ecx, esi
        jae public_62fef07
        lea edx, ds:[edi+8]
        push edx
        push eax
        push edi
        call public_62b9530
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+8]
        push ecx
        sub edx, edi
        sar edx, 3
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6323900
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_62fef54
        public_62feee2 : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edi], edx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi+4], ecx
        add edi, 8
        cmp edi, eax
        jne public_62feee2
        mov eax, dword ptr ds : [esi+8]
        add eax, 8
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 8
        public_62fef07 : nop
        push eax
        push eax
        add eax, 0xFFFFFFF8
        push eax
        call public_62b9530
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-8]
        cmp edi, eax
        je public_62fef35
        lea esp, ss:[esp]
        public_62fef20 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_62fef20
        public_62fef35 : nop
        lea ecx, ds:[edi+8]
        cmp edi, ecx
        mov eax, edi
        je public_62fef54
        mov edi, edi
        public_62fef40 : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        add eax, 8
        cmp eax, ecx
        jne public_62fef40
        public_62fef54 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 8
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x62fed90)
    }
}

#undef public_62fedd0
#undef public_62fedd5
#undef public_62feddd
#undef public_62fede2
#undef public_62fedee
#undef public_62fee10
#undef public_62fee24
#undef public_62fee89
#undef public_62feea3
#undef public_62feee2
#undef public_62fef07
#undef public_62fef20
#undef public_62fef35
#undef public_62fef40
#undef public_62fef54
