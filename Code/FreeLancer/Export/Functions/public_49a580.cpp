#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c970);
CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_49a580);
CLANG_FORWARD_PROC_SYMBOL(public_4c5040);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57e2c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcac4);

#define public_49a67d _public_49a67d
#define public_49a706 _public_49a706
#define public_49a7c3 _public_49a7c3
#define public_49a802 _public_49a802
#define public_49a870 _public_49a870
#define public_49a8b1 _public_49a8b1
#define public_49a8cc _public_49a8cc
#define public_49a8cd _public_49a8cd

PROC_DECLARE(0x49a580, internal_49a580, public_49a580);
extern "C" NAKED register_t __cdecl internal_49a580()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bcac4 @0x49a588*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcac4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_672950]
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov esi, ecx
        jne public_49a706
        mov ecx, dword ptr ds : [esi+0x904]
        mov eax, dword ptr ds : [ecx]
        xor edi, edi
        push edi
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x908]
        mov edx, dword ptr ds : [ecx]
        push edi
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
/*FIXUP push offset public_5cef90 @0x49a5d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cef90
/*FIXUP push offset public_66fc60 @0x49a5d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70b4]
        mov ecx, dword ptr ds : [esi+0x8F0]
        mov eax, dword ptr ds : [ecx]
        add esp, 8
        push edi
/*FIXUP push offset public_66fc60 @0x49a5ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [esi+0x8F4]
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, byte ptr ss : [esp+0xB]
        and dl, 0xFD
        mov byte ptr ds : [eax+0x6C], dl
        push edi
        mov byte ptr ss : [esp+0x24], cl
        push edi
        lea ecx, ss:[esp+0x28]
        call public_42a7e0
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], edi
        push 0x9CA4
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], edi
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x40], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0xC], eax
        mov ecx, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0xC]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x4C], 2
        call public_46c800
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, edi
        mov byte ptr ss : [esp+0x40], 1
        je public_49a67d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], edi
        public_49a67d : nop
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x40], 0
        call dword ptr ds : [public_5c62b4]
        push edi
        lea ecx, ss:[esp+0x24]
        push ecx
/*FIXUP push offset public_66fc60 @0x49a692*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x49a6a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        mov esi, dword ptr ds : [esi+0x8F4]
        add esp, 0x10
        mov ecx, esi
        call public_57b370
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_57b3e0
        push edi
        push edi
        mov ecx, esi
        call public_5798b0
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_46c860
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        jmp public_49a8cd
        public_49a706 : nop
        mov edx, dword ptr ds : [public_6119f8]
        push ebx
        push ebp
        push edx
/*FIXUP push offset public_66fc60 @0x49a70f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        lea ecx, ds:[edi+0x20]
        call public_41c970
        mov ecx, dword ptr ds : [esi+0x8F0]
        mov eax, dword ptr ds : [ecx]
        push 0
/*FIXUP push offset public_66fc60 @0x49a726*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [public_6119f8]
        push ecx
/*FIXUP push offset public_66fc60 @0x49a73a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        lea ecx, ds:[edi+0x38]
        call public_41c970
        mov eax, dword ptr ds : [esi+0x8F4]
        mov bl, byte ptr ds : [eax+0x6C]
        mov dl, byte ptr ss : [esp+0x13]
        or bl, 2
        mov byte ptr ds : [eax+0x6C], bl
        push 0xC
        mov byte ptr ss : [esp+0x38], dl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], 0
        push 0x9CA4
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x4C], 3
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x48], 4
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x38]
        mov ebp, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        push 0xC
        mov byte ptr ss : [esp+0x4C], 5
        mov ebx, eax
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_49a7c3
        mov ebp, eax
        public_49a7c3 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x14]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x44]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        mov byte ptr ss : [esp+0x48], 4
        je public_49a802
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], 0
        public_49a802 : nop
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x48], 3
        call dword ptr ds : [public_5c62b4]
        push 0
        lea eax, ss:[esp+0x38]
        push eax
/*FIXUP push offset public_66fc60 @0x49a818*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x49a827*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        mov edi, dword ptr ds : [esi+0x8F4]
        add esp, 0x10
        mov ecx, edi
        call public_57b370
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, edi
        call public_57b3e0
        push 0
        push 0
        mov ecx, edi
        call public_5798b0
        mov bl, 1
        call public_4c5040
        test eax, eax
        je public_49a870
        mov al, byte ptr ds : [eax+0x40]
        cmp al, 7
        je public_49a870
        cmp al, 8
        je public_49a870
        xor bl, bl
        public_49a870 : nop
        mov ecx, dword ptr ds : [esi+0x904]
        mov edx, dword ptr ds : [ecx]
        movzx edi, bl
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov esi, dword ptr ds : [esi+0x908]
        mov eax, dword ptr ds : [esi]
        push 0
        push edi
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ss : [esp+0x38]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        pop ebp
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        mov edi, eax
        pop ebx
        je public_49a8cc
        public_49a8b1 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_46d680
        cmp esi, edi
        jne public_49a8b1
        mov eax, dword ptr ss : [esp+0x30]
        public_49a8cc : nop
        push eax
        public_49a8cd : nop
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 4
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x49a580)
    }
}

#undef public_49a67d
#undef public_49a706
#undef public_49a7c3
#undef public_49a802
#undef public_49a870
#undef public_49a8b1
#undef public_49a8cc
#undef public_49a8cd
