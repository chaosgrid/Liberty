#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bfffc3 _public_6bfffc3
#define public_6bfffd9 _public_6bfffd9
#define public_6bfffea _public_6bfffea
#define public_6c00005 _public_6c00005
#define public_6c00020 _public_6c00020
#define public_6c00036 _public_6c00036
#define public_6c00049 _public_6c00049
#define public_6c00056 _public_6c00056
#define public_6c0006d _public_6c0006d
#define public_6c00084 _public_6c00084
#define public_6c0009c _public_6c0009c
#define public_6c000af _public_6c000af
#define public_6c000ba _public_6c000ba
#define public_6c000d1 _public_6c000d1
#define public_6c000e4 _public_6c000e4
#define public_6c000f6 _public_6c000f6
#define public_6c0010d _public_6c0010d
#define public_6c00124 _public_6c00124
#define public_6c0013b _public_6c0013b
#define public_6c0014e _public_6c0014e
#define public_6c00174 _public_6c00174
#define public_6c0019a _public_6c0019a
#define public_6c001a9 _public_6c001a9
#define public_6c001be _public_6c001be
#define public_6c001ec _public_6c001ec
#define public_6c001f3 _public_6c001f3
#define public_6c001fc _public_6c001fc
#define public_6c00213 _public_6c00213
#define public_6c00226 _public_6c00226
#define public_6c0024c _public_6c0024c
#define public_6c00260 _public_6c00260
#define public_6c0026a _public_6c0026a
#define public_6c00272 _public_6c00272
#define public_6c00275 _public_6c00275
#define public_6c00278 _public_6c00278
#define public_6c00298 _public_6c00298
#define public_6c002cb _public_6c002cb

PROC_DECLARE(0x6bfff80, internal_6bfff80, public_6bfff80);
extern "C" NAKED register_t __cdecl internal_6bfff80()
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
        call public_6bebe50
        cmp eax, ebx
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bfffc3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfffc3 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [edi+0x20]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6bfffd9
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bfffd9 : nop
        cmp dword ptr ds : [edi+0x1C], ebx
        je public_6bfffea
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfffea : nop
        mov eax, dword ptr ss : [ebp]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ss : [ebp], eax
        mov byte ptr ss : [esp+0x18], bl
        call dword ptr ds : [public_6c0b01c]
        test al, al
        mov dl, 1
        jne public_6c00005
        mov dl, bl
        public_6c00005 : nop
        mov eax, dword ptr ds : [edi+0x20]
        dec eax
        cmp eax, 0x7F
        ja public_6c00278
/*FIXUP movzx ecx, byte ptr ds : [eax+public_6c00300] @0x6c00012*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6c002e0] @0x6c00019*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6c000f6
  JMPTB cmp eax, 1
  JMPTB mov ecx, 1
  JMPTB je public_6c00084
  JMPTB cmp eax, 2
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 3
  JMPTB mov ecx, 2
  JMPTB je public_6c000ba
  JMPTB cmp eax, 4
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 5
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 6
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 7
  JMPTB mov ecx, 3
  JMPTB je public_6c00124
  JMPTB cmp eax, 8
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 9
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 4
  JMPTB je public_6c001fc
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 5
  JMPTB je public_6c00056
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x3F
  JMPTB mov ecx, 6
  JMPTB je public_6c00020
  JMPTB cmp eax, 0x40
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x41
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x42
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x43
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x44
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x45
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x46
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x47
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x48
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x49
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x4A
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x4B
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x4C
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x4D
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x4E
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x4F
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x50
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x51
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x52
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x53
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x54
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x55
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x56
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x57
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x58
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x59
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x5A
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x5B
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x5C
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x5D
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x5E
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x5F
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x60
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x61
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x62
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x63
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x64
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x65
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x66
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x67
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x68
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x69
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x6A
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x6B
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x6C
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x6D
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x6E
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x6F
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x70
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x71
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x72
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x73
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x74
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x75
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x76
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x77
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x78
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x79
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x7A
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x7B
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x7C
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x7D
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x7E
  JMPTB mov ecx, 7
  JMPTB je public_6c00278
  JMPTB cmp eax, 0x7F
  JMPTB mov ecx, 0
  JMPTB je public_6c000f6
  JMPTB int 3
        public_6c00020 : nop
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [edi+0x30]
        inc eax
        cmp eax, ebx
        mov dword ptr ds : [esi], eax
        jbe public_6c00036
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c00036 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c00049
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c00049 : nop
        mov eax, dword ptr ss : [ebp]
        mov byte ptr ds : [eax], cl
        inc eax
        test dl, dl
        mov dword ptr ss : [ebp], eax
        je public_6c0006d
        public_6c00056 : nop
        mov edx, dword ptr ds : [esi]
        add edx, 4
        mov dword ptr ds : [esi], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, ecx
        jbe public_6c0006d
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c0006d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c00260
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c00084 : nop
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [edi+0x24]
        inc ebx
        mov eax, ebx
        cmp eax, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6c0009c
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c0009c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c000af
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c000af : nop
        mov eax, dword ptr ss : [ebp]
        mov byte ptr ds : [eax], cl
        inc eax
        jmp public_6c00275
        public_6c000ba : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6c000d1
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c000d1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c000e4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c000e4 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        test dl, dl
        mov dword ptr ss : [ebp], eax
        je public_6c0010d
        public_6c000f6 : nop
        mov edx, dword ptr ds : [esi]
        add edx, 4
        mov dword ptr ds : [esi], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, ecx
        jbe public_6c0010d
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c0010d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c0026a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c00124 : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6c0013b
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c0013b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c0014e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c0014e : nop
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
        jbe public_6c00174
        mov dword ptr ds : [esi+0xC], ecx
        public_6c00174 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c001f3
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
        jbe public_6c0019a
        mov dword ptr ds : [esi+0xC], ecx
        public_6c0019a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c001f3
        fld dword ptr ds : [edi+0x3C]
        mov eax, dword ptr ss : [ebp]
        fstp dword ptr ds : [eax]
        public_6c001a9 : nop
        add eax, 4
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [esi]
        add eax, 2
        mov dword ptr ds : [esi], eax
        cmp eax, dword ptr ds : [esi+4]
        jbe public_6c001be
        mov dword ptr ds : [esi+0xC], ecx
        public_6c001be : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c001f3
        mov eax, dword ptr ss : [ebp]
        mov bx, word ptr ds : [edi+0x40]
        mov word ptr ds : [eax], bx
        add eax, 2
        test dl, dl
        mov dword ptr ss : [ebp], eax
        je public_6c001ec
        mov ebx, dword ptr ds : [esi]
        add ebx, 4
        mov dword ptr ds : [esi], ebx
        mov edx, dword ptr ds : [esi+4]
        mov eax, ebx
        cmp eax, edx
        jbe public_6c001ec
        mov dword ptr ds : [esi+0xC], ecx
        public_6c001ec : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c0026a
        public_6c001f3 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        ret 0xC
        public_6c001fc : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6c00213
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c00213 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c00226
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c00226 : nop
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
        jbe public_6c0024c
        mov dword ptr ds : [esi+0xC], ecx
        public_6c0024c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c001f3
        mov eax, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [eax], ebx
        jmp public_6c001a9
        public_6c00260 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        jmp public_6c00272
        public_6c0026a : nop
        mov edx, dword ptr ds : [edi+0x28]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], edx
        public_6c00272 : nop
        add eax, 4
        public_6c00275 : nop
        mov dword ptr ss : [ebp], eax
        public_6c00278 : nop
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebp
        mov ecx, edi
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c00298
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c00298 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6bec3b0
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
        jbe public_6c002cb
        mov dword ptr ds : [ecx+0x10], esi
        public_6c002cb : nop
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
        UNREACHABLE_TRAP(0x6bfff80)
        ASM_EXPORT_ENTRY_FIRST(0x6c00020, public_6c00020)
        ASM_EXPORT_ENTRY(0x6c00056, public_6c00056)
        ASM_EXPORT_ENTRY(0x6c00084, public_6c00084)
        ASM_EXPORT_ENTRY(0x6c000ba, public_6c000ba)
        ASM_EXPORT_ENTRY(0x6c000f6, public_6c000f6)
        ASM_EXPORT_ENTRY(0x6c00124, public_6c00124)
        ASM_EXPORT_ENTRY(0x6c001fc, public_6c001fc)
        ASM_EXPORT_ENTRY_LAST(0x6c00278, public_6c00278)
    }
}

#undef public_6bfffc3
#undef public_6bfffd9
#undef public_6bfffea
#undef public_6c00005
#undef public_6c00020
#undef public_6c00036
#undef public_6c00049
#undef public_6c00056
#undef public_6c0006d
#undef public_6c00084
#undef public_6c0009c
#undef public_6c000af
#undef public_6c000ba
#undef public_6c000d1
#undef public_6c000e4
#undef public_6c000f6
#undef public_6c0010d
#undef public_6c00124
#undef public_6c0013b
#undef public_6c0014e
#undef public_6c00174
#undef public_6c0019a
#undef public_6c001a9
#undef public_6c001be
#undef public_6c001ec
#undef public_6c001f3
#undef public_6c001fc
#undef public_6c00213
#undef public_6c00226
#undef public_6c0024c
#undef public_6c00260
#undef public_6c0026a
#undef public_6c00272
#undef public_6c00275
#undef public_6c00278
#undef public_6c00298
#undef public_6c002cb

#pragma init_seg(compiler)
extern "C" void const* const public_6c00020 = __AsmFindLabelExport(&internal_6bfff80, 0x6c00020);
extern "C" void const* const public_6c00056 = __AsmFindLabelExport(&internal_6bfff80, 0x6c00056);
extern "C" void const* const public_6c00084 = __AsmFindLabelExport(&internal_6bfff80, 0x6c00084);
extern "C" void const* const public_6c000ba = __AsmFindLabelExport(&internal_6bfff80, 0x6c000ba);
extern "C" void const* const public_6c000f6 = __AsmFindLabelExport(&internal_6bfff80, 0x6c000f6);
extern "C" void const* const public_6c00124 = __AsmFindLabelExport(&internal_6bfff80, 0x6c00124);
extern "C" void const* const public_6c001fc = __AsmFindLabelExport(&internal_6bfff80, 0x6c001fc);
extern "C" void const* const public_6c00278 = __AsmFindLabelExport(&internal_6bfff80, 0x6c00278);
