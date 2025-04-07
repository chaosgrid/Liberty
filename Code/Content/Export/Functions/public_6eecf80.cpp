#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6eecf80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eecfd4 _public_6eecfd4
#define public_6eecfd6 _public_6eecfd6
#define public_6eecfde _public_6eecfde
#define public_6eecff1 _public_6eecff1
#define public_6eecffe _public_6eecffe
#define public_6eed020 _public_6eed020
#define public_6eed037 _public_6eed037
#define public_6eed041 _public_6eed041
#define public_6eed050 _public_6eed050
#define public_6eed067 _public_6eed067
#define public_6eed06d _public_6eed06d
#define public_6eed090 _public_6eed090
#define public_6eed0a7 _public_6eed0a7
#define public_6eed0b1 _public_6eed0b1
#define public_6eed0ed _public_6eed0ed
#define public_6eed11a _public_6eed11a
#define public_6eed150 _public_6eed150
#define public_6eed167 _public_6eed167
#define public_6eed171 _public_6eed171
#define public_6eed193 _public_6eed193
#define public_6eed1a6 _public_6eed1a6
#define public_6eed1ac _public_6eed1ac
#define public_6eed1b6 _public_6eed1b6
#define public_6eed1c5 _public_6eed1c5
#define public_6eed1db _public_6eed1db
#define public_6eed1f2 _public_6eed1f2
#define public_6eed205 _public_6eed205
#define public_6eed20f _public_6eed20f
#define public_6eed220 _public_6eed220
#define public_6eed235 _public_6eed235
#define public_6eed243 _public_6eed243
#define public_6eed252 _public_6eed252
#define public_6eed259 _public_6eed259

PROC_DECLARE(0x6eecf80, internal_6eecf80, public_6eecf80);
extern "C" NAKED register_t __cdecl internal_6eecf80()
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
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, esi
        mov dword ptr ss : [esp+0x10], edi
        jae public_6eed11a
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        je public_6eecfd4
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp esi, edx
        mov ecx, edx
        jb public_6eecfd6
        public_6eecfd4 : nop
        mov ecx, esi
        public_6eecfd6 : nop
        test ebp, ebp
        jne public_6eecfde
        xor edx, edx
        jmp public_6eecff1
        public_6eecfde : nop
        sub ebx, ebp
        mov eax, 0x78787879
        imul ebx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6eecff1 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6eecffe
        xor eax, eax
        public_6eecffe : nop
        imul eax, 0x44
        push eax
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6eed041
        nop 
        lea esp, ss:[esp]
        public_6eed020 : nop
        test edx, edx
        je public_6eed037
        mov ecx, 0x11
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6eed037 : nop
        add eax, 0x44
        add edx, 0x44
        cmp eax, ebx
        jne public_6eed020
        public_6eed041 : nop
        test esi, esi
        mov eax, edx
        jbe public_6eed06d
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        lea ecx, ds:[ecx]
        public_6eed050 : nop
        test eax, eax
        je public_6eed067
        mov ecx, 0x11
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6eed067 : nop
        add eax, 0x44
        dec ebx
        jne public_6eed050
        public_6eed06d : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        imul ecx, 0x44
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_6eed0b1
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        lea esp, ss:[esp]
        public_6eed090 : nop
        test ebx, ebx
        je public_6eed0a7
        mov ecx, 0x11
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6eed0a7 : nop
        add eax, 0x44
        add ebx, 0x44
        cmp eax, ebp
        jne public_6eed090
        public_6eed0b1 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        imul eax, 0x44
        add eax, ebx
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_6eed0ed
        xor edx, edx
        mov edx, esi
        imul edx, 0x44
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6eed0ed : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edx, esi
        imul edx, 0x44
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6eed11a : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, esi
        jae public_6eed1db
        mov ecx, esi
        imul ecx, 0x44
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+ebp]
        je public_6eed171
        mov edx, eax
        sub edx, ecx
        nop 
        public_6eed150 : nop
        test eax, eax
        je public_6eed167
        mov ecx, 0x11
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6eed167 : nop
        add edx, 0x44
        add eax, 0x44
        cmp edx, ebx
        jne public_6eed150
        public_6eed171 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub esi, edx
        mov edx, dword ptr ss : [esp+0x28]
        je public_6eed1ac
        mov eax, esi
        public_6eed193 : nop
        test ebx, ebx
        je public_6eed1a6
        mov ecx, 0x11
        mov esi, edx
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6eed1a6 : nop
        add ebx, 0x44
        dec eax
        jne public_6eed193
        public_6eed1ac : nop
        mov esi, dword ptr ds : [edi+8]
        cmp ebp, esi
        je public_6eed1c5
        lea ebx, ds:[edx+4]
        public_6eed1b6 : nop
        push ebx
        mov ecx, ebp
        call public_6ead640
        add ebp, 0x44
        cmp ebp, esi
        jne public_6eed1b6
        public_6eed1c5 : nop
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
        public_6eed1db : nop
        test esi, esi
        jbe public_6eed259
        mov edi, esi
        imul edi, 0x44
        mov eax, ebx
        sub eax, edi
        cmp eax, ebx
        mov edx, ebx
        mov dword ptr ss : [esp+0x20], edi
        je public_6eed20f
        public_6eed1f2 : nop
        test edx, edx
        je public_6eed205
        mov ecx, 0x11
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x20]
        public_6eed205 : nop
        add eax, 0x44
        add edx, 0x44
        cmp eax, ebx
        jne public_6eed1f2
        public_6eed20f : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [edx+8]
        mov esi, ebx
        sub esi, edi
        cmp ebp, esi
        je public_6eed235
        mov edi, edi
        public_6eed220 : nop
        sub esi, 0x44
        lea eax, ds:[esi+4]
        sub ebx, 0x44
        push eax
        mov ecx, ebx
        call public_6ead640
        cmp esi, ebp
        jne public_6eed220
        public_6eed235 : nop
        lea esi, ds:[edi+ebp]
        cmp ebp, esi
        je public_6eed252
        mov ecx, dword ptr ss : [esp+0x28]
        lea ebx, ds:[ecx+4]
        public_6eed243 : nop
        push ebx
        mov ecx, ebp
        call public_6ead640
        add ebp, 0x44
        cmp ebp, esi
        jne public_6eed243
        public_6eed252 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ds : [eax+8], edi
        public_6eed259 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6eecf80)
    }
}

#undef public_6eecfd4
#undef public_6eecfd6
#undef public_6eecfde
#undef public_6eecff1
#undef public_6eecffe
#undef public_6eed020
#undef public_6eed037
#undef public_6eed041
#undef public_6eed050
#undef public_6eed067
#undef public_6eed06d
#undef public_6eed090
#undef public_6eed0a7
#undef public_6eed0b1
#undef public_6eed0ed
#undef public_6eed11a
#undef public_6eed150
#undef public_6eed167
#undef public_6eed171
#undef public_6eed193
#undef public_6eed1a6
#undef public_6eed1ac
#undef public_6eed1b6
#undef public_6eed1c5
#undef public_6eed1db
#undef public_6eed1f2
#undef public_6eed205
#undef public_6eed20f
#undef public_6eed220
#undef public_6eed235
#undef public_6eed243
#undef public_6eed252
#undef public_6eed259
