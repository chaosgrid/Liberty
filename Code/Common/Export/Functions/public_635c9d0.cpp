#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_63523d0);
CLANG_FORWARD_PROC_SYMBOL(public_635c2c0);
CLANG_FORWARD_PROC_SYMBOL(public_635c9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6369200);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639829b);

#define public_635ca05 _public_635ca05
#define public_635ca26 _public_635ca26
#define public_635ca4f _public_635ca4f
#define public_635ca69 _public_635ca69
#define public_635ca6b _public_635ca6b
#define public_635ca92 _public_635ca92
#define public_635caad _public_635caad
#define public_635cab0 _public_635cab0
#define public_635cad7 _public_635cad7
#define public_635caec _public_635caec
#define public_635caef _public_635caef
#define public_635cb13 _public_635cb13
#define public_635cb5d _public_635cb5d
#define public_635cb73 _public_635cb73
#define public_635cb89 _public_635cb89
#define public_635cbb8 _public_635cbb8

PROC_DECLARE(0x635c9d0, internal_635c9d0, public_635c9d0);
extern "C" NAKED register_t __cdecl internal_635c9d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639829b @0x635c9d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639829b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        push esi
        mov esi, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [esp+0xC], ecx
        sub esi, dword ptr ss : [ebp+0x10]
        cmp esi, 1
        je public_635cb73
        push edi
        public_635ca05 : nop
        push 0x28
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_635ca26
        mov ecx, eax
        call public_635c2c0
        mov edi, eax
        public_635ca26 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [ebp]
        lea ecx, ds:[eax+1]
        mov ebp, ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, esi
        shl ebp, cl
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        cmp edx, ebp
        jl public_635ca4f
        mov eax, dword ptr ss : [esp+0x24]
        lea ecx, ds:[eax+eax]
        mov dword ptr ds : [edi], ecx
        jmp public_635ca6b
        public_635ca4f : nop
        add eax, eax
        lea ebp, ds:[eax+1]
        lea ecx, ds:[esi-1]
        mov dword ptr ss : [esp+0x24], ebp
        shl ebp, cl
        cmp edx, ebp
        jl public_635ca69
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi], edx
        jmp public_635ca6b
        public_635ca69 : nop
        mov dword ptr ds : [edi], eax
        public_635ca6b : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [edx+4]
        lea ecx, ds:[eax+1]
        mov ebp, ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, esi
        shl ebp, cl
        cmp edx, ebp
        jl public_635ca92
        mov eax, dword ptr ss : [esp+0x24]
        lea ecx, ds:[eax+eax]
        mov dword ptr ds : [edi+4], ecx
        jmp public_635cab0
        public_635ca92 : nop
        add eax, eax
        lea ebp, ds:[eax+1]
        lea ecx, ds:[esi-1]
        mov dword ptr ss : [esp+0x24], ebp
        shl ebp, cl
        cmp edx, ebp
        jl public_635caad
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi+4], edx
        jmp public_635cab0
        public_635caad : nop
        mov dword ptr ds : [edi+4], eax
        public_635cab0 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov edx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [edx+8]
        lea ecx, ds:[eax+1]
        mov ebp, ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, esi
        shl ebp, cl
        cmp edx, ebp
        jl public_635cad7
        mov eax, dword ptr ss : [esp+0x24]
        lea ecx, ds:[eax+eax]
        mov dword ptr ds : [edi+8], ecx
        jmp public_635caef
        public_635cad7 : nop
        add eax, eax
        lea ebp, ds:[eax+1]
        lea ecx, ds:[esi-1]
        mov esi, ebp
        shl esi, cl
        cmp edx, esi
        jl public_635caec
        mov dword ptr ds : [edi+8], ebp
        jmp public_635caef
        public_635caec : nop
        mov dword ptr ds : [edi+8], eax
        public_635caef : nop
        mov edx, dword ptr ds : [ebx+0xC]
        dec edx
        mov dword ptr ds : [edi+0xC], edx
        mov eax, dword ptr ds : [ebx+0x10]
        dec eax
        lea esi, ds:[ebx+0x18]
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ds : [edi+0x14], ebx
        mov cx, word ptr ds : [esi+2]
        cmp cx, word ptr ds : [esi]
        jb public_635cb13
        mov ecx, esi
        call public_63441a0
        public_635cb13 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x10]
        xor edx, edx
        mov dx, word ptr ds : [esi+2]
        push edi
        mov dword ptr ds : [eax+edx*4], edi
        inc word ptr ds : [esi+2]
        mov esi, dword ptr ds : [ecx+0x170]
        mov ecx, esi
        call public_6369200
        push eax
        push edi
        mov ecx, esi
        call public_63523d0
        mov bx, word ptr ds : [ebx+0x1A]
        cmp bx, 0x1B
        jbe public_635cb5d
        and ebx, 0xFFFF
        push ebx
/*FIXUP push offset public_63ee508 @0x635cb4f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee508
        call dword ptr ds : [public_6399284]
        add esp, 8
        public_635cb5d : nop
        mov ebp, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [edi+0x10]
        sub esi, dword ptr ss : [ebp+0x10]
        cmp esi, 1
        mov ebx, edi
        jne public_635ca05
        pop edi
        public_635cb73 : nop
        lea esi, ds:[ebx+0x18]
        mov dword ptr ss : [ebp+0x14], ebx
        mov dx, word ptr ds : [esi+2]
        cmp dx, word ptr ds : [esi]
        jb public_635cb89
        mov ecx, esi
        call public_63441a0
        public_635cb89 : nop
        mov ecx, dword ptr ds : [esi+4]
        xor eax, eax
        mov ax, word ptr ds : [esi+2]
        mov dword ptr ds : [ecx+eax*4], ebp
        inc word ptr ds : [esi+2]
        mov bx, word ptr ds : [ebx+0x1A]
        cmp bx, 0x1B
        jbe public_635cbb8
        and ebx, 0xFFFF
        push ebx
/*FIXUP push offset public_63ee508 @0x635cbaa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee508
        call dword ptr ds : [public_6399284]
        add esp, 8
        public_635cbb8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x635c9d0)
    }
}

#undef public_635ca05
#undef public_635ca26
#undef public_635ca4f
#undef public_635ca69
#undef public_635ca6b
#undef public_635ca92
#undef public_635caad
#undef public_635cab0
#undef public_635cad7
#undef public_635caec
#undef public_635caef
#undef public_635cb13
#undef public_635cb5d
#undef public_635cb73
#undef public_635cb89
#undef public_635cbb8
