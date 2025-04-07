#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4068d0);
CLANG_FORWARD_PROC_SYMBOL(public_408f20);
CLANG_FORWARD_PROC_SYMBOL(public_40a9e0);
CLANG_FORWARD_PROC_SYMBOL(public_40bd90);
CLANG_FORWARD_PROC_SYMBOL(public_5a6900);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8717);

#define public_40ca87 _public_40ca87
#define public_40cb0e _public_40cb0e
#define public_40cb77 _public_40cb77
#define public_40cba3 _public_40cba3
#define public_40cbbd _public_40cbbd
#define public_40cc44 _public_40cc44
#define public_40cc72 _public_40cc72
#define public_40cc92 _public_40cc92
#define public_40ccc2 _public_40ccc2
#define public_40ccf8 _public_40ccf8
#define public_40cd4d _public_40cd4d
#define public_40cd7c _public_40cd7c
#define public_40cdba _public_40cdba
#define public_40ce1a _public_40ce1a
#define public_40ce88 _public_40ce88
#define public_40cedf _public_40cedf
#define public_40cee1 _public_40cee1
#define public_40cef8 _public_40cef8
#define public_40cf27 _public_40cf27
#define public_40cf7c _public_40cf7c
#define public_40cfda _public_40cfda
#define public_40d029 _public_40d029
#define public_40d083 _public_40d083
#define public_40d0ab _public_40d0ab
#define public_40d0f0 _public_40d0f0
#define public_40d0fc _public_40d0fc
#define public_40d121 _public_40d121
#define public_40d123 _public_40d123
#define public_40d12d _public_40d12d
#define public_40d137 _public_40d137

PROC_DECLARE(0x40ca50, internal_40ca50, public_40ca50);
extern "C" NAKED register_t __cdecl internal_40ca50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_5b8717 @0x40ca52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8717
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        add eax, 0xFFFFFFFE
        cmp eax, 0x1F
        push esi
        push edi
        ja public_40d0fc
/*FIXUP movzx ecx, byte ptr ds : [eax+public_40d1a0] @0x40ca79*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_40d150] @0x40ca80*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_40cb0e
  JMPTB cmp eax, 1
  JMPTB mov ecx, 1
  JMPTB je public_40ca87
  JMPTB cmp eax, 2
  JMPTB mov ecx, 2
  JMPTB je public_40ccc2
  JMPTB cmp eax, 3
  JMPTB mov ecx, 3
  JMPTB je public_40ccf8
  JMPTB cmp eax, 4
  JMPTB mov ecx, 0x13
  JMPTB je public_40d0fc
  JMPTB cmp eax, 5
  JMPTB mov ecx, 0x13
  JMPTB je public_40d0fc
  JMPTB cmp eax, 6
  JMPTB mov ecx, 0x13
  JMPTB je public_40d0fc
  JMPTB cmp eax, 7
  JMPTB mov ecx, 0x13
  JMPTB je public_40d0fc
  JMPTB cmp eax, 8
  JMPTB mov ecx, 0x13
  JMPTB je public_40d0fc
  JMPTB cmp eax, 9
  JMPTB mov ecx, 0x13
  JMPTB je public_40d0fc
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 4
  JMPTB je public_40cd4d
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 5
  JMPTB je public_40cd7c
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 6
  JMPTB je public_40cdba
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 7
  JMPTB je public_40cf27
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 0x13
  JMPTB je public_40d0fc
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 8
  JMPTB je public_40ce1a
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 9
  JMPTB je public_40ce88
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 9
  JMPTB je public_40ce88
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 0x13
  JMPTB je public_40d0fc
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 0xA
  JMPTB je public_40cef8
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 0xB
  JMPTB je public_40cf7c
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 0xC
  JMPTB je public_40cfda
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 0xD
  JMPTB je public_40d029
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 0xE
  JMPTB je public_40d0ab
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 0x13
  JMPTB je public_40d0fc
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 0x13
  JMPTB je public_40d0fc
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 0x13
  JMPTB je public_40d0fc
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 0xF
  JMPTB je public_40d083
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 0x13
  JMPTB je public_40d0fc
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 0x10
  JMPTB je public_40cbbd
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 0x11
  JMPTB je public_40cc44
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 0x12
  JMPTB je public_40cc92
  JMPTB int 3
        public_40ca87 : nop
        push 0x88
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_40cedf
        mov ecx, esi
        call public_4068d0
        mov edi, dword ptr ds : [public_5c6030]
        lea ecx, ds:[esi+0x58]
        mov byte ptr ss : [esp+0x18], 1
        call edi
        lea ecx, ds:[esi+0x5C]
        call edi
        lea ecx, ds:[esi+0x60]
        call dword ptr ds : [public_5c69a0]
        lea ecx, ds:[esi+0x64]
        call edi
        mov eax, 0x3E4CCCCD
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x70], 0x3D8F5C29
        mov dword ptr ds : [esi+0x74], 0x3D23D70A
        mov dword ptr ds : [esi+0x78], eax
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x84], 0x3F000000
        mov dword ptr ds : [esi], offset public_5c77b8
        mov ecx, esi
        jmp public_40cee1
        public_40cb0e : nop
        push ebp
        push 0x88
        call public_5b7e84
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], ebp
        xor ebx, ebx
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x1C], 2
        je public_40cba3
        mov ecx, ebp
        call public_4068d0
        mov esi, dword ptr ds : [public_5c6030]
        lea ecx, ss:[ebp+0x54]
        mov byte ptr ss : [esp+0x1C], 3
        call esi
        lea ecx, ss:[ebp+0x58]
        call esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov dword ptr ss : [ebp+0x5C], ebx
        mov byte ptr ss : [ebp+0x60], bl
        mov edi, offset public_5c7940
        mov dword ptr ss : [ebp], offset public_5c7908
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ss:[ebp+0x60]
        jb public_40cb77
        mov eax, 0x1F
        public_40cb77 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5c7940
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x60], bl
        mov dword ptr ss : [ebp+0x5C], eax
        mov dword ptr ss : [ebp+0x80], ebx
        mov byte ptr ss : [ebp+0x84], bl
        mov ebx, ebp
        public_40cba3 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], ebx
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [edx]
        pop ebp
        jmp public_40d137
        public_40cbbd : nop
        push 0x84
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 4
        je public_40cedf
        mov ecx, esi
        call public_4068d0
        mov edi, dword ptr ds : [public_5c6030]
        lea ecx, ds:[esi+0x58]
        mov byte ptr ss : [esp+0x18], 5
        mov dword ptr ds : [esi+0x54], ebx
        call edi
        lea ecx, ds:[esi+0x5C]
        call edi
        mov dword ptr ds : [esi], offset public_5c79a8
        lea ecx, ds:[esi+0x60]
        mov byte ptr ss : [esp+0x18], 6
        call dword ptr ds : [public_5c69a0]
        mov al, byte ptr ss : [esp+0x24]
        mov byte ptr ds : [esi+0x64], al
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x70], ebx
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ds:[esi+0x74]
        mov byte ptr ss : [esp+0x1C], 7
        call public_5a6900
        mov dword ptr ds : [esi], offset public_5c8420
        mov ecx, esi
        jmp public_40cee1
        public_40cc44 : nop
        push 0x60
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 8
        je public_40cedf
        mov ecx, esi
        call public_4068d0
        mov byte ptr ss : [esp+0x18], 9
        public_40cc72 : nop
        mov edi, dword ptr ds : [public_5c6030]
        lea ecx, ds:[esi+0x58]
        mov dword ptr ds : [esi+0x54], ebx
        call edi
        lea ecx, ds:[esi+0x5C]
        call edi
        mov dword ptr ds : [esi], offset public_5c79a8
        mov ecx, esi
        jmp public_40cee1
        public_40cc92 : nop
        push 0x60
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0xA
        je public_40cedf
        mov ecx, esi
        call public_4068d0
        mov byte ptr ss : [esp+0x18], 0xB
        jmp public_40cc72
        public_40ccc2 : nop
        push 0x54
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0xC
        je public_40cedf
        mov ecx, esi
        call public_4068d0
        mov dword ptr ds : [esi], offset public_5c7a3c
        mov ecx, esi
        jmp public_40cee1
        public_40ccf8 : nop
        push 0x5C
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0xD
        je public_40cedf
        mov ecx, esi
        call public_4068d0
        lea edi, ds:[esi+0x54]
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 0xE
        call dword ptr ds : [public_5c6030]
        push ebx
        mov dword ptr ds : [esi], offset public_5c7a78
        call dword ptr ds : [public_5c6020]
        mov dword ptr ds : [edi], eax
        add esp, 4
        mov byte ptr ds : [esi+0x58], bl
        mov ecx, esi
        jmp public_40cee1
        public_40cd4d : nop
        push 0xAC
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], 0xF
        je public_40d121
        mov ecx, eax
        call public_408f20
        jmp public_40d123
        public_40cd7c : nop
        push 0x54
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0x10
        je public_40d0f0
        mov ecx, esi
        call public_4068d0
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, esi
        mov dword ptr ds : [esi], offset public_5c83e4
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ecx]
        jmp public_40d12d
        public_40cdba : nop
        push 0x70
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0x11
        je public_40cedf
        mov ecx, esi
        call public_4068d0
        mov edi, dword ptr ds : [public_5c6030]
        lea ecx, ds:[esi+0x54]
        mov byte ptr ss : [esp+0x18], 0x12
        call edi
        lea ecx, ds:[esi+0x58]
        call edi
        lea ecx, ds:[esi+0x5C]
        call edi
        mov al, byte ptr ss : [esp+0x24]
        mov byte ptr ds : [esi+0x60], al
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi], offset public_5c7cfc
        mov ecx, esi
        jmp public_40cee1
        public_40ce1a : nop
        push 0x88
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0x13
        je public_40cedf
        mov ecx, esi
        call public_4068d0
        mov edi, dword ptr ds : [public_5c6030]
        lea ecx, ds:[esi+0x54]
        mov byte ptr ss : [esp+0x18], 0x14
        call edi
        mov dword ptr ds : [esi+0x58], 0x40800000
        lea ecx, ds:[esi+0x80]
        mov dword ptr ds : [esi+0x5C], ebx
        mov byte ptr ds : [esi+0x60], bl
        call edi
        mov dword ptr ds : [esi], offset public_5c7df0
        lea ecx, ds:[esi+0x84]
        mov byte ptr ss : [esp+0x18], 0x15
        call edi
        mov dword ptr ds : [esi], offset public_5c7e6c
        mov ecx, esi
        jmp public_40cee1
        public_40ce88 : nop
        push 0x84
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0x16
        je public_40cedf
        mov ecx, esi
        call public_4068d0
        mov edi, dword ptr ds : [public_5c6030]
        lea ecx, ds:[esi+0x54]
        mov byte ptr ss : [esp+0x18], 0x17
        call edi
        mov dword ptr ds : [esi+0x58], 0x40800000
        lea ecx, ds:[esi+0x80]
        mov dword ptr ds : [esi+0x5C], ebx
        mov byte ptr ds : [esi+0x60], bl
        call edi
        mov dword ptr ds : [esi], offset public_5c7df0
        mov ecx, esi
        jmp public_40cee1
        public_40cedf : nop
        xor ecx, ecx
        public_40cee1 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call dword ptr ds : [eax]
        jmp public_40d137
        public_40cef8 : nop
        push 0x98
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], 0x18
        je public_40d121
        mov ecx, eax
        call public_40a9e0
        jmp public_40d123
        public_40cf27 : nop
        push 0x5C
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0x19
        je public_40d0f0
        mov ecx, esi
        call public_4068d0
        lea ecx, ds:[esi+0x54]
        mov byte ptr ss : [esp+0x18], 0x1A
        call dword ptr ds : [public_5c6030]
        lea ecx, ds:[esi+0x58]
        call dword ptr ds : [public_5c69a0]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, esi
        mov dword ptr ds : [esi], offset public_5c7d98
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ecx]
        jmp public_40d12d
        public_40cf7c : nop
        push 0x60
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0x1B
        je public_40d0f0
        mov ecx, esi
        call public_4068d0
        mov edi, dword ptr ds : [public_5c6030]
        lea ecx, ds:[esi+0x58]
        mov byte ptr ss : [esp+0x18], 0x1C
        call edi
        lea ecx, ds:[esi+0x5C]
        call edi
        mov al, 0xFF
        mov byte ptr ds : [esi+0x56], al
        mov byte ptr ds : [esi+0x55], al
        mov byte ptr ds : [esi+0x54], al
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, esi
        mov dword ptr ds : [esi], offset public_5c7f78
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ecx]
        jmp public_40d12d
        public_40cfda : nop
        push 0x5C
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0x1D
        je public_40d0f0
        mov ecx, esi
        call public_4068d0
        lea ecx, ds:[esi+0x54]
        mov byte ptr ss : [esp+0x18], 0x1E
        call dword ptr ds : [public_5c6030]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, esi
        mov byte ptr ds : [esi+0x58], bl
        mov dword ptr ds : [esi], offset public_5c7fe0
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ecx]
        jmp public_40d12d
        public_40d029 : nop
        push 0x64
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0x1F
        je public_40d0f0
        mov ecx, esi
        call public_4068d0
        lea ecx, ds:[esi+0x54]
        mov byte ptr ss : [esp+0x18], 0x20
        call dword ptr ds : [public_5c6030]
        mov eax, 0x43B40000
        mov dword ptr ds : [esi+0x58], eax
        mov dword ptr ds : [esi+0x5C], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, esi
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi], offset public_5c802c
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ecx]
        jmp public_40d12d
        public_40d083 : nop
        push 0xC8
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], 0x21
        je public_40d121
        mov ecx, eax
        call public_40bd90
        jmp public_40d123
        public_40d0ab : nop
        push 0x58
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0x22
        je public_40d0f0
        mov ecx, esi
        call public_4068d0
        lea ecx, ds:[esi+0x54]
        mov byte ptr ss : [esp+0x18], 0x23
        call dword ptr ds : [public_5c6030]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, esi
        mov dword ptr ds : [esi], offset public_5c83a8
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ecx]
        jmp public_40d12d
        public_40d0f0 : nop
        mov eax, dword ptr ss : [esp+0x24]
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ecx]
        jmp public_40d12d
        public_40d0fc : nop
        push 0x54
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], 0x24
        je public_40d121
        mov ecx, eax
        call public_4068d0
        jmp public_40d123
        public_40d121 : nop
        xor eax, eax
        public_40d123 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        public_40d12d : nop
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call dword ptr ds : [edx]
        public_40d137 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x40ca50)
        ASM_EXPORT_ENTRY_SINGLE(0x40d0fc, public_40d0fc)
    }
}

#undef public_40ca87
#undef public_40cb0e
#undef public_40cb77
#undef public_40cba3
#undef public_40cbbd
#undef public_40cc44
#undef public_40cc72
#undef public_40cc92
#undef public_40ccc2
#undef public_40ccf8
#undef public_40cd4d
#undef public_40cd7c
#undef public_40cdba
#undef public_40ce1a
#undef public_40ce88
#undef public_40cedf
#undef public_40cee1
#undef public_40cef8
#undef public_40cf27
#undef public_40cf7c
#undef public_40cfda
#undef public_40d029
#undef public_40d083
#undef public_40d0ab
#undef public_40d0f0
#undef public_40d0fc
#undef public_40d121
#undef public_40d123
#undef public_40d12d
#undef public_40d137

#pragma init_seg(compiler)
extern "C" void const* const public_40d0fc = __AsmFindLabelExport(&internal_40ca50, 0x40d0fc);
