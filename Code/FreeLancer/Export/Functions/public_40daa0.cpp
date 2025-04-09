#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407000);
CLANG_FORWARD_PROC_SYMBOL(public_40daa0);
CLANG_FORWARD_PROC_SYMBOL(public_40dfa0);
CLANG_FORWARD_PROC_SYMBOL(public_5595c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_40daf2 _public_40daf2
#define public_40daf4 _public_40daf4
#define public_40dafc _public_40dafc
#define public_40db0f _public_40db0f
#define public_40db1c _public_40db1c
#define public_40db40 _public_40db40
#define public_40db58 _public_40db58
#define public_40db62 _public_40db62
#define public_40db82 _public_40db82
#define public_40db9a _public_40db9a
#define public_40dba0 _public_40dba0
#define public_40dbb3 _public_40dbb3
#define public_40dbc0 _public_40dbc0
#define public_40dbce _public_40dbce
#define public_40dc0c _public_40dc0c
#define public_40dc3a _public_40dc3a
#define public_40dc75 _public_40dc75
#define public_40dc80 _public_40dc80
#define public_40dc97 _public_40dc97
#define public_40dcb7 _public_40dcb7
#define public_40dcc7 _public_40dcc7
#define public_40dce0 _public_40dce0
#define public_40dd0c _public_40dd0c
#define public_40dd28 _public_40dd28
#define public_40dd44 _public_40dd44
#define public_40dd50 _public_40dd50
#define public_40dd7f _public_40dd7f
#define public_40dd90 _public_40dd90
#define public_40ddb5 _public_40ddb5
#define public_40ddb9 _public_40ddb9
#define public_40ddbd _public_40ddbd
#define public_40ddc0 _public_40ddc0

PROC_DECLARE(0x40daa0, internal_40daa0, public_40daa0);
extern "C" NAKED register_t __cdecl internal_40daa0()
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
        jae public_40dc3a
        mov ebx, dword ptr ds : [ecx+4]
        test ebx, ebx
        je public_40daf2
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
        jb public_40daf4
        public_40daf2 : nop
        mov ecx, edi
        public_40daf4 : nop
        test ebx, ebx
        jne public_40dafc
        xor edx, edx
        jmp public_40db0f
        public_40dafc : nop
        sub esi, ebx
        mov eax, 0x38E38E39
        imul esi
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_40db0f : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_40db1c
        xor eax, eax
        public_40db1c : nop
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
        je public_40db58
        public_40db40 : nop
        push esi
        push ebp
        call public_40dfa0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x24
        add esp, 8
        add ebp, 0x24
        cmp esi, eax
        jne public_40db40
        public_40db58 : nop
        test edi, edi
        mov esi, ebp
        jbe public_40db82
        mov dword ptr ss : [esp+0x24], edi
        public_40db62 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_40dfa0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x24
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_40db62
        mov eax, dword ptr ss : [esp+0x20]
        public_40db82 : nop
        lea ecx, ds:[edi+edi*8]
        lea ecx, ss:[ebp+ecx*4]
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov esi, eax
        je public_40dbb3
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_40dba0
        public_40db9a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_40dba0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_40dfa0
        add esi, 0x24
        add esp, 8
        cmp esi, ebp
        jne public_40db9a
        public_40dbb3 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        je public_40dbce
        lea ecx, ds:[ecx]
        public_40dbc0 : nop
        mov ecx, esi
        call public_407000
        add esi, 0x24
        cmp esi, ebp
        jne public_40dbc0
        public_40dbce : nop
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
        jne public_40dc0c
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
        public_40dc0c : nop
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
        public_40dc3a : nop
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
        jae public_40dd0c
        lea eax, ds:[edi+edi*8]
        shl eax, 2
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_40dc97
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_40dc80
        public_40dc75 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_40dc80 : nop
        add eax, ebp
        push ebp
        push eax
        call public_40dfa0
        add ebp, 0x24
        add esp, 8
        cmp ebp, esi
        jne public_40dc75
        mov ecx, dword ptr ss : [esp+0x10]
        public_40dc97 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        je public_40dcc7
        public_40dcb7 : nop
        push ebp
        push esi
        call public_40dfa0
        add esp, 8
        add esi, 0x24
        dec edi
        jne public_40dcb7
        public_40dcc7 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x28], eax
        mov esi, ebx
        je public_40ddb9
        lea ebx, ss:[ebp+4]
        nop 
        public_40dce0 : nop
        mov edx, dword ptr ss : [ebp]
        lea edi, ds:[esi+0x14]
        push ebx
        lea ecx, ds:[edi-0x10]
        mov dword ptr ds : [esi], edx
        call public_5595c0
        lea eax, ss:[ebp+0x14]
        push eax
        mov ecx, edi
        call public_5595c0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x24
        cmp esi, eax
        jne public_40dce0
        jmp public_40ddb5
        public_40dd0c : nop
        test edi, edi
        jbe public_40ddc0
        lea eax, ds:[edi+edi*8]
        shl eax, 2
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_40dd44
        public_40dd28 : nop
        push edi
        push ebp
        call public_40dfa0
        add edi, 0x24
        add esp, 8
        add ebp, 0x24
        cmp edi, esi
        jne public_40dd28
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_40dd44 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, eax
        cmp ebx, esi
        je public_40dd7f
        nop 
        public_40dd50 : nop
        mov ecx, dword ptr ds : [esi-0x24]
        sub esi, 0x24
        sub edi, 0x24
        lea edx, ds:[esi+4]
        mov dword ptr ds : [edi], ecx
        push edx
        lea ecx, ds:[edi+4]
        call public_5595c0
        lea eax, ds:[esi+0x14]
        push eax
        lea ecx, ds:[edi+0x14]
        call public_5595c0
        cmp esi, ebx
        jne public_40dd50
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_40dd7f : nop
        lea ebp, ds:[eax+ebx]
        cmp ebx, ebp
        mov esi, ebx
        je public_40ddbd
        mov ebx, dword ptr ss : [esp+0x28]
        lea esp, ss:[esp]
        public_40dd90 : nop
        mov ecx, dword ptr ds : [ebx]
        lea eax, ds:[ebx+4]
        mov dword ptr ds : [esi], ecx
        lea edi, ds:[esi+0x14]
        push eax
        lea ecx, ds:[edi-0x10]
        call public_5595c0
        lea eax, ds:[ebx+0x14]
        push eax
        mov ecx, edi
        call public_5595c0
        add esi, 0x24
        cmp esi, ebp
        jne public_40dd90
        public_40ddb5 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_40ddb9 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_40ddbd : nop
        add dword ptr ds : [ecx+8], eax
        public_40ddc0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x40daa0)
    }
}

#undef public_40daf2
#undef public_40daf4
#undef public_40dafc
#undef public_40db0f
#undef public_40db1c
#undef public_40db40
#undef public_40db58
#undef public_40db62
#undef public_40db82
#undef public_40db9a
#undef public_40dba0
#undef public_40dbb3
#undef public_40dbc0
#undef public_40dbce
#undef public_40dc0c
#undef public_40dc3a
#undef public_40dc75
#undef public_40dc80
#undef public_40dc97
#undef public_40dcb7
#undef public_40dcc7
#undef public_40dce0
#undef public_40dd0c
#undef public_40dd28
#undef public_40dd44
#undef public_40dd50
#undef public_40dd7f
#undef public_40dd90
#undef public_40ddb5
#undef public_40ddb9
#undef public_40ddbd
#undef public_40ddc0
