#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272b50);
CLANG_FORWARD_PROC_SYMBOL(public_6272db0);
CLANG_FORWARD_PROC_SYMBOL(public_62fb540);
CLANG_FORWARD_PROC_SYMBOL(public_62fc9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62fca22 _public_62fca22
#define public_62fca24 _public_62fca24
#define public_62fca2c _public_62fca2c
#define public_62fca3f _public_62fca3f
#define public_62fca4c _public_62fca4c
#define public_62fca70 _public_62fca70
#define public_62fca88 _public_62fca88
#define public_62fca92 _public_62fca92
#define public_62fcab2 _public_62fcab2
#define public_62fcaca _public_62fcaca
#define public_62fcad0 _public_62fcad0
#define public_62fcae3 _public_62fcae3
#define public_62fcaf0 _public_62fcaf0
#define public_62fcafe _public_62fcafe
#define public_62fcb3c _public_62fcb3c
#define public_62fcb6a _public_62fcb6a
#define public_62fcba5 _public_62fcba5
#define public_62fcbb0 _public_62fcbb0
#define public_62fcbc7 _public_62fcbc7
#define public_62fcbe7 _public_62fcbe7
#define public_62fcbf7 _public_62fcbf7
#define public_62fcc07 _public_62fcc07
#define public_62fcc20 _public_62fcc20
#define public_62fcc36 _public_62fcc36
#define public_62fcc52 _public_62fcc52
#define public_62fcc6e _public_62fcc6e
#define public_62fcc80 _public_62fcc80
#define public_62fcca3 _public_62fcca3
#define public_62fccb3 _public_62fccb3
#define public_62fcccf _public_62fcccf
#define public_62fccd2 _public_62fccd2

PROC_DECLARE(0x62fc9d0, internal_62fc9d0, public_62fc9d0);
extern "C" NAKED register_t __cdecl internal_62fc9d0()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_62fcb6a
        mov ebx, dword ptr ds : [ecx+4]
        test ebx, ebx
        je public_62fca22
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edi, edx
        mov ecx, edx
        jb public_62fca24
        public_62fca22 : nop
        mov ecx, edi
        public_62fca24 : nop
        test ebx, ebx
        jne public_62fca2c
        xor edx, edx
        jmp public_62fca3f
        public_62fca2c : nop
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_62fca3f : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_62fca4c
        xor eax, eax
        public_62fca4c : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_6391d9c
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_62fca88
        public_62fca70 : nop
        push esi
        push ebp
        call public_6272b50
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x14
        add esp, 8
        add ebp, 0x14
        cmp esi, eax
        jne public_62fca70
        public_62fca88 : nop
        test edi, edi
        mov esi, ebp
        jbe public_62fcab2
        mov dword ptr ss : [esp+0x24], edi
        public_62fca92 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_6272b50
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x14
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_62fca92
        mov eax, dword ptr ss : [esp+0x20]
        public_62fcab2 : nop
        lea ecx, ds:[edi+edi*4]
        lea ecx, ss:[ebp+ecx*4]
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov esi, eax
        je public_62fcae3
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_62fcad0
        public_62fcaca : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_62fcad0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6272b50
        add esi, 0x14
        add esp, 8
        cmp esi, ebp
        jne public_62fcaca
        public_62fcae3 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        je public_62fcafe
        lea ecx, ds:[ecx]
        public_62fcaf0 : nop
        mov ecx, esi
        call public_6272db0
        add esi, 0x14
        cmp esi, ebp
        jne public_62fcaf0
        public_62fcafe : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[esi+eax*4]
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_62fcb3c
        xor edx, edx
        add edi, edx
        lea ecx, ds:[edi+edi*4]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62fcb3c : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edi, edx
        lea ecx, ds:[edi+edi*4]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62fcb6a : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_62fcc36
        lea eax, ds:[edi+edi*4]
        shl eax, 2
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_62fcbc7
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_62fcbb0
        public_62fcba5 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_62fcbb0 : nop
        add eax, ebp
        push ebp
        push eax
        call public_6272b50
        add ebp, 0x14
        add esp, 8
        cmp ebp, esi
        jne public_62fcba5
        mov ecx, dword ptr ss : [esp+0x10]
        public_62fcbc7 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        je public_62fcbf7
        public_62fcbe7 : nop
        push ebp
        push esi
        call public_6272b50
        add esp, 8
        add esi, 0x14
        dec edi
        jne public_62fcbe7
        public_62fcbf7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax+8]
        cmp ebx, edi
        mov esi, ebx
        je public_62fcc20
        lea ebx, ss:[ebp+4]
        public_62fcc07 : nop
        mov edx, dword ptr ss : [ebp]
        push ebx
        lea ecx, ds:[esi+4]
        mov dword ptr ds : [esi], edx
        call public_62fb540
        add esi, 0x14
        cmp esi, edi
        jne public_62fcc07
        mov eax, dword ptr ss : [esp+0x10]
        public_62fcc20 : nop
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add edx, ecx
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62fcc36 : nop
        test edi, edi
        jbe public_62fccd2
        lea eax, ds:[edi+edi*4]
        shl eax, 2
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_62fcc6e
        public_62fcc52 : nop
        push edi
        push ebp
        call public_6272b50
        add edi, 0x14
        add esp, 8
        add ebp, 0x14
        cmp edi, esi
        jne public_62fcc52
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_62fcc6e : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, eax
        cmp ebx, esi
        je public_62fcca3
        lea esp, ss:[esp]
        public_62fcc80 : nop
        mov edx, dword ptr ds : [esi-0x14]
        sub esi, 0x14
        sub edi, 0x14
        lea eax, ds:[esi+4]
        push eax
        lea ecx, ds:[edi+4]
        mov dword ptr ds : [edi], edx
        call public_62fb540
        cmp esi, ebx
        jne public_62fcc80
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_62fcca3 : nop
        lea edi, ds:[eax+ebx]
        cmp ebx, edi
        mov esi, ebx
        je public_62fcccf
        mov ebx, dword ptr ss : [esp+0x28]
        lea ebp, ds:[ebx+4]
        public_62fccb3 : nop
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [esi], ecx
        push ebp
        lea ecx, ds:[esi+4]
        call public_62fb540
        add esi, 0x14
        cmp esi, edi
        jne public_62fccb3
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_62fcccf : nop
        add dword ptr ds : [ecx+8], eax
        public_62fccd2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x62fc9d0)
    }
}

#undef public_62fca22
#undef public_62fca24
#undef public_62fca2c
#undef public_62fca3f
#undef public_62fca4c
#undef public_62fca70
#undef public_62fca88
#undef public_62fca92
#undef public_62fcab2
#undef public_62fcaca
#undef public_62fcad0
#undef public_62fcae3
#undef public_62fcaf0
#undef public_62fcafe
#undef public_62fcb3c
#undef public_62fcb6a
#undef public_62fcba5
#undef public_62fcbb0
#undef public_62fcbc7
#undef public_62fcbe7
#undef public_62fcbf7
#undef public_62fcc07
#undef public_62fcc20
#undef public_62fcc36
#undef public_62fcc52
#undef public_62fcc6e
#undef public_62fcc80
#undef public_62fcca3
#undef public_62fccb3
#undef public_62fcccf
#undef public_62fccd2
