#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d2e1ac _public_6d2e1ac
#define public_6d2e1c4 _public_6d2e1c4
#define public_6d2e1d4 _public_6d2e1d4
#define public_6d2e210 _public_6d2e210
#define public_6d2e22a _public_6d2e22a
#define public_6d2e22f _public_6d2e22f
#define public_6d2e253 _public_6d2e253
#define public_6d2e255 _public_6d2e255
#define public_6d2e260 _public_6d2e260
#define public_6d2e26c _public_6d2e26c

PROC_DECLARE(0x6d2e170, internal_6d2e170, public_6d2e170);
extern "C" NAKED register_t __cdecl internal_6d2e170()
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
        je public_6d2e26c
        push ebx
        mov bx, word ptr ds : [edi]
        cmp bx, 0xFF
        push esi
        mov esi, dword ptr ds : [ecx+8]
        ja public_6d2e1d4
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2e1ac
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2e1ac : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2e22a
        public_6d2e1c4 : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2e22a
        xor eax, eax
        jmp public_6d2e22f
        public_6d2e1d4 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2e210
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2e210
        mov eax, dword ptr ds : [esi+0x34]
/*FIXUP push offset _public_6d299e0 @0x6d2e1ea*/
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
        jne public_6d2e22a
        public_6d2e210 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2e1c4
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2e1c4
        public_6d2e22a : nop
        mov eax, 1
        public_6d2e22f : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        pop esi
        pop ebx
        je public_6d2e26c
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [edx+4]
        add edi, 2
        test ecx, ecx
        je public_6d2e260
        mov eax, dword ptr ds : [ecx]
        push edi
        push ebp
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d2e253 : nop
        je public_6d2e26c
        public_6d2e255 : nop
        pop edi
        mov eax, 1
        pop ebp
        pop ecx
        ret 8
        public_6d2e260 : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d2e255
        cmp dword ptr ss : [ebp+8], edi
        jmp public_6d2e253
        public_6d2e26c : nop
        pop edi
        xor eax, eax
        pop ebp
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d2e170)
    }
}

#undef public_6d2e1ac
#undef public_6d2e1c4
#undef public_6d2e1d4
#undef public_6d2e210
#undef public_6d2e22a
#undef public_6d2e22f
#undef public_6d2e253
#undef public_6d2e255
#undef public_6d2e260
#undef public_6d2e26c
