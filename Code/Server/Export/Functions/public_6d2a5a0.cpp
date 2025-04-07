#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d2a5d5 _public_6d2a5d5
#define public_6d2a5ed _public_6d2a5ed
#define public_6d2a5fd _public_6d2a5fd
#define public_6d2a639 _public_6d2a639
#define public_6d2a653 _public_6d2a653
#define public_6d2a658 _public_6d2a658
#define public_6d2a67b _public_6d2a67b
#define public_6d2a67d _public_6d2a67d
#define public_6d2a689 _public_6d2a689
#define public_6d2a695 _public_6d2a695

PROC_DECLARE(0x6d2a5a0, internal_6d2a5a0, public_6d2a5a0);
extern "C" NAKED register_t __cdecl internal_6d2a5a0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov bx, word ptr ss : [ebp]
        test bx, bx
        push edi
        mov edi, ecx
        je public_6d2a695
        cmp bx, 0xFF
        push esi
        mov esi, dword ptr ds : [edi+0xC]
        ja public_6d2a5fd
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2a5d5
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2a5d5 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2a653
        public_6d2a5ed : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2a653
        xor eax, eax
        jmp public_6d2a658
        public_6d2a5fd : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2a639
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2a639
        mov eax, dword ptr ds : [esi+0x34]
/*FIXUP push offset _public_6d299e0 @0x6d2a613*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        push ecx
        mov word ptr ss : [esp+0x20], bx
        mov word ptr ss : [esp+0x22], bx
        call public_6d40890
        mov ebp, dword ptr ss : [esp+0x2C]
        add esp, 0x10
        test al, al
        jne public_6d2a653
        public_6d2a639 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2a5ed
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2a5ed
        public_6d2a653 : nop
        mov eax, 1
        public_6d2a658 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        pop esi
        je public_6d2a695
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 2
        test ecx, ecx
        je public_6d2a689
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d2a67b : nop
        je public_6d2a695
        public_6d2a67d : nop
        pop edi
        pop ebp
        mov eax, 1
        pop ebx
        pop ecx
        ret 8
        public_6d2a689 : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d2a67d
        cmp dword ptr ds : [eax+8], ebp
        jmp public_6d2a67b
        public_6d2a695 : nop
        pop edi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d2a5a0)
    }
}

#undef public_6d2a5d5
#undef public_6d2a5ed
#undef public_6d2a5fd
#undef public_6d2a639
#undef public_6d2a653
#undef public_6d2a658
#undef public_6d2a67b
#undef public_6d2a67d
#undef public_6d2a689
#undef public_6d2a695
