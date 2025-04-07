#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d2990c _public_6d2990c
#define public_6d29924 _public_6d29924
#define public_6d29934 _public_6d29934
#define public_6d29970 _public_6d29970
#define public_6d2998a _public_6d2998a
#define public_6d2998f _public_6d2998f
#define public_6d299b3 _public_6d299b3
#define public_6d299b5 _public_6d299b5
#define public_6d299c0 _public_6d299c0
#define public_6d299cc _public_6d299cc

PROC_DECLARE(0x6d298d0, internal_6d298d0, public_6d298d0);
extern "C" NAKED register_t __cdecl internal_6d298d0()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp eax, edi
        mov dword ptr ss : [esp+8], ecx
        je public_6d299cc
        push ebx
        mov bx, word ptr ds : [edi]
        cmp bx, 0xFF
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        ja public_6d29934
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2990c
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2990c : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2998a
        public_6d29924 : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2998a
        xor eax, eax
        jmp public_6d2998f
        public_6d29934 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d29970
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d29970
        mov eax, dword ptr ds : [esi+0x34]
/*FIXUP push offset _public_6d299e0 @0x6d2994a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        push ecx
        mov word ptr ss : [esp+0x2C], bx
        mov word ptr ss : [esp+0x2E], bx
        call public_6d40890
        mov ebp, dword ptr ss : [esp+0x28]
        add esp, 0x10
        test al, al
        jne public_6d2998a
        public_6d29970 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d29924
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d29924
        public_6d2998a : nop
        mov eax, 1
        public_6d2998f : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        pop esi
        pop ebx
        je public_6d299cc
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [edx+4]
        add edi, 2
        test ecx, ecx
        je public_6d299c0
        mov eax, dword ptr ds : [ecx]
        push edi
        push ebp
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d299b3 : nop
        je public_6d299cc
        public_6d299b5 : nop
        pop edi
        mov eax, 1
        pop ebp
        pop ecx
        ret 8
        public_6d299c0 : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d299b5
        cmp dword ptr ss : [ebp+8], edi
        jmp public_6d299b3
        public_6d299cc : nop
        pop edi
        xor eax, eax
        pop ebp
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d298d0)
    }
}

#undef public_6d2990c
#undef public_6d29924
#undef public_6d29934
#undef public_6d29970
#undef public_6d2998a
#undef public_6d2998f
#undef public_6d299b3
#undef public_6d299b5
#undef public_6d299c0
#undef public_6d299cc
