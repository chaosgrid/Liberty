#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62447b0);
CLANG_FORWARD_PROC_SYMBOL(public_6244a70);
CLANG_FORWARD_PROC_SYMBOL(public_6244aa0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_62447e4 _public_62447e4
#define public_62447e6 _public_62447e6
#define public_62447ee _public_62447ee
#define public_62447f3 _public_62447f3
#define public_62447ff _public_62447ff
#define public_6244824 _public_6244824
#define public_6244838 _public_6244838
#define public_6244842 _public_6244842
#define public_624485e _public_624485e
#define public_6244876 _public_6244876
#define public_624487a _public_624487a
#define public_624488d _public_624488d
#define public_624489b _public_624489b
#define public_62448a9 _public_62448a9
#define public_62448e9 _public_62448e9
#define public_6244906 _public_6244906
#define public_6244934 _public_6244934
#define public_6244938 _public_6244938
#define public_624494f _public_624494f
#define public_6244963 _public_6244963
#define public_6244977 _public_6244977
#define public_6244980 _public_6244980
#define public_6244996 _public_6244996
#define public_62449a1 _public_62449a1
#define public_62449b7 _public_62449b7
#define public_62449ce _public_62449ce
#define public_62449f2 _public_62449f2
#define public_62449fd _public_62449fd
#define public_6244a1a _public_6244a1a
#define public_6244a2c _public_6244a2c
#define public_6244a30 _public_6244a30
#define public_6244a3d _public_6244a3d
#define public_6244a52 _public_6244a52
#define public_6244a5d _public_6244a5d
#define public_6244a60 _public_6244a60

PROC_DECLARE(0x62447b0, internal_62447b0, public_62447b0);
extern "C" NAKED register_t __cdecl internal_62447b0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub eax, esi
        push edi
        sar eax, 2
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6244906
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_62447e4
        mov eax, esi
        sub eax, ecx
        sar eax, 2
        cmp ebp, eax
        jb public_62447e6
        public_62447e4 : nop
        mov eax, ebp
        public_62447e6 : nop
        test ecx, ecx
        jne public_62447ee
        xor esi, esi
        jmp public_62447f3
        public_62447ee : nop
        sub esi, ecx
        sar esi, 2
        public_62447f3 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_62447ff
        xor eax, eax
        public_62447ff : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_624612c
        mov edx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x20]
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        mov esi, dword ptr ds : [edx+4]
        mov edi, eax
        cmp esi, ebx
        je public_6244838
        public_6244824 : nop
        push esi
        push edi
        call public_6244aa0
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, ebx
        jne public_6244824
        public_6244838 : nop
        test ebp, ebp
        mov esi, edi
        jbe public_624485e
        mov dword ptr ss : [esp+0x1C], ebp
        public_6244842 : nop
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push esi
        call public_6244aa0
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        add esi, 4
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6244842
        public_624485e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+ebp*4]
        mov esi, ebx
        mov edi, dword ptr ds : [ecx+8]
        cmp ebx, edi
        je public_624488d
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_624487a
        public_6244876 : nop
        mov eax, dword ptr ss : [esp+0x24]
        public_624487a : nop
        add eax, esi
        push esi
        push eax
        call public_6244aa0
        add esi, 4
        add esp, 8
        cmp esi, edi
        jne public_6244876
        public_624488d : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [eax+4]
        cmp esi, edi
        je public_62448a9
        public_624489b : nop
        mov ecx, esi
        call public_6244a70
        add esi, 4
        cmp esi, edi
        jne public_624489b
        public_62448a9 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_62460e0
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [eax+4]
        test edx, edx
        jne public_62448e9
        xor ecx, ecx
        mov dword ptr ds : [eax+4], esi
        mov ecx, ebp
        pop edi
        lea ecx, ds:[esi+ecx*4]
        pop esi
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 8
        ret 0xC
        public_62448e9 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [eax+4], esi
        sub ecx, edx
        pop edi
        sar ecx, 2
        add ecx, ebp
        lea ecx, ds:[esi+ecx*4]
        pop esi
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 8
        ret 0xC
        public_6244906 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov edx, esi
        sub edx, ebx
        sar edx, 2
        cmp edx, ebp
        jae public_62449b7
        lea eax, ds:[ebp*4]
        mov edi, ebx
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        je public_624494f
        sub eax, ebx
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6244938
        public_6244934 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_6244938 : nop
        add eax, edi
        push edi
        push eax
        call public_6244aa0
        add edi, 4
        add esp, 8
        cmp edi, esi
        jne public_6244934
        mov ecx, dword ptr ss : [esp+0x10]
        public_624494f : nop
        mov esi, dword ptr ds : [ecx+8]
        mov eax, esi
        sub eax, ebx
        sar eax, 2
        sub ebp, eax
        mov edi, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        je public_6244977
        public_6244963 : nop
        push ebp
        push esi
        call public_6244aa0
        add esp, 8
        add esi, 4
        dec edi
        jne public_6244963
        mov ecx, dword ptr ss : [esp+0x10]
        public_6244977 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, ebx
        cmp ebx, edi
        je public_62449a1
        public_6244980 : nop
        mov ecx, esi
        call public_6244a70
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_6244996
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6244996 : nop
        add esi, 4
        cmp esi, edi
        jne public_6244980
        mov ecx, dword ptr ss : [esp+0x10]
        public_62449a1 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ecx+8]
        pop edi
        add eax, edx
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_62449b7 : nop
        test ebp, ebp
        jbe public_6244a60
        shl ebp, 2
        mov edi, esi
        mov dword ptr ss : [esp+0x1C], esi
        sub edi, ebp
        cmp edi, esi
        je public_62449f2
        public_62449ce : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push edi
        push eax
        call public_6244aa0
        mov edx, dword ptr ss : [esp+0x24]
        add edi, 4
        add esp, 8
        add edx, 4
        cmp edi, esi
        mov dword ptr ss : [esp+0x1C], edx
        jne public_62449ce
        mov ecx, dword ptr ss : [esp+0x10]
        public_62449f2 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edi, esi
        sub edi, ebp
        cmp ebx, edi
        je public_6244a30
        public_62449fd : nop
        mov eax, dword ptr ds : [esi-4]
        sub esi, 4
        sub edi, 4
        test eax, eax
        je public_6244a1a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], 0
        public_6244a1a : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_6244a2c
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6244a2c : nop
        cmp edi, ebx
        jne public_62449fd
        public_6244a30 : nop
        lea edi, ds:[ebx+ebp]
        mov esi, ebx
        cmp ebx, edi
        je public_6244a5d
        mov ebx, dword ptr ss : [esp+0x24]
        public_6244a3d : nop
        mov ecx, esi
        call public_6244a70
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_6244a52
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6244a52 : nop
        add esi, 4
        cmp esi, edi
        jne public_6244a3d
        mov ecx, dword ptr ss : [esp+0x10]
        public_6244a5d : nop
        add dword ptr ds : [ecx+8], ebp
        public_6244a60 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x62447b0)
    }
}

#undef public_62447e4
#undef public_62447e6
#undef public_62447ee
#undef public_62447f3
#undef public_62447ff
#undef public_6244824
#undef public_6244838
#undef public_6244842
#undef public_624485e
#undef public_6244876
#undef public_624487a
#undef public_624488d
#undef public_624489b
#undef public_62448a9
#undef public_62448e9
#undef public_6244906
#undef public_6244934
#undef public_6244938
#undef public_624494f
#undef public_6244963
#undef public_6244977
#undef public_6244980
#undef public_6244996
#undef public_62449a1
#undef public_62449b7
#undef public_62449ce
#undef public_62449f2
#undef public_62449fd
#undef public_6244a1a
#undef public_6244a2c
#undef public_6244a30
#undef public_6244a3d
#undef public_6244a52
#undef public_6244a5d
#undef public_6244a60
