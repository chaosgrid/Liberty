#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6d27180);
CLANG_FORWARD_PROC_SYMBOL(public_6d27a60);
CLANG_FORWARD_PROC_SYMBOL(public_6d281c0);

#define public_6d27aa0 _public_6d27aa0
#define public_6d27ad0 _public_6d27ad0
#define public_6d27ad5 _public_6d27ad5
#define public_6d27af2 _public_6d27af2
#define public_6d27b02 _public_6d27b02
#define public_6d27b10 _public_6d27b10
#define public_6d27b25 _public_6d27b25
#define public_6d27b54 _public_6d27b54
#define public_6d27b94 _public_6d27b94
#define public_6d27bb9 _public_6d27bb9
#define public_6d27bd5 _public_6d27bd5
#define public_6d27be3 _public_6d27be3
#define public_6d27bf8 _public_6d27bf8
#define public_6d27c27 _public_6d27c27
#define public_6d27c67 _public_6d27c67
#define public_6d27c8c _public_6d27c8c
#define public_6d27c9c _public_6d27c9c
#define public_6d27caa _public_6d27caa
#define public_6d27cbf _public_6d27cbf
#define public_6d27cee _public_6d27cee
#define public_6d27d2e _public_6d27d2e
#define public_6d27d53 _public_6d27d53
#define public_6d27d63 _public_6d27d63
#define public_6d27d71 _public_6d27d71
#define public_6d27d86 _public_6d27d86
#define public_6d27db5 _public_6d27db5
#define public_6d27df5 _public_6d27df5
#define public_6d27e1a _public_6d27e1a
#define public_6d27e2a _public_6d27e2a
#define public_6d27e38 _public_6d27e38
#define public_6d27e4d _public_6d27e4d
#define public_6d27e7c _public_6d27e7c
#define public_6d27ebc _public_6d27ebc
#define public_6d27ee1 _public_6d27ee1
#define public_6d27ef5 _public_6d27ef5
#define public_6d27f09 _public_6d27f09
#define public_6d27f1d _public_6d27f1d
#define public_6d27f51 _public_6d27f51
#define public_6d27f56 _public_6d27f56
#define public_6d27f76 _public_6d27f76
#define public_6d27f7f _public_6d27f7f
#define public_6d27fb0 _public_6d27fb0
#define public_6d27ff7 _public_6d27ff7
#define public_6d2800b _public_6d2800b
#define public_6d28030 _public_6d28030
#define public_6d2804d _public_6d2804d
#define public_6d28059 _public_6d28059
#define public_6d28065 _public_6d28065
#define public_6d2808e _public_6d2808e
#define public_6d2809f _public_6d2809f
#define public_6d280d3 _public_6d280d3
#define public_6d280e6 _public_6d280e6
#define public_6d280ee _public_6d280ee
#define public_6d280f2 _public_6d280f2
#define public_6d280fd _public_6d280fd
#define public_6d2812d _public_6d2812d

PROC_DECLARE(0x6d27a60, internal_6d27a60, public_6d27a60);
extern "C" NAKED register_t __cdecl internal_6d27a60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        push edi
        je public_6d2812d
        push 1
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0x5C
        call dword ptr ds : [public_6d64b20]
        mov ecx, dword ptr ds : [public_6d64b64]
        mov edi, eax
        cmp dword ptr ds : [ecx], edi
        je public_6d2812d
        nop 
        public_6d27aa0 : nop
        mov eax, dword ptr ds : [esi+8]
        lea edx, ds:[eax-1]
        cmp edx, edi
        je public_6d2812d
        lea ebx, ds:[edi+1]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x20], ebx
        jb public_6d27ad0
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d27ad0
        mov ecx, esi
        call dword ptr ds : [public_6d64b8c]
        mov eax, dword ptr ds : [esi+4]
        lea eax, ds:[eax+ebx*2]
        jmp public_6d27ad5
        public_6d27ad0 : nop
        mov eax, dword ptr ds : [public_6d64b54]
        public_6d27ad5 : nop
        movzx eax, word ptr ds : [eax]
        add eax, 0xFFFFFFD0
        cmp eax, 0x48
        ja public_6d280e6
/*FIXUP movzx ecx, byte ptr ds : [eax+public_6d2816c] @0x6d27ae4*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6d28138] @0x6d27aeb*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6d27f7f
  JMPTB cmp eax, 1
  JMPTB mov ecx, 0
  JMPTB je public_6d27f7f
  JMPTB cmp eax, 2
  JMPTB mov ecx, 0
  JMPTB je public_6d27f7f
  JMPTB cmp eax, 3
  JMPTB mov ecx, 0
  JMPTB je public_6d27f7f
  JMPTB cmp eax, 4
  JMPTB mov ecx, 0
  JMPTB je public_6d27f7f
  JMPTB cmp eax, 5
  JMPTB mov ecx, 0
  JMPTB je public_6d27f7f
  JMPTB cmp eax, 6
  JMPTB mov ecx, 0
  JMPTB je public_6d27f7f
  JMPTB cmp eax, 7
  JMPTB mov ecx, 0
  JMPTB je public_6d27f7f
  JMPTB cmp eax, 8
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 9
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 1
  JMPTB je public_6d27f1d
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 2
  JMPTB je public_6d27af2
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 3
  JMPTB je public_6d27bb9
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 4
  JMPTB je public_6d2809f
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 5
  JMPTB je public_6d27c8c
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 6
  JMPTB je public_6d27d53
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 7
  JMPTB je public_6d27e1a
  JMPTB cmp eax, 0x3F
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x40
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x41
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x42
  JMPTB mov ecx, 8
  JMPTB je public_6d27ee1
  JMPTB cmp eax, 0x43
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x44
  JMPTB mov ecx, 9
  JMPTB je public_6d27ef5
  JMPTB cmp eax, 0x45
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x46
  JMPTB mov ecx, 0xA
  JMPTB je public_6d27f09
  JMPTB cmp eax, 0x47
  JMPTB mov ecx, 0xC
  JMPTB je public_6d280e6
  JMPTB cmp eax, 0x48
  JMPTB mov ecx, 0xB
  JMPTB je public_6d2800b
  JMPTB int 3
        public_6d27af2 : nop
        cmp dword ptr ds : [esi+8], edi
        mov ebp, 2
        jae public_6d27b02
        call dword ptr ds : [public_6d64b04]
        public_6d27b02 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        sub ecx, edi
        cmp ecx, 2
        jae public_6d27b10
        mov ebp, ecx
        public_6d27b10 : nop
        mov edx, dword ptr ds : [public_6d64b64]
        mov ecx, dword ptr ds : [edx]
        sub eax, ebp
        dec ecx
        cmp ecx, eax
        ja public_6d27b25
        call dword ptr ds : [public_6d64b4c]
        public_6d27b25 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d64acc]
        mov eax, dword ptr ds : [esi+8]
        sub eax, ebp
        sub eax, edi
        cmp ebp, 1
        mov dword ptr ss : [esp+0x14], eax
        jbe public_6d27b54
        mov ecx, dword ptr ds : [esi+4]
        push eax
        lea edx, ds:[edi+ebp]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+ebx*2]
        push ecx
        call public_6ce3ac0
        add esp, 0xC
        public_6d27b54 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ebp
        inc eax
        push 0
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d280fd
        cmp ebp, 1
        jae public_6d27b94
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        add ebp, edi
        lea ecx, ds:[eax+ebp*2]
        push ecx
        lea eax, ds:[eax+edx*2]
        push eax
        call public_6ce3ac0
        add esp, 0xC
        public_6d27b94 : nop
        mov ecx, dword ptr ds : [esi+4]
        push 1
        lea edx, ds:[ecx+edi*2]
        push 7
        push edx
        call public_6d281c0
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0xC
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d64b60]
        jmp public_6d280fd
        public_6d27bb9 : nop
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        jne public_6d280ee
        cmp dword ptr ds : [esi+8], edi
        mov ebp, 2
        jae public_6d27bd5
        call dword ptr ds : [public_6d64b04]
        public_6d27bd5 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        sub ecx, edi
        cmp ecx, 2
        jae public_6d27be3
        mov ebp, ecx
        public_6d27be3 : nop
        mov ecx, dword ptr ds : [public_6d64b64]
        mov edx, dword ptr ds : [ecx]
        sub eax, ebp
        dec edx
        cmp edx, eax
        ja public_6d27bf8
        call dword ptr ds : [public_6d64b4c]
        public_6d27bf8 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d64acc]
        mov eax, dword ptr ds : [esi+8]
        sub eax, ebp
        sub eax, edi
        cmp ebp, 1
        mov dword ptr ss : [esp+0x18], eax
        jbe public_6d27c27
        mov ecx, dword ptr ds : [esi+4]
        push eax
        lea eax, ds:[edi+ebp]
        lea edx, ds:[ecx+eax*2]
        push edx
        lea eax, ds:[ecx+ebx*2]
        push eax
        call public_6ce3ac0
        add esp, 0xC
        public_6d27c27 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ebp
        inc eax
        push 0
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d280fd
        cmp ebp, 1
        jae public_6d27c67
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        add ebp, edi
        lea edx, ds:[eax+ebp*2]
        push edx
        lea edx, ds:[eax+ecx*2]
        push edx
        call public_6ce3ac0
        add esp, 0xC
        public_6d27c67 : nop
        mov eax, dword ptr ds : [esi+4]
        push 1
        lea ecx, ds:[eax+edi*2]
        push 8
        push ecx
        call public_6d281c0
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d64b60]
        jmp public_6d280fd
        public_6d27c8c : nop
        cmp dword ptr ds : [esi+8], edi
        mov ebp, 2
        jae public_6d27c9c
        call dword ptr ds : [public_6d64b04]
        public_6d27c9c : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        sub ecx, edi
        cmp ecx, 2
        jae public_6d27caa
        mov ebp, ecx
        public_6d27caa : nop
        mov ecx, dword ptr ds : [public_6d64b64]
        mov edx, dword ptr ds : [ecx]
        sub eax, ebp
        dec edx
        cmp edx, eax
        ja public_6d27cbf
        call dword ptr ds : [public_6d64b4c]
        public_6d27cbf : nop
        mov ecx, esi
        call dword ptr ds : [public_6d64acc]
        mov eax, dword ptr ds : [esi+8]
        sub eax, ebp
        sub eax, edi
        cmp ebp, 1
        mov dword ptr ss : [esp+0x18], eax
        jbe public_6d27cee
        mov ecx, dword ptr ds : [esi+4]
        push eax
        lea eax, ds:[edi+ebp]
        lea edx, ds:[ecx+eax*2]
        push edx
        lea eax, ds:[ecx+ebx*2]
        push eax
        call public_6ce3ac0
        add esp, 0xC
        public_6d27cee : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ebp
        inc eax
        push 0
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d280fd
        cmp ebp, 1
        jae public_6d27d2e
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        add ebp, edi
        lea edx, ds:[eax+ebp*2]
        push edx
        lea edx, ds:[eax+ecx*2]
        push edx
        call public_6ce3ac0
        add esp, 0xC
        public_6d27d2e : nop
        mov eax, dword ptr ds : [esi+4]
        push 1
        lea ecx, ds:[eax+edi*2]
        push 0x1B
        push ecx
        call public_6d281c0
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d64b60]
        jmp public_6d280fd
        public_6d27d53 : nop
        cmp dword ptr ds : [esi+8], edi
        mov ebp, 2
        jae public_6d27d63
        call dword ptr ds : [public_6d64b04]
        public_6d27d63 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        sub ecx, edi
        cmp ecx, 2
        jae public_6d27d71
        mov ebp, ecx
        public_6d27d71 : nop
        mov ecx, dword ptr ds : [public_6d64b64]
        mov edx, dword ptr ds : [ecx]
        sub eax, ebp
        dec edx
        cmp edx, eax
        ja public_6d27d86
        call dword ptr ds : [public_6d64b4c]
        public_6d27d86 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d64acc]
        mov eax, dword ptr ds : [esi+8]
        sub eax, ebp
        sub eax, edi
        cmp ebp, 1
        mov dword ptr ss : [esp+0x18], eax
        jbe public_6d27db5
        mov ecx, dword ptr ds : [esi+4]
        push eax
        lea eax, ds:[edi+ebp]
        lea edx, ds:[ecx+eax*2]
        push edx
        lea eax, ds:[ecx+ebx*2]
        push eax
        call public_6ce3ac0
        add esp, 0xC
        public_6d27db5 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ebp
        inc eax
        push 0
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d280fd
        cmp ebp, 1
        jae public_6d27df5
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        add ebp, edi
        lea edx, ds:[eax+ebp*2]
        push edx
        lea edx, ds:[eax+ecx*2]
        push edx
        call public_6ce3ac0
        add esp, 0xC
        public_6d27df5 : nop
        mov eax, dword ptr ds : [esi+4]
        push 1
        lea ecx, ds:[eax+edi*2]
        push 0xC
        push ecx
        call public_6d281c0
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d64b60]
        jmp public_6d280fd
        public_6d27e1a : nop
        cmp dword ptr ds : [esi+8], edi
        mov ebp, 2
        jae public_6d27e2a
        call dword ptr ds : [public_6d64b04]
        public_6d27e2a : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        sub ecx, edi
        cmp ecx, 2
        jae public_6d27e38
        mov ebp, ecx
        public_6d27e38 : nop
        mov ecx, dword ptr ds : [public_6d64b64]
        mov edx, dword ptr ds : [ecx]
        sub eax, ebp
        dec edx
        cmp edx, eax
        ja public_6d27e4d
        call dword ptr ds : [public_6d64b4c]
        public_6d27e4d : nop
        mov ecx, esi
        call dword ptr ds : [public_6d64acc]
        mov eax, dword ptr ds : [esi+8]
        sub eax, ebp
        sub eax, edi
        cmp ebp, 1
        mov dword ptr ss : [esp+0x18], eax
        jbe public_6d27e7c
        mov ecx, dword ptr ds : [esi+4]
        push eax
        lea eax, ds:[edi+ebp]
        lea edx, ds:[ecx+eax*2]
        push edx
        lea eax, ds:[ecx+ebx*2]
        push eax
        call public_6ce3ac0
        add esp, 0xC
        public_6d27e7c : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ebp
        inc eax
        push 0
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d280fd
        cmp ebp, 1
        jae public_6d27ebc
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        add ebp, edi
        lea edx, ds:[eax+ebp*2]
        push edx
        lea edx, ds:[eax+ecx*2]
        push edx
        call public_6ce3ac0
        add esp, 0xC
        public_6d27ebc : nop
        mov eax, dword ptr ds : [esi+4]
        push 1
        lea ecx, ds:[eax+edi*2]
        push 0xA
        push ecx
        call public_6d281c0
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d64b60]
        jmp public_6d280fd
        public_6d27ee1 : nop
        push 0xD
        push 1
        push 2
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b1c]
        jmp public_6d280fd
        public_6d27ef5 : nop
        push 9
        push 1
        push 2
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b1c]
        jmp public_6d280fd
        public_6d27f09 : nop
        push 0xB
        push 1
        push 2
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b1c]
        jmp public_6d280fd
        public_6d27f1d : nop
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        je public_6d280f2
        mov eax, dword ptr ds : [esi+8]
        lea ebx, ds:[edi+3]
        cmp ebx, eax
        jae public_6d27f76
        lea ebp, ds:[edi+2]
        cmp eax, ebp
        jb public_6d27f51
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d27f51
        mov ecx, esi
        call dword ptr ds : [public_6d64b8c]
        mov eax, dword ptr ds : [esi+4]
        lea eax, ds:[eax+ebp*2]
        jmp public_6d27f56
        public_6d27f51 : nop
        mov eax, dword ptr ds : [public_6d64b54]
        public_6d27f56 : nop
        cmp word ptr ds : [eax], 0x5C
        jne public_6d27f76
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6d64b18]
        cmp word ptr ds : [eax], 0x5C
        jne public_6d27f76
        push 2
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b50]
        public_6d27f76 : nop
        mov edi, dword ptr ss : [esp+0x20]
        jmp public_6d280fd
        public_6d27f7f : nop
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        jne public_6d280fd
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, esi
        lea ebp, ds:[edi+2]
        call dword ptr ds : [public_6d64b18]
        mov bx, word ptr ds : [eax]
        mov eax, ebp
        sub eax, edi
        sub bx, 0x30
        cmp eax, 4
        jae public_6d27ff7
        mov dword ptr ss : [esp+0x20], eax
        nop 
        public_6d27fb0 : nop
        cmp ebp, dword ptr ds : [esi+8]
        jae public_6d27ff7
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6d64b18]
        cmp word ptr ds : [eax], 0x30
        jb public_6d27ff7
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6d64b18]
        cmp word ptr ds : [eax], 0x37
        ja public_6d27ff7
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6d64b18]
        lea edx, ds:[ebx*8-0x30]
        mov ebx, edx
        add bx, word ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x20]
        inc ebp
        inc eax
        cmp eax, 4
        mov dword ptr ss : [esp+0x20], eax
        jb public_6d27fb0
        public_6d27ff7 : nop
        push ebx
        push 1
        sub ebp, edi
        push ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b1c]
        jmp public_6d280fd
        public_6d2800b : nop
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        jne public_6d280fd
        lea ebp, ds:[edi+2]
        mov eax, ebp
        sub eax, edi
        xor ebx, ebx
        cmp eax, 4
        jae public_6d2808e
        mov dword ptr ss : [esp+0x20], eax
        lea esp, ss:[esp]
        public_6d28030 : nop
        cmp ebp, dword ptr ds : [esi+8]
        jae public_6d2808e
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6d64b18]
        mov ax, word ptr ds : [eax]
        cmp ax, 0x30
        jb public_6d2804d
        cmp ax, 0x39
        jbe public_6d28065
        public_6d2804d : nop
        cmp ax, 0x61
        jb public_6d28059
        cmp ax, 0x66
        jbe public_6d28065
        public_6d28059 : nop
        cmp ax, 0x41
        jb public_6d2808e
        cmp ax, 0x46
        ja public_6d2808e
        public_6d28065 : nop
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6d64b18]
        movzx eax, word ptr ds : [eax]
        push eax
        call public_6d27180
        shl ebx, 4
        add ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        inc ebp
        inc eax
        cmp eax, 4
        mov dword ptr ss : [esp+0x20], eax
        jb public_6d28030
        public_6d2808e : nop
        push ebx
        push 1
        sub ebp, edi
        push ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b1c]
        jmp public_6d280fd
        public_6d2809f : nop
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        jne public_6d280fd
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[edi+2]
        cmp eax, ecx
        jae public_6d280fd
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d64b18]
        movzx eax, word ptr ds : [eax]
        cmp ax, 0x61
        jb public_6d280d3
        cmp ax, 0x7A
        ja public_6d280d3
        push eax
        call dword ptr ds : [public_6d64ba0]
        add esp, 4
        public_6d280d3 : nop
        xor eax, 0x40
        push eax
        push 1
        push 3
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b1c]
        jmp public_6d280fd
        public_6d280e6 : nop
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        je public_6d280f2
        public_6d280ee : nop
        mov edi, ebx
        jmp public_6d280fd
        public_6d280f2 : nop
        push 1
        mov ecx, esi
        push edi
        call dword ptr ds : [public_6d64b50]
        public_6d280fd : nop
        mov eax, dword ptr ds : [esi+8]
        inc edi
        cmp eax, edi
        jbe public_6d2812d
        push 1
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0x5C
        call dword ptr ds : [public_6d64b20]
        mov edx, dword ptr ds : [public_6d64b64]
        mov edi, eax
        cmp dword ptr ds : [edx], edi
        jne public_6d27aa0
        public_6d2812d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d27a60)
        ASM_EXPORT_ENTRY_FIRST(0x6d27af2, public_6d27af2)
        ASM_EXPORT_ENTRY(0x6d27bb9, public_6d27bb9)
        ASM_EXPORT_ENTRY(0x6d27c8c, public_6d27c8c)
        ASM_EXPORT_ENTRY(0x6d27d53, public_6d27d53)
        ASM_EXPORT_ENTRY(0x6d27e1a, public_6d27e1a)
        ASM_EXPORT_ENTRY(0x6d27ee1, public_6d27ee1)
        ASM_EXPORT_ENTRY(0x6d27ef5, public_6d27ef5)
        ASM_EXPORT_ENTRY(0x6d27f09, public_6d27f09)
        ASM_EXPORT_ENTRY(0x6d27f1d, public_6d27f1d)
        ASM_EXPORT_ENTRY(0x6d27f7f, public_6d27f7f)
        ASM_EXPORT_ENTRY(0x6d2800b, public_6d2800b)
        ASM_EXPORT_ENTRY(0x6d2809f, public_6d2809f)
        ASM_EXPORT_ENTRY_LAST(0x6d280e6, public_6d280e6)
    }
}

#undef public_6d27aa0
#undef public_6d27ad0
#undef public_6d27ad5
#undef public_6d27af2
#undef public_6d27b02
#undef public_6d27b10
#undef public_6d27b25
#undef public_6d27b54
#undef public_6d27b94
#undef public_6d27bb9
#undef public_6d27bd5
#undef public_6d27be3
#undef public_6d27bf8
#undef public_6d27c27
#undef public_6d27c67
#undef public_6d27c8c
#undef public_6d27c9c
#undef public_6d27caa
#undef public_6d27cbf
#undef public_6d27cee
#undef public_6d27d2e
#undef public_6d27d53
#undef public_6d27d63
#undef public_6d27d71
#undef public_6d27d86
#undef public_6d27db5
#undef public_6d27df5
#undef public_6d27e1a
#undef public_6d27e2a
#undef public_6d27e38
#undef public_6d27e4d
#undef public_6d27e7c
#undef public_6d27ebc
#undef public_6d27ee1
#undef public_6d27ef5
#undef public_6d27f09
#undef public_6d27f1d
#undef public_6d27f51
#undef public_6d27f56
#undef public_6d27f76
#undef public_6d27f7f
#undef public_6d27fb0
#undef public_6d27ff7
#undef public_6d2800b
#undef public_6d28030
#undef public_6d2804d
#undef public_6d28059
#undef public_6d28065
#undef public_6d2808e
#undef public_6d2809f
#undef public_6d280d3
#undef public_6d280e6
#undef public_6d280ee
#undef public_6d280f2
#undef public_6d280fd
#undef public_6d2812d

#pragma init_seg(compiler)
extern "C" void const* const public_6d27af2 = __AsmFindLabelExport(&internal_6d27a60, 0x6d27af2);
extern "C" void const* const public_6d27bb9 = __AsmFindLabelExport(&internal_6d27a60, 0x6d27bb9);
extern "C" void const* const public_6d27c8c = __AsmFindLabelExport(&internal_6d27a60, 0x6d27c8c);
extern "C" void const* const public_6d27d53 = __AsmFindLabelExport(&internal_6d27a60, 0x6d27d53);
extern "C" void const* const public_6d27e1a = __AsmFindLabelExport(&internal_6d27a60, 0x6d27e1a);
extern "C" void const* const public_6d27ee1 = __AsmFindLabelExport(&internal_6d27a60, 0x6d27ee1);
extern "C" void const* const public_6d27ef5 = __AsmFindLabelExport(&internal_6d27a60, 0x6d27ef5);
extern "C" void const* const public_6d27f09 = __AsmFindLabelExport(&internal_6d27a60, 0x6d27f09);
extern "C" void const* const public_6d27f1d = __AsmFindLabelExport(&internal_6d27a60, 0x6d27f1d);
extern "C" void const* const public_6d27f7f = __AsmFindLabelExport(&internal_6d27a60, 0x6d27f7f);
extern "C" void const* const public_6d2800b = __AsmFindLabelExport(&internal_6d27a60, 0x6d2800b);
extern "C" void const* const public_6d2809f = __AsmFindLabelExport(&internal_6d27a60, 0x6d2809f);
extern "C" void const* const public_6d280e6 = __AsmFindLabelExport(&internal_6d27a60, 0x6d280e6);
