#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b390);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b520);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b590);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bc70);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bcf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4be30);
CLANG_FORWARD_PROC_SYMBOL(public_6f4beb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f7d0);

#define public_6f56146 _public_6f56146
#define public_6f561a1 _public_6f561a1
#define public_6f5623c _public_6f5623c
#define public_6f5626a _public_6f5626a
#define public_6f56297 _public_6f56297
#define public_6f562b6 _public_6f562b6
#define public_6f562d3 _public_6f562d3
#define public_6f562d8 _public_6f562d8
#define public_6f56303 _public_6f56303
#define public_6f5632d _public_6f5632d
#define public_6f5637b _public_6f5637b
#define public_6f563a9 _public_6f563a9
#define public_6f563d5 _public_6f563d5

PROC_DECLARE(0x6f56100, internal_6f56100, public_6f56100);
extern "C" NAKED register_t __cdecl internal_6f56100()
{
    __asm
    {
        sub esp, 0x628
        push ebx
        push ebp
        push esi
        push edi
        push 1
        call public_6f4b090
        push eax
        call public_6f4b590
        mov ebp, dword ptr ds : [public_6f5a06c]
        push eax
        lea eax, ss:[esp+0x68]
/*FIXUP push offset public_6f61a0c @0x6f56122*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61a0c
        push eax
        call ebp
        push 1
        mov dword ptr ss : [esp+0x2C], 2
        call public_6f4bc70
        mov ebx, eax
        add esp, 0x18
        test ebx, ebx
        je public_6f563a9
        public_6f56146 : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push ebx
        call public_6f4be30
        mov eax, dword ptr ss : [esp+0x1C]
        push 0x3C
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        call public_6f4f7d0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0x18
        cmp eax, 2
        jne public_6f561a1
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6f619fc
        repne scasb
        not ecx
        sub edi, ecx
        mov esi, edi
        lea edx, ss:[esp+0x5C]
        mov edi, edx
        mov edx, ecx
        or ecx, 0xFFFFFFFF
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        public_6f561a1 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6f619f8
        repne scasb
        not ecx
        sub edi, ecx
        mov esi, edi
        lea edx, ss:[esp+0x5C]
        mov edi, edx
        mov edx, ecx
        or ecx, 0xFFFFFFFF
        repne scasb
        dec edi
        mov ecx, edx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        or ecx, 0xFFFFFFFF
        lea edi, ss:[esp+0x5C]
        repne scasb
        not ecx
        dec ecx
        cmp ecx, 0x546
        ja public_6f5637b
        lea eax, ss:[esp+0x18]
        push eax
        push ebx
        call public_6f4beb0
        mov al, byte ptr ds : [eax]
        add esp, 8
        cmp al, 0x67
        je public_6f562b6
        cmp al, 0x74
        je public_6f56297
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        jne public_6f5623c
        lea ecx, ss:[esp+0x20]
        push ecx
        or ecx, 0xFFFFFFFF
        lea edi, ss:[esp+0x60]
        repne scasb
        not ecx
        dec ecx
        lea edx, ss:[esp+ecx+0x60]
/*FIXUP push offset public_6f619e8 @0x6f56224*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f619e8
        push edx
        call ebp
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], 0
        jmp public_6f562d8
        public_6f5623c : nop
        jge public_6f5626a
        lea eax, ss:[esp+0x20]
        push eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x60]
        repne scasb
        not ecx
        dec ecx
        lea ecx, ss:[esp+ecx+0x60]
/*FIXUP push offset public_6f619e0 @0x6f56255*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f619e0
        push ecx
        call ebp
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], 0
        jmp public_6f562d8
        public_6f5626a : nop
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x64]
        repne scasb
        not ecx
        dec ecx
        lea eax, ss:[esp+ecx+0x64]
/*FIXUP push offset public_6f619cc @0x6f56282*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f619cc
        push eax
        call ebp
        add esp, 0x10
        mov dword ptr ss : [esp+0x10], 0
        jmp public_6f562d8
        public_6f56297 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x60]
        repne scasb
        not ecx
        dec ecx
/*FIXUP push offset public_6f619b8 @0x6f562aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f619b8
        lea edx, ss:[esp+ecx+0x64]
        push edx
        jmp public_6f562d3
        public_6f562b6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x60]
        repne scasb
        not ecx
        dec ecx
/*FIXUP push offset public_6f619a4 @0x6f562c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f619a4
        lea ecx, ss:[esp+ecx+0x64]
        push ecx
        public_6f562d3 : nop
        call ebp
        add esp, 0xC
        public_6f562d8 : nop
        push ebx
        call public_6f4bcf0
        add esp, 4
        test eax, eax
        jle public_6f56303
        push eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x60]
        repne scasb
        not ecx
        dec ecx
        lea edx, ss:[esp+ecx+0x60]
/*FIXUP push offset public_6f61998 @0x6f562f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61998
        push edx
        call ebp
        add esp, 0xC
        public_6f56303 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6f5632d
        lea eax, ss:[esp+0x20]
        push eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x60]
        repne scasb
        not ecx
        dec ecx
        lea ecx, ss:[esp+ecx+0x60]
/*FIXUP push offset public_6f6198c @0x6f56322*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6198c
        push ecx
        call ebp
        add esp, 0xC
        public_6f5632d : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6f60d24
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0xFFFFFFFF
        mov esi, edi
        lea edx, ss:[esp+0x5C]
        mov edi, edx
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, ecx
        inc ecx
        push eax
        mov dword ptr ss : [esp+0x18], ecx
        call public_6f4bc70
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        jne public_6f56146
        jmp public_6f563a9
        public_6f5637b : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6f61984
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0xFFFFFFFF
        mov esi, edi
        lea edx, ss:[esp+0x5C]
        mov edi, edx
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
/*FIXUP public_6f563a9 : nop
        push offset public_6f60d08 @0x6f563a9*/
  FIXUP public_6f563a9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60d08
        call public_6f4b390
        mov esi, eax
        push esi
        call public_6f4b520
        add esp, 8
        test eax, eax
        je public_6f563d5
        lea eax, ss:[esp+0x5C]
        push eax
        call public_6f4b790
        push esi
        call public_6f4b0b0
        add esp, 8
        public_6f563d5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x628
        ret 
        UNREACHABLE_TRAP(0x6f56100)
    }
}

#undef public_6f56146
#undef public_6f561a1
#undef public_6f5623c
#undef public_6f5626a
#undef public_6f56297
#undef public_6f562b6
#undef public_6f562d3
#undef public_6f562d8
#undef public_6f56303
#undef public_6f5632d
#undef public_6f5637b
#undef public_6f563a9
#undef public_6f563d5
