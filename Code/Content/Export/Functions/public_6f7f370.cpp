#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7f370);
CLANG_FORWARD_PROC_SYMBOL(public_6f7f760);
CLANG_FORWARD_PROC_SYMBOL(public_6f7f990);
CLANG_FORWARD_PROC_SYMBOL(public_6f7fba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7fc80);
CLANG_FORWARD_PROC_SYMBOL(public_6f7fea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ffd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f80180);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb064e);

#define public_6f7f3d4 _public_6f7f3d4
#define public_6f7f414 _public_6f7f414
#define public_6f7f42e _public_6f7f42e
#define public_6f7f44e _public_6f7f44e
#define public_6f7f460 _public_6f7f460
#define public_6f7f501 _public_6f7f501
#define public_6f7f510 _public_6f7f510
#define public_6f7f520 _public_6f7f520
#define public_6f7f53f _public_6f7f53f
#define public_6f7f59c _public_6f7f59c
#define public_6f7f5ad _public_6f7f5ad
#define public_6f7f5de _public_6f7f5de
#define public_6f7f610 _public_6f7f610
#define public_6f7f614 _public_6f7f614
#define public_6f7f640 _public_6f7f640
#define public_6f7f694 _public_6f7f694
#define public_6f7f6fe _public_6f7f6fe

PROC_DECLARE(0x6f7f370, internal_6f7f370, public_6f7f370);
extern "C" NAKED register_t __cdecl internal_6f7f370()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb064e @0x6f7f378*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb064e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x7C
        push ebx
        mov ebx, dword ptr ss : [esp+0x94]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x9C]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 0x10
        jg public_6f7f44e
        cmp edi, ebx
        je public_6f7f6fe
        lea esi, ds:[edi+0x38]
        cmp esi, ebx
        je public_6f7f6fe
        mov ebp, dword ptr ss : [esp+0xA4]
        public_6f7f3d4 : nop
        push esi
        lea ecx, ss:[esp+0x58]
        call public_6f7f760
        mov ecx, dword ptr ss : [esp+0x58]
        cmp ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x94], 0
        jb public_6f7f414
        push ebp
        sub esp, 0x38
        lea edx, ss:[esp+0x90]
        mov ecx, esp
        mov dword ptr ss : [esp+0x50], esp
        push edx
        call public_6f7f760
        push esi
        call public_6f7fba0
        add esp, 0x40
        jmp public_6f7f42e
        public_6f7f414 : nop
        lea eax, ds:[esi+0x38]
        push eax
        push esi
        push edi
        call public_6f7ffd0
        add esp, 0xC
        lea ecx, ss:[esp+0x54]
        push ecx
        mov ecx, edi
        call public_6f7e0c0
        public_6f7f42e : nop
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x94], 0xFFFFFFFF
        call public_6eec8d0
        add esi, 0x38
        cmp esi, ebx
        jne public_6f7f3d4
        jmp public_6f7f6fe
        public_6f7f44e : nop
        cmp edx, 0x10
        mov ebp, ebx
        jle public_6f7f5de
        lea esp, ss:[esp]
        public_6f7f460 : nop
        mov edx, dword ptr ss : [esp+0xA4]
        push edx
        sub esp, 0x38
        lea eax, ss:[ebp-0x38]
        mov ecx, esp
        mov dword ptr ss : [esp+0x50], esp
        push eax
        call public_6f7f760
        mov ecx, ebp
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        mov eax, edx
        add eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        imul eax, 0x38
        sub esp, 0x38
        add eax, edi
        mov ecx, esp
        mov dword ptr ss : [esp+0x84], esp
        push eax
        mov dword ptr ss : [esp+0x10C], 1
        call public_6f7f760
        sub esp, 0x38
        mov ecx, esp
        mov dword ptr ss : [esp+0xC4], esp
        push edi
        mov byte ptr ss : [esp+0x144], 2
        call public_6f7f760
        lea edx, ss:[esp+0x100]
        push edx
        mov dword ptr ss : [esp+0x144], 0xFFFFFFFF
        call public_6f7fea0
        add esp, 0xB0
        mov ebx, ebp
        mov esi, edi
        mov dword ptr ss : [esp+0x94], 3
        public_6f7f501 : nop
        mov eax, dword ptr ss : [esp+0x58]
        cmp dword ptr ds : [esi+4], eax
        jae public_6f7f520
        lea ebx, ds:[ebx]
        public_6f7f510 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        add esi, 0x38
        cmp ecx, eax
        jb public_6f7f510
        lea ebx, ds:[ebx]
        public_6f7f520 : nop
        mov ecx, dword ptr ds : [ebx-0x34]
        sub ebx, 0x38
        cmp eax, ecx
        jb public_6f7f520
        cmp ebx, esi
        jbe public_6f7f53f
        push 0
        push ebx
        push esi
        call public_6f80180
        add esp, 0xC
        add esi, 0x38
        jmp public_6f7f501
        public_6f7f53f : nop
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x94], 0xFFFFFFFF
        call public_6eec8d0
        mov ebx, ebp
        sub ebx, esi
        mov eax, 0x92492493
        imul ebx
        mov ecx, edx
        add ecx, ebx
        sar ecx, 5
        mov eax, ecx
        shr eax, 0x1F
        add ecx, eax
        mov ebx, esi
        sub ebx, edi
        mov eax, 0x92492493
        imul ebx
        add edx, ebx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ecx, edx
        push 0
        jg public_6f7f59c
        mov ecx, dword ptr ss : [esp+0xA8]
        push ecx
        push ebp
        push esi
        call public_6f7f990
        mov ebp, esi
        jmp public_6f7f5ad
        public_6f7f59c : nop
        mov edx, dword ptr ss : [esp+0xA8]
        push edx
        push esi
        push edi
        call public_6f7f990
        mov edi, esi
        public_6f7f5ad : nop
        mov ecx, ebp
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add esp, 0x10
        cmp edx, 0x10
        jg public_6f7f460
        mov ebx, dword ptr ss : [esp+0xA0]
        mov edi, dword ptr ss : [esp+0x9C]
        public_6f7f5de : nop
        mov ecx, dword ptr ss : [esp+0xA4]
        push 0
        push ecx
        lea ebp, ds:[edi+0x380]
        push ebp
        push edi
        call public_6f7fc80
        add esp, 0x10
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x9C], ebp
        je public_6f7f6fe
        lea esi, ss:[ebp-0x20]
        mov dword ptr ss : [esp+0x14], esi
        jmp public_6f7f614
        public_6f7f610 : nop
        mov esi, dword ptr ss : [esp+0x14]
        public_6f7f614 : nop
        push ebp
        lea ecx, ss:[esp+0x20]
        call public_6f7f760
        mov ebx, ebp
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, dword ptr ds : [esi-0x14]
        lea edx, ds:[esi-0x18]
        mov dword ptr ss : [esp+0x94], 4
        mov dword ptr ss : [esp+0x10], edx
        jae public_6f7f694
        mov ebp, esi
        lea ecx, ds:[ecx]
        public_6f7f640 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        lea eax, ss:[ebp-0x10]
        lea ecx, ds:[ebx+8]
        push eax
        mov dword ptr ds : [ebx+4], edx
        call public_6eb6560
        mov eax, dword ptr ss : [esp+0x10]
        lea edi, ds:[ebx+0x18]
        mov esi, ebp
        mov ecx, 6
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [ebx+0x30], ecx
        mov dl, byte ptr ss : [ebp+0x1C]
        mov byte ptr ds : [ebx+0x34], dl
        mov ecx, dword ptr ss : [ebp-0x4C]
        mov ebx, eax
        sub eax, 0x38
        sub ebp, 0x38
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ecx
        jb public_6f7f640
        mov ebp, dword ptr ss : [esp+0x9C]
        public_6f7f694 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x24]
        mov dword ptr ds : [ebx], ecx
        lea ecx, ds:[ebx+8]
        push edx
        mov dword ptr ds : [ebx+4], eax
        call public_6eb6560
        mov eax, dword ptr ss : [esp+0x4C]
        lea edi, ds:[ebx+0x18]
        mov ecx, 6
        lea esi, ss:[esp+0x34]
        rep movsd
        mov cl, byte ptr ss : [esp+0x50]
        mov byte ptr ds : [ebx+0x34], cl
        lea ecx, ss:[esp+0x24]
        mov dword ptr ds : [ebx+0x30], eax
        mov dword ptr ss : [esp+0x94], 0xFFFFFFFF
        call public_6eec8d0
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0xA0]
        add ebp, 0x38
        add ecx, 0x38
        cmp ebp, eax
        mov dword ptr ss : [esp+0x9C], ebp
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6f7f610
        public_6f7f6fe : nop
        mov ecx, dword ptr ss : [esp+0x8C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x88
        ret 
        UNREACHABLE_TRAP(0x6f7f370)
    }
}

#undef public_6f7f3d4
#undef public_6f7f414
#undef public_6f7f42e
#undef public_6f7f44e
#undef public_6f7f460
#undef public_6f7f501
#undef public_6f7f510
#undef public_6f7f520
#undef public_6f7f53f
#undef public_6f7f59c
#undef public_6f7f5ad
#undef public_6f7f5de
#undef public_6f7f610
#undef public_6f7f614
#undef public_6f7f640
#undef public_6f7f694
#undef public_6f7f6fe
