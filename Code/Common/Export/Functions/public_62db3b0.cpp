#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6273bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6280b40);
CLANG_FORWARD_PROC_SYMBOL(public_62db3b0);
CLANG_FORWARD_PROC_SYMBOL(public_62db740);
CLANG_FORWARD_PROC_SYMBOL(public_62db770);
CLANG_FORWARD_PROC_SYMBOL(public_62db780);
CLANG_FORWARD_PROC_SYMBOL(public_62db7a0);
CLANG_FORWARD_PROC_SYMBOL(public_62de190);
CLANG_FORWARD_PROC_SYMBOL(public_62de220);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_63952ef);

#define public_62db529 _public_62db529
#define public_62db56f _public_62db56f
#define public_62db571 _public_62db571
#define public_62db670 _public_62db670
#define public_62db672 _public_62db672
#define public_62db6a2 _public_62db6a2
#define public_62db6b8 _public_62db6b8
#define public_62db6ba _public_62db6ba
#define public_62db6ed _public_62db6ed
#define public_62db6ef _public_62db6ef
#define public_62db70c _public_62db70c

PROC_DECLARE(0x62db3b0, internal_62db3b0, public_62db3b0);
extern "C" NAKED register_t __cdecl internal_62db3b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63952ef @0x62db3b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63952ef
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        lea ecx, ds:[esi+0x24]
        mov dword ptr ss : [esp+0x14], esi
        mov byte ptr ds : [esi+8], bl
        call public_62db740
/*FIXUP push offset _public_6261260 @0x62db3df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 8
        push 0x1C
        lea eax, ds:[esi+0x8C]
        push eax
        call public_6273bc0
        xor eax, eax
        lea edi, ds:[esi+0x6C]
        mov ecx, 8
        rep stosd
        lea edi, ds:[esi+0x16C]
        lea ecx, ds:[edi+0x1C]
        mov dword ptr ds : [esi+0x68], ebx
        call public_6261260
        mov ecx, edi
        call public_62db7a0
        lea ebp, ds:[esi+0x1C8]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        push ebx
        mov dword ptr ss : [esp+0x24], ebx
        call public_6280b40
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x1E0], ebx
        mov dword ptr ds : [esi+0x1E4], eax
        lea edi, ds:[esi+0x214]
        mov dword ptr ds : [esi+0x1E8], ebx
        mov dword ptr ds : [esi+0x1EC], eax
        lea ecx, ds:[edi+4]
        push ebx
        mov dword ptr ss : [esp+0x24], 1
        mov dword ptr ds : [esi+0x20C], ebx
        mov dword ptr ds : [esi+0x210], eax
        mov dword ptr ss : [esp+0x14], edi
        call public_62de190
        push ebx
        lea ecx, ds:[edi+4]
        mov byte ptr ss : [esp+0x24], 2
        mov dword ptr ds : [edi], ebx
        call public_6280b40
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0x10], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+0x20], ebx
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov byte ptr ds : [edi+0x24], bl
        mov dword ptr ds : [edi+0x28], 0x3F800000
        mov dword ptr ds : [edi+0x2C], ebx
/*FIXUP push offset _public_62db770 @0x62db4a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62db770
        push 0x19
        lea edi, ds:[esi+0x268]
        lea eax, ds:[edi+0x14]
        push 0x1C
        push eax
        mov byte ptr ss : [esp+0x30], 3
        mov dword ptr ds : [esi+0x260], ebx
        mov byte ptr ds : [esi+0x264], bl
        call public_6273bc0
        lea ecx, ds:[edi+0x2D4]
        mov dword ptr ds : [edi+0x2D0], ebx
        call public_62db780
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x1C0], ecx
        mov dword ptr ds : [esi+0x1F0], ebx
        mov byte ptr ds : [esi+0x245], 1
        mov dword ptr ds : [esi+0x248], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x24C], 1
        mov dword ptr ds : [esi+0x250], 0x7F0000
        mov byte ptr ds : [esi+0x254], 1
        mov dword ptr ds : [esi+0x64], ebx
        cmp dword ptr ss : [ebp], ebx
        je public_62db529
        push ebx
        mov ecx, ebp
        call public_6341610
        public_62db529 : nop
        mov dword ptr ds : [esi+0x1D8], ebx
        mov dword ptr ds : [esi+0x1D4], ebx
        mov dword ptr ds : [esi+0x1D0], ebx
        mov eax, dword ptr ds : [esi+0x1C0]
        add eax, 0xF0
        mov dword ptr ds : [esi+0x1DC], ebx
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+0x1F4], 0x42A00000
        mov dword ptr ds : [esi+0x1F8], ebx
        mov dword ptr ds : [esi+0x1FC], ebx
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62db56f
        lea ecx, ds:[eax-8]
        jmp public_62db571
        public_62db56f : nop
        xor ecx, ecx
        public_62db571 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x1C4]
        push eax
        call dword ptr ds : [edx+0x88]
        mov ecx, dword ptr ds : [esi+0x1C0]
        push ecx
        mov ecx, edi
        call public_62de220
        mov edi, dword ptr ds : [public_6399308]
        mov dword ptr ds : [esi+0x26C], ebx
        mov ebp, 0x3F800000
        mov edx, ebp
        mov dword ptr ds : [esi+0x208], ebx
        mov dword ptr ds : [esi+0x204], ebx
        mov dword ptr ds : [esi+0x200], ebx
        mov dword ptr ds : [esi+0x1E4], ebp
        mov dword ptr ss : [esp+0x10], edx
        call edi
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_63997d0]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [esi+0x1E0]
        mov dword ptr ds : [esi+0x1EC], 0x3F000000
        mov eax, dword ptr ds : [esi+0x1EC]
        mov dword ptr ss : [esp+0x10], eax
        call edi
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_63997d0]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [esi+0x1E8]
        mov dword ptr ds : [esi+0x210], 0x3DCCCCCD
        mov ecx, dword ptr ds : [esi+0x210]
        mov dword ptr ss : [esp+0x10], ecx
        call edi
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_63997d0]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [esi+0x20C]
        mov eax, dword ptr ds : [esi+0x1C0]
        add eax, 0xF0
        mov byte ptr ds : [esi+0x244], bl
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ds : [esi+0x255], bl
        mov dword ptr ds : [esi+0x258], ebx
        mov dword ptr ds : [esi+0x25C], ebx
        mov dword ptr ds : [esi+0x1A0], ebx
        mov byte ptr ds : [esi+0x1B0], bl
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62db670
        lea ecx, ds:[eax-8]
        jmp public_62db672
        public_62db670 : nop
        xor ecx, ecx
        public_62db672 : nop
        mov edx, dword ptr ds : [ecx]
        push 1
        push ebp
        call dword ptr ds : [edx+0xD8]
        fst dword ptr ss : [esp+0x28]
        fst dword ptr ds : [esi+0x1F4]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x44
        jp public_62db6a2
        mov dword ptr ds : [esi+0x1F8], ebx
        mov dword ptr ds : [esi+0x1FC], ebx
        jmp public_62db70c
        public_62db6a2 : nop
        mov eax, dword ptr ds : [esi+0x1C0]
        add eax, 0xF0
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62db6b8
        lea ecx, ds:[eax-8]
        jmp public_62db6ba
        public_62db6b8 : nop
        xor ecx, ecx
        public_62db6ba : nop
        mov edx, dword ptr ds : [public_63a05b4]
        mov eax, dword ptr ds : [ecx]
        push 1
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        push ebx
        call dword ptr ds : [eax+0xD0]
        fstp dword ptr ds : [esi+0x1F8]
        mov eax, dword ptr ds : [esi+0x1C0]
        add eax, 0xF0
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62db6ed
        lea ecx, ds:[eax-8]
        jmp public_62db6ef
        public_62db6ed : nop
        xor ecx, ecx
        public_62db6ef : nop
        mov edx, dword ptr ds : [public_63a05b4]
        mov eax, dword ptr ds : [ecx]
        push 1
        push edx
        push 0x43960000
        push ebx
        call dword ptr ds : [eax+0xD0]
        fstp dword ptr ds : [esi+0x1FC]
        public_62db70c : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [esi+0x1A4], ebx
        mov dword ptr ds : [esi+0x1A8], ebp
        mov dword ptr ds : [esi+0x1AC], ebx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x62db3b0)
    }
}

#undef public_62db529
#undef public_62db56f
#undef public_62db571
#undef public_62db670
#undef public_62db672
#undef public_62db6a2
#undef public_62db6b8
#undef public_62db6ba
#undef public_62db6ed
#undef public_62db6ef
#undef public_62db70c
