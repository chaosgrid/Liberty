#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f72dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb00c8);

#define public_6f73e40 _public_6f73e40
#define public_6f73e7d _public_6f73e7d
#define public_6f73e8e _public_6f73e8e
#define public_6f73ea0 _public_6f73ea0
#define public_6f73ec2 _public_6f73ec2
#define public_6f73ecd _public_6f73ecd
#define public_6f73f24 _public_6f73f24
#define public_6f73f34 _public_6f73f34
#define public_6f73f3f _public_6f73f3f
#define public_6f73f52 _public_6f73f52
#define public_6f73f5e _public_6f73f5e
#define public_6f73f65 _public_6f73f65
#define public_6f73f78 _public_6f73f78
#define public_6f73f84 _public_6f73f84

PROC_DECLARE(0x6f73dd0, internal_6f73dd0, public_6f73dd0);
extern "C" NAKED register_t __cdecl internal_6f73dd0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb00c8 @0x6f73dd8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb00c8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0xAC]
        xor edx, edx
        cmp ecx, edx
        je public_6f73f84
        mov eax, dword ptr ds : [edi+0xB0]
        sub eax, ecx
        sar eax, 2
        cmp eax, edx
        je public_6f73f84
        mov al, byte ptr ss : [esp+7]
        push ebx
        mov byte ptr ss : [esp+0x1C], al
        push ebp
        xor eax, eax
        push esi
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], edx
        mov esi, ecx
        cmp esi, dword ptr ds : [edi+0xB0]
        mov dword ptr ss : [esp+0x60], edx
        je public_6f73e8e
        mov ebx, dword ptr ds : [public_6fb3664]
        nop 
        lea esp, ss:[esp]
        public_6f73e40 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call ebx
        add esp, 0xC
        lea ecx, ss:[esp+0x14]
        push ecx
/*FIXUP push offset public_6fbbee4 @0x6f73e57*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbee4
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_6f72dd0
        test al, al
        jne public_6f73e7d
        mov eax, dword ptr ss : [esp+0x2C]
        push esi
        push 1
        push eax
        lea ecx, ss:[esp+0x30]
        call public_6f937c0
        public_6f73e7d : nop
        mov eax, dword ptr ds : [edi+0xB0]
        add esi, 4
        cmp esi, eax
        jne public_6f73e40
        mov eax, dword ptr ss : [esp+0x28]
        public_6f73e8e : nop
        cmp eax, dword ptr ss : [esp+0x2C]
        mov ebp, eax
        je public_6f73f78
        lea ebx, ds:[ebx]
        public_6f73ea0 : nop
        mov ecx, dword ptr ss : [ebp]
        push 0
        push ecx
        call dword ptr ds : [public_6fb33c8]
        mov ecx, dword ptr ds : [edi+0xA0]
        mov eax, dword ptr ds : [edi+0x9C]
        mov ebx, dword ptr ss : [ebp]
        add esp, 8
        cmp eax, ecx
        je public_6f73f24
        public_6f73ec2 : nop
        cmp dword ptr ds : [eax], ebx
        je public_6f73ecd
        add eax, 4
        cmp eax, ecx
        jne public_6f73ec2
        public_6f73ecd : nop
        cmp eax, ecx
        je public_6f73f24
        mov edx, dword ptr ds : [edi+0xA0]
        push eax
        lea esi, ds:[edi+0x98]
        push edx
        add eax, 4
        push eax
        call public_6f6a640
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, esi
        call public_6ea1490
        mov edx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x14]
        push eax
        add edx, 0xFFFFFFFC
        push ebx
        mov dword ptr ds : [esi+8], edx
        call dword ptr ds : [public_6fb364c]
        add esp, 8
        test eax, eax
        jne public_6f73f24
        lea ecx, ss:[esp+0x14]
        push ecx
        call dword ptr ds : [public_6fb34f8]
        add esp, 4
        public_6f73f24 : nop
        mov eax, dword ptr ds : [edi+0xB0]
        mov ecx, dword ptr ds : [edi+0xAC]
        cmp ecx, eax
        je public_6f73f65
        public_6f73f34 : nop
        cmp dword ptr ds : [ecx], ebx
        je public_6f73f3f
        add ecx, 4
        cmp ecx, eax
        jne public_6f73f34
        public_6f73f3f : nop
        cmp ecx, eax
        je public_6f73f65
        mov edx, dword ptr ds : [edi+0xB0]
        lea eax, ds:[ecx+4]
        cmp eax, edx
        je public_6f73f5e
        sub ecx, eax
        public_6f73f52 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+eax], esi
        add eax, 4
        cmp eax, edx
        jne public_6f73f52
        public_6f73f5e : nop
        add dword ptr ds : [edi+0xB0], 0xFFFFFFFC
        public_6f73f65 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        add ebp, 4
        cmp ebp, eax
        jne public_6f73ea0
        mov eax, dword ptr ss : [esp+0x28]
        public_6f73f78 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        pop esi
        pop ebp
        pop ebx
        public_6f73f84 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 4
        UNREACHABLE_TRAP(0x6f73dd0)
    }
}

#undef public_6f73e40
#undef public_6f73e7d
#undef public_6f73e8e
#undef public_6f73ea0
#undef public_6f73ec2
#undef public_6f73ecd
#undef public_6f73f24
#undef public_6f73f34
#undef public_6f73f3f
#undef public_6f73f52
#undef public_6f73f5e
#undef public_6f73f65
#undef public_6f73f78
#undef public_6f73f84
