#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da7073 _public_6da7073
#define public_6da7089 _public_6da7089
#define public_6da709a _public_6da709a
#define public_6da70b5 _public_6da70b5
#define public_6da70d0 _public_6da70d0
#define public_6da70e6 _public_6da70e6
#define public_6da70f9 _public_6da70f9
#define public_6da7106 _public_6da7106
#define public_6da711d _public_6da711d
#define public_6da7134 _public_6da7134
#define public_6da714c _public_6da714c
#define public_6da715f _public_6da715f
#define public_6da716a _public_6da716a
#define public_6da7181 _public_6da7181
#define public_6da7194 _public_6da7194
#define public_6da71a6 _public_6da71a6
#define public_6da71bd _public_6da71bd
#define public_6da71d4 _public_6da71d4
#define public_6da71eb _public_6da71eb
#define public_6da71fe _public_6da71fe
#define public_6da7224 _public_6da7224
#define public_6da724a _public_6da724a
#define public_6da7259 _public_6da7259
#define public_6da726e _public_6da726e
#define public_6da729c _public_6da729c
#define public_6da72a3 _public_6da72a3
#define public_6da72ac _public_6da72ac
#define public_6da72c3 _public_6da72c3
#define public_6da72d6 _public_6da72d6
#define public_6da72fc _public_6da72fc
#define public_6da7310 _public_6da7310
#define public_6da731a _public_6da731a
#define public_6da7322 _public_6da7322
#define public_6da7325 _public_6da7325
#define public_6da7328 _public_6da7328
#define public_6da7348 _public_6da7348
#define public_6da737b _public_6da737b

PROC_DECLARE(0x6da7030, internal_6da7030, public_6da7030);
extern "C" NAKED register_t __cdecl internal_6da7030()
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
        call public_6da1380
        cmp eax, ebx
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da7073
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da7073 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [edi+0x20]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6da7089
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da7089 : nop
        cmp dword ptr ds : [edi+0x1C], ebx
        je public_6da709a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da709a : nop
        mov eax, dword ptr ss : [ebp]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ss : [ebp], eax
        mov byte ptr ss : [esp+0x18], bl
        call dword ptr ds : [public_6db3104]
        test al, al
        mov dl, 1
        jne public_6da70b5
        mov dl, bl
        public_6da70b5 : nop
        mov eax, dword ptr ds : [edi+0x20]
        dec eax
        cmp eax, 0x7F
        ja public_6da7328
/*FIXUP movzx ecx, byte ptr ds : [eax+public_6da73b0] @0x6da70c2*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6da7390] @0x6da70c9*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6da71a6
  JMPTB cmp eax, 1
  JMPTB mov ecx, 1
  JMPTB je public_6da7134
  JMPTB cmp eax, 2
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 3
  JMPTB mov ecx, 2
  JMPTB je public_6da716a
  JMPTB cmp eax, 4
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 5
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 6
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 7
  JMPTB mov ecx, 3
  JMPTB je public_6da71d4
  JMPTB cmp eax, 8
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 9
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 4
  JMPTB je public_6da72ac
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 5
  JMPTB je public_6da7106
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x3F
  JMPTB mov ecx, 6
  JMPTB je public_6da70d0
  JMPTB cmp eax, 0x40
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x41
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x42
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x43
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x44
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x45
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x46
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x47
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x48
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x49
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x4A
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x4B
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x4C
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x4D
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x4E
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x4F
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x50
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x51
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x52
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x53
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x54
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x55
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x56
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x57
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x58
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x59
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x5A
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x5B
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x5C
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x5D
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x5E
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x5F
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x60
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x61
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x62
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x63
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x64
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x65
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x66
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x67
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x68
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x69
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x6A
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x6B
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x6C
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x6D
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x6E
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x6F
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x70
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x71
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x72
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x73
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x74
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x75
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x76
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x77
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x78
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x79
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x7A
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x7B
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x7C
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x7D
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x7E
  JMPTB mov ecx, 7
  JMPTB je public_6da7328
  JMPTB cmp eax, 0x7F
  JMPTB mov ecx, 0
  JMPTB je public_6da71a6
  JMPTB int 3
        public_6da70d0 : nop
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [edi+0x30]
        inc eax
        cmp eax, ebx
        mov dword ptr ds : [esi], eax
        jbe public_6da70e6
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da70e6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da70f9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da70f9 : nop
        mov eax, dword ptr ss : [ebp]
        mov byte ptr ds : [eax], cl
        inc eax
        test dl, dl
        mov dword ptr ss : [ebp], eax
        je public_6da711d
        public_6da7106 : nop
        mov edx, dword ptr ds : [esi]
        add edx, 4
        mov dword ptr ds : [esi], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, ecx
        jbe public_6da711d
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da711d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da7310
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da7134 : nop
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [edi+0x24]
        inc ebx
        mov eax, ebx
        cmp eax, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6da714c
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da714c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da715f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da715f : nop
        mov eax, dword ptr ss : [ebp]
        mov byte ptr ds : [eax], cl
        inc eax
        jmp public_6da7325
        public_6da716a : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6da7181
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da7181 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da7194
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da7194 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        test dl, dl
        mov dword ptr ss : [ebp], eax
        je public_6da71bd
        public_6da71a6 : nop
        mov edx, dword ptr ds : [esi]
        add edx, 4
        mov dword ptr ds : [esi], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, ecx
        jbe public_6da71bd
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da71bd : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da731a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da71d4 : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6da71eb
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da71eb : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da71fe
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da71fe : nop
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
        jbe public_6da7224
        mov dword ptr ds : [esi+0xC], ecx
        public_6da7224 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da72a3
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
        jbe public_6da724a
        mov dword ptr ds : [esi+0xC], ecx
        public_6da724a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da72a3
        fld dword ptr ds : [edi+0x3C]
        mov eax, dword ptr ss : [ebp]
        fstp dword ptr ds : [eax]
        public_6da7259 : nop
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [esi]
        add eax, 2
        mov dword ptr ds : [esi], eax
        cmp eax, dword ptr ds : [esi+4]
        jbe public_6da726e
        mov dword ptr ds : [esi+0xC], ecx
        public_6da726e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da72a3
        mov eax, dword ptr ss : [ebp]
        mov bx, word ptr ds : [edi+0x40]
        mov word ptr ds : [eax], bx
        add eax, 2
        test dl, dl
        mov dword ptr ss : [ebp], eax
        je public_6da729c
        mov ebx, dword ptr ds : [esi]
        add ebx, 4
        mov dword ptr ds : [esi], ebx
        mov edx, dword ptr ds : [esi+4]
        mov eax, ebx
        cmp eax, edx
        jbe public_6da729c
        mov dword ptr ds : [esi+0xC], ecx
        public_6da729c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da731a
        public_6da72a3 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        ret 0xC
        public_6da72ac : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6da72c3
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da72c3 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da72d6
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da72d6 : nop
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
        jbe public_6da72fc
        mov dword ptr ds : [esi+0xC], ecx
        public_6da72fc : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da72a3
        mov eax, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [eax], ebx
        jmp public_6da7259
        public_6da7310 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        jmp public_6da7322
        public_6da731a : nop
        mov edx, dword ptr ds : [edi+0x28]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], edx
        public_6da7322 : nop
        add eax, 4
        public_6da7325 : nop
        mov dword ptr ss : [ebp], eax
        public_6da7328 : nop
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebp
        mov ecx, edi
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da7348
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da7348 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6da16b0
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
        jbe public_6da737b
        mov dword ptr ds : [ecx+0x10], esi
        public_6da737b : nop
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
        UNREACHABLE_TRAP(0x6da7030)
        ASM_EXPORT_ENTRY_FIRST(0x6da70d0, public_6da70d0)
        ASM_EXPORT_ENTRY(0x6da7106, public_6da7106)
        ASM_EXPORT_ENTRY(0x6da7134, public_6da7134)
        ASM_EXPORT_ENTRY(0x6da716a, public_6da716a)
        ASM_EXPORT_ENTRY(0x6da71a6, public_6da71a6)
        ASM_EXPORT_ENTRY(0x6da71d4, public_6da71d4)
        ASM_EXPORT_ENTRY(0x6da72ac, public_6da72ac)
        ASM_EXPORT_ENTRY_LAST(0x6da7328, public_6da7328)
    }
}

#undef public_6da7073
#undef public_6da7089
#undef public_6da709a
#undef public_6da70b5
#undef public_6da70d0
#undef public_6da70e6
#undef public_6da70f9
#undef public_6da7106
#undef public_6da711d
#undef public_6da7134
#undef public_6da714c
#undef public_6da715f
#undef public_6da716a
#undef public_6da7181
#undef public_6da7194
#undef public_6da71a6
#undef public_6da71bd
#undef public_6da71d4
#undef public_6da71eb
#undef public_6da71fe
#undef public_6da7224
#undef public_6da724a
#undef public_6da7259
#undef public_6da726e
#undef public_6da729c
#undef public_6da72a3
#undef public_6da72ac
#undef public_6da72c3
#undef public_6da72d6
#undef public_6da72fc
#undef public_6da7310
#undef public_6da731a
#undef public_6da7322
#undef public_6da7325
#undef public_6da7328
#undef public_6da7348
#undef public_6da737b

#pragma init_seg(compiler)
extern "C" void const* const public_6da70d0 = __AsmFindLabelExport(&internal_6da7030, 0x6da70d0);
extern "C" void const* const public_6da7106 = __AsmFindLabelExport(&internal_6da7030, 0x6da7106);
extern "C" void const* const public_6da7134 = __AsmFindLabelExport(&internal_6da7030, 0x6da7134);
extern "C" void const* const public_6da716a = __AsmFindLabelExport(&internal_6da7030, 0x6da716a);
extern "C" void const* const public_6da71a6 = __AsmFindLabelExport(&internal_6da7030, 0x6da71a6);
extern "C" void const* const public_6da71d4 = __AsmFindLabelExport(&internal_6da7030, 0x6da71d4);
extern "C" void const* const public_6da72ac = __AsmFindLabelExport(&internal_6da7030, 0x6da72ac);
extern "C" void const* const public_6da7328 = __AsmFindLabelExport(&internal_6da7030, 0x6da7328);
