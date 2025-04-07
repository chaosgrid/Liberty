#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ebf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d32c89 _public_6d32c89
#define public_6d32c99 _public_6d32c99
#define public_6d32cb5 _public_6d32cb5
#define public_6d32cd1 _public_6d32cd1
#define public_6d32cd5 _public_6d32cd5
#define public_6d32cda _public_6d32cda
#define public_6d32d0c _public_6d32d0c
#define public_6d32d24 _public_6d32d24
#define public_6d32d33 _public_6d32d33
#define public_6d32d48 _public_6d32d48
#define public_6d32d52 _public_6d32d52
#define public_6d32d83 _public_6d32d83
#define public_6d32d9b _public_6d32d9b
#define public_6d32dab _public_6d32dab
#define public_6d32dc3 _public_6d32dc3
#define public_6d32ddd _public_6d32ddd
#define public_6d32de2 _public_6d32de2
#define public_6d32e07 _public_6d32e07
#define public_6d32e0b _public_6d32e0b
#define public_6d32e10 _public_6d32e10
#define public_6d32e23 _public_6d32e23
#define public_6d32e27 _public_6d32e27
#define public_6d32e33 _public_6d32e33
#define public_6d32e37 _public_6d32e37
#define public_6d32e4a _public_6d32e4a
#define public_6d32e56 _public_6d32e56
#define public_6d32e62 _public_6d32e62
#define public_6d32e6a _public_6d32e6a
#define public_6d32ea5 _public_6d32ea5
#define public_6d32ec1 _public_6d32ec1
#define public_6d32ed8 _public_6d32ed8
#define public_6d32f70 _public_6d32f70
#define public_6d32f74 _public_6d32f74
#define public_6d32f98 _public_6d32f98
#define public_6d32f9c _public_6d32f9c
#define public_6d32fa1 _public_6d32fa1

PROC_DECLARE(0x6d32c40, internal_6d32c40, public_6d32c40);
extern "C" NAKED register_t __cdecl internal_6d32c40()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x1C]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, ecx
        cmp dword ptr ds : [eax+0xC], ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], 0
        je public_6d32e37
        mov eax, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [eax+0xC]
        xor esi, esi
        mov si, word ptr ss : [ebp]
        cmp si, 0xFF
        ja public_6d32c99
        push esi
        lea ecx, ds:[edi+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d32cd1
        public_6d32c89 : nop
        push esi
        mov ecx, edi
        call public_6d3eb00
        test al, al
        jne public_6d32cd5
        xor eax, eax
        jmp public_6d32cda
        public_6d32c99 : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d32cb5
        push esi
        mov ecx, edi
        call public_6d3ebf0
        test al, al
        jne public_6d32cd1
        mov ebx, dword ptr ss : [esp+0x14]
        public_6d32cb5 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d32c89
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d32c89
        jmp public_6d32cd5
        public_6d32cd1 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        public_6d32cd5 : nop
        mov eax, 1
        public_6d32cda : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        je public_6d32e33
        lea eax, ss:[ebp+2]
        cmp eax, ebp
        jne public_6d32d33
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x2C]
        je public_6d32d0c
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 0x18
        ret 8
        public_6d32d0c : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d32d24
        cmp dword ptr ds : [eax+8], ebp
        jne public_6d32d24
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x18
        ret 8
        public_6d32d24 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x18
        ret 8
        public_6d32d33 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        je public_6d32d48
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x10], 1
        mov ebp, eax
        public_6d32d48 : nop
        cmp dword ptr ss : [esp+0x10], ecx
        jae public_6d32e0b
        public_6d32d52 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp dword ptr ds : [ecx+0xC], ebp
        je public_6d32e23
        mov edx, dword ptr ds : [ebx+8]
        mov bx, word ptr ss : [ebp]
        cmp bx, 0xFF
        mov esi, dword ptr ds : [edx+0xC]
        ja public_6d32dab
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d32d83
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d32d83 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d32ddd
        public_6d32d9b : nop
        push ebx
        mov ecx, esi
        call public_6d3eb00
        test al, al
        jne public_6d32ddd
        xor eax, eax
        jmp public_6d32de2
        public_6d32dab : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d32dc3
        push ebx
        mov ecx, esi
        call public_6d3ebf0
        test al, al
        jne public_6d32ddd
        public_6d32dc3 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d32d9b
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d32d9b
        public_6d32ddd : nop
        mov eax, 1
        public_6d32de2 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d32e23
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+0xC]
        add ebp, 2
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, edx
        jb public_6d32d52
        public_6d32e07 : nop
        mov dword ptr ss : [esp+0x30], ebp
        public_6d32e0b : nop
        mov eax, dword ptr ss : [esp+0x2C]
        nop 
        public_6d32e10 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d32e4a
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        call dword ptr ds : [edx+4]
        movzx eax, al
        jmp public_6d32e62
        public_6d32e23 : nop
        mov dword ptr ss : [esp+0x30], ebp
        public_6d32e27 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x18
        ret 8
        public_6d32e33 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        public_6d32e37 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        je public_6d32e10
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x18
        ret 8
        public_6d32e4a : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d32e56
        cmp dword ptr ds : [eax+8], ebp
        je public_6d32e6a
        public_6d32e56 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x18
        ret 8
        public_6d32e62 : nop
        test al, al
        jne public_6d32e56
        mov eax, dword ptr ss : [esp+0x2C]
        public_6d32e6a : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [ebx+0x10]
        jae public_6d32e27
        mov edx, ecx
        mov ecx, dword ptr ds : [eax+0xC]
        inc edx
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], edx
        je public_6d32e27
        mov edx, dword ptr ds : [ebx+8]
        mov bx, word ptr ss : [ebp]
        cmp bx, 0xFF
        mov esi, dword ptr ds : [edx+0xC]
        ja public_6d32ed8
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d32ea5
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d32ea5 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d32f9c
        public_6d32ec1 : nop
        push ebx
        mov ecx, esi
        call public_6d3eb00
        test al, al
        jne public_6d32f9c
        xor eax, eax
        jmp public_6d32fa1
        public_6d32ed8 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d32f74
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d32f74
        push ebx
        call dword ptr ds : [public_6d64ba0]
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [esi+0x30]
        add esp, 4
/*FIXUP push offset _public_6d299e0 @0x6d32f03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x24], eax
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        add esp, 0x10
        test al, al
        jne public_6d32f98
        push ebx
        call dword ptr ds : [public_6d64bac]
        add esp, 4
        cmp word ptr ss : [esp+0x18], ax
        mov dword ptr ss : [esp+0x1C], eax
        je public_6d32f70
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [esi+0x30]
/*FIXUP push offset _public_6d299e0 @0x6d32f49*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        add esp, 0x10
        test al, al
        jne public_6d32f98
        public_6d32f70 : nop
        mov ebp, dword ptr ss : [esp+0x30]
        public_6d32f74 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d32ec1
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d32ec1
        jmp public_6d32f9c
        public_6d32f98 : nop
        mov ebp, dword ptr ss : [esp+0x30]
        public_6d32f9c : nop
        mov eax, 1
        public_6d32fa1 : nop
        movzx edx, byte ptr ds : [esi+4]
        cmp edx, eax
        je public_6d32e27
        mov ebx, dword ptr ss : [esp+0x14]
        add ebp, 2
        jmp public_6d32e07
        UNREACHABLE_TRAP(0x6d32c40)
    }
}

#undef public_6d32c89
#undef public_6d32c99
#undef public_6d32cb5
#undef public_6d32cd1
#undef public_6d32cd5
#undef public_6d32cda
#undef public_6d32d0c
#undef public_6d32d24
#undef public_6d32d33
#undef public_6d32d48
#undef public_6d32d52
#undef public_6d32d83
#undef public_6d32d9b
#undef public_6d32dab
#undef public_6d32dc3
#undef public_6d32ddd
#undef public_6d32de2
#undef public_6d32e07
#undef public_6d32e0b
#undef public_6d32e10
#undef public_6d32e23
#undef public_6d32e27
#undef public_6d32e33
#undef public_6d32e37
#undef public_6d32e4a
#undef public_6d32e56
#undef public_6d32e62
#undef public_6d32e6a
#undef public_6d32ea5
#undef public_6d32ec1
#undef public_6d32ed8
#undef public_6d32f70
#undef public_6d32f74
#undef public_6d32f98
#undef public_6d32f9c
#undef public_6d32fa1
