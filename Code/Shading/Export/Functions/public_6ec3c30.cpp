#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec3c30);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec3c84 _public_6ec3c84
#define public_6ec3c86 _public_6ec3c86
#define public_6ec3c8e _public_6ec3c8e
#define public_6ec3ca1 _public_6ec3ca1
#define public_6ec3cae _public_6ec3cae
#define public_6ec3cd0 _public_6ec3cd0
#define public_6ec3ce3 _public_6ec3ce3
#define public_6ec3cf1 _public_6ec3cf1
#define public_6ec3d00 _public_6ec3d00
#define public_6ec3d15 _public_6ec3d15
#define public_6ec3d1b _public_6ec3d1b
#define public_6ec3d40 _public_6ec3d40
#define public_6ec3d57 _public_6ec3d57
#define public_6ec3d61 _public_6ec3d61
#define public_6ec3da0 _public_6ec3da0
#define public_6ec3dcf _public_6ec3dcf
#define public_6ec3e06 _public_6ec3e06
#define public_6ec3e1d _public_6ec3e1d
#define public_6ec3e27 _public_6ec3e27
#define public_6ec3e50 _public_6ec3e50
#define public_6ec3e67 _public_6ec3e67
#define public_6ec3e6d _public_6ec3e6d
#define public_6ec3e76 _public_6ec3e76
#define public_6ec3e8c _public_6ec3e8c
#define public_6ec3ea2 _public_6ec3ea2
#define public_6ec3ec0 _public_6ec3ec0
#define public_6ec3ed7 _public_6ec3ed7
#define public_6ec3ee1 _public_6ec3ee1
#define public_6ec3ef0 _public_6ec3ef0
#define public_6ec3f0f _public_6ec3f0f
#define public_6ec3f20 _public_6ec3f20
#define public_6ec3f36 _public_6ec3f36
#define public_6ec3f39 _public_6ec3f39

PROC_DECLARE(0x6ec3c30, internal_6ec3c30, public_6ec3c30);
extern "C" NAKED register_t __cdecl internal_6ec3c30()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_6ec3dcf
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        je public_6ec3c84
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        mov ecx, edx
        jb public_6ec3c86
        public_6ec3c84 : nop
        mov ecx, ebp
        public_6ec3c86 : nop
        test esi, esi
        jne public_6ec3c8e
        xor edx, edx
        jmp public_6ec3ca1
        public_6ec3c8e : nop
        sub ebx, esi
        mov eax, 0x66666667
        imul ebx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ec3ca1 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_6ec3cae
        xor eax, eax
        public_6ec3cae : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_6ed0c5c
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ecx
        je public_6ec3cf1
        mov edi, edi
        public_6ec3cd0 : nop
        test edx, edx
        je public_6ec3ce3
        mov ecx, 5
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6ec3ce3 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x14
        add edx, 0x14
        cmp eax, ecx
        jne public_6ec3cd0
        public_6ec3cf1 : nop
        test ebp, ebp
        mov eax, edx
        jbe public_6ec3d1b
        mov ebx, ebp
        lea esp, ss:[esp]
        public_6ec3d00 : nop
        test eax, eax
        je public_6ec3d15
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, 5
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6ec3d15 : nop
        add eax, 0x14
        dec ebx
        jne public_6ec3d00
        public_6ec3d1b : nop
        mov esi, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[ebp+ebp*4]
        shl ecx, 2
        cmp eax, esi
        lea ebx, ds:[ecx+edx]
        mov dword ptr ss : [esp+0x24], esi
        je public_6ec3d61
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        sub eax, edx
        add eax, ecx
        public_6ec3d40 : nop
        test ebx, ebx
        je public_6ec3d57
        mov ecx, 5
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x24]
        public_6ec3d57 : nop
        add eax, 0x14
        add ebx, 0x14
        cmp eax, esi
        jne public_6ec3d40
        public_6ec3d61 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6ed0c50
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x18]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[esi+eax*4]
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [edi+0xC], ecx
        jne public_6ec3da0
        xor edx, edx
        add ebp, edx
        lea ecx, ss:[ebp+ebp*4]
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6ec3da0 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add ebp, edx
        lea ecx, ss:[ebp+ebp*4]
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6ec3dcf : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6ec3ea2
        lea ecx, ss:[ebp+ebp*4]
        shl ecx, 2
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+esi]
        je public_6ec3e27
        mov edx, eax
        sub edx, ecx
        public_6ec3e06 : nop
        test eax, eax
        je public_6ec3e1d
        mov ecx, 5
        mov esi, edx
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_6ec3e1d : nop
        add edx, 0x14
        add eax, 0x14
        cmp edx, ebx
        jne public_6ec3e06
        public_6ec3e27 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        mov eax, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        je public_6ec3e6d
        lea esp, ss:[esp]
        public_6ec3e50 : nop
        test ebx, ebx
        je public_6ec3e67
        mov ecx, 5
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_6ec3e67 : nop
        add ebx, 0x14
        dec eax
        jne public_6ec3e50
        public_6ec3e6d : nop
        mov edx, dword ptr ds : [edi+8]
        cmp esi, edx
        mov eax, esi
        je public_6ec3e8c
        public_6ec3e76 : nop
        mov edi, eax
        add eax, 0x14
        cmp eax, edx
        mov ecx, 5
        mov esi, ebp
        rep movsd
        jne public_6ec3e76
        mov edi, dword ptr ss : [esp+0x10]
        public_6ec3e8c : nop
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [esp+0x20]
        add eax, edx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6ec3ea2 : nop
        test ebp, ebp
        jbe public_6ec3f39
        lea ebp, ss:[ebp+ebp*4]
        shl ebp, 2
        mov eax, ebx
        sub eax, ebp
        cmp eax, ebx
        mov edx, ebx
        je public_6ec3ee1
        nop 
        lea esp, ss:[esp]
        public_6ec3ec0 : nop
        test edx, edx
        je public_6ec3ed7
        mov ecx, 5
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_6ec3ed7 : nop
        add eax, 0x14
        add edx, 0x14
        cmp eax, ebx
        jne public_6ec3ec0
        public_6ec3ee1 : nop
        mov edx, dword ptr ds : [edi+8]
        mov eax, edx
        sub eax, ebp
        cmp esi, eax
        je public_6ec3f0f
        lea esp, ss:[esp]
        public_6ec3ef0 : nop
        sub eax, 0x14
        sub edx, 0x14
        mov ecx, 5
        mov esi, eax
        mov edi, edx
        rep movsd
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        jne public_6ec3ef0
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        public_6ec3f0f : nop
        lea edx, ds:[esi+ebp]
        cmp esi, edx
        mov eax, esi
        je public_6ec3f36
        mov ebx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6ec3f20 : nop
        mov edi, eax
        add eax, 0x14
        cmp eax, edx
        mov ecx, 5
        mov esi, ebx
        rep movsd
        jne public_6ec3f20
        mov edi, dword ptr ss : [esp+0x10]
        public_6ec3f36 : nop
        add dword ptr ds : [edi+8], ebp
        public_6ec3f39 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6ec3c30)
    }
}

#undef public_6ec3c84
#undef public_6ec3c86
#undef public_6ec3c8e
#undef public_6ec3ca1
#undef public_6ec3cae
#undef public_6ec3cd0
#undef public_6ec3ce3
#undef public_6ec3cf1
#undef public_6ec3d00
#undef public_6ec3d15
#undef public_6ec3d1b
#undef public_6ec3d40
#undef public_6ec3d57
#undef public_6ec3d61
#undef public_6ec3da0
#undef public_6ec3dcf
#undef public_6ec3e06
#undef public_6ec3e1d
#undef public_6ec3e27
#undef public_6ec3e50
#undef public_6ec3e67
#undef public_6ec3e6d
#undef public_6ec3e76
#undef public_6ec3e8c
#undef public_6ec3ea2
#undef public_6ec3ec0
#undef public_6ec3ed7
#undef public_6ec3ee1
#undef public_6ec3ef0
#undef public_6ec3f0f
#undef public_6ec3f20
#undef public_6ec3f36
#undef public_6ec3f39
