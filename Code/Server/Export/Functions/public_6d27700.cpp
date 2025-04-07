#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b270);
CLANG_FORWARD_PROC_SYMBOL(public_6d27700);
CLANG_FORWARD_PROC_SYMBOL(public_6d28880);
CLANG_FORWARD_PROC_SYMBOL(public_6d28dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31b70);
CLANG_FORWARD_PROC_SYMBOL(public_6d31b90);
CLANG_FORWARD_PROC_SYMBOL(public_6d31d30);
CLANG_FORWARD_PROC_SYMBOL(public_6d405b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d406f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d414b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d42160);
CLANG_FORWARD_PROC_SYMBOL(public_6d42a60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62b98);

#define public_6d27781 _public_6d27781
#define public_6d277a9 _public_6d277a9
#define public_6d277c7 _public_6d277c7
#define public_6d27805 _public_6d27805
#define public_6d27857 _public_6d27857
#define public_6d27859 _public_6d27859
#define public_6d2786c _public_6d2786c
#define public_6d278ef _public_6d278ef
#define public_6d278f8 _public_6d278f8
#define public_6d27917 _public_6d27917
#define public_6d2796c _public_6d2796c
#define public_6d2799b _public_6d2799b
#define public_6d27a00 _public_6d27a00
#define public_6d27a05 _public_6d27a05
#define public_6d27a30 _public_6d27a30

PROC_DECLARE(0x6d27700, internal_6d27700, public_6d27700);
extern "C" NAKED register_t __cdecl internal_6d27700()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d62b98 @0x6d27708*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62b98
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x5C
        push esi
        mov esi, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ds : [esi+0x18]
        test al, 2
        je public_6d27a30
        mov dl, byte ptr ss : [esp+0x78]
        mov ecx, eax
        and ecx, 0x80
        cmp cl, 0x80
        sete byte ptr ss : [esp+7]
        and eax, 0x40
        push ebx
        cmp al, 0x40
        push ebp
        sete byte ptr ss : [esp+0xE]
        xor ebp, ebp
        push edi
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x30], ebp
        mov byte ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x3C], ebp
        mov byte ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], ebp
        mov dword ptr ss : [esp+0x48], ebp
        mov byte ptr ss : [esp+0x1C], dl
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x74], ebp
        public_6d27781 : nop
        mov ecx, esi
        call public_6d414b0
        test al, al
        lea ecx, ss:[esp+0x4C]
        je public_6d277a9
        mov eax, dword ptr ss : [esp+0x88]
        mov ebx, dword ptr ss : [esp+0x84]
        push eax
        push ebx
        push esi
        push ecx
        call public_6d42160
        jmp public_6d277c7
        public_6d277a9 : nop
        mov edx, dword ptr ss : [esp+0x88]
        mov eax, dword ptr ss : [esp+0x84]
        push edx
        push eax
        push esi
        push ecx
        call public_6d42a60
        mov ebx, dword ptr ss : [esp+0x94]
        public_6d277c7 : nop
        mov al, byte ptr ss : [esp+0x64]
        add esp, 0x10
        test al, al
        mov ecx, 8
        lea esi, ss:[esp+0x4C]
        lea edi, ss:[esp+0x2C]
        rep movsd
        je public_6d2799b
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_6d27805
        mov eax, dword ptr ss : [esp+0x24]
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6d31b90
        jmp public_6d278f8
        public_6d27805 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov eax, dword ptr ds : [ebx]
        je public_6d2796c
        mov ebp, dword ptr ds : [eax+8]
        mov edi, dword ptr ds : [eax+4]
        mov ebx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov esi, ebp
        sub esi, edi
        sub ecx, ebx
        sar esi, 5
        sar ecx, 5
        cmp ecx, esi
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x18], edi
        jae public_6d27917
        lea ecx, ss:[esp+0x1C]
        call public_6d1b270
        cmp esi, eax
        jae public_6d27857
        lea ecx, ss:[esp+0x1C]
        call public_6d1b270
        mov ebp, eax
        jmp public_6d27859
        public_6d27857 : nop
        mov ebp, esi
        public_6d27859 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6d1b270
        mov edi, eax
        add edi, ebp
        mov eax, edi
        jns public_6d2786c
        xor eax, eax
        public_6d2786c : nop
        shl eax, 5
        push eax
        call public_6d60012
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 4
        mov ebp, eax
        push ebp
        push ebx
        push edx
        lea ecx, ss:[esp+0x28]
        call public_6d31d30
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6d31d30
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        push edx
        push ebx
        lea ecx, ss:[esp+0x28]
        call public_6d31d30
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6d28880
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        call public_6d5ffb0
        shl edi, 5
        add edi, ebp
        add esp, 4
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x28], edi
        call public_6d1b270
        add eax, esi
        shl eax, 5
        add eax, ebp
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x20], ebp
        public_6d278ef : nop
        mov ebx, dword ptr ss : [esp+0x84]
        xor ebp, ebp
        public_6d278f8 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0x80]
        cmp ecx, eax
        mov dword ptr ds : [ebx+8], eax
        sete al
        mov byte ptr ds : [ebx+0x1C], al
        jmp public_6d27781
        public_6d27917 : nop
        test esi, esi
        jbe public_6d278ef
        shl esi, 5
        lea eax, ds:[esi+ebx]
        push eax
        push ebx
        push ebx
        lea ecx, ss:[esp+0x28]
        call public_6d31d30
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        sub eax, ebx
        sar eax, 5
        shl eax, 5
        push ebp
        add eax, edi
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6d31d30
        mov ecx, dword ptr ss : [esp+0x24]
        sub ecx, ebx
        sar ecx, 5
        shl ecx, 5
        push ebx
        add ecx, edi
        push ecx
        push edi
        call public_6d406f0
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0xC
        add eax, esi
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6d278ef
        public_6d2796c : nop
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ds : [eax+0xC], ecx
        jmp public_6d278f8
        public_6d2799b : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [ebx]
        call public_6d28dd0
        mov ecx, dword ptr ds : [ebx]
        call public_6d1b270
        test eax, eax
        jne public_6d27a00
        lea edx, ss:[esp+0x88]
        push edx
        lea eax, ss:[esp+0x88]
        push eax
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x90], ebp
        mov dword ptr ss : [esp+0x8C], ebp
        call public_6d31b70
        mov ecx, dword ptr ss : [esp+0x84]
        mov byte ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], ecx
        mov dword ptr ss : [esp+0x5C], ebp
        mov byte ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], ebp
        mov dword ptr ss : [esp+0x68], ebp
        lea esi, ss:[esp+0x4C]
        jmp public_6d27a05
        public_6d27a00 : nop
        mov edx, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [edx+4]
        public_6d27a05 : nop
        mov ebx, dword ptr ss : [esp+0x7C]
        mov ecx, 8
        mov edi, ebx
        rep movsd
        lea ecx, ss:[esp+0x1C]
        call public_6d0b7e0
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        pop esi
        mov ecx, dword ptr ss : [esp+0x5C]
        mov dword ptr fs : [0], ecx
        add esp, 0x68
        ret 
        public_6d27a30 : nop
        mov eax, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ss : [esp+0x78]
        push eax
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x7C]
        push esi
        call public_6d405b0
        mov ecx, dword ptr ss : [esp+0x70]
        add esp, 0x10
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x68
        ret 
        UNREACHABLE_TRAP(0x6d27700)
    }
}

#undef public_6d27781
#undef public_6d277a9
#undef public_6d277c7
#undef public_6d27805
#undef public_6d27857
#undef public_6d27859
#undef public_6d2786c
#undef public_6d278ef
#undef public_6d278f8
#undef public_6d27917
#undef public_6d2796c
#undef public_6d2799b
#undef public_6d27a00
#undef public_6d27a05
#undef public_6d27a30
