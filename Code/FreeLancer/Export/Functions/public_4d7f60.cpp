#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_45a470);
CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4c78d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c7a00);
CLANG_FORWARD_PROC_SYMBOL(public_4c7a30);
CLANG_FORWARD_PROC_SYMBOL(public_4c7a60);
CLANG_FORWARD_PROC_SYMBOL(public_4c7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4c7ac0);
CLANG_FORWARD_PROC_SYMBOL(public_4c7af0);
CLANG_FORWARD_PROC_SYMBOL(public_4c7b90);
CLANG_FORWARD_PROC_SYMBOL(public_4c7be0);
CLANG_FORWARD_PROC_SYMBOL(public_4d8e20);
CLANG_FORWARD_PROC_SYMBOL(public_4d9470);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_576240);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);
CLANG_FORWARD_PROC_SYMBOL(public_5784a0);

#define public_4d7f7a _public_4d7f7a
#define public_4d7f8c _public_4d7f8c
#define public_4d800f _public_4d800f
#define public_4d8036 _public_4d8036
#define public_4d804e _public_4d804e
#define public_4d8075 _public_4d8075
#define public_4d8085 _public_4d8085
#define public_4d808d _public_4d808d
#define public_4d80a4 _public_4d80a4
#define public_4d80c2 _public_4d80c2
#define public_4d80d8 _public_4d80d8
#define public_4d80ee _public_4d80ee
#define public_4d8104 _public_4d8104
#define public_4d811a _public_4d811a
#define public_4d812d _public_4d812d
#define public_4d8150 _public_4d8150
#define public_4d8173 _public_4d8173
#define public_4d8196 _public_4d8196
#define public_4d81bd _public_4d81bd
#define public_4d81d9 _public_4d81d9
#define public_4d8216 _public_4d8216
#define public_4d8240 _public_4d8240
#define public_4d8242 _public_4d8242
#define public_4d827d _public_4d827d
#define public_4d8292 _public_4d8292
#define public_4d8296 _public_4d8296
#define public_4d82a7 _public_4d82a7
#define public_4d82af _public_4d82af
#define public_4d82cb _public_4d82cb
#define public_4d82ed _public_4d82ed
#define public_4d830d _public_4d830d
#define public_4d8320 _public_4d8320
#define public_4d8342 _public_4d8342
#define public_4d8354 _public_4d8354
#define public_4d8381 _public_4d8381
#define public_4d8396 _public_4d8396
#define public_4d83bc _public_4d83bc
#define public_4d83c9 _public_4d83c9
#define public_4d83d1 _public_4d83d1
#define public_4d83e0 _public_4d83e0
#define public_4d83f8 _public_4d83f8
#define public_4d8414 _public_4d8414
#define public_4d8434 _public_4d8434
#define public_4d8440 _public_4d8440
#define public_4d8452 _public_4d8452

PROC_DECLARE(0x4d7f60, internal_4d7f60, public_4d7f60);
extern "C" NAKED register_t __cdecl internal_4d7f60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, 0x78
        push edi
        mov edi, ecx
        jne public_4d7f8c
        call public_576240
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        jne public_4d7f8c
        public_4d7f7a : nop
        push 0
        call public_4c7a60
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d7f8c : nop
        call public_45a740
        test al, al
        jne public_4d8414
        call public_41a3e0
        test al, al
        jne public_4d8414
        call public_54baf0
        test eax, eax
        je public_4d8452
        add eax, 0xC
        test eax, eax
        je public_4d8452
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_4d8452
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_4d8452
        mov ebx, dword ptr ds : [public_5c62e8]
        call ebx
        test eax, eax
        je public_4d8452
        mov eax, dword ptr ds : [eax+0xC0]
        lea ecx, ds:[esi-4]
        cmp ecx, 0xC2
        ja public_4d8452
/*FIXUP movzx ecx, byte ptr ds : [ecx+public_4d8490] @0x4d8001*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_4d845c] @0x4d8008*/
  JMPTB cmp ecx, 0
  JMPTB jne public_4c0000000000bb8e
  JMPTB mov ecx, 0
  JMPTB public_4c0000000000bb8e : nop
        je public_4d8354
  JMPTB cmp ecx, 1
  JMPTB jne public_4c0000000000bb8a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb8a : nop
        je public_4d8452
  JMPTB cmp ecx, 2
  JMPTB jne public_4c0000000000bb86
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb86 : nop
        je public_4d8452
  JMPTB cmp ecx, 3
  JMPTB jne public_4c0000000000bb82
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb82 : nop
        je public_4d8452
  JMPTB cmp ecx, 4
  JMPTB jne public_4c0000000000bb7e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb7e : nop
        je public_4d8452
  JMPTB cmp ecx, 5
  JMPTB jne public_4c0000000000bb7a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb7a : nop
        je public_4d8452
  JMPTB cmp ecx, 6
  JMPTB jne public_4c0000000000bb76
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb76 : nop
        je public_4d8452
  JMPTB cmp ecx, 7
  JMPTB jne public_4c0000000000bb72
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb72 : nop
        je public_4d8452
  JMPTB cmp ecx, 8
  JMPTB jne public_4c0000000000bb6e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb6e : nop
        je public_4d8452
  JMPTB cmp ecx, 9
  JMPTB jne public_4c0000000000bb6a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb6a : nop
        je public_4d8452
  JMPTB cmp ecx, 0xA
  JMPTB jne public_4c0000000000bb66
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb66 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xB
  JMPTB jne public_4c0000000000bb62
  JMPTB mov ecx, 1
  JMPTB public_4c0000000000bb62 : nop
        je public_4d81d9
  JMPTB cmp ecx, 0xC
  JMPTB jne public_4c0000000000bb5e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb5e : nop
        je public_4d8452
  JMPTB cmp ecx, 0xD
  JMPTB jne public_4c0000000000bb5a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb5a : nop
        je public_4d8452
  JMPTB cmp ecx, 0xE
  JMPTB jne public_4c0000000000bb56
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb56 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xF
  JMPTB jne public_4c0000000000bb52
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb52 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x10
  JMPTB jne public_4c0000000000bb4e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb4e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x11
  JMPTB jne public_4c0000000000bb4a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb4a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x12
  JMPTB jne public_4c0000000000bb46
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb46 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x13
  JMPTB jne public_4c0000000000bb42
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb42 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x14
  JMPTB jne public_4c0000000000bb3e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb3e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x15
  JMPTB jne public_4c0000000000bb3a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb3a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x16
  JMPTB jne public_4c0000000000bb36
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb36 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x17
  JMPTB jne public_4c0000000000bb32
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb32 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x18
  JMPTB jne public_4c0000000000bb2e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb2e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x19
  JMPTB jne public_4c0000000000bb2a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb2a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x1A
  JMPTB jne public_4c0000000000bb26
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb26 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x1B
  JMPTB jne public_4c0000000000bb22
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb22 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x1C
  JMPTB jne public_4c0000000000bb1e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb1e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x1D
  JMPTB jne public_4c0000000000bb1a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb1a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x1E
  JMPTB jne public_4c0000000000bb16
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb16 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x1F
  JMPTB jne public_4c0000000000bb12
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb12 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x20
  JMPTB jne public_4c0000000000bb0e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb0e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x21
  JMPTB jne public_4c0000000000bb0a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb0a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x22
  JMPTB jne public_4c0000000000bb06
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb06 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x23
  JMPTB jne public_4c0000000000bb02
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bb02 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x24
  JMPTB jne public_4c0000000000bafe
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bafe : nop
        je public_4d8452
  JMPTB cmp ecx, 0x25
  JMPTB jne public_4c0000000000bafa
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bafa : nop
        je public_4d8452
  JMPTB cmp ecx, 0x26
  JMPTB jne public_4c0000000000baf6
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000baf6 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x27
  JMPTB jne public_4c0000000000baf2
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000baf2 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x28
  JMPTB jne public_4c0000000000baee
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000baee : nop
        je public_4d8452
  JMPTB cmp ecx, 0x29
  JMPTB jne public_4c0000000000baea
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000baea : nop
        je public_4d8452
  JMPTB cmp ecx, 0x2A
  JMPTB jne public_4c0000000000bae6
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bae6 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x2B
  JMPTB jne public_4c0000000000bae2
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bae2 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x2C
  JMPTB jne public_4c0000000000bade
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bade : nop
        je public_4d8452
  JMPTB cmp ecx, 0x2D
  JMPTB jne public_4c0000000000bada
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bada : nop
        je public_4d8452
  JMPTB cmp ecx, 0x2E
  JMPTB jne public_4c0000000000bad6
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bad6 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x2F
  JMPTB jne public_4c0000000000bad2
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bad2 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x30
  JMPTB jne public_4c0000000000bace
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bace : nop
        je public_4d8452
  JMPTB cmp ecx, 0x31
  JMPTB jne public_4c0000000000baca
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000baca : nop
        je public_4d8452
  JMPTB cmp ecx, 0x32
  JMPTB jne public_4c0000000000bac6
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bac6 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x33
  JMPTB jne public_4c0000000000bac2
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bac2 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x34
  JMPTB jne public_4c0000000000babe
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000babe : nop
        je public_4d8452
  JMPTB cmp ecx, 0x35
  JMPTB jne public_4c0000000000baba
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000baba : nop
        je public_4d8452
  JMPTB cmp ecx, 0x36
  JMPTB jne public_4c0000000000bab6
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bab6 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x37
  JMPTB jne public_4c0000000000bab2
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000bab2 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x38
  JMPTB jne public_4c0000000000baae
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000baae : nop
        je public_4d8452
  JMPTB cmp ecx, 0x39
  JMPTB jne public_4c0000000000baaa
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000baaa : nop
        je public_4d8452
  JMPTB cmp ecx, 0x3A
  JMPTB jne public_4c0000000000baa6
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000baa6 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x3B
  JMPTB jne public_4c0000000000baa2
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000baa2 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x3C
  JMPTB jne public_4c0000000000ba9e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba9e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x3D
  JMPTB jne public_4c0000000000ba9a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba9a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x3E
  JMPTB jne public_4c0000000000ba96
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba96 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x3F
  JMPTB jne public_4c0000000000ba92
  JMPTB mov ecx, 2
  JMPTB public_4c0000000000ba92 : nop
        je public_4d82ed
  JMPTB cmp ecx, 0x40
  JMPTB jne public_4c0000000000ba8e
  JMPTB mov ecx, 3
  JMPTB public_4c0000000000ba8e : nop
        je public_4d830d
  JMPTB cmp ecx, 0x41
  JMPTB jne public_4c0000000000ba8a
  JMPTB mov ecx, 4
  JMPTB public_4c0000000000ba8a : nop
        je public_4d81bd
  JMPTB cmp ecx, 0x42
  JMPTB jne public_4c0000000000ba86
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba86 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x43
  JMPTB jne public_4c0000000000ba82
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba82 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x44
  JMPTB jne public_4c0000000000ba7e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba7e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x45
  JMPTB jne public_4c0000000000ba7a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba7a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x46
  JMPTB jne public_4c0000000000ba76
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba76 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x47
  JMPTB jne public_4c0000000000ba72
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba72 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x48
  JMPTB jne public_4c0000000000ba6e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba6e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x49
  JMPTB jne public_4c0000000000ba6a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba6a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x4A
  JMPTB jne public_4c0000000000ba66
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba66 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x4B
  JMPTB jne public_4c0000000000ba62
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba62 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x4C
  JMPTB jne public_4c0000000000ba5e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba5e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x4D
  JMPTB jne public_4c0000000000ba5a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba5a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x4E
  JMPTB jne public_4c0000000000ba56
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba56 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x4F
  JMPTB jne public_4c0000000000ba52
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba52 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x50
  JMPTB jne public_4c0000000000ba4e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba4e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x51
  JMPTB jne public_4c0000000000ba4a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba4a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x52
  JMPTB jne public_4c0000000000ba46
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba46 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x53
  JMPTB jne public_4c0000000000ba42
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba42 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x54
  JMPTB jne public_4c0000000000ba3e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba3e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x55
  JMPTB jne public_4c0000000000ba3a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba3a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x56
  JMPTB jne public_4c0000000000ba36
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba36 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x57
  JMPTB jne public_4c0000000000ba32
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba32 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x58
  JMPTB jne public_4c0000000000ba2e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba2e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x59
  JMPTB jne public_4c0000000000ba2a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba2a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x5A
  JMPTB jne public_4c0000000000ba26
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba26 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x5B
  JMPTB jne public_4c0000000000ba22
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba22 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x5C
  JMPTB jne public_4c0000000000ba1e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba1e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x5D
  JMPTB jne public_4c0000000000ba1a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba1a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x5E
  JMPTB jne public_4c0000000000ba16
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba16 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x5F
  JMPTB jne public_4c0000000000ba12
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba12 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x60
  JMPTB jne public_4c0000000000ba0e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba0e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x61
  JMPTB jne public_4c0000000000ba0a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba0a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x62
  JMPTB jne public_4c0000000000ba06
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba06 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x63
  JMPTB jne public_4c0000000000ba02
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000ba02 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x64
  JMPTB jne public_4c0000000000b9fe
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b9fe : nop
        je public_4d8452
  JMPTB cmp ecx, 0x65
  JMPTB jne public_4c0000000000b9fa
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b9fa : nop
        je public_4d8452
  JMPTB cmp ecx, 0x66
  JMPTB jne public_4c0000000000b9f6
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b9f6 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x67
  JMPTB jne public_4c0000000000b9f2
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b9f2 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x68
  JMPTB jne public_4c0000000000b9ee
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b9ee : nop
        je public_4d8452
  JMPTB cmp ecx, 0x69
  JMPTB jne public_4c0000000000b9ea
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b9ea : nop
        je public_4d8452
  JMPTB cmp ecx, 0x6A
  JMPTB jne public_4c0000000000b9e6
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b9e6 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x6B
  JMPTB jne public_4c0000000000b9e2
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b9e2 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x6C
  JMPTB jne public_4c0000000000b9de
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b9de : nop
        je public_4d8452
  JMPTB cmp ecx, 0x6D
  JMPTB jne public_4c0000000000b9da
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b9da : nop
        je public_4d8452
  JMPTB cmp ecx, 0x6E
  JMPTB jne public_4c0000000000b9d6
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b9d6 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x6F
  JMPTB jne public_4c0000000000b9d2
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b9d2 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x70
  JMPTB jne public_4c0000000000b9ce
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000b9ce : nop
        je public_4d83d1
  JMPTB cmp ecx, 0x71
  JMPTB jne public_4c0000000000b9ca
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b9ca : nop
        je public_4d8452
  JMPTB cmp ecx, 0x72
  JMPTB jne public_4c0000000000b9c6
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000b9c6 : nop
        je public_4d83d1
  JMPTB cmp ecx, 0x73
  JMPTB jne public_4c0000000000b9c2
  JMPTB mov ecx, 6
  JMPTB public_4c0000000000b9c2 : nop
        je public_4d82af
  JMPTB cmp ecx, 0x74
  JMPTB jne public_4c0000000000b9be
  JMPTB mov ecx, 7
  JMPTB public_4c0000000000b9be : nop
        je public_4d82cb
  JMPTB cmp ecx, 0x75
  JMPTB jne public_4c0000000000b9ba
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000b9ba : nop
        je public_4d83d1
  JMPTB cmp ecx, 0x76
  JMPTB jne public_4c0000000000b9b6
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000b9b6 : nop
        je public_4d83d1
  JMPTB cmp ecx, 0x77
  JMPTB jne public_4c0000000000b9b2
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000b9b2 : nop
        je public_4d83d1
  JMPTB cmp ecx, 0x78
  JMPTB jne public_4c0000000000b9ae
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b9ae : nop
        je public_4d8452
  JMPTB cmp ecx, 0x79
  JMPTB jne public_4c0000000000b9aa
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b9aa : nop
        je public_4d8452
  JMPTB cmp ecx, 0x7A
  JMPTB jne public_4c0000000000b9a6
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000b9a6 : nop
        je public_4d83d1
  JMPTB cmp ecx, 0x7B
  JMPTB jne public_4c0000000000b9a2
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000b9a2 : nop
        je public_4d83d1
  JMPTB cmp ecx, 0x7C
  JMPTB jne public_4c0000000000b99e
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000b99e : nop
        je public_4d83d1
  JMPTB cmp ecx, 0x7D
  JMPTB jne public_4c0000000000b99a
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000b99a : nop
        je public_4d800f
  JMPTB cmp ecx, 0x7E
  JMPTB jne public_4c0000000000b996
  JMPTB mov ecx, 9
  JMPTB public_4c0000000000b996 : nop
        je public_4d804e
  JMPTB cmp ecx, 0x7F
  JMPTB jne public_4c0000000000b992
  JMPTB mov ecx, 0xA
  JMPTB public_4c0000000000b992 : nop
        je public_4d808d
  JMPTB cmp ecx, 0x80
  JMPTB jne public_4c0000000000b98e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b98e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x81
  JMPTB jne public_4c0000000000b98a
  JMPTB mov ecx, 0xB
  JMPTB public_4c0000000000b98a : nop
        je public_4d80a4
  JMPTB cmp ecx, 0x82
  JMPTB jne public_4c0000000000b986
  JMPTB mov ecx, 0xB
  JMPTB public_4c0000000000b986 : nop
        je public_4d80a4
  JMPTB cmp ecx, 0x83
  JMPTB jne public_4c0000000000b982
  JMPTB mov ecx, 0xB
  JMPTB public_4c0000000000b982 : nop
        je public_4d80a4
  JMPTB cmp ecx, 0x84
  JMPTB jne public_4c0000000000b97e
  JMPTB mov ecx, 0xB
  JMPTB public_4c0000000000b97e : nop
        je public_4d80a4
  JMPTB cmp ecx, 0x85
  JMPTB jne public_4c0000000000b97a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b97a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x86
  JMPTB jne public_4c0000000000b976
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b976 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x87
  JMPTB jne public_4c0000000000b972
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b972 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x88
  JMPTB jne public_4c0000000000b96e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b96e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x89
  JMPTB jne public_4c0000000000b96a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b96a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x8A
  JMPTB jne public_4c0000000000b966
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b966 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x8B
  JMPTB jne public_4c0000000000b962
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b962 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x8C
  JMPTB jne public_4c0000000000b95e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b95e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x8D
  JMPTB jne public_4c0000000000b95a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b95a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x8E
  JMPTB jne public_4c0000000000b956
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b956 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x8F
  JMPTB jne public_4c0000000000b952
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b952 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x90
  JMPTB jne public_4c0000000000b94e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b94e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x91
  JMPTB jne public_4c0000000000b94a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b94a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x92
  JMPTB jne public_4c0000000000b946
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b946 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x93
  JMPTB jne public_4c0000000000b942
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b942 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x94
  JMPTB jne public_4c0000000000b93e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b93e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x95
  JMPTB jne public_4c0000000000b93a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b93a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x96
  JMPTB jne public_4c0000000000b936
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b936 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x97
  JMPTB jne public_4c0000000000b932
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b932 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x98
  JMPTB jne public_4c0000000000b92e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b92e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x99
  JMPTB jne public_4c0000000000b92a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b92a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x9A
  JMPTB jne public_4c0000000000b926
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b926 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x9B
  JMPTB jne public_4c0000000000b922
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b922 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x9C
  JMPTB jne public_4c0000000000b91e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b91e : nop
        je public_4d8452
  JMPTB cmp ecx, 0x9D
  JMPTB jne public_4c0000000000b91a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b91a : nop
        je public_4d8452
  JMPTB cmp ecx, 0x9E
  JMPTB jne public_4c0000000000b916
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b916 : nop
        je public_4d8452
  JMPTB cmp ecx, 0x9F
  JMPTB jne public_4c0000000000b912
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b912 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xA0
  JMPTB jne public_4c0000000000b90e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b90e : nop
        je public_4d8452
  JMPTB cmp ecx, 0xA1
  JMPTB jne public_4c0000000000b90a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b90a : nop
        je public_4d8452
  JMPTB cmp ecx, 0xA2
  JMPTB jne public_4c0000000000b906
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b906 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xA3
  JMPTB jne public_4c0000000000b902
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b902 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xA4
  JMPTB jne public_4c0000000000b8fe
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8fe : nop
        je public_4d8452
  JMPTB cmp ecx, 0xA5
  JMPTB jne public_4c0000000000b8fa
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8fa : nop
        je public_4d8452
  JMPTB cmp ecx, 0xA6
  JMPTB jne public_4c0000000000b8f6
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8f6 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xA7
  JMPTB jne public_4c0000000000b8f2
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8f2 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xA8
  JMPTB jne public_4c0000000000b8ee
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8ee : nop
        je public_4d8452
  JMPTB cmp ecx, 0xA9
  JMPTB jne public_4c0000000000b8ea
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8ea : nop
        je public_4d8452
  JMPTB cmp ecx, 0xAA
  JMPTB jne public_4c0000000000b8e6
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8e6 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xAB
  JMPTB jne public_4c0000000000b8e2
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8e2 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xAC
  JMPTB jne public_4c0000000000b8de
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8de : nop
        je public_4d8452
  JMPTB cmp ecx, 0xAD
  JMPTB jne public_4c0000000000b8da
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8da : nop
        je public_4d8452
  JMPTB cmp ecx, 0xAE
  JMPTB jne public_4c0000000000b8d6
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8d6 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xAF
  JMPTB jne public_4c0000000000b8d2
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8d2 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xB0
  JMPTB jne public_4c0000000000b8ce
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8ce : nop
        je public_4d8452
  JMPTB cmp ecx, 0xB1
  JMPTB jne public_4c0000000000b8ca
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8ca : nop
        je public_4d8452
  JMPTB cmp ecx, 0xB2
  JMPTB jne public_4c0000000000b8c6
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8c6 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xB3
  JMPTB jne public_4c0000000000b8c2
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8c2 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xB4
  JMPTB jne public_4c0000000000b8be
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8be : nop
        je public_4d8452
  JMPTB cmp ecx, 0xB5
  JMPTB jne public_4c0000000000b8ba
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8ba : nop
        je public_4d8452
  JMPTB cmp ecx, 0xB6
  JMPTB jne public_4c0000000000b8b6
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8b6 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xB7
  JMPTB jne public_4c0000000000b8b2
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8b2 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xB8
  JMPTB jne public_4c0000000000b8ae
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8ae : nop
        je public_4d8452
  JMPTB cmp ecx, 0xB9
  JMPTB jne public_4c0000000000b8aa
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8aa : nop
        je public_4d8452
  JMPTB cmp ecx, 0xBA
  JMPTB jne public_4c0000000000b8a6
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8a6 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xBB
  JMPTB jne public_4c0000000000b8a2
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b8a2 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xBC
  JMPTB jne public_4c0000000000b89e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b89e : nop
        je public_4d8452
  JMPTB cmp ecx, 0xBD
  JMPTB jne public_4c0000000000b89a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b89a : nop
        je public_4d8452
  JMPTB cmp ecx, 0xBE
  JMPTB jne public_4c0000000000b896
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b896 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xBF
  JMPTB jne public_4c0000000000b892
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b892 : nop
        je public_4d8452
  JMPTB cmp ecx, 0xC0
  JMPTB jne public_4c0000000000b88e
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b88e : nop
        je public_4d8452
  JMPTB cmp ecx, 0xC1
  JMPTB jne public_4c0000000000b88a
  JMPTB mov ecx, 0xC
  JMPTB public_4c0000000000b88a : nop
        je public_4d8452
  JMPTB cmp ecx, 0xC2
  JMPTB jne public_4c0000000000b886
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000b886 : nop
        je public_4d83d1
  JMPTB int 3
        public_4d800f : nop
        cmp eax, 3
        jne public_4d8085
        fld dword ptr ds : [edi+0x48]
        fsub dword ptr ds : [public_5d8290]
        fst dword ptr ds : [edi+0x48]
        fcomp dword ptr ds : [public_5d8284]
        fnstsw ax
        test ah, 5
        jp public_4d8036
        mov edx, dword ptr ds : [public_5d8284]
        mov dword ptr ds : [edi+0x48], edx
        public_4d8036 : nop
        mov eax, dword ptr ds : [edi+0x48]
        push eax
        push 0
        push 0
        call public_4c78d0
        add esp, 0xC
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d804e : nop
        cmp eax, 3
        jne public_4d8085
        fld dword ptr ds : [public_5d8290]
        fadd dword ptr ds : [edi+0x48]
        fst dword ptr ds : [edi+0x48]
        fcomp dword ptr ds : [public_5d8288]
        fnstsw ax
        test ah, 0x41
        jne public_4d8075
        mov ecx, dword ptr ds : [public_5d8288]
        mov dword ptr ds : [edi+0x48], ecx
        public_4d8075 : nop
        mov edx, dword ptr ds : [edi+0x48]
        push edx
        push 0
        push 0
        call public_4c78d0
        add esp, 0xC
        public_4d8085 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d808d : nop
        push 0
        push 5
        lea ecx, ds:[edi-0x364]
        call public_4d8e20
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d80a4 : nop
        call public_576240
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        je public_4d812d
        lea eax, ds:[esi-0x85]
        cmp eax, 3
        ja public_4d811a
/*FIXUP jmp dword ptr ds : [eax*4+public_4d8554] @0x4d80bb*/
  JMPTB cmp eax, 0
  JMPTB je public_4d80c2
  JMPTB cmp eax, 1
  JMPTB je public_4d80d8
  JMPTB cmp eax, 2
  JMPTB je public_4d80ee
  JMPTB cmp eax, 3
  JMPTB je public_4d8104
  JMPTB int 3
        public_4d80c2 : nop
        mov eax, 1
        push eax
        call public_4c7a30
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d80d8 : nop
        mov eax, 2
        push eax
        call public_4c7a30
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d80ee : nop
        mov eax, 3
        push eax
        call public_4c7a30
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d8104 : nop
        mov eax, 4
        push eax
        call public_4c7a30
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d811a : nop
        xor eax, eax
        push eax
        call public_4c7a30
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d812d : nop
        push 0x85
        call public_5784a0
        add esp, 4
        test al, al
        je public_4d8150
        push 1
        call public_4c7a30
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d8150 : nop
        push 0x86
        call public_5784a0
        add esp, 4
        test al, al
        je public_4d8173
        push 2
        call public_4c7a30
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d8173 : nop
        push 0x87
        call public_5784a0
        add esp, 4
        test al, al
        je public_4d8196
        push 3
        call public_4c7a30
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d8196 : nop
        push 0x88
        call public_5784a0
        add esp, 4
        test al, al
        je public_4d8440
        push 4
        call public_4c7a30
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d81bd : nop
        call public_4c7b90
        neg al
        sbb al, al
        inc al
        push eax
        call public_4c7a90
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d81d9 : nop
        call public_45a470
        test al, al
        jne public_4d8452
        mov eax, dword ptr ds : [public_674aa0]
        mov cl, byte ptr ds : [eax+0x5BA]
        test cl, cl
        jne public_4d8216
        mov cl, byte ptr ds : [eax+0x5B9]
        test cl, cl
        je public_4d8216
        push 0
        push 0xBF
        call public_5763b0
        add esp, 8
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d8216 : nop
        call public_54baf0
        test eax, eax
        je public_4d82a7
        add eax, 0xC
        test eax, eax
        je public_4d8240
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_4d8240
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_4d8242
        public_4d8240 : nop
        xor esi, esi
        public_4d8242 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6510]
        test al, al
        jne public_4d82a7
        mov ecx, esi
        call ebx
        mov eax, dword ptr ds : [eax+0xC0]
        xor bl, bl
        cmp eax, 0xFFFFFFFF
        je public_4d827d
        cmp eax, 0x13
        je public_4d827d
        push 0
        push 0x13
        lea ecx, ds:[edi-0x364]
        call public_4d8e20
        test al, al
        je public_4d8452
        mov bl, 1
        public_4d827d : nop
        call public_4c7b90
        test al, al
        je public_4d8292
        push 0
        call public_4c7a90
        add esp, 4
        jmp public_4d8296
        public_4d8292 : nop
        test bl, bl
        je public_4d82a7
        public_4d8296 : nop
        mov ecx, dword ptr ds : [public_674a18]
        push 0
        push ecx
        call public_489e80
        add esp, 8
        public_4d82a7 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d82af : nop
        call public_4c7be0
        neg al
        sbb al, al
        inc al
        push eax
        call public_4c7ac0
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d82cb : nop
        call public_576240
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        je public_4d7f7a
        push 1
        call public_4c7a60
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d82ed : nop
        call public_576240
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        je public_4d8342
        mov edx, dword ptr ds : [public_5d8294]
        mov dword ptr ds : [edi+0x84], edx
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d830d : nop
        call public_4c7b90
        test al, al
        je public_4d8320
        push 0
        call public_4c7a90
        add esp, 4
        public_4d8320 : nop
        call public_576240
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        je public_4d8342
        fld dword ptr ds : [public_5d8294]
        mov al, 1
        fchs 
        fstp dword ptr ds : [edi+0x84]
        pop edi
        pop esi
        pop ebx
        ret 4
        public_4d8342 : nop
        mov dword ptr ds : [edi+0x84], 0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d8354 : nop
        mov eax, dword ptr ds : [public_61684c]
        test eax, eax
        jge public_4d8396
        call public_4c7a00
        fsub dword ptr ds : [public_5d8298]
        fst dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 5
        jp public_4d8381
        mov dword ptr ss : [esp+0x10], 0
        public_4d8381 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_4c7af0
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d8396 : nop
        jle public_4d83c9
        call public_4c7a00
        fadd dword ptr ds : [public_5d8298]
        fst dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jne public_4d83bc
        mov dword ptr ss : [esp+0x10], 0x3F800000
        public_4d83bc : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call public_4c7af0
        add esp, 4
        public_4d83c9 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d83d1 : nop
        mov edx, dword ptr ds : [edi+0x1C]
        xor eax, eax
        lea ecx, ds:[edx+0x134]
        lea esp, ss:[esp]
        public_4d83e0 : nop
        cmp dword ptr ds : [ecx], esi
        je public_4d83f8
        inc eax
        add ecx, 0x148
        cmp eax, 4
        jl public_4d83e0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d83f8 : nop
        imul eax, 0x148
        add eax, edx
        push eax
        lea ecx, ds:[edi-0x364]
        call public_4d9470
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d8414 : nop
        cmp esi, 0x85
        je public_4d8434
        cmp esi, 0x86
        je public_4d8434
        cmp esi, 0x87
        je public_4d8434
        cmp esi, 0x88
        jne public_4d8452
        public_4d8434 : nop
        call public_576240
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        jne public_4d8452
        public_4d8440 : nop
        push 0
        call public_4c7a30
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4d8452 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4d7f60)
        ASM_EXPORT_ENTRY_FIRST(0x4d8104, public_4d8104)
        ASM_EXPORT_ENTRY_LAST(0x4d8452, public_4d8452)
    }
}

#undef public_4d7f7a
#undef public_4d7f8c
#undef public_4d800f
#undef public_4d8036
#undef public_4d804e
#undef public_4d8075
#undef public_4d8085
#undef public_4d808d
#undef public_4d80a4
#undef public_4d80c2
#undef public_4d80d8
#undef public_4d80ee
#undef public_4d8104
#undef public_4d811a
#undef public_4d812d
#undef public_4d8150
#undef public_4d8173
#undef public_4d8196
#undef public_4d81bd
#undef public_4d81d9
#undef public_4d8216
#undef public_4d8240
#undef public_4d8242
#undef public_4d827d
#undef public_4d8292
#undef public_4d8296
#undef public_4d82a7
#undef public_4d82af
#undef public_4d82cb
#undef public_4d82ed
#undef public_4d830d
#undef public_4d8320
#undef public_4d8342
#undef public_4d8354
#undef public_4d8381
#undef public_4d8396
#undef public_4d83bc
#undef public_4d83c9
#undef public_4d83d1
#undef public_4d83e0
#undef public_4d83f8
#undef public_4d8414
#undef public_4d8434
#undef public_4d8440
#undef public_4d8452

#pragma init_seg(compiler)
extern "C" void const* const public_4d8104 = __AsmFindLabelExport(&internal_4d7f60, 0x4d8104);
extern "C" void const* const public_4d8452 = __AsmFindLabelExport(&internal_4d7f60, 0x4d8452);
