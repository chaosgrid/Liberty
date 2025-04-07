#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d2d339 _public_6d2d339
#define public_6d2d349 _public_6d2d349
#define public_6d2d361 _public_6d2d361
#define public_6d2d37b _public_6d2d37b
#define public_6d2d380 _public_6d2d380
#define public_6d2d38d _public_6d2d38d
#define public_6d2d392 _public_6d2d392
#define public_6d2d3c5 _public_6d2d3c5
#define public_6d2d3dd _public_6d2d3dd
#define public_6d2d3ed _public_6d2d3ed
#define public_6d2d434 _public_6d2d434
#define public_6d2d44e _public_6d2d44e
#define public_6d2d453 _public_6d2d453
#define public_6d2d47f _public_6d2d47f
#define public_6d2d481 _public_6d2d481
#define public_6d2d48f _public_6d2d48f
#define public_6d2d49f _public_6d2d49f

PROC_DECLARE(0x6d2d300, internal_6d2d300, public_6d2d300);
extern "C" NAKED register_t __cdecl internal_6d2d300()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        cmp edx, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        je public_6d2d38d
        mov edi, dword ptr ds : [ecx+0xC]
        xor esi, esi
        mov si, word ptr ss : [ebp]
        cmp si, 0xFF
        ja public_6d2d349
        push esi
        lea ecx, ds:[edi+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d2d37b
        public_6d2d339 : nop
        push esi
        mov ecx, edi
        call public_6d3ea70
        test al, al
        jne public_6d2d37b
        xor eax, eax
        jmp public_6d2d380
        public_6d2d349 : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d2d361
        push esi
        mov ecx, edi
        call public_6d3eb90
        test al, al
        jne public_6d2d37b
        public_6d2d361 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d2d339
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2d339
        public_6d2d37b : nop
        mov eax, 1
        public_6d2d380 : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        mov byte ptr ss : [esp+0xF], 1
        jne public_6d2d392
        public_6d2d38d : nop
        mov byte ptr ss : [esp+0xF], 0
        public_6d2d392 : nop
        mov edx, dword ptr ss : [esp+0x20]
        cmp dword ptr ds : [edx+4], ebp
        je public_6d2d49f
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax+0xC]
        push ebx
        mov bx, word ptr ss : [ebp-2]
        cmp bx, 0xFF
        ja public_6d2d3ed
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2d3c5
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2d3c5 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2d44e
        public_6d2d3dd : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2d44e
        xor eax, eax
        jmp public_6d2d453
        public_6d2d3ed : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2d434
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2d434
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2d405*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x20], ebx
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        mov ebp, dword ptr ss : [esp+0x38]
        add esp, 0x10
        test al, al
        jne public_6d2d44e
        public_6d2d434 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2d3dd
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2d3dd
        public_6d2d44e : nop
        mov eax, 1
        public_6d2d453 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        pop ebx
        je public_6d2d49f
        mov al, byte ptr ss : [esp+0xF]
        test al, al
        jne public_6d2d49f
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d2d48f
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push edx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d2d47f : nop
        je public_6d2d49f
        public_6d2d481 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0x10
        ret 8
        public_6d2d48f : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d2d481
        cmp dword ptr ds : [eax+8], ebp
        jmp public_6d2d47f
        public_6d2d49f : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d2d300)
    }
}

#undef public_6d2d339
#undef public_6d2d349
#undef public_6d2d361
#undef public_6d2d37b
#undef public_6d2d380
#undef public_6d2d38d
#undef public_6d2d392
#undef public_6d2d3c5
#undef public_6d2d3dd
#undef public_6d2d3ed
#undef public_6d2d434
#undef public_6d2d44e
#undef public_6d2d453
#undef public_6d2d47f
#undef public_6d2d481
#undef public_6d2d48f
#undef public_6d2d49f
