#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f2da0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4f2df4 _public_4f2df4
#define public_4f2df6 _public_4f2df6
#define public_4f2dfe _public_4f2dfe
#define public_4f2e11 _public_4f2e11
#define public_4f2e1e _public_4f2e1e
#define public_4f2e40 _public_4f2e40
#define public_4f2e57 _public_4f2e57
#define public_4f2e61 _public_4f2e61
#define public_4f2e70 _public_4f2e70
#define public_4f2e87 _public_4f2e87
#define public_4f2e8d _public_4f2e8d
#define public_4f2eb0 _public_4f2eb0
#define public_4f2ec7 _public_4f2ec7
#define public_4f2ed1 _public_4f2ed1
#define public_4f2f0d _public_4f2f0d
#define public_4f2f3a _public_4f2f3a
#define public_4f2f70 _public_4f2f70
#define public_4f2f87 _public_4f2f87
#define public_4f2f91 _public_4f2f91
#define public_4f2fb3 _public_4f2fb3
#define public_4f2fc6 _public_4f2fc6
#define public_4f2fcc _public_4f2fcc
#define public_4f2fd5 _public_4f2fd5
#define public_4f2feb _public_4f2feb
#define public_4f3001 _public_4f3001
#define public_4f3020 _public_4f3020
#define public_4f3037 _public_4f3037
#define public_4f3041 _public_4f3041
#define public_4f3050 _public_4f3050
#define public_4f306d _public_4f306d
#define public_4f3078 _public_4f3078
#define public_4f3092 _public_4f3092
#define public_4f3095 _public_4f3095

PROC_DECLARE(0x4f2da0, internal_4f2da0, public_4f2da0);
extern "C" NAKED register_t __cdecl internal_4f2da0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, ebx
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, esi
        mov dword ptr ss : [esp+0x10], edi
        jae public_4f2f3a
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        je public_4f2df4
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp esi, edx
        mov ecx, edx
        jb public_4f2df6
        public_4f2df4 : nop
        mov ecx, esi
        public_4f2df6 : nop
        test ebp, ebp
        jne public_4f2dfe
        xor edx, edx
        jmp public_4f2e11
        public_4f2dfe : nop
        sub ebx, ebp
        mov eax, 0x4EC4EC4F
        imul ebx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_4f2e11 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_4f2e1e
        xor eax, eax
        public_4f2e1e : nop
        imul eax, 0x34
        push eax
        call public_5b7e84
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_4f2e61
        nop 
        lea esp, ss:[esp]
        public_4f2e40 : nop
        test edx, edx
        je public_4f2e57
        mov ecx, 0xD
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_4f2e57 : nop
        add eax, 0x34
        add edx, 0x34
        cmp eax, ebx
        jne public_4f2e40
        public_4f2e61 : nop
        test esi, esi
        mov eax, edx
        jbe public_4f2e8d
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        lea ecx, ds:[ecx]
        public_4f2e70 : nop
        test eax, eax
        je public_4f2e87
        mov ecx, 0xD
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_4f2e87 : nop
        add eax, 0x34
        dec ebx
        jne public_4f2e70
        public_4f2e8d : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        imul ecx, 0x34
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_4f2ed1
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        lea esp, ss:[esp]
        public_4f2eb0 : nop
        test ebx, ebx
        je public_4f2ec7
        mov ecx, 0xD
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_4f2ec7 : nop
        add eax, 0x34
        add ebx, 0x34
        cmp eax, ebp
        jne public_4f2eb0
        public_4f2ed1 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        imul eax, 0x34
        add eax, ebx
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_4f2f0d
        xor edx, edx
        mov edx, esi
        imul edx, 0x34
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4f2f0d : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edx, esi
        imul edx, 0x34
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4f2f3a : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, esi
        jae public_4f3001
        mov ecx, esi
        imul ecx, 0x34
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+ebp]
        je public_4f2f91
        mov edx, eax
        sub edx, ecx
        nop 
        public_4f2f70 : nop
        test eax, eax
        je public_4f2f87
        mov ecx, 0xD
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_4f2f87 : nop
        add edx, 0x34
        add eax, 0x34
        cmp edx, ebx
        jne public_4f2f70
        public_4f2f91 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub esi, edx
        mov edx, dword ptr ss : [esp+0x28]
        je public_4f2fcc
        mov eax, esi
        public_4f2fb3 : nop
        test ebx, ebx
        je public_4f2fc6
        mov ecx, 0xD
        mov esi, edx
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_4f2fc6 : nop
        add ebx, 0x34
        dec eax
        jne public_4f2fb3
        public_4f2fcc : nop
        mov ebx, dword ptr ds : [edi+8]
        cmp ebp, ebx
        mov eax, ebp
        je public_4f2feb
        public_4f2fd5 : nop
        mov edi, eax
        add eax, 0x34
        cmp eax, ebx
        mov ecx, 0xD
        mov esi, edx
        rep movsd
        jne public_4f2fd5
        mov edi, dword ptr ss : [esp+0x10]
        public_4f2feb : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x20]
        add eax, ecx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4f3001 : nop
        test esi, esi
        jbe public_4f3095
        imul esi, 0x34
        mov eax, ebx
        sub eax, esi
        cmp eax, ebx
        mov edx, ebx
        mov dword ptr ss : [esp+0x20], esi
        je public_4f3041
        lea ebx, ds:[ebx]
        public_4f3020 : nop
        test edx, edx
        je public_4f3037
        mov ecx, 0xD
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_4f3037 : nop
        add eax, 0x34
        add edx, 0x34
        cmp eax, ebx
        jne public_4f3020
        public_4f3041 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov eax, ebx
        sub eax, esi
        cmp ebp, eax
        je public_4f306d
        lea esp, ss:[esp]
        public_4f3050 : nop
        sub eax, 0x34
        sub ebx, 0x34
        cmp eax, ebp
        mov ecx, 0xD
        mov esi, eax
        mov edi, ebx
        rep movsd
        jne public_4f3050
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_4f306d : nop
        lea eax, ds:[esi+ebp]
        cmp ebp, eax
        je public_4f3092
        mov edx, dword ptr ss : [esp+0x28]
        public_4f3078 : nop
        mov edi, ebp
        add ebp, 0x34
        cmp ebp, eax
        mov ecx, 0xD
        mov esi, edx
        rep movsd
        jne public_4f3078
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_4f3092 : nop
        add dword ptr ds : [edi+8], esi
        public_4f3095 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x4f2da0)
    }
}

#undef public_4f2df4
#undef public_4f2df6
#undef public_4f2dfe
#undef public_4f2e11
#undef public_4f2e1e
#undef public_4f2e40
#undef public_4f2e57
#undef public_4f2e61
#undef public_4f2e70
#undef public_4f2e87
#undef public_4f2e8d
#undef public_4f2eb0
#undef public_4f2ec7
#undef public_4f2ed1
#undef public_4f2f0d
#undef public_4f2f3a
#undef public_4f2f70
#undef public_4f2f87
#undef public_4f2f91
#undef public_4f2fb3
#undef public_4f2fc6
#undef public_4f2fcc
#undef public_4f2fd5
#undef public_4f2feb
#undef public_4f3001
#undef public_4f3020
#undef public_4f3037
#undef public_4f3041
#undef public_4f3050
#undef public_4f306d
#undef public_4f3078
#undef public_4f3092
#undef public_4f3095
