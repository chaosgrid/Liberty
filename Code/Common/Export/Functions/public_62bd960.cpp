#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626ba00);
CLANG_FORWARD_PROC_SYMBOL(public_62be880);
CLANG_FORWARD_PROC_SYMBOL(public_62bea90);
CLANG_FORWARD_PROC_SYMBOL(public_62bed70);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6342820);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6394966);

#define public_62bda10 _public_62bda10
#define public_62bda1f _public_62bda1f
#define public_62bda30 _public_62bda30
#define public_62bda50 _public_62bda50
#define public_62bda78 _public_62bda78
#define public_62bda8e _public_62bda8e
#define public_62bda93 _public_62bda93
#define public_62bda97 _public_62bda97
#define public_62bdac1 _public_62bdac1
#define public_62bdafd _public_62bdafd
#define public_62bdb06 _public_62bdb06
#define public_62bdb38 _public_62bdb38
#define public_62bdb47 _public_62bdb47
#define public_62bdb67 _public_62bdb67

PROC_DECLARE(0x62bd960, internal_62bd960, public_62bd960);
extern "C" NAKED register_t __cdecl internal_62bd960()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394966 @0x62bd962*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394966
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        lea ebx, ss:[ebp+4]
        push edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], ebp
        call public_6333e40
        mov cl, byte ptr ss : [esp+0x54]
        mov al, byte ptr ss : [esp+0x54]
        lea esi, ss:[ebp+0x10]
        mov byte ptr ds : [esi+1], cl
        mov ecx, esi
        mov byte ptr ds : [esi], al
        mov byte ptr ds : [esi+0xC], 1
        call public_6342820
        mov dl, byte ptr ss : [esp+0x54]
        xor edi, edi
        push 0x1C
        mov dword ptr ss : [esp+0x50], edi
        mov byte ptr ss : [ebp+0x28], dl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [ebp+0x2C], eax
        mov dword ptr ss : [ebp+0x30], edi
        mov edi, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [ebp], offset public_639ef00
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov dl, byte ptr ds : [edi+0xC]
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [ebp+0xC], dl
        mov al, byte ptr ds : [edi+0x24]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x50], 1
        mov byte ptr ss : [ebp+0x24], al
        call public_632c410
        mov eax, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [ebp+0x14]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x54], eax
        je public_62bda30
        nop 
        lea esp, ss:[esp]
        public_62bda10 : nop
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_62bda1f
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx]
        public_62bda1f : nop
        lea ecx, ss:[esp+0x54]
        call public_63429f0
        mov eax, dword ptr ss : [esp+0x54]
        cmp eax, ebx
        jne public_62bda10
        public_62bda30 : nop
        mov ecx, esi
        call public_62be880
        mov edi, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x18], eax
        je public_62bdb67
        lea esp, ss:[esp]
        public_62bda50 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x34], edx
        mov edi, dword ptr ds : [eax+4]
        cmp edi, ecx
        mov ebx, eax
        mov al, 1
        je public_62bda97
        public_62bda78 : nop
        fld dword ptr ss : [esp+0x34]
        mov ebx, edi
        fcomp dword ptr ds : [edi+0xC]
        fnstsw ax
        test ah, 5
        jp public_62bda8e
        mov edi, dword ptr ds : [edi]
        mov al, 1
        jmp public_62bda93
        public_62bda8e : nop
        mov edi, dword ptr ds : [edi+8]
        xor al, al
        public_62bda93 : nop
        cmp edi, ecx
        jne public_62bda78
        public_62bda97 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        je public_62bdac1
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        push ebx
        push edi
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x68], 1
        call public_62bea90
        push eax
        jmp public_62bdb47
        public_62bdac1 : nop
        test al, al
        mov dword ptr ss : [esp+0x14], ebx
        je public_62bdb06
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        call public_632c410
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax]
        jne public_62bdafd
        lea edx, ss:[esp+0x11]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        push ebx
        push edi
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x25], 1
        call public_62bea90
        push eax
        jmp public_62bdb47
        public_62bdafd : nop
        lea ecx, ss:[esp+0x14]
        call public_626ba00
        public_62bdb06 : nop
        mov edx, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [edx+0xC]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        test ah, 5
        jp public_62bdb38
        lea eax, ss:[esp+0x12]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        push ebx
        push edi
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x26], 1
        call public_62bea90
        push eax
        jmp public_62bdb47
        public_62bdb38 : nop
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x17], 0
        push ecx
        public_62bdb47 : nop
        lea ecx, ss:[esp+0x44]
        call public_62bed70
        lea ecx, ss:[esp+0x18]
        call public_63429f0
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ss : [esp+0x1C]
        jne public_62bda50
        public_62bdb67 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 4
        UNREACHABLE_TRAP(0x62bd960)
    }
}

#undef public_62bda10
#undef public_62bda1f
#undef public_62bda30
#undef public_62bda50
#undef public_62bda78
#undef public_62bda8e
#undef public_62bda93
#undef public_62bda97
#undef public_62bdac1
#undef public_62bdafd
#undef public_62bdb06
#undef public_62bdb38
#undef public_62bdb47
#undef public_62bdb67
