#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d37201 _public_6d37201
#define public_6d37219 _public_6d37219
#define public_6d37228 _public_6d37228
#define public_6d37239 _public_6d37239
#define public_6d37243 _public_6d37243
#define public_6d3726f _public_6d3726f
#define public_6d37287 _public_6d37287
#define public_6d37297 _public_6d37297
#define public_6d372b3 _public_6d372b3
#define public_6d372cd _public_6d372cd
#define public_6d372d2 _public_6d372d2
#define public_6d372f7 _public_6d372f7
#define public_6d37302 _public_6d37302
#define public_6d37319 _public_6d37319
#define public_6d3735d _public_6d3735d
#define public_6d37373 _public_6d37373
#define public_6d37383 _public_6d37383
#define public_6d373bf _public_6d373bf
#define public_6d373d9 _public_6d373d9
#define public_6d373de _public_6d373de
#define public_6d373ee _public_6d373ee
#define public_6d373f2 _public_6d373f2
#define public_6d37402 _public_6d37402
#define public_6d3740e _public_6d3740e

PROC_DECLARE(0x6d371a0, internal_6d371a0, public_6d371a0);
extern "C" NAKED register_t __cdecl internal_6d371a0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        xor eax, eax
        mov ax, word ptr ds : [edi]
        test ax, ax
        mov ebp, ecx
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x10], 0
        je public_6d372f7
        mov ecx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [ecx+8]
        push eax
        call public_6d3e580
        test al, al
        je public_6d372f7
        lea eax, ds:[edi+2]
        cmp eax, edi
        jne public_6d37228
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x1C]
        je public_6d37201
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 8
        ret 8
        public_6d37201 : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d37219
        cmp dword ptr ds : [eax+8], edi
        jne public_6d37219
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_6d37219 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d37228 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        je public_6d37239
        mov edi, eax
        mov dword ptr ss : [esp+0x10], 1
        public_6d37239 : nop
        cmp dword ptr ss : [esp+0x10], ecx
        jae public_6d37302
        public_6d37243 : nop
        mov bx, word ptr ds : [edi]
        test bx, bx
        je public_6d3740e
        cmp bx, 0xFF
        mov ecx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [ecx+8]
        ja public_6d37297
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d3726f
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d3726f : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d372cd
        public_6d37287 : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d372cd
        xor eax, eax
        jmp public_6d372d2
        public_6d37297 : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d372b3
        push ebx
        mov ecx, esi
        call public_6d3eb90
        test al, al
        mov ebp, dword ptr ss : [esp+0x14]
        jne public_6d372cd
        public_6d372b3 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d37287
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d37287
        public_6d372cd : nop
        mov eax, 1
        public_6d372d2 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d3740e
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+0xC]
        add edi, 2
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jb public_6d37243
        jmp public_6d37302
        public_6d372f7 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        jne public_6d3740e
        public_6d37302 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x1C]
        je public_6d37373
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d37319 : nop
        jne public_6d37402
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ss : [ebp+0x10]
        jae public_6d3740e
        mov bx, word ptr ds : [edi]
        inc ecx
        test bx, bx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d3740e
        cmp bx, 0xFF
        mov edx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [edx+8]
        ja public_6d37383
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d3735d
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d3735d : nop
        mov edx, 1
        shr eax, 5
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        jmp public_6d373ee
        public_6d37373 : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d37402
        cmp dword ptr ds : [eax+8], edi
        jmp public_6d37319
        public_6d37383 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d373bf
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d373bf
        mov eax, dword ptr ds : [esi+0x34]
/*FIXUP push offset _public_6d299e0 @0x6d37399*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        push ecx
        mov word ptr ss : [esp+0x30], bx
        mov word ptr ss : [esp+0x32], bx
        call public_6d40890
        mov ebp, dword ptr ss : [esp+0x24]
        add esp, 0x10
        test al, al
        jne public_6d373d9
        public_6d373bf : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d373f2
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d373f2
        public_6d373d9 : nop
        mov eax, 1
        public_6d373de : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d3740e
        add edi, 2
        jmp public_6d37302
        public_6d373ee : nop
        test eax, eax
        jne public_6d373d9
        public_6d373f2 : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d373d9
        xor eax, eax
        jmp public_6d373de
        public_6d37402 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d3740e : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d371a0)
    }
}

#undef public_6d37201
#undef public_6d37219
#undef public_6d37228
#undef public_6d37239
#undef public_6d37243
#undef public_6d3726f
#undef public_6d37287
#undef public_6d37297
#undef public_6d372b3
#undef public_6d372cd
#undef public_6d372d2
#undef public_6d372f7
#undef public_6d37302
#undef public_6d37319
#undef public_6d3735d
#undef public_6d37373
#undef public_6d37383
#undef public_6d373bf
#undef public_6d373d9
#undef public_6d373de
#undef public_6d373ee
#undef public_6d373f2
#undef public_6d37402
#undef public_6d3740e
