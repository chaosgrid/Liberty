#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d2edf5 _public_6d2edf5
#define public_6d2ee0d _public_6d2ee0d
#define public_6d2ee1d _public_6d2ee1d
#define public_6d2ee59 _public_6d2ee59
#define public_6d2ee73 _public_6d2ee73
#define public_6d2ee78 _public_6d2ee78
#define public_6d2ee9b _public_6d2ee9b
#define public_6d2ee9d _public_6d2ee9d
#define public_6d2eea9 _public_6d2eea9
#define public_6d2eeb5 _public_6d2eeb5

PROC_DECLARE(0x6d2edc0, internal_6d2edc0, public_6d2edc0);
extern "C" NAKED register_t __cdecl internal_6d2edc0()
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
        je public_6d2eeb5
        cmp bx, 0xFF
        push esi
        mov esi, dword ptr ds : [edi+8]
        ja public_6d2ee1d
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2edf5
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2edf5 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2ee73
        public_6d2ee0d : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2ee73
        xor eax, eax
        jmp public_6d2ee78
        public_6d2ee1d : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2ee59
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2ee59
        mov eax, dword ptr ds : [esi+0x34]
/*FIXUP push offset _public_6d299e0 @0x6d2ee33*/
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
        jne public_6d2ee73
        public_6d2ee59 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2ee0d
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2ee0d
        public_6d2ee73 : nop
        mov eax, 1
        public_6d2ee78 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        pop esi
        je public_6d2eeb5
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 2
        test ecx, ecx
        je public_6d2eea9
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d2ee9b : nop
        je public_6d2eeb5
        public_6d2ee9d : nop
        pop edi
        pop ebp
        mov eax, 1
        pop ebx
        pop ecx
        ret 8
        public_6d2eea9 : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d2ee9d
        cmp dword ptr ds : [eax+8], ebp
        jmp public_6d2ee9b
        public_6d2eeb5 : nop
        pop edi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d2edc0)
    }
}

#undef public_6d2edf5
#undef public_6d2ee0d
#undef public_6d2ee1d
#undef public_6d2ee59
#undef public_6d2ee73
#undef public_6d2ee78
#undef public_6d2ee9b
#undef public_6d2ee9d
#undef public_6d2eea9
#undef public_6d2eeb5
