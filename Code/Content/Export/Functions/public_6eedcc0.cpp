#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eedcc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eedd14 _public_6eedd14
#define public_6eedd16 _public_6eedd16
#define public_6eedd1e _public_6eedd1e
#define public_6eedd31 _public_6eedd31
#define public_6eedd3e _public_6eedd3e
#define public_6eedd60 _public_6eedd60
#define public_6eedd73 _public_6eedd73
#define public_6eedd81 _public_6eedd81
#define public_6eedd90 _public_6eedd90
#define public_6eedda5 _public_6eedda5
#define public_6eeddab _public_6eeddab
#define public_6eeddd0 _public_6eeddd0
#define public_6eedde7 _public_6eedde7
#define public_6eeddf1 _public_6eeddf1
#define public_6eede30 _public_6eede30
#define public_6eede5f _public_6eede5f
#define public_6eede96 _public_6eede96
#define public_6eedead _public_6eedead
#define public_6eedeb7 _public_6eedeb7
#define public_6eedee0 _public_6eedee0
#define public_6eedef7 _public_6eedef7
#define public_6eedefd _public_6eedefd
#define public_6eedf06 _public_6eedf06
#define public_6eedf1c _public_6eedf1c
#define public_6eedf32 _public_6eedf32
#define public_6eedf50 _public_6eedf50
#define public_6eedf67 _public_6eedf67
#define public_6eedf71 _public_6eedf71
#define public_6eedf80 _public_6eedf80
#define public_6eedf9f _public_6eedf9f
#define public_6eedfb0 _public_6eedfb0
#define public_6eedfc6 _public_6eedfc6
#define public_6eedfc9 _public_6eedfc9

PROC_DECLARE(0x6eedcc0, internal_6eedcc0, public_6eedcc0);
extern "C" NAKED register_t __cdecl internal_6eedcc0()
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
        jae public_6eede5f
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        je public_6eedd14
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
        jb public_6eedd16
        public_6eedd14 : nop
        mov ecx, ebp
        public_6eedd16 : nop
        test esi, esi
        jne public_6eedd1e
        xor edx, edx
        jmp public_6eedd31
        public_6eedd1e : nop
        sub ebx, esi
        mov eax, 0x66666667
        imul ebx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6eedd31 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_6eedd3e
        xor eax, eax
        public_6eedd3e : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ecx
        je public_6eedd81
        mov edi, edi
        public_6eedd60 : nop
        test edx, edx
        je public_6eedd73
        mov ecx, 5
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6eedd73 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x14
        add edx, 0x14
        cmp eax, ecx
        jne public_6eedd60
        public_6eedd81 : nop
        test ebp, ebp
        mov eax, edx
        jbe public_6eeddab
        mov ebx, ebp
        lea esp, ss:[esp]
        public_6eedd90 : nop
        test eax, eax
        je public_6eedda5
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, 5
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6eedda5 : nop
        add eax, 0x14
        dec ebx
        jne public_6eedd90
        public_6eeddab : nop
        mov esi, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[ebp+ebp*4]
        shl ecx, 2
        cmp eax, esi
        lea ebx, ds:[ecx+edx]
        mov dword ptr ss : [esp+0x24], esi
        je public_6eeddf1
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        sub eax, edx
        add eax, ecx
        public_6eeddd0 : nop
        test ebx, ebx
        je public_6eedde7
        mov ecx, 5
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x24]
        public_6eedde7 : nop
        add eax, 0x14
        add ebx, 0x14
        cmp eax, esi
        jne public_6eeddd0
        public_6eeddf1 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x18]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[esi+eax*4]
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [edi+0xC], ecx
        jne public_6eede30
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
        public_6eede30 : nop
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
        public_6eede5f : nop
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
        jae public_6eedf32
        lea ecx, ss:[ebp+ebp*4]
        shl ecx, 2
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+esi]
        je public_6eedeb7
        mov edx, eax
        sub edx, ecx
        public_6eede96 : nop
        test eax, eax
        je public_6eedead
        mov ecx, 5
        mov esi, edx
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_6eedead : nop
        add edx, 0x14
        add eax, 0x14
        cmp edx, ebx
        jne public_6eede96
        public_6eedeb7 : nop
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
        je public_6eedefd
        lea esp, ss:[esp]
        public_6eedee0 : nop
        test ebx, ebx
        je public_6eedef7
        mov ecx, 5
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_6eedef7 : nop
        add ebx, 0x14
        dec eax
        jne public_6eedee0
        public_6eedefd : nop
        mov edx, dword ptr ds : [edi+8]
        cmp esi, edx
        mov eax, esi
        je public_6eedf1c
        public_6eedf06 : nop
        mov edi, eax
        add eax, 0x14
        cmp eax, edx
        mov ecx, 5
        mov esi, ebp
        rep movsd
        jne public_6eedf06
        mov edi, dword ptr ss : [esp+0x10]
        public_6eedf1c : nop
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
        public_6eedf32 : nop
        test ebp, ebp
        jbe public_6eedfc9
        lea ebp, ss:[ebp+ebp*4]
        shl ebp, 2
        mov eax, ebx
        sub eax, ebp
        cmp eax, ebx
        mov edx, ebx
        je public_6eedf71
        nop 
        lea esp, ss:[esp]
        public_6eedf50 : nop
        test edx, edx
        je public_6eedf67
        mov ecx, 5
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_6eedf67 : nop
        add eax, 0x14
        add edx, 0x14
        cmp eax, ebx
        jne public_6eedf50
        public_6eedf71 : nop
        mov edx, dword ptr ds : [edi+8]
        mov eax, edx
        sub eax, ebp
        cmp esi, eax
        je public_6eedf9f
        lea esp, ss:[esp]
        public_6eedf80 : nop
        sub eax, 0x14
        sub edx, 0x14
        mov ecx, 5
        mov esi, eax
        mov edi, edx
        rep movsd
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        jne public_6eedf80
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        public_6eedf9f : nop
        lea edx, ds:[esi+ebp]
        cmp esi, edx
        mov eax, esi
        je public_6eedfc6
        mov ebx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6eedfb0 : nop
        mov edi, eax
        add eax, 0x14
        cmp eax, edx
        mov ecx, 5
        mov esi, ebx
        rep movsd
        jne public_6eedfb0
        mov edi, dword ptr ss : [esp+0x10]
        public_6eedfc6 : nop
        add dword ptr ds : [edi+8], ebp
        public_6eedfc9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6eedcc0)
    }
}

#undef public_6eedd14
#undef public_6eedd16
#undef public_6eedd1e
#undef public_6eedd31
#undef public_6eedd3e
#undef public_6eedd60
#undef public_6eedd73
#undef public_6eedd81
#undef public_6eedd90
#undef public_6eedda5
#undef public_6eeddab
#undef public_6eeddd0
#undef public_6eedde7
#undef public_6eeddf1
#undef public_6eede30
#undef public_6eede5f
#undef public_6eede96
#undef public_6eedead
#undef public_6eedeb7
#undef public_6eedee0
#undef public_6eedef7
#undef public_6eedefd
#undef public_6eedf06
#undef public_6eedf1c
#undef public_6eedf32
#undef public_6eedf50
#undef public_6eedf67
#undef public_6eedf71
#undef public_6eedf80
#undef public_6eedf9f
#undef public_6eedfb0
#undef public_6eedfc6
#undef public_6eedfc9
