#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630f250);
CLANG_FORWARD_PROC_SYMBOL(public_630f2c0);
CLANG_FORWARD_PROC_SYMBOL(public_630f4e0);

#define public_630f4f0 _public_630f4f0
#define public_630f4ff _public_630f4ff
#define public_630f501 _public_630f501
#define public_630f537 _public_630f537
#define public_630f543 _public_630f543
#define public_630f54d _public_630f54d
#define public_630f57f _public_630f57f
#define public_630f58e _public_630f58e
#define public_630f5bb _public_630f5bb
#define public_630f5e0 _public_630f5e0
#define public_630f5eb _public_630f5eb
#define public_630f600 _public_630f600
#define public_630f60e _public_630f60e
#define public_630f611 _public_630f611
#define public_630f633 _public_630f633
#define public_630f646 _public_630f646
#define public_630f64d _public_630f64d

PROC_DECLARE(0x630f4e0, internal_630f4e0, public_630f4e0);
extern "C" NAKED register_t __cdecl internal_630f4e0()
{
    __asm
    {
        sub esp, 0x408
        push ebp
        push esi
        push edi
        mov esi, ecx
        nop 
        lea esp, ss:[esp]
        public_630f4f0 : nop
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        mov ebp, dword ptr ds : [esi+0x24]
        je public_630f4ff
        mov edi, dword ptr ds : [esi+0x20]
        jmp public_630f501
        public_630f4ff : nop
        xor edi, edi
        public_630f501 : nop
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x414], 0
        mov dword ptr ss : [esp+0x410], 0
        call public_630f2c0
        test al, al
        je public_630f646
        mov ecx, dword ptr ss : [esp+0x410]
        public_630f537 : nop
        mov al, byte ptr ss : [esp+ecx+0xC]
        cmp al, 0x20
        je public_630f543
        cmp al, 9
        jne public_630f54d
        public_630f543 : nop
        inc ecx
        mov dword ptr ss : [esp+0x410], ecx
        jmp public_630f537
        public_630f54d : nop
        cmp ecx, dword ptr ss : [esp+0x40C]
        jae public_630f4f0
        mov cl, byte ptr ss : [esp+ecx+0xC]
        test cl, cl
        je public_630f4f0
        cmp cl, 0x3B
        je public_630f4f0
        cmp cl, 0x5B
        jne public_630f58e
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        mov dword ptr ds : [esi+0x24], ebp
        je public_630f64d
        mov eax, dword ptr ds : [esi+0x1C]
        cmp edi, eax
        ja public_630f57f
        mov eax, edi
        public_630f57f : nop
        pop edi
        mov dword ptr ds : [esi+0x20], eax
        pop esi
        xor al, al
        pop ebp
        add esp, 0x408
        ret 
        public_630f58e : nop
        push 0x3B
        push 0x3D
        lea ecx, ds:[esi+0x428]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_630f250
        mov ecx, dword ptr ss : [esp+0x410]
        mov edx, dword ptr ss : [esp+0x40C]
        cmp ecx, edx
        jae public_630f633
        cmp byte ptr ss : [esp+ecx+0xC], 0x3D
        jne public_630f633
        public_630f5bb : nop
        inc ecx
        mov dword ptr ss : [esp+0x410], ecx
        mov al, byte ptr ss : [esp+ecx+0xC]
        cmp al, 0x20
        je public_630f5bb
        cmp al, 9
        je public_630f5bb
        xor eax, eax
        sub edx, ecx
        lea ebp, ds:[esi+0x828]
        je public_630f5eb
        lea esi, ss:[esp+ecx+0xC]
        nop 
        public_630f5e0 : nop
        cmp byte ptr ds : [esi+eax], 0x3B
        je public_630f5eb
        inc eax
        cmp eax, edx
        jb public_630f5e0
        public_630f5eb : nop
        lea esi, ss:[esp+ecx+0xC]
        add ecx, eax
        test eax, eax
        mov dword ptr ss : [esp+0x410], ecx
        jbe public_630f611
        lea esp, ss:[esp]
        public_630f600 : nop
        mov cl, byte ptr ds : [esi+eax-1]
        cmp cl, 0x20
        je public_630f60e
        cmp cl, 9
        jne public_630f611
        public_630f60e : nop
        dec eax
        jne public_630f600
        public_630f611 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+ebp], 0
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x408
        ret 
        public_630f633 : nop
        pop edi
        mov byte ptr ds : [esi+0x828], 0
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x408
        ret 
        public_630f646 : nop
        mov byte ptr ds : [esi+0x428], 0
        public_630f64d : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        add esp, 0x408
        ret 
        UNREACHABLE_TRAP(0x630f4e0)
    }
}

#undef public_630f4f0
#undef public_630f4ff
#undef public_630f501
#undef public_630f537
#undef public_630f543
#undef public_630f54d
#undef public_630f57f
#undef public_630f58e
#undef public_630f5bb
#undef public_630f5e0
#undef public_630f5eb
#undef public_630f600
#undef public_630f60e
#undef public_630f611
#undef public_630f633
#undef public_630f646
#undef public_630f64d
