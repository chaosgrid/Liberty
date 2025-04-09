#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_55d870);
CLANG_FORWARD_PROC_SYMBOL(public_55dbd0);
CLANG_FORWARD_PROC_SYMBOL(public_55dd40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_55d8c2 _public_55d8c2
#define public_55d8c4 _public_55d8c4
#define public_55d8cc _public_55d8cc
#define public_55d8df _public_55d8df
#define public_55d8ec _public_55d8ec
#define public_55d910 _public_55d910
#define public_55d928 _public_55d928
#define public_55d932 _public_55d932
#define public_55d952 _public_55d952
#define public_55d96a _public_55d96a
#define public_55d970 _public_55d970
#define public_55d983 _public_55d983
#define public_55d990 _public_55d990
#define public_55d99e _public_55d99e
#define public_55d9dc _public_55d9dc
#define public_55da0a _public_55da0a
#define public_55da45 _public_55da45
#define public_55da50 _public_55da50
#define public_55da67 _public_55da67
#define public_55da90 _public_55da90
#define public_55daa0 _public_55daa0
#define public_55dab0 _public_55dab0
#define public_55daf0 _public_55daf0
#define public_55db06 _public_55db06
#define public_55db22 _public_55db22
#define public_55db3e _public_55db3e
#define public_55db50 _public_55db50
#define public_55db6a _public_55db6a
#define public_55db78 _public_55db78
#define public_55dbbc _public_55dbbc
#define public_55dbbf _public_55dbbf

PROC_DECLARE(0x55d870, internal_55d870, public_55d870);
extern "C" NAKED register_t __cdecl internal_55d870()
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
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_55da0a
        mov ebx, dword ptr ds : [ecx+4]
        test ebx, ebx
        je public_55d8c2
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edi, edx
        mov ecx, edx
        jb public_55d8c4
        public_55d8c2 : nop
        mov ecx, edi
        public_55d8c4 : nop
        test ebx, ebx
        jne public_55d8cc
        xor edx, edx
        jmp public_55d8df
        public_55d8cc : nop
        sub esi, ebx
        mov eax, 0x38E38E39
        imul esi
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_55d8df : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_55d8ec
        xor eax, eax
        public_55d8ec : nop
        lea ecx, ds:[eax+eax*8]
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
        je public_55d928
        public_55d910 : nop
        push esi
        push ebp
        call public_55dbd0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x24
        add esp, 8
        add ebp, 0x24
        cmp esi, eax
        jne public_55d910
        public_55d928 : nop
        test edi, edi
        mov esi, ebp
        jbe public_55d952
        mov dword ptr ss : [esp+0x24], edi
        public_55d932 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_55dbd0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x24
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_55d932
        mov eax, dword ptr ss : [esp+0x20]
        public_55d952 : nop
        lea ecx, ds:[edi+edi*8]
        lea ecx, ss:[ebp+ecx*4]
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov esi, eax
        je public_55d983
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_55d970
        public_55d96a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_55d970 : nop
        add ecx, esi
        push esi
        push ecx
        call public_55dbd0
        add esi, 0x24
        add esp, 8
        cmp esi, ebp
        jne public_55d96a
        public_55d983 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        je public_55d99e
        lea ecx, ds:[ecx]
        public_55d990 : nop
        mov ecx, esi
        call public_4dd9a0
        add esi, 0x24
        cmp esi, ebp
        jne public_55d990
        public_55d99e : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+eax*8]
        lea ecx, ds:[esi+eax*4]
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_55d9dc
        xor edx, edx
        add edi, edx
        lea ecx, ds:[edi+edi*8]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_55d9dc : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edi, edx
        lea ecx, ds:[edi+edi*8]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_55da0a : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_55db06
        lea eax, ds:[edi+edi*8]
        shl eax, 2
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_55da67
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_55da50
        public_55da45 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_55da50 : nop
        add eax, ebp
        push ebp
        push eax
        call public_55dbd0
        add ebp, 0x24
        add esp, 8
        cmp ebp, esi
        jne public_55da45
        mov ecx, dword ptr ss : [esp+0x10]
        public_55da67 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        mov eax, edi
        mov edi, dword ptr ss : [esp+0x28]
        je public_55daa0
        mov ebp, eax
        nop 
        lea esp, ss:[esp]
        public_55da90 : nop
        push edi
        push esi
        call public_55dbd0
        add esp, 8
        add esi, 0x24
        dec ebp
        jne public_55da90
        public_55daa0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [eax+8]
        cmp ebx, ebp
        je public_55daf0
        lea esi, ds:[ebx+0x14]
        mov edi, edi
        public_55dab0 : nop
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        push edi
        lea ecx, ds:[esi-0x14]
        call dword ptr ds : [public_5c6f9c]
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi-4], ecx
        mov edx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0xC], edx
        add esi, 0x24
        lea eax, ds:[esi-0x14]
        cmp eax, ebp
        jne public_55dab0
        mov eax, dword ptr ss : [esp+0x10]
        public_55daf0 : nop
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
        public_55db06 : nop
        test edi, edi
        jbe public_55dbbf
        lea eax, ds:[edi+edi*8]
        shl eax, 2
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_55db3e
        public_55db22 : nop
        push edi
        push ebp
        call public_55dbd0
        add edi, 0x24
        add esp, 8
        add ebp, 0x24
        cmp edi, esi
        jne public_55db22
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_55db3e : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, eax
        cmp ebx, esi
        je public_55db6a
        lea esp, ss:[esp]
        public_55db50 : nop
        sub esi, 0x24
        sub edi, 0x24
        push esi
        mov ecx, edi
        call public_55dd40
        cmp esi, ebx
        jne public_55db50
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_55db6a : nop
        lea ebp, ds:[eax+ebx]
        cmp ebx, ebp
        je public_55dbbc
        mov edi, dword ptr ss : [esp+0x28]
        lea esi, ds:[ebx+0x14]
        public_55db78 : nop
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        push edi
        lea ecx, ds:[esi-0x14]
        call dword ptr ds : [public_5c6f9c]
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi-4], ecx
        mov edx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0xC], edx
        add esi, 0x24
        lea eax, ds:[esi-0x14]
        cmp eax, ebp
        jne public_55db78
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_55dbbc : nop
        add dword ptr ds : [ecx+8], eax
        public_55dbbf : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x55d870)
    }
}

#undef public_55d8c2
#undef public_55d8c4
#undef public_55d8cc
#undef public_55d8df
#undef public_55d8ec
#undef public_55d910
#undef public_55d928
#undef public_55d932
#undef public_55d952
#undef public_55d96a
#undef public_55d970
#undef public_55d983
#undef public_55d990
#undef public_55d99e
#undef public_55d9dc
#undef public_55da0a
#undef public_55da45
#undef public_55da50
#undef public_55da67
#undef public_55da90
#undef public_55daa0
#undef public_55dab0
#undef public_55daf0
#undef public_55db06
#undef public_55db22
#undef public_55db3e
#undef public_55db50
#undef public_55db6a
#undef public_55db78
#undef public_55dbbc
#undef public_55dbbf
