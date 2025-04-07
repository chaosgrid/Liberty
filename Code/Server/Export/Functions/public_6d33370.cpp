#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);

#define public_6d333ea _public_6d333ea
#define public_6d33402 _public_6d33402
#define public_6d33411 _public_6d33411
#define public_6d33454 _public_6d33454
#define public_6d33464 _public_6d33464
#define public_6d33480 _public_6d33480
#define public_6d3349c _public_6d3349c
#define public_6d334a0 _public_6d334a0
#define public_6d334a5 _public_6d334a5
#define public_6d334b5 _public_6d334b5
#define public_6d334c2 _public_6d334c2
#define public_6d334d5 _public_6d334d5
#define public_6d334f2 _public_6d334f2
#define public_6d334fe _public_6d334fe
#define public_6d3350a _public_6d3350a

PROC_DECLARE(0x6d33370, internal_6d33370, public_6d33370);
extern "C" NAKED register_t __cdecl internal_6d33370()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x10]
        xor ecx, ecx
        cmp eax, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov esi, ebx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x20], ecx
        je public_6d334b5
        xor eax, eax
        mov ax, word ptr ds : [ebx]
        cmp ax, cx
        je public_6d334b5
        mov ecx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        push eax
        call public_6d3e580
        test al, al
        je public_6d334b5
        add ebx, 2
        mov eax, ebx
        sub eax, esi
        sar eax, 1
        neg eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_6d33411
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x1C]
        je public_6d333ea
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 8
        ret 8
        public_6d333ea : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d33402
        cmp dword ptr ds : [eax+8], ebx
        jne public_6d33402
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_6d33402 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d33411 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [ebp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jae public_6d334b5
        xor esi, esi
        mov si, word ptr ds : [ebx]
        test si, si
        je public_6d334b5
        cmp si, 0xFF
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx+0xC]
        ja public_6d33464
        push esi
        lea ecx, ds:[edi+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d3349c
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d33454 : nop
        push esi
        mov ecx, edi
        call public_6d3ea70
        test al, al
        jne public_6d334a0
        xor eax, eax
        jmp public_6d334a5
        public_6d33464 : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d33480
        push esi
        mov ecx, edi
        call public_6d3eb90
        test al, al
        jne public_6d3349c
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d33480 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d33454
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d33454
        jmp public_6d334a0
        public_6d3349c : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d334a0 : nop
        mov eax, 1
        public_6d334a5 : nop
        movzx edx, byte ptr ds : [edi+4]
        cmp edx, eax
        je public_6d334b5
        add ebx, 2
        jmp public_6d33411
        public_6d334b5 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp dword ptr ss : [ebp+0xC], eax
        ja public_6d3350a
        mov esi, dword ptr ss : [esp+0x1C]
        public_6d334c2 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d334f2
        mov edx, dword ptr ds : [ecx]
        push ebx
        push esi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d334d5 : nop
        jne public_6d334fe
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [esp+0x20]
        cmp eax, ecx
        je public_6d3350a
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        lea ebx, ds:[ebx+ecx*2]
        jmp public_6d334c2
        public_6d334f2 : nop
        mov al, byte ptr ds : [esi+0x1C]
        test al, al
        je public_6d334fe
        cmp dword ptr ds : [esi+8], ebx
        jmp public_6d334d5
        public_6d334fe : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d3350a : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d33370)
    }
}

#undef public_6d333ea
#undef public_6d33402
#undef public_6d33411
#undef public_6d33454
#undef public_6d33464
#undef public_6d33480
#undef public_6d3349c
#undef public_6d334a0
#undef public_6d334a5
#undef public_6d334b5
#undef public_6d334c2
#undef public_6d334d5
#undef public_6d334f2
#undef public_6d334fe
#undef public_6d3350a
