#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_437f70);
CLANG_FORWARD_PROC_SYMBOL(public_4486d0);
CLANG_FORWARD_PROC_SYMBOL(public_448700);
CLANG_FORWARD_PROC_SYMBOL(public_4487f0);
CLANG_FORWARD_PROC_SYMBOL(public_448a60);
CLANG_FORWARD_PROC_SYMBOL(public_448ef0);
CLANG_FORWARD_PROC_SYMBOL(public_4c3e10);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9ab0);

#define public_448ad4 _public_448ad4
#define public_448aef _public_448aef
#define public_448b00 _public_448b00
#define public_448b1a _public_448b1a
#define public_448b24 _public_448b24
#define public_448b26 _public_448b26
#define public_448b59 _public_448b59
#define public_448ba0 _public_448ba0
#define public_448bb0 _public_448bb0
#define public_448bca _public_448bca
#define public_448bd4 _public_448bd4
#define public_448be9 _public_448be9
#define public_448bf3 _public_448bf3
#define public_448c03 _public_448c03
#define public_448c1a _public_448c1a

PROC_DECLARE(0x448a60, internal_448a60, public_448a60);
extern "C" NAKED register_t __cdecl internal_448a60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9ab0 @0x448a62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9ab0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        mov ebx, dword ptr ss : [ebp+0x40]
        push esi
        mov esi, ecx
        add ebx, 0x184
        push edi
        mov ecx, ebx
        call public_5ad970
        xor edi, edi
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], edi
        lea ecx, ss:[esp+0x1C]
        push ecx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], edi
        call public_448ef0
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call public_4486d0
        mov ecx, dword ptr ds : [esi+0x10]
        xor eax, eax
        cmp ecx, edi
        jle public_448aef
        xor ecx, ecx
        public_448ad4 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [edx+eax*4]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+edx], ebp
        mov dword ptr ds : [ecx+edx+4], edi
        mov edx, dword ptr ds : [esi+0x10]
        inc eax
        add ecx, 0x10
        cmp eax, edx
        jl public_448ad4
        public_448aef : nop
        mov ebp, dword ptr ds : [esi+0x10]
        or edi, 0xFFFFFFFF
        xor edx, edx
        test ebp, ebp
        jle public_448b26
        mov ecx, dword ptr ds : [esi+4]
        xor eax, eax
        public_448b00 : nop
        mov ebx, dword ptr ds : [eax+ecx+8]
        test ebx, ebx
        jne public_448b1a
        mov ebx, dword ptr ds : [eax+ecx+0xC]
        test ebx, ebx
        jne public_448b1a
        mov ebx, dword ptr ds : [eax+ecx+4]
        cmp byte ptr ds : [ebx+0x34], 1
        je public_448b24
        public_448b1a : nop
        inc edx
        add eax, 0x10
        cmp edx, ebp
        jl public_448b00
        jmp public_448b26
        public_448b24 : nop
        mov edi, edx
        public_448b26 : nop
        cmp edi, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x14], edi
        je public_448b59
        call public_4c3e10
        test eax, eax
        je public_448b59
/*FIXUP push offset public_5cbe7c @0x448b37*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbe7c
        call dword ptr ds : [public_5c61a8]
        add esp, 4
        test al, al
        je public_448b59
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+4]
        shl ecx, 4
        add ecx, eax
        call public_4487f0
        public_448b59 : nop
        mov dl, byte ptr ss : [esp+0x3C]
        push 0
        push 0
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x18], dl
        call public_42a7e0
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ss : [esp+0x40]
        push 3
        lea eax, ss:[esp+0x14]
        push eax
        mov dword ptr ss : [esp+0x3C], 1
        call public_437f70
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_448bf3
        lea esp, ss:[esp]
        public_448ba0 : nop
        mov ebp, dword ptr ds : [esi+0x10]
        xor ecx, ecx
        test ebp, ebp
        jle public_448be9
        mov edx, dword ptr ds : [esi+4]
        xor eax, eax
        mov edi, edi
        public_448bb0 : nop
        mov ebx, dword ptr ds : [eax+edx+8]
        test ebx, ebx
        jne public_448bca
        mov ebx, dword ptr ds : [eax+edx+0xC]
        test ebx, ebx
        jne public_448bca
        mov ebx, dword ptr ds : [eax+edx+4]
        cmp byte ptr ds : [ebx+0x35], 1
        je public_448bd4
        public_448bca : nop
        inc ecx
        add eax, 0x10
        cmp ecx, ebp
        jl public_448bb0
        jmp public_448be9
        public_448bd4 : nop
        cmp ecx, 0xFFFFFFFF
        je public_448be9
        mov eax, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax]
        shl ecx, 4
        push eax
        add ecx, edx
        call public_448700
        public_448be9 : nop
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x14]
        cmp edi, eax
        jne public_448ba0
        public_448bf3 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov edi, eax
        je public_448c1a
        public_448c03 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_516f70
        cmp esi, edi
        jne public_448c03
        public_448c1a : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x448a60)
    }
}

#undef public_448ad4
#undef public_448aef
#undef public_448b00
#undef public_448b1a
#undef public_448b24
#undef public_448b26
#undef public_448b59
#undef public_448ba0
#undef public_448bb0
#undef public_448bca
#undef public_448bd4
#undef public_448be9
#undef public_448bf3
#undef public_448c03
#undef public_448c1a
