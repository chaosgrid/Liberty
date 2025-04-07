#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63440d0);
CLANG_FORWARD_PROC_SYMBOL(public_6347380);
CLANG_FORWARD_PROC_SYMBOL(public_63666f0);

#define public_636671c _public_636671c
#define public_6366721 _public_6366721
#define public_6366747 _public_6366747
#define public_636674c _public_636674c
#define public_6366772 _public_6366772
#define public_6366777 _public_6366777
#define public_636679d _public_636679d
#define public_63667a2 _public_63667a2
#define public_63667c8 _public_63667c8
#define public_63667cd _public_63667cd
#define public_63667f3 _public_63667f3
#define public_63667f8 _public_63667f8
#define public_636681e _public_636681e
#define public_6366823 _public_6366823
#define public_636684d _public_636684d
#define public_6366852 _public_6366852
#define public_636687c _public_636687c
#define public_6366881 _public_6366881
#define public_63668a7 _public_63668a7
#define public_63668ac _public_63668ac
#define public_63668d5 _public_63668d5
#define public_63668da _public_63668da
#define public_6366903 _public_6366903
#define public_6366908 _public_6366908

PROC_DECLARE(0x63666f0, internal_63666f0, public_63666f0);
extern "C" NAKED register_t __cdecl internal_63666f0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0xC]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x40]
        shl ecx, 2
        mov edx, eax
        lea eax, ds:[eax+ecx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, ebx
        jb public_636671c
        push ecx
        mov ecx, esi
        call public_63440d0
        jmp public_6366721
        public_636671c : nop
        mov dword ptr ds : [esi+8], eax
        mov eax, edx
        public_6366721 : nop
        mov ecx, dword ptr ds : [edi+0x40]
        mov dword ptr ds : [edi+0x34], eax
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0xC]
        shl ecx, 2
        mov edx, eax
        lea eax, ds:[eax+ecx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, ebx
        jb public_6366747
        push ecx
        mov ecx, esi
        call public_63440d0
        jmp public_636674c
        public_6366747 : nop
        mov dword ptr ds : [esi+8], eax
        mov eax, edx
        public_636674c : nop
        mov ecx, dword ptr ds : [edi+0x40]
        mov dword ptr ds : [edi+0x38], eax
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0xC]
        shl ecx, 2
        mov edx, eax
        lea eax, ds:[eax+ecx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, ebx
        jb public_6366772
        push ecx
        mov ecx, esi
        call public_63440d0
        jmp public_6366777
        public_6366772 : nop
        mov dword ptr ds : [esi+8], eax
        mov eax, edx
        public_6366777 : nop
        mov ecx, dword ptr ds : [edi+0x40]
        mov dword ptr ds : [edi+0x24], eax
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0xC]
        shl ecx, 2
        mov edx, eax
        lea eax, ds:[eax+ecx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, ebx
        jb public_636679d
        push ecx
        mov ecx, esi
        call public_63440d0
        jmp public_63667a2
        public_636679d : nop
        mov dword ptr ds : [esi+8], eax
        mov eax, edx
        public_63667a2 : nop
        mov ecx, dword ptr ds : [edi+0x40]
        mov dword ptr ds : [edi+0x28], eax
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0xC]
        shl ecx, 2
        mov edx, eax
        lea eax, ds:[eax+ecx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, ebx
        jb public_63667c8
        push ecx
        mov ecx, esi
        call public_63440d0
        jmp public_63667cd
        public_63667c8 : nop
        mov dword ptr ds : [esi+8], eax
        mov eax, edx
        public_63667cd : nop
        mov ecx, dword ptr ds : [edi+0x40]
        mov dword ptr ds : [edi+0x20], eax
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0xC]
        shl ecx, 2
        mov edx, eax
        lea eax, ds:[eax+ecx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, ebx
        jb public_63667f3
        push ecx
        mov ecx, esi
        call public_63440d0
        jmp public_63667f8
        public_63667f3 : nop
        mov dword ptr ds : [esi+8], eax
        mov eax, edx
        public_63667f8 : nop
        mov ecx, dword ptr ds : [edi+0x40]
        mov dword ptr ds : [edi+0x2C], eax
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0xC]
        shl ecx, 2
        mov edx, eax
        lea eax, ds:[eax+ecx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, ebx
        jb public_636681e
        push ecx
        mov ecx, esi
        call public_63440d0
        jmp public_6366823
        public_636681e : nop
        mov dword ptr ds : [esi+8], eax
        mov eax, edx
        public_6366823 : nop
        mov dword ptr ds : [edi+0x30], eax
        mov eax, dword ptr ds : [edi+0x40]
        imul eax, dword ptr ds : [edi+0x3C]
        mov ecx, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0xC]
        shl eax, 2
        mov edx, ecx
        lea ecx, ds:[ecx+eax+0x1F]
        and ecx, 0xFFFFFFE0
        cmp ecx, ebx
        jb public_636684d
        push eax
        mov ecx, esi
        call public_63440d0
        jmp public_6366852
        public_636684d : nop
        mov dword ptr ds : [esi+8], ecx
        mov eax, edx
        public_6366852 : nop
        mov dword ptr ds : [edi+0x70], eax
        mov eax, dword ptr ds : [edi+0x40]
        imul eax, dword ptr ds : [edi+0x3C]
        mov ecx, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0xC]
        shl eax, 2
        mov edx, ecx
        lea ecx, ds:[ecx+eax+0x1F]
        and ecx, 0xFFFFFFE0
        cmp ecx, ebx
        jb public_636687c
        push eax
        mov ecx, esi
        call public_63440d0
        jmp public_6366881
        public_636687c : nop
        mov dword ptr ds : [esi+8], ecx
        mov eax, edx
        public_6366881 : nop
        mov ecx, dword ptr ds : [edi+0x40]
        mov dword ptr ds : [edi+0x74], eax
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0xC]
        shl ecx, 2
        mov edx, eax
        lea eax, ds:[eax+ecx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, ebx
        jb public_63668a7
        push ecx
        mov ecx, esi
        call public_63440d0
        jmp public_63668ac
        public_63668a7 : nop
        mov dword ptr ds : [esi+8], eax
        mov eax, edx
        public_63668ac : nop
        mov ecx, dword ptr ds : [edi+0x40]
        mov dword ptr ds : [edi+0x80], eax
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0xC]
        shl ecx, 2
        mov edx, eax
        lea eax, ds:[eax+ecx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, ebx
        jb public_63668d5
        push ecx
        mov ecx, esi
        call public_63440d0
        jmp public_63668da
        public_63668d5 : nop
        mov dword ptr ds : [esi+8], eax
        mov eax, edx
        public_63668da : nop
        mov ecx, dword ptr ds : [edi+0x40]
        mov dword ptr ds : [edi+0x84], eax
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0xC]
        shl ecx, 2
        mov edx, eax
        lea eax, ds:[eax+ecx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, ebx
        jb public_6366903
        push ecx
        mov ecx, esi
        call public_63440d0
        jmp public_6366908
        public_6366903 : nop
        mov dword ptr ds : [esi+8], eax
        mov eax, edx
        public_6366908 : nop
        mov dword ptr ds : [edi+0x88], eax
        mov eax, dword ptr ds : [edi+0x40]
        shl eax, 2
        push eax
        mov ecx, esi
        call public_6347380
        mov ecx, dword ptr ds : [edi+0x40]
        imul ecx, dword ptr ds : [edi+0x3C]
        shl ecx, 2
        push ecx
        mov ecx, esi
        mov dword ptr ds : [edi+0x8C], eax
        call public_6347380
        mov edx, dword ptr ds : [edi+0x40]
        shl edx, 2
        push edx
        mov ecx, esi
        mov dword ptr ds : [edi+0xA4], eax
        call public_6347380
        mov dword ptr ds : [edi+0xA8], eax
        mov eax, dword ptr ds : [edi+0x40]
        shl eax, 2
        push eax
        mov ecx, esi
        call public_6347380
        mov ecx, dword ptr ds : [edi+0x40]
        imul ecx, dword ptr ds : [edi+0x3C]
        shl ecx, 2
        push ecx
        mov ecx, esi
        mov dword ptr ds : [edi+0xAC], eax
        call public_6347380
        mov edx, dword ptr ds : [edi+0x40]
        shl edx, 2
        push edx
        mov ecx, esi
        mov dword ptr ds : [edi+0xEC], eax
        call public_6347380
        mov dword ptr ds : [edi+0xF0], eax
        mov eax, dword ptr ds : [edi+0x40]
        shl eax, 2
        push eax
        mov ecx, esi
        call public_6347380
        mov dword ptr ds : [edi+0xF4], eax
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63666f0)
    }
}

#undef public_636671c
#undef public_6366721
#undef public_6366747
#undef public_636674c
#undef public_6366772
#undef public_6366777
#undef public_636679d
#undef public_63667a2
#undef public_63667c8
#undef public_63667cd
#undef public_63667f3
#undef public_63667f8
#undef public_636681e
#undef public_6366823
#undef public_636684d
#undef public_6366852
#undef public_636687c
#undef public_6366881
#undef public_63668a7
#undef public_63668ac
#undef public_63668d5
#undef public_63668da
#undef public_6366903
#undef public_6366908
