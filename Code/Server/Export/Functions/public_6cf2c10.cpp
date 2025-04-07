#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7c10);
CLANG_FORWARD_PROC_SYMBOL(public_6cf2c10);
CLANG_FORWARD_PROC_SYMBOL(public_6cf3040);
CLANG_FORWARD_PROC_SYMBOL(public_6d08a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6091b);

#define public_6cf2c55 _public_6cf2c55
#define public_6cf2c57 _public_6cf2c57
#define public_6cf2c8b _public_6cf2c8b
#define public_6cf2c8d _public_6cf2c8d
#define public_6cf2cac _public_6cf2cac
#define public_6cf2cae _public_6cf2cae
#define public_6cf2cf6 _public_6cf2cf6
#define public_6cf2d00 _public_6cf2d00
#define public_6cf2da1 _public_6cf2da1
#define public_6cf2da3 _public_6cf2da3
#define public_6cf2dc4 _public_6cf2dc4
#define public_6cf2dc6 _public_6cf2dc6
#define public_6cf2ddd _public_6cf2ddd
#define public_6cf2fe2 _public_6cf2fe2
#define public_6cf301d _public_6cf301d
#define public_6cf3026 _public_6cf3026

PROC_DECLARE(0x6cf2c10, internal_6cf2c10, public_6cf2c10);
extern "C" NAKED register_t __cdecl internal_6cf2c10()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push 0xFFFFFFFF
/*FIXUP push public_6d6091b @0x6cf2c18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6091b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xF4
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        push edi
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], esi
        je public_6cf2c55
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_6cf2c57
        public_6cf2c55 : nop
        xor eax, eax
        public_6cf2c57 : nop
        mov ecx, eax
        call dword ptr ds : [public_6d6419c]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        cmp eax, 9
        jne public_6cf3026
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, edi
        je public_6cf2c8b
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        jne public_6cf2c8b
        mov ecx, eax
        jmp public_6cf2c8d
        public_6cf2c8b : nop
        xor ecx, ecx
        public_6cf2c8d : nop
        cmp eax, edi
        mov ebp, dword ptr ds : [ecx+0xF0]
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6cf2cac
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x803
        cmp edx, 0x803
        je public_6cf2cae
        public_6cf2cac : nop
        xor eax, eax
        public_6cf2cae : nop
        mov eax, dword ptr ds : [eax+0xEC]
        mov eax, dword ptr ds : [eax+0x64]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x38], eax
        jbe public_6cf3026
        mov al, byte ptr ss : [esp+0x23]
        mov byte ptr ss : [esp+0x24], al
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x10C], edi
        call dword ptr ds : [public_6d642ec]
        mov ebx, eax
        xor eax, eax
        cmp ebp, edi
        mov dword ptr ss : [esp+0x34], ebx
        jbe public_6cf2fe2
        jmp public_6cf2d00
        public_6cf2cf6 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        mov ebx, dword ptr ss : [esp+0x34]
        xor edi, edi
        public_6cf2d00 : nop
        cmp eax, 4
        jg public_6cf2fe2
        mov edx, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x7C]
        push ecx
        inc eax
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x84], edi
        mov dword ptr ss : [esp+0x88], edi
        mov dword ptr ss : [esp+0x8C], 0
        mov dword ptr ss : [esp+0x90], edi
        mov dword ptr ss : [esp+0x94], 0
        mov dword ptr ss : [esp+0x98], edi
        mov dword ptr ss : [esp+0x9C], edi
        mov dword ptr ss : [esp+0xA0], edi
        mov byte ptr ss : [esp+0xEC], 1
        mov byte ptr ss : [esp+0xED], 0
        call public_6cf3040
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [ebx+4]
        lea ebp, ds:[eax-0x6C]
        mov eax, ecx
        and eax, 0x3FFFFFFF
        inc ecx
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, edi
        je public_6cf2da1
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_6cf2da3
        public_6cf2da1 : nop
        xor eax, eax
        public_6cf2da3 : nop
        mov edx, dword ptr ds : [eax+0xEC]
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, edi
        je public_6cf2dc4
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_6cf2dc6
        public_6cf2dc4 : nop
        xor eax, eax
        public_6cf2dc6 : nop
        fld dword ptr ds : [eax+0xF4]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x38]
        cmp eax, ecx
        fstp dword ptr ss : [ebp+0x10]
        jbe public_6cf2ddd
        mov eax, ecx
        public_6cf2ddd : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+0x14], eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp+4], eax
        mov eax, dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [ebp+8], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x2C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        lea ebx, ss:[ebp+0x38]
        mov esi, eax
        mov ecx, 9
        mov edi, ebx
        rep movsd
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xE8]
        push edx
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [public_6d64c7c]
        lea esi, ss:[ebp+0x20]
        mov ecx, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        call edi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0xF4]
        push ecx
        fmul dword ptr ds : [public_6d656b8]
        fstp qword ptr ss : [esp+0x14]
        call dword ptr ds : [public_6d642e8]
        fld qword ptr ss : [esp+0x14]
        sub esp, 8
        fadd st(0), st
        lea ecx, ss:[esp+0x4C]
        fld st(0)
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_6ce7c10
        fld dword ptr ds : [public_6d65f98]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x70]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x50]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_6ce7c10
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x6C]
        fadd dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        call edi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        sub esp, 0xC
        lea ecx, ss:[esp+0x7C]
        fmul dword ptr ds : [public_6d656b8]
        fld dword ptr ds : [ebx]
        fld dword ptr ds : [ebx+0xC]
        fld dword ptr ds : [ebx+0x18]
        fxch st(3)
        fmul qword ptr ds : [public_6d656b0]
        fsub qword ptr ds : [public_6d656a8]
        fstp dword ptr ss : [esp+0x1C]
        fxch st(2)
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fxch 
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_6ce7c10
        call edi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        sub esp, 0xC
        lea ecx, ss:[esp+0x64]
        fmul dword ptr ds : [public_6d656b8]
        fld dword ptr ds : [ebx+8]
        fld dword ptr ds : [ebx+0x14]
        fld dword ptr ds : [ebx+0x20]
        fxch st(3)
        fmul qword ptr ds : [public_6d656b0]
        fsub qword ptr ds : [public_6d656a8]
        fstp dword ptr ss : [esp+0x1C]
        fxch st(2)
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fxch 
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_6ce7c10
        fld dword ptr ss : [esp+0x78]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x6C]
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x80]
        fadd dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x7C]
        fadd dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp]
        call public_6ce7c10
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x50]
        mov esi, dword ptr ss : [esp+0x18]
        lea edx, ss:[ebp+0x5C]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [edx+8], eax
        sub dword ptr ss : [esp+0x1C], ecx
        jne public_6cf2cf6
        xor edi, edi
        public_6cf2fe2 : nop
        mov ebx, dword ptr ss : [esp+0x28]
        cmp ebx, edi
        je public_6cf301d
        mov ecx, dword ptr ss : [esp+0x2C]
        sub ecx, ebx
        mov eax, 0x4BDA12F7
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        je public_6cf301d
        push edx
        mov edx, dword ptr ds : [esi]
        push ebx
        push 2
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+0x28]
        push eax
        call public_6d08a40
        mov ebx, dword ptr ss : [esp+0x28]
        public_6cf301d : nop
        push ebx
        call public_6d5ffb0
        add esp, 4
        public_6cf3026 : nop
        mov ecx, dword ptr ss : [esp+0x104]
        pop edi
        mov dword ptr fs : [0], ecx
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6cf2c10)
    }
}

#undef public_6cf2c55
#undef public_6cf2c57
#undef public_6cf2c8b
#undef public_6cf2c8d
#undef public_6cf2cac
#undef public_6cf2cae
#undef public_6cf2cf6
#undef public_6cf2d00
#undef public_6cf2da1
#undef public_6cf2da3
#undef public_6cf2dc4
#undef public_6cf2dc6
#undef public_6cf2ddd
#undef public_6cf2fe2
#undef public_6cf301d
#undef public_6cf3026
