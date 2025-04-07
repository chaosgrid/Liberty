#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f82920);

#define public_6f81b10 _public_6f81b10
#define public_6f81b20 _public_6f81b20
#define public_6f81b8d _public_6f81b8d
#define public_6f81bf4 _public_6f81bf4
#define public_6f81c09 _public_6f81c09
#define public_6f81c30 _public_6f81c30
#define public_6f81ca6 _public_6f81ca6
#define public_6f81cd8 _public_6f81cd8
#define public_6f81ce7 _public_6f81ce7
#define public_6f81d18 _public_6f81d18
#define public_6f81d8f _public_6f81d8f
#define public_6f81db7 _public_6f81db7
#define public_6f81dc3 _public_6f81dc3

PROC_DECLARE(0x6f81a80, internal_6f81a80, public_6f81a80);
extern "C" NAKED register_t __cdecl internal_6f81a80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ds : [esi+0x20]
        push edi
        jne public_6f81dc3
        mov edi, dword ptr ss : [esp+0x38]
        cmp edi, dword ptr ds : [esi+0x24]
        jne public_6f81dc3
        mov ecx, dword ptr ss : [esp+0x2C]
        xor ebp, ebp
        cmp ecx, ebp
        je public_6f81dc3
        mov ecx, dword ptr ss : [esp+0x30]
        cmp ecx, ebp
        je public_6f81dc3
        xor edx, edx
        div dword ptr ds : [esi+0x3C]
        xor edx, edx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, edi
        div dword ptr ds : [esi+0x40]
        mov edi, eax
        mov eax, dword ptr ds : [ecx]
        push eax
        mov dword ptr ss : [esp+0x24], edi
        call public_6f82920
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+0x14]
        add ebx, 7
        shr ebx, 3
        add esp, 4
        cmp eax, ebp
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6f81db7
        cmp edi, ebp
        mov edi, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x10], ebp
        jle public_6f81c09
        lea esp, ss:[esp]
        public_6f81b10 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        mov dword ptr ss : [esp+0x28], 0
        jle public_6f81b8d
        public_6f81b20 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [esi+0x40]
        mov ebp, dword ptr ss : [esp+0x2C]
        mov eax, ecx
        imul eax, ebx
        imul eax, dword ptr ss : [esp+0x28]
        mov ebx, edx
        imul ebx, dword ptr ss : [esp+0x10]
        imul ebx, edi
        push 0
        push 0
        add eax, ebx
        mov ebx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [ebx]
        add eax, ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push eax
        mov eax, dword ptr ds : [esi+4]
        push edi
        push edx
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx+ebp*4]
        push 0
        push edx
        push eax
        call dword ptr ds : [ebx+0xD4]
        test eax, eax
        jne public_6f81ca6
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        inc ebp
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x28], eax
        jl public_6f81b20
        public_6f81b8d : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ss : [esp+0x34]
        xor edx, edx
        div ecx
        test edx, edx
        mov dword ptr ss : [esp+0x3C], edx
        je public_6f81bf4
        mov eax, dword ptr ds : [esi+0x40]
        imul ecx, ebx
        imul eax, dword ptr ss : [esp+0x10]
        imul ecx, dword ptr ss : [esp+0x28]
        imul eax, edi
        add ecx, eax
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x2C]
        push 0
        push 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x40]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        push edi
        push eax
        mov eax, dword ptr ss : [esp+0x54]
        push eax
        mov eax, dword ptr ds : [ecx+ebp*4]
        push 0
        push eax
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [edx+0xD4]
        test eax, eax
        jne public_6f81cd8
        inc ebp
        mov dword ptr ss : [esp+0x14], ebp
        public_6f81bf4 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jl public_6f81b10
        public_6f81c09 : nop
        mov eax, dword ptr ss : [esp+0x38]
        xor edx, edx
        div dword ptr ds : [esi+0x40]
        test edx, edx
        je public_6f81db7
        mov eax, dword ptr ss : [esp+0x18]
        xor edx, edx
        test eax, eax
        mov dword ptr ss : [esp+0x28], edx
        jle public_6f81d18
        lea esp, ss:[esp]
        public_6f81c30 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [esi+0x40]
        imul eax, ebx
        imul eax, edx
        mov ebp, dword ptr ss : [esp+0x2C]
        mov edx, ecx
        imul edx, dword ptr ss : [esp+0x10]
        imul edx, edi
        add eax, edx
        mov edx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edx]
        push 0
        push 0
        add eax, ebp
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push eax
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x4C], edx
        xor edx, edx
        div ecx
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [esi+0xC]
        mov ebp, dword ptr ss : [esp+0x24]
        push edi
        push edx
        mov edx, dword ptr ds : [ecx+ebp*4]
        push eax
        mov eax, dword ptr ds : [esi+4]
        push 0
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x64]
        call dword ptr ds : [eax+0xD4]
        test eax, eax
        jne public_6f81ce7
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x18]
        inc ebp
        inc edx
        cmp edx, eax
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x28], edx
        jl public_6f81c30
        jmp public_6f81d18
        public_6f81ca6 : nop
        mov ecx, dword ptr ds : [public_6f83004]
/*FIXUP push offset public_6f8401c @0x6f81cac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f8401c
        push 0x21E
/*FIXUP push offset public_6f84060 @0x6f81cb6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84060
        mov eax, 0x100003
/*FIXUP push offset public_6f840d4 @0x6f81cc0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f840d4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x14
        ret 0x18
/*FIXUP public_6f81cd8 : nop
        push offset public_6f8401c @0x6f81cd8*/
  FIXUP public_6f81cd8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f8401c
        push 0x22B
        jmp public_6f81d8f
/*FIXUP public_6f81ce7 : nop
        push offset public_6f8401c @0x6f81ce7*/
  FIXUP public_6f81ce7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f8401c
        push 0x23E
/*FIXUP push offset public_6f84060 @0x6f81cf1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84060
        mov eax, 0x100003
/*FIXUP push offset public_6f840d4 @0x6f81cfb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f840d4
        push eax
        mov eax, dword ptr ds : [public_6f83004]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x14
        ret 0x18
        public_6f81d18 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ss : [esp+0x34]
        xor edx, edx
        div ecx
        test edx, edx
        mov dword ptr ss : [esp+0x3C], edx
        je public_6f81db7
        mov eax, dword ptr ds : [esi+0x40]
        imul ecx, ebx
        imul eax, dword ptr ss : [esp+0x10]
        imul ecx, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ds : [esi+4]
        imul eax, edi
        mov edx, dword ptr ss : [esp+0x2C]
        add ecx, eax
        mov eax, dword ptr ds : [ebx]
        add ecx, edx
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [esp+0x38]
        xor edx, edx
        div dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [esi+0xC]
        push 0
        push 0
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push ecx
        mov ecx, dword ptr ds : [eax+ebp*4]
        mov eax, dword ptr ss : [esp+0x3C]
        push edi
        push edx
        mov edx, dword ptr ss : [esp+0x54]
        push edx
        push 0
        push ecx
        push ebx
        call dword ptr ds : [eax+0xD4]
        test eax, eax
        je public_6f81db7
/*FIXUP push offset public_6f8401c @0x6f81d85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f8401c
        push 0x24C
        public_6f81d8f : nop
        mov edx, dword ptr ds : [public_6f83004]
/*FIXUP push offset public_6f84060 @0x6f81d95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84060
        mov eax, 0x100003
/*FIXUP push offset public_6f840d4 @0x6f81d9f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f840d4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x14
        ret 0x18
        public_6f81db7 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x14
        ret 0x18
        public_6f81dc3 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        add esp, 0x14
        ret 0x18
        UNREACHABLE_TRAP(0x6f81a80)
    }
}

#undef public_6f81b10
#undef public_6f81b20
#undef public_6f81b8d
#undef public_6f81bf4
#undef public_6f81c09
#undef public_6f81c30
#undef public_6f81ca6
#undef public_6f81cd8
#undef public_6f81ce7
#undef public_6f81d18
#undef public_6f81d8f
#undef public_6f81db7
#undef public_6f81dc3
