#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f481f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f495f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faef88);

#define public_6f48264 _public_6f48264
#define public_6f48282 _public_6f48282
#define public_6f48290 _public_6f48290
#define public_6f482e4 _public_6f482e4
#define public_6f482f2 _public_6f482f2
#define public_6f48316 _public_6f48316
#define public_6f48340 _public_6f48340
#define public_6f4835d _public_6f4835d
#define public_6f48382 _public_6f48382
#define public_6f483a3 _public_6f483a3

PROC_DECLARE(0x6f481f0, internal_6f481f0, public_6f481f0);
extern "C" NAKED register_t __cdecl internal_6f481f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faef88 @0x6f481f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faef88
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x54
        mov al, byte ptr ss : [esp+0x64]
        push ebx
        push ebp
        push esi
        mov byte ptr ss : [esp+0x10], al
        xor eax, eax
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        mov ecx, dword ptr ds : [edi+0xC]
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x6C], eax
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov dword ptr ss : [esp+0x18], ecx
        call public_6f6d2b0
        mov ebp, dword ptr ss : [esp+0x7C]
        mov ebx, dword ptr ds : [public_6fb3380]
/*FIXUP push offset public_6fbafd4 @0x6f48248*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbafd4
/*FIXUP push offset public_6fb4370 @0x6f4824d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4370
        push ebp
        call ebx
        mov esi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x14
        cmp esi, eax
        je public_6f48282
        public_6f48264 : nop
        mov ecx, dword ptr ds : [esi]
        push ecx
/*FIXUP push offset public_6fbafe4 @0x6f48267*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbafe4
/*FIXUP push offset public_6fbb094 @0x6f4826c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb094
        push ebp
        call ebx
        mov eax, dword ptr ss : [esp+0x2C]
        add esi, 4
        add esp, 0x10
        cmp esi, eax
        jne public_6f48264
        public_6f48282 : nop
        mov esi, dword ptr ds : [edi+0xF0]
        cmp esi, dword ptr ds : [edi+0xF4]
        je public_6f482e4
        public_6f48290 : nop
        push esi
        lea edx, ss:[esp+0x28]
        push 0x40
        push edx
        call dword ptr ds : [public_6fb35dc]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+4]
        add esp, 0xC
        mov dword ptr ss : [esp+0x74], eax
        call dword ptr ds : [public_6fb3074]
        mov edx, dword ptr ds : [esi+0xC]
        push eax
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x7C]
        push edx
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        push edx
/*FIXUP push offset public_6fbafdc @0x6f482c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbafdc
/*FIXUP push offset public_6fbb074 @0x6f482cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb074
        push ebp
        call ebx
        mov eax, dword ptr ds : [edi+0xF4]
        add esi, 0x10
        add esp, 0x24
        cmp esi, eax
        jne public_6f48290
        public_6f482e4 : nop
        mov esi, dword ptr ds : [edi+0x100]
        cmp esi, dword ptr ds : [edi+0x104]
        je public_6f48316
        public_6f482f2 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        push eax
        push ecx
/*FIXUP push offset public_6fbb024 @0x6f482f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb024
/*FIXUP push offset public_6fbb064 @0x6f482fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb064
        push ebp
        call ebx
        mov eax, dword ptr ds : [edi+0x104]
        add esi, 8
        add esp, 0x14
        cmp esi, eax
        jne public_6f482f2
        public_6f48316 : nop
        mov al, byte ptr ds : [edi+0x21]
        xor edx, edx
        test al, al
        setne dl
        push edx
/*FIXUP push offset public_6fbb000 @0x6f48321*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb000
/*FIXUP push offset public_6fb4348 @0x6f48326*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4348
        push ebp
        call ebx
        mov esi, dword ptr ds : [edi+0x28]
        mov eax, dword ptr ds : [edi+0x2C]
        add esp, 0x10
        cmp esi, eax
        je public_6f4835d
        nop 
        lea esp, ss:[esp]
        public_6f48340 : nop
        mov eax, dword ptr ds : [esi]
        push eax
/*FIXUP push offset public_6fbaff0 @0x6f48343*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbaff0
/*FIXUP push offset public_6fbb094 @0x6f48348*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb094
        push ebp
        call ebx
        mov eax, dword ptr ds : [edi+0x2C]
        add esi, 4
        add esp, 0x10
        cmp esi, eax
        jne public_6f48340
        public_6f4835d : nop
        mov al, byte ptr ds : [edi+0x34]
        xor ecx, ecx
        test al, al
        setne cl
        push ecx
/*FIXUP push offset public_6fbb01c @0x6f48368*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb01c
/*FIXUP push offset public_6fb4348 @0x6f4836d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4348
        push ebp
        call ebx
        mov esi, dword ptr ds : [edi+0x3C]
        mov eax, dword ptr ds : [edi+0x40]
        add esp, 0x10
        cmp esi, eax
        je public_6f483a3
        public_6f48382 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push edx
        push eax
/*FIXUP push offset public_6fbb00c @0x6f48389*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb00c
/*FIXUP push offset public_6fbb064 @0x6f4838e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb064
        push ebp
        call ebx
        mov eax, dword ptr ds : [edi+0x40]
        add esi, 8
        add esp, 0x14
        cmp esi, eax
        jne public_6f48382
        public_6f483a3 : nop
        push ebp
        lea ecx, ds:[edi+0x48]
        call public_6f495f0
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x68]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 4
        UNREACHABLE_TRAP(0x6f481f0)
    }
}

#undef public_6f48264
#undef public_6f48282
#undef public_6f48290
#undef public_6f482e4
#undef public_6f482f2
#undef public_6f48316
#undef public_6f48340
#undef public_6f4835d
#undef public_6f48382
#undef public_6f483a3
