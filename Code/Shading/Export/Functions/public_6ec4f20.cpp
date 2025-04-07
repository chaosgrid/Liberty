#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec4f20);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec4f74 _public_6ec4f74
#define public_6ec4f76 _public_6ec4f76
#define public_6ec4f7e _public_6ec4f7e
#define public_6ec4f91 _public_6ec4f91
#define public_6ec4f9e _public_6ec4f9e
#define public_6ec4fc0 _public_6ec4fc0
#define public_6ec4fd7 _public_6ec4fd7
#define public_6ec4fe1 _public_6ec4fe1
#define public_6ec4ff0 _public_6ec4ff0
#define public_6ec5007 _public_6ec5007
#define public_6ec500d _public_6ec500d
#define public_6ec5030 _public_6ec5030
#define public_6ec5047 _public_6ec5047
#define public_6ec5051 _public_6ec5051
#define public_6ec508d _public_6ec508d
#define public_6ec50ba _public_6ec50ba
#define public_6ec50f0 _public_6ec50f0
#define public_6ec5107 _public_6ec5107
#define public_6ec5111 _public_6ec5111
#define public_6ec5133 _public_6ec5133
#define public_6ec5146 _public_6ec5146
#define public_6ec514c _public_6ec514c
#define public_6ec5155 _public_6ec5155
#define public_6ec516b _public_6ec516b
#define public_6ec5181 _public_6ec5181
#define public_6ec51a0 _public_6ec51a0
#define public_6ec51b7 _public_6ec51b7
#define public_6ec51c1 _public_6ec51c1
#define public_6ec51d0 _public_6ec51d0
#define public_6ec51ed _public_6ec51ed
#define public_6ec51f8 _public_6ec51f8
#define public_6ec5212 _public_6ec5212
#define public_6ec5215 _public_6ec5215

PROC_DECLARE(0x6ec4f20, internal_6ec4f20, public_6ec4f20);
extern "C" NAKED register_t __cdecl internal_6ec4f20()
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
        jae public_6ec50ba
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        je public_6ec4f74
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
        jb public_6ec4f76
        public_6ec4f74 : nop
        mov ecx, esi
        public_6ec4f76 : nop
        test ebp, ebp
        jne public_6ec4f7e
        xor edx, edx
        jmp public_6ec4f91
        public_6ec4f7e : nop
        sub ebx, ebp
        mov eax, 0x4EC4EC4F
        imul ebx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ec4f91 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6ec4f9e
        xor eax, eax
        public_6ec4f9e : nop
        imul eax, 0x34
        push eax
        call public_6ed0c5c
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6ec4fe1
        nop 
        lea esp, ss:[esp]
        public_6ec4fc0 : nop
        test edx, edx
        je public_6ec4fd7
        mov ecx, 0xD
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6ec4fd7 : nop
        add eax, 0x34
        add edx, 0x34
        cmp eax, ebx
        jne public_6ec4fc0
        public_6ec4fe1 : nop
        test esi, esi
        mov eax, edx
        jbe public_6ec500d
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        lea ecx, ds:[ecx]
        public_6ec4ff0 : nop
        test eax, eax
        je public_6ec5007
        mov ecx, 0xD
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6ec5007 : nop
        add eax, 0x34
        dec ebx
        jne public_6ec4ff0
        public_6ec500d : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        imul ecx, 0x34
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_6ec5051
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        lea esp, ss:[esp]
        public_6ec5030 : nop
        test ebx, ebx
        je public_6ec5047
        mov ecx, 0xD
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6ec5047 : nop
        add eax, 0x34
        add ebx, 0x34
        cmp eax, ebp
        jne public_6ec5030
        public_6ec5051 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6ed0c50
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        imul eax, 0x34
        add eax, ebx
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_6ec508d
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
        public_6ec508d : nop
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
        public_6ec50ba : nop
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
        jae public_6ec5181
        mov ecx, esi
        imul ecx, 0x34
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+ebp]
        je public_6ec5111
        mov edx, eax
        sub edx, ecx
        nop 
        public_6ec50f0 : nop
        test eax, eax
        je public_6ec5107
        mov ecx, 0xD
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6ec5107 : nop
        add edx, 0x34
        add eax, 0x34
        cmp edx, ebx
        jne public_6ec50f0
        public_6ec5111 : nop
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
        je public_6ec514c
        mov eax, esi
        public_6ec5133 : nop
        test ebx, ebx
        je public_6ec5146
        mov ecx, 0xD
        mov esi, edx
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6ec5146 : nop
        add ebx, 0x34
        dec eax
        jne public_6ec5133
        public_6ec514c : nop
        mov ebx, dword ptr ds : [edi+8]
        cmp ebp, ebx
        mov eax, ebp
        je public_6ec516b
        public_6ec5155 : nop
        mov edi, eax
        add eax, 0x34
        cmp eax, ebx
        mov ecx, 0xD
        mov esi, edx
        rep movsd
        jne public_6ec5155
        mov edi, dword ptr ss : [esp+0x10]
        public_6ec516b : nop
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
        public_6ec5181 : nop
        test esi, esi
        jbe public_6ec5215
        imul esi, 0x34
        mov eax, ebx
        sub eax, esi
        cmp eax, ebx
        mov edx, ebx
        mov dword ptr ss : [esp+0x20], esi
        je public_6ec51c1
        lea ebx, ds:[ebx]
        public_6ec51a0 : nop
        test edx, edx
        je public_6ec51b7
        mov ecx, 0xD
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_6ec51b7 : nop
        add eax, 0x34
        add edx, 0x34
        cmp eax, ebx
        jne public_6ec51a0
        public_6ec51c1 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov eax, ebx
        sub eax, esi
        cmp ebp, eax
        je public_6ec51ed
        lea esp, ss:[esp]
        public_6ec51d0 : nop
        sub eax, 0x34
        sub ebx, 0x34
        cmp eax, ebp
        mov ecx, 0xD
        mov esi, eax
        mov edi, ebx
        rep movsd
        jne public_6ec51d0
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_6ec51ed : nop
        lea eax, ds:[esi+ebp]
        cmp ebp, eax
        je public_6ec5212
        mov edx, dword ptr ss : [esp+0x28]
        public_6ec51f8 : nop
        mov edi, ebp
        add ebp, 0x34
        cmp ebp, eax
        mov ecx, 0xD
        mov esi, edx
        rep movsd
        jne public_6ec51f8
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_6ec5212 : nop
        add dword ptr ds : [edi+8], esi
        public_6ec5215 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6ec4f20)
    }
}

#undef public_6ec4f74
#undef public_6ec4f76
#undef public_6ec4f7e
#undef public_6ec4f91
#undef public_6ec4f9e
#undef public_6ec4fc0
#undef public_6ec4fd7
#undef public_6ec4fe1
#undef public_6ec4ff0
#undef public_6ec5007
#undef public_6ec500d
#undef public_6ec5030
#undef public_6ec5047
#undef public_6ec5051
#undef public_6ec508d
#undef public_6ec50ba
#undef public_6ec50f0
#undef public_6ec5107
#undef public_6ec5111
#undef public_6ec5133
#undef public_6ec5146
#undef public_6ec514c
#undef public_6ec5155
#undef public_6ec516b
#undef public_6ec5181
#undef public_6ec51a0
#undef public_6ec51b7
#undef public_6ec51c1
#undef public_6ec51d0
#undef public_6ec51ed
#undef public_6ec51f8
#undef public_6ec5212
#undef public_6ec5215
