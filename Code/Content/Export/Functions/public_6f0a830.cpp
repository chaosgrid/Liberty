#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6f099f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f276f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57710);
CLANG_FORWARD_PROC_SYMBOL(public_6f57840);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad1a8);

#define public_6f0a85d _public_6f0a85d
#define public_6f0a8f3 _public_6f0a8f3
#define public_6f0a903 _public_6f0a903
#define public_6f0a96f _public_6f0a96f
#define public_6f0a991 _public_6f0a991
#define public_6f0a9ad _public_6f0a9ad
#define public_6f0a9ea _public_6f0a9ea
#define public_6f0a9f0 _public_6f0a9f0

PROC_DECLARE(0x6f0a830, internal_6f0a830, public_6f0a830);
extern "C" NAKED register_t __cdecl internal_6f0a830()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fad1a8 @0x6f0a838*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad1a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x1B5]
        xor ebx, ebx
        cmp al, bl
        jne public_6f0a85d
        call public_6f099f0
        public_6f0a85d : nop
        cmp byte ptr ds : [esi+0x1B4], 1
        jne public_6f0a9f0
        mov ecx, dword ptr ds : [esi+8]
        call public_6f57710
        test al, al
        jne public_6f0a9f0
        cmp dword ptr ds : [esi+0x174], 0xC
        jne public_6f0a9ea
        mov al, byte ptr ss : [esp+0xB]
        push edi
        push ebx
        push ebx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], al
        call public_6f93790
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x10], ebx
        lea ecx, ss:[esp+0x10]
        push ecx
        push 0x13
        mov byte ptr ss : [esp+0x38], 1
        call public_6f24870
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
/*FIXUP push offset public_6fb80e4 @0x6f0a8c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb80e4
        lea edx, ds:[esi+0x1B0]
        push edx
        call public_6f276f0
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x170]
        cmp ecx, eax
        mov edi, eax
        je public_6f0a903
        cmp ecx, ebx
        je public_6f0a8f3
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x170], ebx
        public_6f0a8f3 : nop
        cmp edi, ebx
        mov dword ptr ds : [esi+0x170], edi
        je public_6f0a903
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        public_6f0a903 : nop
        mov eax, dword ptr ds : [esi+0x170]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6f93790
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc eax
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        push ebx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        call public_6f57840
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x30], bl
        pop edi
        je public_6f0a96f
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0xC], ebx
        public_6f0a96f : nop
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x30], 2
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        je public_6f0a9ad
        public_6f0a991 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f0a991
        public_6f0a9ad : nop
        mov eax, dword ptr ds : [ecx]
        push ecx
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f0a9ea : nop
        mov byte ptr ds : [esi+0x1B4], bl
        public_6f0a9f0 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6f0a830)
    }
}

#undef public_6f0a85d
#undef public_6f0a8f3
#undef public_6f0a903
#undef public_6f0a96f
#undef public_6f0a991
#undef public_6f0a9ad
#undef public_6f0a9ea
#undef public_6f0a9f0
