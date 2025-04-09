#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_528d00);
CLANG_FORWARD_PROC_SYMBOL(public_5299b0);
CLANG_FORWARD_PROC_SYMBOL(public_529ce0);
CLANG_FORWARD_PROC_SYMBOL(public_529db0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_529a00 _public_529a00
#define public_529a02 _public_529a02
#define public_529a0a _public_529a0a
#define public_529a1c _public_529a1c
#define public_529a29 _public_529a29
#define public_529a50 _public_529a50
#define public_529a68 _public_529a68
#define public_529a72 _public_529a72
#define public_529a92 _public_529a92
#define public_529aaa _public_529aaa
#define public_529ab0 _public_529ab0
#define public_529ac3 _public_529ac3
#define public_529ad0 _public_529ad0
#define public_529ade _public_529ade
#define public_529b1c _public_529b1c
#define public_529b49 _public_529b49
#define public_529b83 _public_529b83
#define public_529b87 _public_529b87
#define public_529b9e _public_529b9e
#define public_529bc0 _public_529bc0
#define public_529bd0 _public_529bd0
#define public_529be8 _public_529be8
#define public_529c16 _public_529c16
#define public_529c32 _public_529c32
#define public_529c4e _public_529c4e
#define public_529c60 _public_529c60
#define public_529c91 _public_529c91
#define public_529ca0 _public_529ca0
#define public_529cc7 _public_529cc7
#define public_529ccb _public_529ccb
#define public_529ccf _public_529ccf
#define public_529cd2 _public_529cd2

PROC_DECLARE(0x5299b0, internal_5299b0, public_5299b0);
extern "C" NAKED register_t __cdecl internal_5299b0()
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
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_529b49
        mov ebx, dword ptr ds : [ecx+4]
        test ebx, ebx
        je public_529a00
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edi, edx
        mov ecx, edx
        jb public_529a02
        public_529a00 : nop
        mov ecx, edi
        public_529a02 : nop
        test ebx, ebx
        jne public_529a0a
        xor edx, edx
        jmp public_529a1c
        public_529a0a : nop
        sub esi, ebx
        mov eax, 0x2AAAAAAB
        imul esi
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_529a1c : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_529a29
        xor eax, eax
        public_529a29 : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 2
        push ecx
        call public_5b7e84
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_529a68
        lea ecx, ds:[ecx]
        public_529a50 : nop
        push esi
        push ebp
        call public_529ce0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0xC
        add esp, 8
        add ebp, 0xC
        cmp esi, eax
        jne public_529a50
        public_529a68 : nop
        test edi, edi
        mov esi, ebp
        jbe public_529a92
        mov dword ptr ss : [esp+0x24], edi
        public_529a72 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_529ce0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0xC
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_529a72
        mov eax, dword ptr ss : [esp+0x20]
        public_529a92 : nop
        lea ecx, ds:[edi+edi*2]
        lea ecx, ss:[ebp+ecx*4]
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov esi, eax
        je public_529ac3
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_529ab0
        public_529aaa : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_529ab0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_529ce0
        add esi, 0xC
        add esp, 8
        cmp esi, ebp
        jne public_529aaa
        public_529ac3 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        je public_529ade
        lea ecx, ds:[ecx]
        public_529ad0 : nop
        mov ecx, esi
        call public_528d00
        add esi, 0xC
        cmp esi, ebp
        jne public_529ad0
        public_529ade : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+eax*2]
        lea ecx, ds:[esi+eax*4]
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_529b1c
        xor edx, edx
        add edi, edx
        lea ecx, ds:[edi+edi*2]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_529b1c : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edi, edx
        lea ecx, ds:[edi+edi*2]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_529b49 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_529c16
        lea eax, ds:[edi+edi*2]
        shl eax, 2
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_529b9e
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_529b87
        public_529b83 : nop
        mov eax, dword ptr ss : [esp+0x24]
        public_529b87 : nop
        add eax, ebp
        push ebp
        push eax
        call public_529ce0
        add ebp, 0xC
        add esp, 8
        cmp ebp, esi
        jne public_529b83
        mov ecx, dword ptr ss : [esp+0x10]
        public_529b9e : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        je public_529bd0
        lea ecx, ds:[ecx]
        public_529bc0 : nop
        push ebp
        push esi
        call public_529ce0
        add esp, 8
        add esi, 0xC
        dec edi
        jne public_529bc0
        public_529bd0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x28], eax
        mov esi, ebx
        je public_529ccb
        lea ebx, ss:[ebp+4]
        public_529be8 : nop
        mov dx, word ptr ss : [ebp]
        lea edi, ds:[esi+8]
        push ebx
        lea ecx, ds:[edi-4]
        mov word ptr ds : [esi], dx
        call public_529db0
        lea eax, ss:[ebp+8]
        push eax
        mov ecx, edi
        call public_529db0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0xC
        cmp esi, eax
        jne public_529be8
        jmp public_529cc7
        public_529c16 : nop
        test edi, edi
        jbe public_529cd2
        lea eax, ds:[edi+edi*2]
        shl eax, 2
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_529c4e
        public_529c32 : nop
        push edi
        push ebp
        call public_529ce0
        add edi, 0xC
        add esp, 8
        add ebp, 0xC
        cmp edi, esi
        jne public_529c32
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_529c4e : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, eax
        cmp ebx, esi
        je public_529c91
        lea esp, ss:[esp]
        public_529c60 : nop
        mov cx, word ptr ds : [esi-0xC]
        sub esi, 0xC
        sub edi, 0xC
        lea edx, ds:[esi+4]
        mov word ptr ds : [edi], cx
        push edx
        lea ecx, ds:[edi+4]
        call public_529db0
        lea eax, ds:[esi+8]
        push eax
        lea ecx, ds:[edi+8]
        call public_529db0
        cmp esi, ebx
        jne public_529c60
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_529c91 : nop
        lea ebp, ds:[eax+ebx]
        cmp ebx, ebp
        mov esi, ebx
        je public_529ccf
        mov ebx, dword ptr ss : [esp+0x28]
        mov edi, edi
        public_529ca0 : nop
        mov cx, word ptr ds : [ebx]
        lea eax, ds:[ebx+4]
        mov word ptr ds : [esi], cx
        lea edi, ds:[esi+8]
        push eax
        lea ecx, ds:[edi-4]
        call public_529db0
        lea eax, ds:[ebx+8]
        push eax
        mov ecx, edi
        call public_529db0
        add esi, 0xC
        cmp esi, ebp
        jne public_529ca0
        public_529cc7 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_529ccb : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_529ccf : nop
        add dword ptr ds : [ecx+8], eax
        public_529cd2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x5299b0)
    }
}

#undef public_529a00
#undef public_529a02
#undef public_529a0a
#undef public_529a1c
#undef public_529a29
#undef public_529a50
#undef public_529a68
#undef public_529a72
#undef public_529a92
#undef public_529aaa
#undef public_529ab0
#undef public_529ac3
#undef public_529ad0
#undef public_529ade
#undef public_529b1c
#undef public_529b49
#undef public_529b83
#undef public_529b87
#undef public_529b9e
#undef public_529bc0
#undef public_529bd0
#undef public_529be8
#undef public_529c16
#undef public_529c32
#undef public_529c4e
#undef public_529c60
#undef public_529c91
#undef public_529ca0
#undef public_529cc7
#undef public_529ccb
#undef public_529ccf
#undef public_529cd2
