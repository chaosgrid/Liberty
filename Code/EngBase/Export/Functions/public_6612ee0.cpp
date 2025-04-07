#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612ee0);
CLANG_FORWARD_PROC_SYMBOL(public_66131d0);
CLANG_FORWARD_PROC_SYMBOL(public_6613210);
CLANG_FORWARD_PROC_SYMBOL(public_66143a0);
CLANG_FORWARD_PROC_SYMBOL(public_6614530);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6612f34 _public_6612f34
#define public_6612f36 _public_6612f36
#define public_6612f3e _public_6612f3e
#define public_6612f51 _public_6612f51
#define public_6612f5e _public_6612f5e
#define public_6612f7e _public_6612f7e
#define public_6612f8a _public_6612f8a
#define public_6612f98 _public_6612f98
#define public_6612fa0 _public_6612fa0
#define public_6612fb0 _public_6612fb0
#define public_6612fba _public_6612fba
#define public_6612fda _public_6612fda
#define public_6612fea _public_6612fea
#define public_6612ff8 _public_6612ff8
#define public_6613002 _public_6613002
#define public_6613010 _public_6613010
#define public_6613056 _public_6613056
#define public_6613084 _public_6613084
#define public_66130be _public_66130be
#define public_66130cc _public_66130cc
#define public_66130de _public_66130de
#define public_66130fa _public_66130fa
#define public_661310a _public_661310a
#define public_6613110 _public_6613110
#define public_6613119 _public_6613119
#define public_661312c _public_661312c
#define public_6613142 _public_6613142
#define public_6613158 _public_6613158
#define public_6613178 _public_6613178
#define public_6613187 _public_6613187
#define public_6613199 _public_6613199
#define public_66131a4 _public_66131a4
#define public_66131b3 _public_66131b3
#define public_66131ba _public_66131ba

PROC_DECLARE(0x6612ee0, internal_6612ee0, public_6612ee0);
extern "C" NAKED register_t __cdecl internal_6612ee0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov eax, 0x66666667
        push edi
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, esi
        mov edi, dword ptr ss : [esp+0x20]
        imul ecx
        sar edx, 3
        mov eax, edx
        mov dword ptr ss : [esp+0x10], ebp
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_6613084
        mov ebx, dword ptr ss : [ebp+4]
        test ebx, ebx
        je public_6612f34
        mov ecx, esi
        mov eax, 0x66666667
        sub ecx, ebx
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edi, edx
        mov ecx, edx
        jb public_6612f36
        public_6612f34 : nop
        mov ecx, edi
        public_6612f36 : nop
        test ebx, ebx
        jne public_6612f3e
        xor edx, edx
        jmp public_6612f51
        public_6612f3e : nop
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6612f51 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_6612f5e
        xor eax, eax
        public_6612f5e : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_66281dc
        mov esi, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        je public_6612f98
        public_6612f7e : nop
        test ebx, ebx
        je public_6612f8a
        push esi
        mov ecx, ebx
        call public_6613210
        public_6612f8a : nop
        mov edx, dword ptr ss : [esp+0x1C]
        add esi, 0x14
        add ebx, 0x14
        cmp esi, edx
        jne public_6612f7e
        public_6612f98 : nop
        test edi, edi
        mov esi, ebx
        jbe public_6612fba
        mov ebp, edi
        public_6612fa0 : nop
        test esi, esi
        je public_6612fb0
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, esi
        push edx
        call public_6613210
        public_6612fb0 : nop
        add esi, 0x14
        dec ebp
        jne public_6612fa0
        mov edx, dword ptr ss : [esp+0x1C]
        public_6612fba : nop
        mov esi, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+edi*4]
        shl eax, 2
        mov ecx, dword ptr ds : [esi+8]
        cmp edx, ecx
        lea ebp, ds:[eax+ebx]
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6612ff8
        mov esi, ebp
        sub esi, eax
        sub esi, ebx
        add esi, edx
        public_6612fda : nop
        test ebp, ebp
        je public_6612fea
        push esi
        mov ecx, ebp
        call public_6613210
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6612fea : nop
        add esi, 0x14
        add ebp, 0x14
        cmp esi, ecx
        jne public_6612fda
        mov esi, dword ptr ss : [esp+0x10]
        public_6612ff8 : nop
        mov ebx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        cmp esi, ebx
        je public_6613010
        public_6613002 : nop
        mov ecx, esi
        call public_66131d0
        add esi, 0x14
        cmp esi, ebx
        jne public_6613002
        public_6613010 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        call public_66281d0
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        lea edx, ds:[eax+eax*4]
        lea eax, ds:[esi+edx*4]
        mov dword ptr ds : [ecx+0xC], eax
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6613056
        xor edx, edx
        mov dword ptr ds : [ecx+4], esi
        add edi, edx
        lea edx, ds:[edi+edi*4]
        pop edi
        lea eax, ds:[esi+edx*4]
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6613056 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [ecx+4], esi
        sub edx, eax
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edi, edx
        lea edx, ds:[edi+edi*4]
        pop edi
        lea eax, ds:[esi+edx*4]
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6613084 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, edi
        jae public_6613142
        lea eax, ds:[edi+edi*4]
        shl eax, 2
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], eax
        lea ecx, ds:[eax+ebx]
        mov dword ptr ss : [esp+0x1C], ecx
        je public_66130de
        mov ebp, ecx
        sub ebp, eax
        public_66130be : nop
        test ecx, ecx
        je public_66130cc
        push ebp
        call public_6613210
        mov ecx, dword ptr ss : [esp+0x1C]
        public_66130cc : nop
        add ebp, 0x14
        add ecx, 0x14
        cmp ebp, esi
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_66130be
        mov ebp, dword ptr ss : [esp+0x10]
        public_66130de : nop
        mov esi, dword ptr ss : [ebp+8]
        mov eax, 0x66666667
        mov ecx, esi
        sub ecx, ebx
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub edi, edx
        je public_6613110
        public_66130fa : nop
        test esi, esi
        je public_661310a
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, esi
        call public_6613210
        public_661310a : nop
        add esi, 0x14
        dec edi
        jne public_66130fa
        public_6613110 : nop
        mov edi, dword ptr ss : [ebp+8]
        mov esi, ebx
        cmp ebx, edi
        je public_661312c
        public_6613119 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, esi
        push edx
        call public_6614530
        add esi, 0x14
        cmp esi, edi
        jne public_6613119
        public_661312c : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        pop edi
        mov dword ptr ss : [ebp+8], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6613142 : nop
        test edi, edi
        jbe public_66131ba
        lea ebp, ds:[edi+edi*4]
        mov edi, esi
        shl ebp, 2
        sub edi, ebp
        mov dword ptr ss : [esp+0x1C], esi
        cmp edi, esi
        je public_6613178
        public_6613158 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push edi
        push ecx
        call public_66143a0
        mov edx, dword ptr ss : [esp+0x24]
        add edi, 0x14
        add esp, 8
        add edx, 0x14
        cmp edi, esi
        mov dword ptr ss : [esp+0x1C], edx
        jne public_6613158
        public_6613178 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [edx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_6613199
        public_6613187 : nop
        sub esi, 0x14
        sub edi, 0x14
        push esi
        mov ecx, edi
        call public_6614530
        cmp esi, ebx
        jne public_6613187
        public_6613199 : nop
        lea esi, ds:[ebx+ebp]
        cmp ebx, esi
        je public_66131b3
        mov edi, dword ptr ss : [esp+0x24]
        public_66131a4 : nop
        push edi
        mov ecx, ebx
        call public_6614530
        add ebx, 0x14
        cmp ebx, esi
        jne public_66131a4
        public_66131b3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ds : [eax+8], ebp
        public_66131ba : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6612ee0)
    }
}

#undef public_6612f34
#undef public_6612f36
#undef public_6612f3e
#undef public_6612f51
#undef public_6612f5e
#undef public_6612f7e
#undef public_6612f8a
#undef public_6612f98
#undef public_6612fa0
#undef public_6612fb0
#undef public_6612fba
#undef public_6612fda
#undef public_6612fea
#undef public_6612ff8
#undef public_6613002
#undef public_6613010
#undef public_6613056
#undef public_6613084
#undef public_66130be
#undef public_66130cc
#undef public_66130de
#undef public_66130fa
#undef public_661310a
#undef public_6613110
#undef public_6613119
#undef public_661312c
#undef public_6613142
#undef public_6613158
#undef public_6613178
#undef public_6613187
#undef public_6613199
#undef public_66131a4
#undef public_66131b3
#undef public_66131ba
