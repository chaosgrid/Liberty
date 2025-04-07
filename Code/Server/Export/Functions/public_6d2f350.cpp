#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d2f388 _public_6d2f388
#define public_6d2f3a4 _public_6d2f3a4
#define public_6d2f3bb _public_6d2f3bb
#define public_6d2f453 _public_6d2f453
#define public_6d2f457 _public_6d2f457
#define public_6d2f47b _public_6d2f47b
#define public_6d2f47f _public_6d2f47f
#define public_6d2f484 _public_6d2f484
#define public_6d2f4ac _public_6d2f4ac
#define public_6d2f4ae _public_6d2f4ae
#define public_6d2f4bb _public_6d2f4bb
#define public_6d2f4c7 _public_6d2f4c7

PROC_DECLARE(0x6d2f350, internal_6d2f350, public_6d2f350);
extern "C" NAKED register_t __cdecl internal_6d2f350()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov bx, word ptr ds : [edi]
        test bx, bx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d2f4c7
        cmp bx, 0xFF
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        ja public_6d2f3bb
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2f388
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2f388 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2f47f
        public_6d2f3a4 : nop
        push ebx
        mov ecx, esi
        call public_6d3eb00
        test al, al
        jne public_6d2f47f
        xor eax, eax
        jmp public_6d2f484
        public_6d2f3bb : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2f457
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2f457
        push ebx
        call dword ptr ds : [public_6d64ba0]
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [esi+0x30]
        add esp, 4
/*FIXUP push offset _public_6d299e0 @0x6d2f3e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        add esp, 0x10
        test al, al
        jne public_6d2f47b
        push ebx
        call dword ptr ds : [public_6d64bac]
        add esp, 4
        cmp word ptr ss : [esp+0x10], ax
        mov dword ptr ss : [esp+0x14], eax
        je public_6d2f453
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [esi+0x30]
/*FIXUP push offset _public_6d299e0 @0x6d2f42c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        add esp, 0x10
        test al, al
        jne public_6d2f47b
        public_6d2f453 : nop
        mov edi, dword ptr ss : [esp+0x2C]
        public_6d2f457 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2f3a4
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2f3a4
        jmp public_6d2f47f
        public_6d2f47b : nop
        mov edi, dword ptr ss : [esp+0x2C]
        public_6d2f47f : nop
        mov eax, 1
        public_6d2f484 : nop
        movzx edx, byte ptr ds : [esi+4]
        cmp edx, eax
        pop esi
        pop ebp
        je public_6d2f4c7
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x20]
        add edi, 2
        test ecx, ecx
        je public_6d2f4bb
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d2f4ac : nop
        je public_6d2f4c7
        public_6d2f4ae : nop
        pop edi
        mov eax, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6d2f4bb : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d2f4ae
        cmp dword ptr ds : [eax+8], edi
        jmp public_6d2f4ac
        public_6d2f4c7 : nop
        pop edi
        xor eax, eax
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6d2f350)
    }
}

#undef public_6d2f388
#undef public_6d2f3a4
#undef public_6d2f3bb
#undef public_6d2f453
#undef public_6d2f457
#undef public_6d2f47b
#undef public_6d2f47f
#undef public_6d2f484
#undef public_6d2f4ac
#undef public_6d2f4ae
#undef public_6d2f4bb
#undef public_6d2f4c7
