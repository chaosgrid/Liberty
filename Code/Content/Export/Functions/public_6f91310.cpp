#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f21ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d8c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f91310);
CLANG_FORWARD_PROC_SYMBOL(public_6f93600);
CLANG_FORWARD_PROC_SYMBOL(public_6f93610);
CLANG_FORWARD_PROC_SYMBOL(public_6f93620);
CLANG_FORWARD_PROC_SYMBOL(public_6f93c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f93c70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb14b1);

#define public_6f9138c _public_6f9138c
#define public_6f91392 _public_6f91392
#define public_6f913c2 _public_6f913c2
#define public_6f914e0 _public_6f914e0
#define public_6f91516 _public_6f91516
#define public_6f91549 _public_6f91549
#define public_6f91573 _public_6f91573

PROC_DECLARE(0x6f91310, internal_6f91310, public_6f91310);
extern "C" NAKED register_t __cdecl internal_6f91310()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb14b1 @0x6f91312*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb14b1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x40]
        mov al, byte ptr ss : [ebp+4]
        mov byte ptr ds : [ebx+4], al
        push esi
        push edi
        lea esi, ss:[ebp+8]
        lea edi, ds:[ebx+8]
        mov ecx, 0xD
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x3C]
        mov dword ptr ds : [ebx+0x3C], ecx
        mov edx, dword ptr ss : [ebp+0x40]
        mov dword ptr ds : [ebx+0x40], edx
        mov eax, dword ptr ss : [ebp+0x44]
        mov dword ptr ds : [ebx+0x44], eax
        mov ecx, dword ptr ss : [ebp+0x48]
        mov dword ptr ds : [ebx+0x48], ecx
        mov edx, dword ptr ss : [ebp+0x4C]
        mov dword ptr ds : [ebx+0x4C], edx
        mov al, byte ptr ss : [ebp+0x50]
        mov byte ptr ds : [ebx+0x50], al
        mov eax, dword ptr ss : [ebp+0x54]
        test eax, eax
        mov dword ptr ss : [esp+0x2C], ebx
        je public_6f9138c
        mov ecx, dword ptr ss : [ebp+0x58]
        sub ecx, eax
        mov eax, 0x3E0F83E1
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6f9138c : nop
        test eax, eax
        jge public_6f91392
        xor eax, eax
        public_6f91392 : nop
        imul eax, 0x108
        push eax
        call public_6fa912a
        mov dword ptr ds : [ebx+0x54], eax
        mov ecx, dword ptr ss : [ebp+0x58]
        mov edx, dword ptr ss : [ebp+0x54]
        add esp, 4
        cmp edx, ecx
        mov ebp, eax
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], ebp
        je public_6f91573
        lea ebx, ds:[edx+0xF0]
        public_6f913c2 : nop
        mov dword ptr ss : [esp+0x30], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x40], 0
        je public_6f91549
        lea esi, ds:[ebx-0xF0]
        mov ecx, 0xD
        mov edi, ebp
        rep movsd
        mov edx, dword ptr ds : [ebx-0xBC]
        mov dword ptr ss : [ebp+0x34], edx
        mov eax, dword ptr ds : [ebx-0xB8]
        mov dword ptr ss : [ebp+0x38], eax
        lea esi, ds:[ebx-0xB4]
        lea edi, ss:[ebp+0x3C]
        mov ecx, 0x1A
        rep movsd
        lea esi, ds:[ebx-0x4C]
        lea edi, ss:[ebp+0xA4]
        mov ecx, 0xD
        rep movsd
        lea ecx, ds:[ebx-0x18]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[ebp+0xD8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov dl, byte ptr ds : [ebx-0xC]
        mov byte ptr ss : [ebp+0xE4], dl
        mov eax, dword ptr ds : [ebx-8]
        mov dword ptr ss : [ebp+0xE8], eax
        mov cl, byte ptr ds : [ebx-4]
        lea esi, ss:[ebp+0xEC]
        mov byte ptr ds : [esi], cl
        push 0xC
        mov ecx, esi
        call public_6f93c70
        mov edi, eax
        push edi
        call public_6f2d8c0
        push edi
        mov dword ptr ds : [eax], edi
        call public_6f93c60
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], 0
        mov edx, dword ptr ds : [ebx]
        add esp, 8
        push edx
        lea ecx, ss:[esp+0x18]
        call public_6f21ff0
        mov eax, dword ptr ds : [ebx]
        push eax
        call public_6f2d8c0
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f21ff0
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6f2d8c0
        mov eax, dword ptr ds : [eax]
        add esp, 4
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6f21ff0
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x24], eax
        call public_6f93620
        test al, al
        je public_6f91516
        lea ebx, ds:[ebx]
        public_6f914e0 : nop
        lea ecx, ss:[esp+0x48]
        call public_6f93600
        mov edx, dword ptr ss : [esp+0x20]
        push eax
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        mov ecx, esi
        call public_6f1e390
        lea ecx, ss:[esp+0x48]
        call public_6f93610
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x4C]
        call public_6f93620
        test al, al
        jne public_6f914e0
        public_6f91516 : nop
        mov dx, word ptr ds : [ebx+8]
        mov word ptr ss : [ebp+0xF8], dx
        mov al, byte ptr ds : [ebx+0xA]
        mov byte ptr ss : [ebp+0xFA], al
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [ebp+0xFC], ecx
        mov edx, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [ebp+0x100], edx
        mov eax, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [ebp+0x104], eax
        public_6f91549 : nop
        add ebx, 0x108
        add ebp, 0x108
        lea edx, ds:[ebx-0xF0]
        cmp edx, ecx
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x28], ebp
        jne public_6f913c2
        mov ebx, dword ptr ss : [esp+0x2C]
        public_6f91573 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        pop edi
        mov dword ptr ds : [ebx+0x58], ebp
        mov dword ptr ds : [ebx+0x5C], ebp
        pop esi
        mov dword ptr ds : [ebx], offset public_6fbc7c8
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x6f91310)
    }
}

#undef public_6f9138c
#undef public_6f91392
#undef public_6f913c2
#undef public_6f914e0
#undef public_6f91516
#undef public_6f91549
#undef public_6f91573
