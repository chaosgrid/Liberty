#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6380d90);
CLANG_FORWARD_PROC_SYMBOL(public_6380f60);
CLANG_FORWARD_PROC_SYMBOL(public_6381270);
CLANG_FORWARD_PROC_SYMBOL(public_6381eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6388080);
CLANG_FORWARD_PROC_SYMBOL(public_638b340);
CLANG_FORWARD_PROC_SYMBOL(public_638b630);
CLANG_FORWARD_PROC_SYMBOL(public_638c530);

#define public_63880f1 _public_63880f1
#define public_63880f6 _public_63880f6
#define public_6388109 _public_6388109
#define public_6388136 _public_6388136
#define public_638813f _public_638813f
#define public_63881ba _public_63881ba
#define public_63881be _public_63881be
#define public_63881e9 _public_63881e9
#define public_6388215 _public_6388215
#define public_6388252 _public_6388252
#define public_638835e _public_638835e

PROC_DECLARE(0x6388080, internal_6388080, public_6388080);
extern "C" NAKED register_t __cdecl internal_6388080()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x94
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        test ebx, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x74], 0x3FF00000
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], 0
        je public_638835e
        cmp dword ptr ds : [public_658b86c], 2
        mov edi, dword ptr ss : [ebp+0xC]
        jne public_63880f6
        mov eax, dword ptr ds : [edi+0x28]
        test eax, eax
        jne public_63880f1
        push edi
        call public_6380d90
        add esp, 4
        mov dword ptr ds : [edi+0x28], eax
        public_63880f1 : nop
        mov esi, dword ptr ds : [edi+0x28]
        jmp public_6388109
        public_63880f6 : nop
        push edi
        call public_6380d90
        add esp, 4
        mov esi, eax
        mov dword ptr ss : [esp+0x10], 1
/*FIXUP public_6388109 : nop
        push offset public_63f80fc @0x6388109*/
  FIXUP public_6388109 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f80fc
        push ebx
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ds : [public_658b920]
        add esp, 8
        test eax, eax
        je public_6388136
        mov dword ptr ds : [public_658b920], 0
        mov eax, dword ptr ds : [edi+0x4C]
        push eax
/*FIXUP push offset public_63f804c @0x638812f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f804c
        jmp public_638813f
        public_6388136 : nop
        mov ecx, dword ptr ds : [edi+0x4C]
        push ecx
/*FIXUP push offset public_63f8020 @0x638813a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8020
        public_638813f : nop
        push ebx
        call dword ptr ds : [public_63991e8]
        mov edx, dword ptr ds : [edi+0x34]
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [eax+8]
        add esp, 0xC
        lea ecx, ss:[esp+0x40]
        push ecx
        push edi
        push edx
        mov dword ptr ss : [esp+0x18], eax
        call public_637fd60
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ds : [edx+8]
        push ecx
        push edi
        push eax
        call public_6381270
        mov ecx, eax
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 0x1C
        mov edx, eax
        dec eax
        test edx, edx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_63881e9
        mov ebx, ecx
        lea ecx, ss:[esp+0x48]
        sub ecx, esi
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [edi+0x18]
        mov edi, dword ptr ss : [esp+0xC]
        sub ebx, esi
        lea edx, ss:[esp+0x20]
        sub ecx, esi
        sub edx, esi
        lea eax, ds:[esi+eax*8]
        mov dword ptr ss : [esp+0x18], ebx
        inc edi
        jmp public_63881be
        public_63881ba : nop
        mov ebx, dword ptr ss : [esp+0x18]
        public_63881be : nop
        fld qword ptr ds : [ebx+eax]
        mov ebx, dword ptr ss : [esp+0x1C]
        fsub qword ptr ds : [eax]
        dec edi
        sub eax, 8
        test edi, edi
        fstp qword ptr ds : [ebx+eax+8]
        mov ebx, dword ptr ds : [ecx+eax+8]
        mov dword ptr ds : [edx+eax+8], ebx
        mov ebx, dword ptr ds : [ecx+eax+0xC]
        mov dword ptr ds : [edx+eax+0xC], ebx
        ja public_63881ba
        mov ebx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp+0xC]
        public_63881e9 : nop
        mov eax, dword ptr ds : [public_658b24c]
        cmp eax, 2
        jne public_6388215
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        jmp public_6388252
        public_6388215 : nop
        cmp eax, 4
        jne public_6388252
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        call public_638c530
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        call public_638c530
        mov ecx, dword ptr ds : [public_658b0f4]
        push 0
        push 0
        push 1
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        call public_6380f60
        add esp, 0x24
        public_6388252 : nop
        lea eax, ss:[esp+0x80]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        push 3
        call public_6381eb0
        mov eax, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x64]
        add esp, 0x10
        push eax
        mov eax, dword ptr ss : [esp+0x54]
        push ecx
        mov ecx, dword ptr ss : [esp+0x54]
        push edx
        mov edx, dword ptr ss : [esp+0x54]
        push eax
        push ecx
        push edx
/*FIXUP push offset public_63f8008 @0x638828c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8008
        push ebx
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ss : [esp+0xB4]
        mov ecx, dword ptr ss : [esp+0xB0]
        mov edx, dword ptr ss : [esp+0xAC]
        add esp, 0x20
        push eax
        mov eax, dword ptr ss : [esp+0x8C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x8C]
        push edx
        mov edx, dword ptr ss : [esp+0x8C]
        push eax
        push ecx
        push edx
/*FIXUP push offset public_63f8008 @0x63882cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8008
        push ebx
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x4C]
        add esp, 0x20
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        push ecx
        push edx
/*FIXUP push offset public_63f8008 @0x63882f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8008
        push ebx
        call dword ptr ds : [public_63991e8]
        push esi
        push ebx
        call public_638b340
        add esp, 0x28
/*FIXUP push offset public_63f8000 @0x638830e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8000
        push ebx
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ds : [public_658b804]
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        call public_6377fe0
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0x10]
        lea edx, ss:[esp+0x78]
        push edx
        mov edx, dword ptr ds : [edi+0x18]
        push eax
        push ecx
        push 0
        push edx
        push esi
        push ebx
        call public_638b630
        add esp, 0x2C
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_638835e
        mov eax, dword ptr ds : [public_658b804]
        push eax
        push esi
        call public_6377fe0
        add esp, 8
        public_638835e : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6388080)
    }
}

#undef public_63880f1
#undef public_63880f6
#undef public_6388109
#undef public_6388136
#undef public_638813f
#undef public_63881ba
#undef public_63881be
#undef public_63881e9
#undef public_6388215
#undef public_6388252
#undef public_638835e
