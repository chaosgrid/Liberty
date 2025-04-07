#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66237a0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_66237f4 _public_66237f4
#define public_66237f6 _public_66237f6
#define public_66237fe _public_66237fe
#define public_6623811 _public_6623811
#define public_662381e _public_662381e
#define public_6623841 _public_6623841
#define public_6623854 _public_6623854
#define public_662385e _public_662385e
#define public_6623866 _public_6623866
#define public_662387b _public_662387b
#define public_6623881 _public_6623881
#define public_66238a9 _public_66238a9
#define public_66238c0 _public_66238c0
#define public_66238ca _public_66238ca
#define public_66238f5 _public_66238f5
#define public_662390b _public_662390b
#define public_6623927 _public_6623927
#define public_6623961 _public_6623961
#define public_6623978 _public_6623978
#define public_6623982 _public_6623982
#define public_66239a4 _public_66239a4
#define public_66239bb _public_66239bb
#define public_66239c1 _public_66239c1
#define public_66239ca _public_66239ca
#define public_66239e0 _public_66239e0
#define public_66239f6 _public_66239f6
#define public_6623a13 _public_6623a13
#define public_6623a2a _public_6623a2a
#define public_6623a34 _public_6623a34
#define public_6623a3f _public_6623a3f
#define public_6623a5e _public_6623a5e
#define public_6623a6b _public_6623a6b
#define public_6623a81 _public_6623a81
#define public_6623a84 _public_6623a84

PROC_DECLARE(0x66237a0, internal_66237a0, public_66237a0);
extern "C" NAKED register_t __cdecl internal_66237a0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, 0x51EB851F
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, ebx
        push edi
        imul ecx
        sar edx, 5
        mov eax, edx
        mov dword ptr ss : [esp+0x10], esi
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6623927
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_66237f4
        mov ecx, ebx
        mov eax, 0x51EB851F
        sub ecx, edi
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        mov ecx, edx
        jb public_66237f6
        public_66237f4 : nop
        mov ecx, ebp
        public_66237f6 : nop
        test edi, edi
        jne public_66237fe
        xor edx, edx
        jmp public_6623811
        public_66237fe : nop
        sub ebx, edi
        mov eax, 0x51EB851F
        imul ebx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6623811 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_662381e
        xor eax, eax
        public_662381e : nop
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_66281dc
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, ebx
        je public_662385e
        public_6623841 : nop
        test edx, edx
        je public_6623854
        mov ecx, 0x19
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        public_6623854 : nop
        add eax, 0x64
        add edx, 0x64
        cmp eax, ebx
        jne public_6623841
        public_662385e : nop
        test ebp, ebp
        mov eax, edx
        jbe public_6623881
        mov ebx, ebp
        public_6623866 : nop
        test eax, eax
        je public_662387b
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, 0x19
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        public_662387b : nop
        add eax, 0x64
        dec ebx
        jne public_6623866
        public_6623881 : nop
        mov edi, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[ebp+ebp*4]
        mov dword ptr ss : [esp+0x24], edi
        lea ecx, ds:[ecx+ecx*4]
        shl ecx, 2
        cmp eax, edi
        lea ebx, ds:[ecx+edx]
        je public_66238ca
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        sub eax, edx
        add eax, ecx
        public_66238a9 : nop
        test ebx, ebx
        je public_66238c0
        mov ecx, 0x19
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x24]
        public_66238c0 : nop
        add eax, 0x64
        add ebx, 0x64
        cmp eax, edi
        jne public_66238a9
        public_66238ca : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_66281d0
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x18]
        add esp, 4
        lea eax, ds:[eax+eax*4]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[edi+eax*4]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ds : [esi+0xC], ecx
        jne public_66238f5
        xor edx, edx
        jmp public_662390b
        public_66238f5 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x51EB851F
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_662390b : nop
        add ebp, edx
        mov dword ptr ds : [esi+4], edi
        lea eax, ss:[ebp+ebp*4]
        lea ecx, ds:[eax+eax*4]
        lea edx, ds:[edi+ecx*4]
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6623927 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x51EB851F
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_66239f6
        lea eax, ss:[ebp+ebp*4]
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        cmp edi, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+edi]
        je public_6623982
        mov edx, eax
        sub edx, ecx
        public_6623961 : nop
        test eax, eax
        je public_6623978
        mov ecx, 0x19
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x1C]
        public_6623978 : nop
        add edx, 0x64
        add eax, 0x64
        cmp edx, ebx
        jne public_6623961
        public_6623982 : nop
        mov ebx, dword ptr ds : [esi+8]
        mov eax, 0x51EB851F
        mov ecx, ebx
        sub ecx, edi
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        mov eax, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        je public_66239c1
        public_66239a4 : nop
        test ebx, ebx
        je public_66239bb
        mov ecx, 0x19
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x1C]
        public_66239bb : nop
        add ebx, 0x64
        dec eax
        jne public_66239a4
        public_66239c1 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, edi
        cmp edi, edx
        je public_66239e0
        public_66239ca : nop
        mov edi, eax
        add eax, 0x64
        mov ecx, 0x19
        mov esi, ebp
        cmp eax, edx
        rep movsd
        jne public_66239ca
        mov esi, dword ptr ss : [esp+0x10]
        public_66239e0 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+8]
        add eax, edx
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_66239f6 : nop
        test ebp, ebp
        jbe public_6623a84
        lea ebp, ss:[ebp+ebp*4]
        mov eax, ebx
        mov edx, ebx
        lea ebp, ss:[ebp+ebp*4]
        shl ebp, 2
        sub eax, ebp
        cmp eax, ebx
        je public_6623a34
        public_6623a13 : nop
        test edx, edx
        je public_6623a2a
        mov ecx, 0x19
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x1C]
        public_6623a2a : nop
        add eax, 0x64
        add edx, 0x64
        cmp eax, ebx
        jne public_6623a13
        public_6623a34 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, edx
        sub eax, ebp
        cmp edi, eax
        je public_6623a5e
        public_6623a3f : nop
        sub eax, 0x64
        sub edx, 0x64
        mov ecx, 0x19
        mov esi, eax
        mov edi, edx
        rep movsd
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        jne public_6623a3f
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, ecx
        public_6623a5e : nop
        lea edx, ds:[edi+ebp]
        mov eax, edi
        cmp edi, edx
        je public_6623a81
        mov ebx, dword ptr ss : [esp+0x24]
        public_6623a6b : nop
        mov edi, eax
        add eax, 0x64
        mov ecx, 0x19
        mov esi, ebx
        cmp eax, edx
        rep movsd
        jne public_6623a6b
        mov esi, dword ptr ss : [esp+0x10]
        public_6623a81 : nop
        add dword ptr ds : [esi+8], ebp
        public_6623a84 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x66237a0)
    }
}

#undef public_66237f4
#undef public_66237f6
#undef public_66237fe
#undef public_6623811
#undef public_662381e
#undef public_6623841
#undef public_6623854
#undef public_662385e
#undef public_6623866
#undef public_662387b
#undef public_6623881
#undef public_66238a9
#undef public_66238c0
#undef public_66238ca
#undef public_66238f5
#undef public_662390b
#undef public_6623927
#undef public_6623961
#undef public_6623978
#undef public_6623982
#undef public_66239a4
#undef public_66239bb
#undef public_66239c1
#undef public_66239ca
#undef public_66239e0
#undef public_66239f6
#undef public_6623a13
#undef public_6623a2a
#undef public_6623a34
#undef public_6623a3f
#undef public_6623a5e
#undef public_6623a6b
#undef public_6623a81
#undef public_6623a84
