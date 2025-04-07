#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f70ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f71bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f880c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f8bc70);
CLANG_FORWARD_PROC_SYMBOL(public_6f8beb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f90b70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1216);

#define public_6f8bee0 _public_6f8bee0
#define public_6f8bef2 _public_6f8bef2
#define public_6f8bf0b _public_6f8bf0b
#define public_6f8bf8d _public_6f8bf8d
#define public_6f8bfa5 _public_6f8bfa5
#define public_6f8bfb3 _public_6f8bfb3
#define public_6f8bfc0 _public_6f8bfc0
#define public_6f8bfc8 _public_6f8bfc8
#define public_6f8bfd0 _public_6f8bfd0
#define public_6f8bffd _public_6f8bffd
#define public_6f8c02c _public_6f8c02c
#define public_6f8c040 _public_6f8c040
#define public_6f8c051 _public_6f8c051
#define public_6f8c0ae _public_6f8c0ae
#define public_6f8c0b0 _public_6f8c0b0
#define public_6f8c13a _public_6f8c13a
#define public_6f8c13c _public_6f8c13c
#define public_6f8c159 _public_6f8c159
#define public_6f8c199 _public_6f8c199
#define public_6f8c1b0 _public_6f8c1b0
#define public_6f8c1d9 _public_6f8c1d9
#define public_6f8c1e6 _public_6f8c1e6

PROC_DECLARE(0x6f8beb0, internal_6f8beb0, public_6f8beb0);
extern "C" NAKED register_t __cdecl internal_6f8beb0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb1216 @0x6f8beb8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1216
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x50]
        mov ebp, dword ptr ds : [edi+0x38]
        mov eax, dword ptr ds : [edi+0x3C]
        cmp ebp, eax
        mov esi, ecx
        je public_6f8bef2
        mov ecx, dword ptr ss : [esp+0x4C]
        nop 
        public_6f8bee0 : nop
        cmp dword ptr ss : [ebp+0x94], ecx
        je public_6f8bef2
        add ebp, 0x98
        cmp ebp, eax
        jne public_6f8bee0
        public_6f8bef2 : nop
        mov al, byte ptr ss : [ebp+1]
        test al, al
        jne public_6f8c1e6
        mov al, byte ptr ss : [ebp+2]
        test al, al
        je public_6f8bf0b
        mov ecx, esi
        call public_6f8bc70
        public_6f8bf0b : nop
        mov eax, dword ptr ds : [edi+0x38]
        mov edx, dword ptr ds : [esi]
        cmp ebp, eax
        setne al
        push ebx
        mov ecx, esi
        push eax
        push ebp
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ss : [ebp+0x94]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi+0x5C]
        call public_6f880c0
        lea edx, ds:[edi+0x1C]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], 0
        call public_6f90b70
        fld dword ptr ss : [ebp+0x40]
        fcomp dword ptr ds : [public_6fbc29c]
        fnstsw ax
        test ah, 0x41
        jne public_6f8bf8d
        mov al, byte ptr ds : [esi+0xA2]
        test al, al
        jne public_6f8c02c
        mov eax, dword ptr ds : [esi+0xB0]
        mov edx, dword ptr ds : [eax+0xB8]
        push 0
        lea ecx, ds:[eax+0xB8]
        push esi
        push 8
        call dword ptr ds : [edx+0x14]
        mov byte ptr ds : [esi+0xA2], 1
        jmp public_6f8c02c
        public_6f8bf8d : nop
        mov al, byte ptr ds : [esi+0xA1]
        test al, al
        je public_6f8bfa5
        mov al, byte ptr ds : [esi+0xA0]
        test al, al
        jne public_6f8c02c
        public_6f8bfa5 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        xor bl, bl
        xor dl, dl
        cmp eax, ecx
        je public_6f8bfd0
        public_6f8bfb3 : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx+0x60], 1
        jne public_6f8bfc0
        mov bl, 1
        jmp public_6f8bfc8
        public_6f8bfc0 : nop
        cmp dword ptr ds : [ecx+0x60], 2
        jne public_6f8bfc8
        mov dl, 1
        public_6f8bfc8 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [esp+0x18]
        jne public_6f8bfb3
        public_6f8bfd0 : nop
        mov al, byte ptr ds : [esi+0xA1]
        test al, al
        jne public_6f8bffd
        test dl, dl
        je public_6f8bffd
        mov eax, dword ptr ds : [esi+0xB0]
        push 0
        lea ecx, ds:[eax+0xB8]
        mov eax, dword ptr ds : [ecx]
        push esi
        push 0xA
        call dword ptr ds : [eax+0x14]
        mov byte ptr ds : [esi+0xA1], 1
        jmp public_6f8c02c
        public_6f8bffd : nop
        mov al, byte ptr ds : [esi+0xA0]
        test al, al
        jne public_6f8c02c
        test bl, bl
        je public_6f8c02c
        mov eax, dword ptr ds : [esi+0xB0]
        mov edx, dword ptr ds : [eax+0xB8]
        push 0
        lea ecx, ds:[eax+0xB8]
        push esi
        push 9
        call dword ptr ds : [edx+0x14]
        mov byte ptr ds : [esi+0xA0], 1
        public_6f8c02c : nop
        mov eax, dword ptr ds : [edi+0x3C]
        add ebp, 0x98
        cmp ebp, eax
        je public_6f8c199
        lea ecx, ds:[ecx]
        public_6f8c040 : nop
        mov cl, byte ptr ss : [ebp+1]
        test cl, cl
        je public_6f8c051
        add ebp, 0x98
        cmp ebp, eax
        jne public_6f8c040
        public_6f8c051 : nop
        cmp ebp, eax
        je public_6f8c199
        push 0x48
        call public_6fa912a
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x54], edi
        test edi, edi
        mov byte ptr ss : [esp+0x48], 1
        je public_6f8c0ae
        mov ebx, dword ptr ds : [esi+0x5C]
        lea ecx, ds:[esi+0x10]
        add ebx, 0x20
        call dword ptr ds : [public_6fb3130]
        push 0x3F800000
        push 1
        push eax
        mov eax, dword ptr ss : [esp+0x64]
        push eax
        mov ecx, edi
        call public_6f70ff0
        mov dword ptr ds : [edi+0x40], ebx
        mov dword ptr ds : [edi+0x44], 0
        mov dword ptr ds : [edi], offset public_6fbca40
        mov dword ptr ds : [edi+0x10], offset public_6fbca2c
        jmp public_6f8c0b0
        public_6f8c0ae : nop
        xor edi, edi
        public_6f8c0b0 : nop
        mov eax, dword ptr ss : [ebp+0x94]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x4C], 0
        call dword ptr ds : [edx+0x10]
        push edi
        mov ecx, esi
        call public_6f71bd0
        mov eax, dword ptr ss : [ebp+4]
        sub eax, 2
        je public_6f8c159
        dec eax
        jne public_6f8c199
        push 0x48
        call public_6fa912a
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x50], edi
        test edi, edi
        mov byte ptr ss : [esp+0x48], 3
        je public_6f8c13a
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [esi+0x5C]
        lea ecx, ds:[esi+0x10]
        mov dword ptr ss : [esp+0x54], eax
        add ebx, 0x20
        call dword ptr ds : [public_6fb3130]
        mov ecx, dword ptr ss : [esp+0x58]
        push 0x3F800000
        push 1
        push eax
        push ecx
        mov ecx, edi
        call public_6f70ff0
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [edi+0x40], ebx
        mov dword ptr ds : [edi+0x44], edx
        mov dword ptr ds : [edi], offset public_6fbca40
        mov dword ptr ds : [edi+0x10], offset public_6fbca2c
        jmp public_6f8c13c
        public_6f8c13a : nop
        xor edi, edi
        public_6f8c13c : nop
        mov ecx, dword ptr ss : [ebp+0x94]
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x4C], 0
        call dword ptr ds : [eax+0x10]
        push edi
        mov ecx, esi
        call public_6f71bd0
        jmp public_6f8c199
        public_6f8c159 : nop
        mov edx, dword ptr ds : [public_6fd3b78]
        mov edi, dword ptr ss : [ebp+0x94]
        push edx
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6fb3118]
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x20], offset public_6fbc884
        fild dword ptr ss : [ebp+8]
        push 0
        push 1
        push ecx
        lea eax, ss:[esp+0x2C]
        fstp dword ptr ss : [esp]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x58], 2
        call dword ptr ds : [public_6fb3114]
        public_6f8c199 : nop
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], offset public_6fbc7cc
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        pop ebx
        je public_6f8c1d9
        lea esp, ss:[esp]
        public_6f8c1b0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x18], ecx
        jne public_6f8c1b0
        public_6f8c1d9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f8c1e6 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 0xC
        UNREACHABLE_TRAP(0x6f8beb0)
    }
}

#undef public_6f8bee0
#undef public_6f8bef2
#undef public_6f8bf0b
#undef public_6f8bf8d
#undef public_6f8bfa5
#undef public_6f8bfb3
#undef public_6f8bfc0
#undef public_6f8bfc8
#undef public_6f8bfd0
#undef public_6f8bffd
#undef public_6f8c02c
#undef public_6f8c040
#undef public_6f8c051
#undef public_6f8c0ae
#undef public_6f8c0b0
#undef public_6f8c13a
#undef public_6f8c13c
#undef public_6f8c159
#undef public_6f8c199
#undef public_6f8c1b0
#undef public_6f8c1d9
#undef public_6f8c1e6
