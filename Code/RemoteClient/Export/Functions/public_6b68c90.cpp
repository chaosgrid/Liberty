#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b68cd3 _public_6b68cd3
#define public_6b68ce9 _public_6b68ce9
#define public_6b68cfa _public_6b68cfa
#define public_6b68d15 _public_6b68d15
#define public_6b68d30 _public_6b68d30
#define public_6b68d46 _public_6b68d46
#define public_6b68d59 _public_6b68d59
#define public_6b68d66 _public_6b68d66
#define public_6b68d7d _public_6b68d7d
#define public_6b68d94 _public_6b68d94
#define public_6b68dac _public_6b68dac
#define public_6b68dbf _public_6b68dbf
#define public_6b68dca _public_6b68dca
#define public_6b68de1 _public_6b68de1
#define public_6b68df4 _public_6b68df4
#define public_6b68e06 _public_6b68e06
#define public_6b68e1d _public_6b68e1d
#define public_6b68e34 _public_6b68e34
#define public_6b68e4b _public_6b68e4b
#define public_6b68e5e _public_6b68e5e
#define public_6b68e84 _public_6b68e84
#define public_6b68eaa _public_6b68eaa
#define public_6b68eb9 _public_6b68eb9
#define public_6b68ece _public_6b68ece
#define public_6b68efc _public_6b68efc
#define public_6b68f03 _public_6b68f03
#define public_6b68f0c _public_6b68f0c
#define public_6b68f23 _public_6b68f23
#define public_6b68f36 _public_6b68f36
#define public_6b68f5c _public_6b68f5c
#define public_6b68f70 _public_6b68f70
#define public_6b68f7a _public_6b68f7a
#define public_6b68f82 _public_6b68f82
#define public_6b68f85 _public_6b68f85
#define public_6b68f88 _public_6b68f88
#define public_6b68fa8 _public_6b68fa8
#define public_6b68fdb _public_6b68fdb

PROC_DECLARE(0x6b68c90, internal_6b68c90, public_6b68c90);
extern "C" NAKED register_t __cdecl internal_6b68c90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        xor ebx, ebx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebp, ds:[edi+0x18]
        push ebp
        mov ecx, edi
        call public_6b4e740
        cmp eax, ebx
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b68cd3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b68cd3 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [edi+0x20]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b68ce9
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b68ce9 : nop
        cmp dword ptr ds : [edi+0x1C], ebx
        je public_6b68cfa
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b68cfa : nop
        mov eax, dword ptr ss : [ebp]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ss : [ebp], eax
        mov byte ptr ss : [esp+0x18], bl
        call dword ptr ds : [public_6b6b028]
        test al, al
        mov dl, 1
        jne public_6b68d15
        mov dl, bl
        public_6b68d15 : nop
        mov eax, dword ptr ds : [edi+0x20]
        dec eax
        cmp eax, 0x7F
        ja public_6b68f88
/*FIXUP movzx ecx, byte ptr ds : [eax+public_6b69010] @0x6b68d22*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6b68ff0] @0x6b68d29*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6b68e06
  JMPTB cmp eax, 1
  JMPTB mov ecx, 1
  JMPTB je public_6b68d94
  JMPTB cmp eax, 2
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 3
  JMPTB mov ecx, 2
  JMPTB je public_6b68dca
  JMPTB cmp eax, 4
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 5
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 6
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 7
  JMPTB mov ecx, 3
  JMPTB je public_6b68e34
  JMPTB cmp eax, 8
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 9
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 4
  JMPTB je public_6b68f0c
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 5
  JMPTB je public_6b68d66
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x3F
  JMPTB mov ecx, 6
  JMPTB je public_6b68d30
  JMPTB cmp eax, 0x40
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x41
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x42
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x43
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x44
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x45
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x46
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x47
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x48
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x49
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x4A
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x4B
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x4C
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x4D
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x4E
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x4F
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x50
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x51
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x52
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x53
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x54
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x55
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x56
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x57
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x58
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x59
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x5A
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x5B
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x5C
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x5D
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x5E
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x5F
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x60
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x61
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x62
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x63
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x64
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x65
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x66
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x67
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x68
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x69
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x6A
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x6B
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x6C
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x6D
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x6E
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x6F
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x70
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x71
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x72
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x73
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x74
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x75
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x76
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x77
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x78
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x79
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x7A
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x7B
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x7C
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x7D
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x7E
  JMPTB mov ecx, 7
  JMPTB je public_6b68f88
  JMPTB cmp eax, 0x7F
  JMPTB mov ecx, 0
  JMPTB je public_6b68e06
  JMPTB int 3
        public_6b68d30 : nop
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [edi+0x30]
        inc eax
        cmp eax, ebx
        mov dword ptr ds : [esi], eax
        jbe public_6b68d46
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b68d46 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b68d59
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b68d59 : nop
        mov eax, dword ptr ss : [ebp]
        mov byte ptr ds : [eax], cl
        inc eax
        test dl, dl
        mov dword ptr ss : [ebp], eax
        je public_6b68d7d
        public_6b68d66 : nop
        mov edx, dword ptr ds : [esi]
        add edx, 4
        mov dword ptr ds : [esi], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, ecx
        jbe public_6b68d7d
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b68d7d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b68f70
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b68d94 : nop
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [edi+0x24]
        inc ebx
        mov eax, ebx
        cmp eax, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6b68dac
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b68dac : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b68dbf
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b68dbf : nop
        mov eax, dword ptr ss : [ebp]
        mov byte ptr ds : [eax], cl
        inc eax
        jmp public_6b68f85
        public_6b68dca : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6b68de1
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b68de1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b68df4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b68df4 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        test dl, dl
        mov dword ptr ss : [ebp], eax
        je public_6b68e1d
        public_6b68e06 : nop
        mov edx, dword ptr ds : [esi]
        add edx, 4
        mov dword ptr ds : [esi], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, ecx
        jbe public_6b68e1d
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b68e1d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b68f7a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b68e34 : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6b68e4b
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b68e4b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b68e5e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b68e5e : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        mov ecx, 0x16
        jbe public_6b68e84
        mov dword ptr ds : [esi+0xC], ecx
        public_6b68e84 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b68f03
        mov eax, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [eax], ebx
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ebx
        mov dword ptr ds : [esi], eax
        jbe public_6b68eaa
        mov dword ptr ds : [esi+0xC], ecx
        public_6b68eaa : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b68f03
        fld dword ptr ds : [edi+0x3C]
        mov eax, dword ptr ss : [ebp]
        fstp dword ptr ds : [eax]
        public_6b68eb9 : nop
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [esi]
        add eax, 2
        mov dword ptr ds : [esi], eax
        cmp eax, dword ptr ds : [esi+4]
        jbe public_6b68ece
        mov dword ptr ds : [esi+0xC], ecx
        public_6b68ece : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b68f03
        mov eax, dword ptr ss : [ebp]
        mov bx, word ptr ds : [edi+0x40]
        mov word ptr ds : [eax], bx
        add eax, 2
        test dl, dl
        mov dword ptr ss : [ebp], eax
        je public_6b68efc
        mov ebx, dword ptr ds : [esi]
        add ebx, 4
        mov dword ptr ds : [esi], ebx
        mov edx, dword ptr ds : [esi+4]
        mov eax, ebx
        cmp eax, edx
        jbe public_6b68efc
        mov dword ptr ds : [esi+0xC], ecx
        public_6b68efc : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b68f7a
        public_6b68f03 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        ret 0xC
        public_6b68f0c : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6b68f23
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b68f23 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b68f36
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b68f36 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        mov ecx, 0x16
        jbe public_6b68f5c
        mov dword ptr ds : [esi+0xC], ecx
        public_6b68f5c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b68f03
        mov eax, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [eax], ebx
        jmp public_6b68eb9
        public_6b68f70 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        jmp public_6b68f82
        public_6b68f7a : nop
        mov edx, dword ptr ds : [edi+0x28]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], edx
        public_6b68f82 : nop
        add eax, 4
        public_6b68f85 : nop
        mov dword ptr ss : [ebp], eax
        public_6b68f88 : nop
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebp
        mov ecx, edi
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b68fa8
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b68fa8 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6b68fdb
        mov dword ptr ds : [ecx+0x10], esi
        public_6b68fdb : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b68c90)
        ASM_EXPORT_ENTRY_FIRST(0x6b68d30, public_6b68d30)
        ASM_EXPORT_ENTRY(0x6b68d66, public_6b68d66)
        ASM_EXPORT_ENTRY(0x6b68d94, public_6b68d94)
        ASM_EXPORT_ENTRY(0x6b68dca, public_6b68dca)
        ASM_EXPORT_ENTRY(0x6b68e06, public_6b68e06)
        ASM_EXPORT_ENTRY(0x6b68e34, public_6b68e34)
        ASM_EXPORT_ENTRY(0x6b68f0c, public_6b68f0c)
        ASM_EXPORT_ENTRY_LAST(0x6b68f88, public_6b68f88)
    }
}

#undef public_6b68cd3
#undef public_6b68ce9
#undef public_6b68cfa
#undef public_6b68d15
#undef public_6b68d30
#undef public_6b68d46
#undef public_6b68d59
#undef public_6b68d66
#undef public_6b68d7d
#undef public_6b68d94
#undef public_6b68dac
#undef public_6b68dbf
#undef public_6b68dca
#undef public_6b68de1
#undef public_6b68df4
#undef public_6b68e06
#undef public_6b68e1d
#undef public_6b68e34
#undef public_6b68e4b
#undef public_6b68e5e
#undef public_6b68e84
#undef public_6b68eaa
#undef public_6b68eb9
#undef public_6b68ece
#undef public_6b68efc
#undef public_6b68f03
#undef public_6b68f0c
#undef public_6b68f23
#undef public_6b68f36
#undef public_6b68f5c
#undef public_6b68f70
#undef public_6b68f7a
#undef public_6b68f82
#undef public_6b68f85
#undef public_6b68f88
#undef public_6b68fa8
#undef public_6b68fdb

#pragma init_seg(compiler)
extern "C" void const* const public_6b68d30 = __AsmFindLabelExport(&internal_6b68c90, 0x6b68d30);
extern "C" void const* const public_6b68d66 = __AsmFindLabelExport(&internal_6b68c90, 0x6b68d66);
extern "C" void const* const public_6b68d94 = __AsmFindLabelExport(&internal_6b68c90, 0x6b68d94);
extern "C" void const* const public_6b68dca = __AsmFindLabelExport(&internal_6b68c90, 0x6b68dca);
extern "C" void const* const public_6b68e06 = __AsmFindLabelExport(&internal_6b68c90, 0x6b68e06);
extern "C" void const* const public_6b68e34 = __AsmFindLabelExport(&internal_6b68c90, 0x6b68e34);
extern "C" void const* const public_6b68f0c = __AsmFindLabelExport(&internal_6b68c90, 0x6b68f0c);
extern "C" void const* const public_6b68f88 = __AsmFindLabelExport(&internal_6b68c90, 0x6b68f88);
