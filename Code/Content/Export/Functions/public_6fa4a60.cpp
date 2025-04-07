#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f20230);
CLANG_FORWARD_PROC_SYMBOL(public_6f55880);
CLANG_FORWARD_PROC_SYMBOL(public_6f93460);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6f949b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4a60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb20e3);

#define public_6fa4b4c _public_6fa4b4c
#define public_6fa4bd7 _public_6fa4bd7
#define public_6fa4bf0 _public_6fa4bf0
#define public_6fa4bf8 _public_6fa4bf8
#define public_6fa4c23 _public_6fa4c23
#define public_6fa4c38 _public_6fa4c38
#define public_6fa4c51 _public_6fa4c51
#define public_6fa4c66 _public_6fa4c66

PROC_DECLARE(0x6fa4a60, internal_6fa4a60, public_6fa4a60);
extern "C" NAKED register_t __cdecl internal_6fa4a60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb20e3 @0x6fa4a62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb20e3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+8], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x1C], 0
        je public_6fa4c66
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        push esi
        push edi
        lea esi, ss:[ebp+4]
        lea edi, ds:[ebx+4]
        mov ecx, 0xD
        rep movsd
        mov eax, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [ebx+0x38], eax
        mov cl, byte ptr ss : [ebp+0x3C]
        lea esi, ds:[ebx+0x3C]
        push 0
        mov byte ptr ds : [esi], cl
        push 0
        mov ecx, esi
        call public_6f93790
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edi, dword ptr ss : [ebp+0x40]
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], edx
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push edx
        mov ecx, esi
        call public_6ed0230
        mov al, byte ptr ss : [ebp+0x48]
        mov byte ptr ds : [ebx+0x48], al
        mov cl, byte ptr ss : [ebp+0x49]
        mov byte ptr ds : [ebx+0x49], cl
        mov edx, dword ptr ss : [ebp+0x4C]
        mov dword ptr ds : [ebx+0x4C], edx
        mov al, byte ptr ss : [ebp+0x50]
        mov byte ptr ds : [ebx+0x50], al
        mov ecx, dword ptr ss : [ebp+0x54]
        lea esi, ds:[ebx+0x58]
        lea edx, ss:[esp+0x34]
        mov dword ptr ds : [ebx+0x54], ecx
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], 1
        mov dword ptr ss : [esp+0x14], esi
        call public_6f93460
        lea eax, ss:[ebp+0x58]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], 2
        call public_6f20230
        mov ecx, dword ptr ss : [ebp+0x64]
        mov dword ptr ds : [ebx+0x64], ecx
        mov ecx, dword ptr ss : [ebp+0x68]
        test ecx, ecx
        mov byte ptr ss : [esp+0x28], 3
        mov dword ptr ds : [ebx+0x68], ecx
        je public_6fa4b4c
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6fa4b4c : nop
        lea eax, ss:[ebp+0x6C]
        push eax
        lea ecx, ds:[ebx+0x6C]
        mov byte ptr ss : [esp+0x2C], 4
        call public_6f55880
        mov ecx, dword ptr ss : [ebp+0x7C]
        mov dword ptr ds : [ebx+0x7C], ecx
        mov edx, dword ptr ss : [ebp+0x80]
        mov dword ptr ds : [ebx+0x80], edx
        mov eax, dword ptr ss : [ebp+0x84]
        mov dword ptr ds : [ebx+0x84], eax
        mov dword ptr ds : [ebx], offset public_6fb60a8
        lea esi, ss:[ebp+0x88]
        lea edi, ds:[ebx+0x88]
        mov ecx, 0x13
        rep movsd
        mov ecx, dword ptr ss : [ebp+0xD4]
        mov dword ptr ds : [ebx+0xD4], ecx
        mov edx, dword ptr ss : [ebp+0xD8]
        mov dword ptr ds : [ebx+0xD8], edx
        mov eax, dword ptr ss : [ebp+0xDC]
        mov dword ptr ds : [ebx+0xDC], eax
        mov cl, byte ptr ss : [ebp+0xE0]
        mov byte ptr ds : [ebx+0xE0], cl
        mov eax, dword ptr ss : [ebp+0xE4]
        test eax, eax
        mov byte ptr ss : [esp+0x28], 5
        jne public_6fa4bd7
        xor edx, edx
        jmp public_6fa4bf0
        public_6fa4bd7 : nop
        mov ecx, dword ptr ss : [ebp+0xE8]
        sub ecx, eax
        mov eax, 0x3E0F83E1
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa4bf0 : nop
        test edx, edx
        mov eax, edx
        jge public_6fa4bf8
        xor eax, eax
        public_6fa4bf8 : nop
        imul eax, 0x108
        push eax
        call public_6fa912a
        mov dword ptr ds : [ebx+0xE4], eax
        mov edi, dword ptr ss : [ebp+0xE8]
        mov ebp, dword ptr ss : [ebp+0xE4]
        add esp, 4
        cmp ebp, edi
        mov esi, eax
        mov dword ptr ss : [esp+0x10], esi
        je public_6fa4c51
        public_6fa4c23 : nop
        mov dword ptr ss : [esp+0x1C], esi
        test esi, esi
        mov byte ptr ss : [esp+0x28], 6
        je public_6fa4c38
        push ebp
        mov ecx, esi
        call public_6f949b0
        public_6fa4c38 : nop
        add esi, 0x108
        add ebp, 0x108
        cmp ebp, edi
        mov byte ptr ss : [esp+0x28], 5
        mov dword ptr ss : [esp+0x10], esi
        jne public_6fa4c23
        public_6fa4c51 : nop
        pop edi
        mov dword ptr ds : [ebx+0xE8], esi
        mov dword ptr ds : [ebx+0xEC], esi
        pop esi
        mov dword ptr ds : [ebx], offset public_6fbc7a0
        pop ebp
        public_6fa4c66 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6fa4a60)
    }
}

#undef public_6fa4b4c
#undef public_6fa4bd7
#undef public_6fa4bf0
#undef public_6fa4bf8
#undef public_6fa4c23
#undef public_6fa4c38
#undef public_6fa4c51
#undef public_6fa4c66
