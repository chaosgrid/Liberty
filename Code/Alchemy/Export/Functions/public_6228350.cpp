#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a430);
CLANG_FORWARD_PROC_SYMBOL(public_620a5a0);
CLANG_FORWARD_PROC_SYMBOL(public_620a710);
CLANG_FORWARD_PROC_SYMBOL(public_6222ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6222f80);
CLANG_FORWARD_PROC_SYMBOL(public_6227950);
CLANG_FORWARD_PROC_SYMBOL(public_6227ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6228350);
CLANG_FORWARD_PROC_SYMBOL(public_622ace0);
CLANG_FORWARD_PROC_SYMBOL(public_622ad90);
CLANG_FORWARD_JUMP_SYMBOL(public_6249190);

#define public_62283bd _public_62283bd
#define public_6228430 _public_6228430
#define public_6228455 _public_6228455
#define public_62284b8 _public_62284b8
#define public_6228504 _public_6228504
#define public_622851a _public_622851a
#define public_6228573 _public_6228573
#define public_62285d1 _public_62285d1
#define public_622861d _public_622861d
#define public_6228633 _public_6228633
#define public_6228656 _public_6228656
#define public_6228675 _public_6228675
#define public_62286d3 _public_62286d3
#define public_6228736 _public_6228736
#define public_6228748 _public_6228748
#define public_6228767 _public_6228767
#define public_62287c5 _public_62287c5
#define public_6228835 _public_6228835
#define public_6228854 _public_6228854
#define public_62288b2 _public_62288b2
#define public_6228922 _public_6228922
#define public_6228941 _public_6228941
#define public_6228963 _public_6228963
#define public_62289a7 _public_62289a7
#define public_62289cc _public_62289cc
#define public_62289cf _public_62289cf

PROC_DECLARE(0x6228350, internal_6228350, public_6228350);
extern "C" NAKED register_t __cdecl internal_6228350()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6249190 @0x6228358*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249190
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        mov ecx, dword ptr ds : [eax+4]
        push edi
        lea edi, ds:[eax+4]
        cmp ecx, 0xF54EF296
        je public_62289cf
        mov cx, word ptr ds : [eax+8]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [eax+8]
        xor ebx, ebx
        push esi
        mov esi, dword ptr ss : [ebp+4]
        cmp ecx, 1
        jne public_62283bd
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        cmp byte ptr ss : [esp+0x48], bl
        je public_62283bd
        mov eax, dword ptr ss : [esp+0x14]
        or ah, 0x80
        mov dword ptr ss : [esp+0x14], eax
        public_62283bd : nop
        lea edx, ss:[esp+0x14]
        push 2
        push edx
        mov ecx, esi
        call public_6222ee0
        push 4
        push edi
        mov ecx, esi
        call public_6222ee0
        mov eax, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [eax+8]
        cmp eax, 0x103
        jg public_6228656
        je public_6228633
        cmp eax, 0x100
        jg public_622851a
        je public_6228455
        dec eax
        je public_62289cc
        dec eax
        je public_6228430
        dec eax
        jne public_62289a7
        mov ebp, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edi]
        lea edx, ss:[esp+0x44]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push eax
        push ebp
        call dword ptr ds : [ecx+0x2C]
        lea ecx, ss:[esp+0x44]
        push 4
        push ecx
        mov ecx, esi
        call public_6222ee0
        jmp public_62289cc
        public_6228430 : nop
        mov ebp, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x44]
        mov edx, dword ptr ss : [ebp]
        push eax
        push ecx
        push ebp
        call dword ptr ds : [edx+0x24]
        lea edx, ss:[esp+0x44]
        push 4
        push edx
        mov ecx, esi
        call public_6222ee0
        jmp public_62289cc
        public_6228455 : nop
        mov dword ptr ss : [esp+0x10], ebx
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x3C], ebx
        call public_620a430
        mov ebp, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push ecx
        push edx
        push ebp
        call dword ptr ds : [eax+0x40]
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x30]
        mov ecx, dword ptr ds : [edi]
        push edi
        mov byte ptr ss : [esp+0x4C], al
        call dword ptr ds : [ecx+0x38]
        lea edx, ss:[esp+0x48]
        push 1
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x4C], al
        call public_6222ee0
        lea eax, ss:[esp+0x44]
        push 1
        push eax
        mov ecx, esi
        call public_6222ee0
        mov al, byte ptr ss : [esp+0x44]
        mov byte ptr ss : [esp+0x24], bl
        cmp al, bl
        jbe public_6228504
        public_62284b8 : nop
        mov ebp, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x1C]
        and ebp, 0xFF
        push edx
        push ebp
        push edi
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebp
        push edi
        call dword ptr ds : [eax+0x24]
        lea edx, ss:[esp+0x1C]
        push 4
        push edx
        mov ecx, esi
        call public_6222ee0
        lea eax, ss:[esp+0x18]
        push 4
        push eax
        mov ecx, esi
        call public_6222ee0
        mov al, byte ptr ss : [esp+0x44]
        inc bl
        cmp bl, al
        mov byte ptr ss : [esp+0x24], bl
        jb public_62284b8
        public_6228504 : nop
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call public_620a430
        jmp public_62289cc
        public_622851a : nop
        sub eax, 0x101
        je public_6228573
        dec eax
        jne public_62289a7
        mov dword ptr ss : [esp+0x44], ebx
        mov ebp, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edi]
        lea edx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x3C], 2
        mov ecx, dword ptr ss : [ebp]
        push edx
        push eax
        push ebp
        call dword ptr ds : [ecx+0x44]
        mov ecx, dword ptr ss : [esp+0x44]
        push ecx
        push esi
        call public_6227950
        mov eax, dword ptr ss : [esp+0x4C]
        add esp, 8
        cmp eax, ebx
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        je public_62289cc
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_62289cc
        public_6228573 : nop
        mov dword ptr ss : [esp+0x10], ebx
        mov ebp, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x3C], 1
        mov eax, dword ptr ss : [ebp]
        push ecx
        push edx
        push ebp
        call dword ptr ds : [eax+0x3C]
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x34]
        mov ecx, dword ptr ds : [edi]
        push edi
        mov byte ptr ss : [esp+0x4C], al
        call dword ptr ds : [ecx+0x3C]
        lea edx, ss:[esp+0x48]
        push 1
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x4C], al
        call public_6222ee0
        lea eax, ss:[esp+0x44]
        push 1
        push eax
        mov ecx, esi
        call public_6222ee0
        mov al, byte ptr ss : [esp+0x44]
        mov byte ptr ss : [esp+0x24], bl
        cmp al, bl
        jbe public_622861d
        public_62285d1 : nop
        mov ebp, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x1C]
        and ebp, 0xFF
        push edx
        push ebp
        push edi
        call dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x28]
        push ecx
        push ebp
        push edi
        call dword ptr ds : [eax+0x28]
        lea edx, ss:[esp+0x1C]
        push 4
        push edx
        mov ecx, esi
        call public_6222ee0
        lea eax, ss:[esp+0x28]
        push 0xC
        push eax
        mov ecx, esi
        call public_6222ee0
        mov al, byte ptr ss : [esp+0x44]
        inc bl
        cmp bl, al
        mov byte ptr ss : [esp+0x24], bl
        jb public_62285d1
        public_622861d : nop
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call public_620a5a0
        jmp public_62289cc
        public_6228633 : nop
        mov ebp, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edi]
        lea edx, ss:[esp+0x44]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push eax
        push ebp
        call dword ptr ds : [ecx+0x48]
        mov ecx, dword ptr ss : [esp+0x44]
        push ecx
        mov ecx, esi
        call public_6222f80
        jmp public_62289cc
        public_6228656 : nop
        sub eax, 0x104
        cmp eax, 0xFE
        ja public_62289a7
/*FIXUP xor edx, edx @0x6228666*/
/*FIXUP mov dl, byte ptr ds : [eax+public_62289fc] @0x6228668*/
/*FIXUP jmp dword ptr ds : [edx*4+public_62289e4] @0x622866e*/
  JMPTB cmp eax, 0
  JMPTB mov edx, 0
  JMPTB je public_6228941
  JMPTB cmp eax, 1
  JMPTB mov edx, 1
  JMPTB je public_6228963
  JMPTB cmp eax, 2
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 3
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 4
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 5
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 6
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 7
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 8
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 9
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xA
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xB
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xC
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xD
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xE
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xF
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x10
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x11
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x12
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x13
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x14
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x15
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x16
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x17
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x18
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x19
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x1A
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x1B
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x1C
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x1D
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x1E
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x1F
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x20
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x21
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x22
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x23
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x24
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x25
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x26
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x27
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x28
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x29
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x2A
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x2B
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x2C
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x2D
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x2E
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x2F
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x30
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x31
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x32
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x33
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x34
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x35
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x36
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x37
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x38
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x39
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x3A
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x3B
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x3C
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x3D
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x3E
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x3F
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x40
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x41
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x42
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x43
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x44
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x45
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x46
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x47
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x48
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x49
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x4A
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x4B
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x4C
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x4D
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x4E
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x4F
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x50
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x51
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x52
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x53
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x54
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x55
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x56
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x57
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x58
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x59
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x5A
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x5B
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x5C
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x5D
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x5E
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x5F
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x60
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x61
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x62
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x63
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x64
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x65
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x66
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x67
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x68
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x69
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x6A
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x6B
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x6C
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x6D
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x6E
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x6F
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x70
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x71
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x72
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x73
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x74
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x75
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x76
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x77
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x78
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x79
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x7A
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x7B
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x7C
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x7D
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x7E
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x7F
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x80
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x81
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x82
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x83
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x84
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x85
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x86
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x87
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x88
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x89
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x8A
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x8B
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x8C
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x8D
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x8E
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x8F
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x90
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x91
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x92
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x93
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x94
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x95
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x96
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x97
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x98
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x99
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x9A
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x9B
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x9C
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x9D
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x9E
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0x9F
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xA0
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xA1
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xA2
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xA3
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xA4
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xA5
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xA6
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xA7
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xA8
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xA9
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xAA
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xAB
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xAC
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xAD
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xAE
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xAF
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xB0
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xB1
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xB2
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xB3
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xB4
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xB5
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xB6
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xB7
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xB8
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xB9
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xBA
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xBB
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xBC
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xBD
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xBE
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xBF
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xC0
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xC1
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xC2
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xC3
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xC4
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xC5
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xC6
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xC7
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xC8
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xC9
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xCA
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xCB
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xCC
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xCD
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xCE
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xCF
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xD0
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xD1
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xD2
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xD3
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xD4
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xD5
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xD6
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xD7
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xD8
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xD9
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xDA
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xDB
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xDC
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xDD
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xDE
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xDF
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xE0
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xE1
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xE2
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xE3
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xE4
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xE5
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xE6
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xE7
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xE8
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xE9
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xEA
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xEB
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xEC
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xED
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xEE
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xEF
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xF0
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xF1
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xF2
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xF3
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xF4
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xF5
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xF6
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xF7
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xF8
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xF9
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xFA
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xFB
  JMPTB mov edx, 5
  JMPTB je public_62289a7
  JMPTB cmp eax, 0xFC
  JMPTB mov edx, 2
  JMPTB je public_6228675
  JMPTB cmp eax, 0xFD
  JMPTB mov edx, 3
  JMPTB je public_6228767
  JMPTB cmp eax, 0xFE
  JMPTB mov edx, 4
  JMPTB je public_6228854
  JMPTB int 3
        public_6228675 : nop
        mov dword ptr ss : [esp+0x1C], ebx
        mov ebp, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x3C], 3
        mov eax, dword ptr ss : [ebp]
        push ecx
        push edx
        push ebp
        call dword ptr ds : [eax+0x54]
        mov edi, dword ptr ss : [esp+0x1C]
        push edi
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x30]
        mov ecx, dword ptr ds : [edi]
        push edi
        mov byte ptr ss : [esp+0x4C], al
        call dword ptr ds : [ecx+0x38]
        lea edx, ss:[esp+0x48]
        push 1
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x4C], al
        call public_6222ee0
        lea eax, ss:[esp+0x44]
        push 1
        push eax
        mov ecx, esi
        call public_6222ee0
        mov al, byte ptr ss : [esp+0x44]
        mov byte ptr ss : [esp+0x18], bl
        cmp al, bl
        jbe public_6228748
        public_62286d3 : nop
        mov dword ptr ss : [esp+0x10], ebx
        mov ebp, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x24]
        and ebp, 0xFF
        push edx
        push ebp
        push edi
        mov byte ptr ss : [esp+0x48], 4
        call dword ptr ds : [ecx+0x20]
        lea ecx, ss:[esp+0x10]
        call public_620a430
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebp
        push edi
        call dword ptr ds : [eax+0x24]
        lea edx, ss:[esp+0x24]
        push 4
        push edx
        mov ecx, esi
        call public_6222ee0
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push esi
        call public_622ace0
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        cmp eax, ebx
        mov byte ptr ss : [esp+0x3C], 3
        je public_6228736
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6228736 : nop
        mov al, byte ptr ss : [esp+0x18]
        mov cl, byte ptr ss : [esp+0x44]
        inc al
        cmp al, cl
        mov byte ptr ss : [esp+0x18], al
        jb public_62286d3
        public_6228748 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        cmp eax, ebx
        je public_62289cc
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_62289cc
        public_6228767 : nop
        mov dword ptr ss : [esp+0x18], ebx
        mov ebp, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x3C], 5
        mov eax, dword ptr ss : [ebp]
        push ecx
        push edx
        push ebp
        call dword ptr ds : [eax+0x50]
        mov edi, dword ptr ss : [esp+0x18]
        push edi
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x34]
        mov ecx, dword ptr ds : [edi]
        push edi
        mov byte ptr ss : [esp+0x4C], al
        call dword ptr ds : [ecx+0x3C]
        lea edx, ss:[esp+0x48]
        push 1
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x4C], al
        call public_6222ee0
        lea eax, ss:[esp+0x44]
        push 1
        push eax
        mov ecx, esi
        call public_6222ee0
        mov al, byte ptr ss : [esp+0x44]
        mov byte ptr ss : [esp+0x1C], bl
        cmp al, bl
        jbe public_6228835
        public_62287c5 : nop
        mov dword ptr ss : [esp+0x10], ebx
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x24]
        and ebp, 0xFF
        push edx
        push ebp
        push edi
        mov byte ptr ss : [esp+0x48], 6
        call dword ptr ds : [ecx+0x24]
        lea ecx, ss:[esp+0x10]
        call public_620a5a0
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebp
        push edi
        call dword ptr ds : [eax+0x28]
        lea edx, ss:[esp+0x24]
        push 4
        push edx
        mov ecx, esi
        call public_6222ee0
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push esi
        call public_622ad90
        add esp, 8
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x3C], 5
        call public_620a5a0
        mov al, byte ptr ss : [esp+0x1C]
        mov cl, byte ptr ss : [esp+0x44]
        inc al
        cmp al, cl
        mov byte ptr ss : [esp+0x1C], al
        jb public_62287c5
        public_6228835 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        cmp eax, ebx
        je public_62289cc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_62289cc
        public_6228854 : nop
        mov dword ptr ss : [esp+0x18], ebx
        mov ebp, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x3C], 7
        mov edx, dword ptr ss : [ebp]
        push eax
        push ecx
        push ebp
        call dword ptr ds : [edx+0x58]
        mov edi, dword ptr ss : [esp+0x18]
        push edi
        mov edx, dword ptr ds : [edi]
        call dword ptr ds : [edx+0x30]
        mov byte ptr ss : [esp+0x48], al
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0x38]
        lea ecx, ss:[esp+0x48]
        push 1
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x4C], al
        call public_6222ee0
        lea edx, ss:[esp+0x44]
        push 1
        push edx
        mov ecx, esi
        call public_6222ee0
        mov al, byte ptr ss : [esp+0x44]
        mov byte ptr ss : [esp+0x1C], bl
        cmp al, bl
        jbe public_6228922
        public_62288b2 : nop
        mov dword ptr ss : [esp+0x10], ebx
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x24]
        and ebp, 0xFF
        push ecx
        push ebp
        push edi
        mov byte ptr ss : [esp+0x48], 8
        call dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x10]
        call public_620a710
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x10]
        push eax
        push ebp
        push edi
        call dword ptr ds : [edx+0x24]
        lea ecx, ss:[esp+0x24]
        push 4
        push ecx
        mov ecx, esi
        call public_6222ee0
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push esi
        call public_6227950
        add esp, 8
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x3C], 7
        call public_620a710
        mov al, byte ptr ss : [esp+0x1C]
        mov cl, byte ptr ss : [esp+0x44]
        inc al
        cmp al, cl
        mov byte ptr ss : [esp+0x1C], al
        jb public_62288b2
        public_6228922 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        cmp eax, ebx
        je public_62289cc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_62289cc
        public_6228941 : nop
        mov ebp, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x1C]
        mov edx, dword ptr ss : [ebp]
        push eax
        push ecx
        push ebp
        call dword ptr ds : [edx+0x34]
        lea edx, ss:[esp+0x1C]
        push 8
        push edx
        mov ecx, esi
        call public_6222ee0
        jmp public_62289cc
        public_6228963 : nop
        mov dword ptr ss : [esp+0x24], ebx
        mov ebp, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x3C], 9
        mov eax, dword ptr ss : [ebp]
        push ecx
        push edx
        push ebp
        call dword ptr ds : [eax+0x18]
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push esi
        call public_6227ef0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        cmp eax, ebx
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        je public_62289cc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_62289cc
        public_62289a7 : nop
        mov edx, dword ptr ds : [public_624b004]
/*FIXUP push offset public_625647c @0x62289ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625647c
        push 0x257
        mov eax, 0x100001
/*FIXUP push offset public_62563d0 @0x62289bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62563d0
/*FIXUP push offset public_625506c @0x62289c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_62289cc : nop
        pop esi
        pop ebp
        pop ebx
        public_62289cf : nop
        mov ecx, dword ptr ss : [esp+0x28]
        xor eax, eax
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x6228350)
        ASM_EXPORT_ENTRY_FIRST(0x6228675, public_6228675)
        ASM_EXPORT_ENTRY(0x6228767, public_6228767)
        ASM_EXPORT_ENTRY(0x6228854, public_6228854)
        ASM_EXPORT_ENTRY(0x6228941, public_6228941)
        ASM_EXPORT_ENTRY(0x6228963, public_6228963)
        ASM_EXPORT_ENTRY_LAST(0x62289a7, public_62289a7)
    }
}

#undef public_62283bd
#undef public_6228430
#undef public_6228455
#undef public_62284b8
#undef public_6228504
#undef public_622851a
#undef public_6228573
#undef public_62285d1
#undef public_622861d
#undef public_6228633
#undef public_6228656
#undef public_6228675
#undef public_62286d3
#undef public_6228736
#undef public_6228748
#undef public_6228767
#undef public_62287c5
#undef public_6228835
#undef public_6228854
#undef public_62288b2
#undef public_6228922
#undef public_6228941
#undef public_6228963
#undef public_62289a7
#undef public_62289cc
#undef public_62289cf

#pragma init_seg(compiler)
extern "C" void const* const public_6228675 = __AsmFindLabelExport(&internal_6228350, 0x6228675);
extern "C" void const* const public_6228767 = __AsmFindLabelExport(&internal_6228350, 0x6228767);
extern "C" void const* const public_6228854 = __AsmFindLabelExport(&internal_6228350, 0x6228854);
extern "C" void const* const public_6228941 = __AsmFindLabelExport(&internal_6228350, 0x6228941);
extern "C" void const* const public_6228963 = __AsmFindLabelExport(&internal_6228350, 0x6228963);
extern "C" void const* const public_62289a7 = __AsmFindLabelExport(&internal_6228350, 0x62289a7);
