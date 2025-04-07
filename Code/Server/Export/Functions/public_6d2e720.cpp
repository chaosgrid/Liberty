#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d2e75e _public_6d2e75e
#define public_6d2e77a _public_6d2e77a
#define public_6d2e791 _public_6d2e791
#define public_6d2e819 _public_6d2e819
#define public_6d2e821 _public_6d2e821
#define public_6d2e845 _public_6d2e845
#define public_6d2e84d _public_6d2e84d
#define public_6d2e852 _public_6d2e852
#define public_6d2e876 _public_6d2e876
#define public_6d2e878 _public_6d2e878
#define public_6d2e885 _public_6d2e885
#define public_6d2e891 _public_6d2e891

PROC_DECLARE(0x6d2e720, internal_6d2e720, public_6d2e720);
extern "C" NAKED register_t __cdecl internal_6d2e720()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d2e891
        push ebx
        mov bx, word ptr ds : [edi]
        cmp bx, 0xFF
        push esi
        mov esi, dword ptr ds : [ecx+8]
        ja public_6d2e791
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2e75e
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2e75e : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2e84d
        public_6d2e77a : nop
        push ebx
        mov ecx, esi
        call public_6d3eb00
        test al, al
        jne public_6d2e84d
        xor eax, eax
        jmp public_6d2e852
        public_6d2e791 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2e821
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2e821
        push ebx
        call dword ptr ds : [public_6d64ba0]
        mov ecx, dword ptr ds : [esi+0x30]
/*FIXUP push offset _public_6d299e0 @0x6d2e7b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea edx, ss:[esp+0x18]
        push edx
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x34]
        push eax
        push ecx
        mov word ptr ss : [esp+0x24], di
        mov word ptr ss : [esp+0x26], di
        call public_6d40890
        add esp, 0x14
        test al, al
        jne public_6d2e845
        push ebx
        call dword ptr ds : [public_6d64bac]
        add esp, 4
        cmp di, ax
        mov dword ptr ss : [esp+0x14], eax
        je public_6d2e819
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [esi+0x30]
/*FIXUP push offset _public_6d299e0 @0x6d2e7f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        add esp, 0x10
        test al, al
        jne public_6d2e845
        public_6d2e819 : nop
        mov edi, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x24]
        public_6d2e821 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2e77a
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2e77a
        jmp public_6d2e84d
        public_6d2e845 : nop
        mov edi, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x24]
        public_6d2e84d : nop
        mov eax, 1
        public_6d2e852 : nop
        movzx edx, byte ptr ds : [esi+4]
        cmp edx, eax
        pop esi
        pop ebx
        je public_6d2e891
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        add edi, 2
        test ecx, ecx
        je public_6d2e885
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebp
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d2e876 : nop
        je public_6d2e891
        public_6d2e878 : nop
        pop edi
        mov eax, 1
        pop ebp
        add esp, 0x10
        ret 8
        public_6d2e885 : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d2e878
        cmp dword ptr ss : [ebp+8], edi
        jmp public_6d2e876
        public_6d2e891 : nop
        pop edi
        xor eax, eax
        pop ebp
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d2e720)
    }
}

#undef public_6d2e75e
#undef public_6d2e77a
#undef public_6d2e791
#undef public_6d2e819
#undef public_6d2e821
#undef public_6d2e845
#undef public_6d2e84d
#undef public_6d2e852
#undef public_6d2e876
#undef public_6d2e878
#undef public_6d2e885
#undef public_6d2e891
