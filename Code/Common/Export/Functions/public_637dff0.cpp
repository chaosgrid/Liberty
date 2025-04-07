#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_637dff0);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);

#define public_637e0b2 _public_637e0b2
#define public_637e0d8 _public_637e0d8
#define public_637e179 _public_637e179
#define public_637e17c _public_637e17c
#define public_637e1d9 _public_637e1d9
#define public_637e21a _public_637e21a
#define public_637e21d _public_637e21d
#define public_637e260 _public_637e260
#define public_637e27d _public_637e27d
#define public_637e292 _public_637e292
#define public_637e2a9 _public_637e2a9
#define public_637e2bc _public_637e2bc

PROC_DECLARE(0x637dff0, internal_637dff0, public_637dff0);
extern "C" NAKED register_t __cdecl internal_637dff0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x1C
        mov eax, dword ptr ds : [public_658b1a8]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ds : [public_658b948], eax
        mov dword ptr ds : [public_658b1a8], ebx
        jne public_637e0b2
        lea ecx, ss:[esp+0xC]
        push ecx
        call dword ptr ds : [public_639928c]
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [public_63992b4]
        mov ecx, dword ptr ds : [public_658b870]
        mov edx, dword ptr ds : [public_658b848]
        mov edi, dword ptr ds : [public_658bf58]
        add esp, 8
        push ecx
        mov ecx, dword ptr ds : [public_658b844]
        push edx
        mov edx, dword ptr ds : [public_658baf8]
        push ecx
        sub edx, dword ptr ds : [public_658bb00]
        mov ecx, dword ptr ds : [public_658b854]
        add edx, edi
        push edx
        dec ecx
        push ecx
        mov ecx, dword ptr ds : [public_658b860]
        mov edx, 1
        sub edx, ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], ebx
        fild qword ptr ss : [esp+0x2C]
        sub esp, 8
        fstp qword ptr ss : [esp]
        push ecx
        push edx
        push eax
/*FIXUP push offset public_63f57b4 @0x637e09e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f57b4
        call public_6356960
        add esp, 0x2C
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_637e0b2 : nop
        push edi
        call public_6370570
        mov ecx, dword ptr ds : [public_658b208]
        add esp, 4
        cmp ecx, eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_637e0d8
        mov eax, dword ptr ds : [public_658b200]
        mov dword ptr ds : [public_658b078], eax
        mov dword ptr ds : [public_658b998], eax
        public_637e0d8 : nop
        mov ecx, dword ptr ds : [public_658b1cc]
        cmp ecx, ebx
        je public_637e1d9
        mov edx, dword ptr ds : [public_658b854]
        lea eax, ds:[edx-1]
        mov edx, dword ptr ds : [public_658b940]
        add edx, ecx
        cmp eax, edx
        jbe public_637e1d9
        mov dword ptr ds : [public_658b940], eax
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [public_639928c]
        lea ecx, ss:[esp+0x10]
        push ecx
        call dword ptr ds : [public_63992b4]
        mov ecx, dword ptr ds : [public_658b860]
        mov esi, dword ptr ds : [public_658baf8]
        mov edi, eax
        mov eax, dword ptr ds : [public_658bb00]
        mov dword ptr ss : [esp+0x1C], ebx
        mov ebx, dword ptr ds : [public_658bf58]
        sub esi, eax
        mov edx, 1
        sub edx, ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [public_658bb70]
        fild qword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x28]
        add esi, ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        fstp dword ptr ss : [esp+0x18]
        push eax
        inc edx
        push ebx
        push ecx
        mov dword ptr ds : [public_658bb70], edx
        call public_637fd60
        add esp, 0x14
        test ebx, ebx
        je public_637e179
        mov ebx, dword ptr ds : [ebx+0x4C]
        jmp public_637e17c
        public_637e179 : nop
        or ebx, 0xFFFFFFFF
        public_637e17c : nop
        mov edx, dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [public_658b85c]
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push eax
        mov eax, dword ptr ds : [public_658b84c]
        push ecx
        mov ecx, dword ptr ds : [public_658b848]
        push edx
        mov edx, dword ptr ds : [public_658b844]
        inc eax
        push eax
        mov eax, dword ptr ds : [public_658b854]
        push ecx
        mov ecx, dword ptr ds : [edi]
        push edx
        mov edx, dword ptr ds : [edi+4]
        push esi
        dec eax
        push eax
        mov eax, dword ptr ds : [edi+8]
        sub esp, 8
        fstp qword ptr ss : [esp]
        push ecx
        push edx
        push eax
/*FIXUP push offset public_63f56e0 @0x637e1c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f56e0
        call public_6356960
        add esp, 0x40
        xor ebx, ebx
        jmp public_637e260
        public_637e1d9 : nop
        cmp dword ptr ds : [public_658b078], 1
        jl public_637e260
        mov edx, dword ptr ds : [public_658b860]
        mov esi, dword ptr ss : [ebp+0xC]
        mov ecx, 1
        sub ecx, edx
        mov dword ptr ss : [esp+0x10], ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov dword ptr ss : [esp+0x18], ebx
        fild qword ptr ss : [esp+0x14]
        push esi
        push edi
        fstp dword ptr ss : [esp+0x1C]
        call public_637fd60
        add esp, 0xC
        cmp esi, ebx
        je public_637e21a
        mov esi, dword ptr ds : [esi+0x4C]
        jmp public_637e21d
        public_637e21a : nop
        or esi, 0xFFFFFFFF
        public_637e21d : nop
        mov eax, dword ptr ds : [public_658b870]
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_658b84c]
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        sub esp, 8
        fstp qword ptr ss : [esp]
        inc ecx
        push ecx
        mov ecx, dword ptr ds : [public_658b844]
        push esi
        push edx
        mov edx, dword ptr ds : [public_658b85c]
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        push ecx
        push edx
        push eax
/*FIXUP push offset public_63f5668 @0x637e253*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5668
        call public_6356960
        add esp, 0x2C
        public_637e260 : nop
        mov eax, dword ptr ds : [public_658b8e0]
        mov ecx, 0x7FFFFFFF
        cmp eax, ecx
        jbe public_637e292
        mov eax, dword ptr ds : [public_658b810]
        cmp eax, ebx
        mov dword ptr ds : [public_658b8e0], ebx
        je public_637e292
        public_637e27d : nop
        cmp dword ptr ds : [eax+0x30], ebx
        je public_637e292
        mov edx, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [eax+0x48], edx
        mov eax, dword ptr ds : [eax+0x30]
        cmp eax, ebx
        jne public_637e27d
        public_637e292 : nop
        cmp dword ptr ds : [public_658b8e4], ecx
        jbe public_637e2bc
        mov eax, dword ptr ds : [public_658b838]
        cmp eax, ebx
        mov dword ptr ds : [public_658b8e4], ebx
        je public_637e2bc
        public_637e2a9 : nop
        cmp dword ptr ds : [eax], ebx
        je public_637e2bc
        mov ecx, dword ptr ds : [public_658b8e4]
        mov dword ptr ds : [eax+0x10], ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        jne public_637e2a9
        public_637e2bc : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [public_658b948]
        pop edi
        pop esi
        mov dword ptr ds : [public_658b870], edx
        mov dword ptr ds : [public_658b1a8], eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x637dff0)
    }
}

#undef public_637e0b2
#undef public_637e0d8
#undef public_637e179
#undef public_637e17c
#undef public_637e1d9
#undef public_637e21a
#undef public_637e21d
#undef public_637e260
#undef public_637e27d
#undef public_637e292
#undef public_637e2a9
#undef public_637e2bc
