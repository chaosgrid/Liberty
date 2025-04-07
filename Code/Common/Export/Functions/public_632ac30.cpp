#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632ae70);
CLANG_FORWARD_PROC_SYMBOL(public_632aed0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6392140);
CLANG_FORWARD_JUMP_SYMBOL(public_63972e3);

#define public_632acc0 _public_632acc0
#define public_632acf5 _public_632acf5
#define public_632acf7 _public_632acf7
#define public_632ad0e _public_632ad0e
#define public_632ad22 _public_632ad22
#define public_632ad24 _public_632ad24
#define public_632ad49 _public_632ad49
#define public_632ad94 _public_632ad94
#define public_632ada6 _public_632ada6
#define public_632adb3 _public_632adb3
#define public_632adcd _public_632adcd
#define public_632ade4 _public_632ade4
#define public_632adfe _public_632adfe

PROC_DECLARE(0x632ac30, internal_632ac30, public_632ac30);
extern "C" NAKED register_t __cdecl internal_632ac30()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push 0xFFFFFFFF
/*FIXUP push public_63972e3 @0x632ac38*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63972e3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        mov ecx, dword ptr ss : [ebp+8]
        push esi
        xor eax, eax
        mov esi, offset public_63a4644
        push edi
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x24], esi
        mov byte ptr ss : [esp+0x2C], al
        mov byte ptr ss : [esp+0x34], al
        lea edx, ss:[esp+0x28]
        push edx
/*FIXUP push offset public_63ed97c @0x632ac73*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ed97c
        push 7
        push eax
/*FIXUP push offset public_63ed96c @0x632ac7b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ed96c
        mov dword ptr ss : [esp+0x58], eax
        call dword ptr ds : [public_63993ac]
        test eax, eax
        jl public_632ade4
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        test eax, eax
        sete al
        test al, al
        je public_632ade4
        mov al, byte ptr ss : [esp+0x2C]
        test al, al
        je public_632acc0
        mov byte ptr ss : [esp+0xB], 0
        jmp public_632adb3
        public_632acc0 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0xC]
        push eax
        push ecx
        call dword ptr ds : [public_6399360]
        push 0xC
        mov esi, eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        test eax, eax
        mov byte ptr ss : [esp+0x44], 1
        je public_632acf5
        push 0
        push esi
        mov ecx, eax
        call public_632ae70
        mov esi, eax
        jmp public_632acf7
        public_632acf5 : nop
        xor esi, esi
        public_632acf7 : nop
        test esi, esi
        mov byte ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0xC], esi
        jne public_632ad0e
        push 0x8007000E
        call public_6392140
        public_632ad0e : nop
        test esi, esi
        mov byte ptr ss : [esp+0x44], 2
        mov word ptr ss : [esp+0x10], 8
        je public_632ad22
        mov edi, dword ptr ds : [esi]
        jmp public_632ad24
        public_632ad22 : nop
        xor edi, edi
        public_632ad24 : nop
        push edi
        call dword ptr ds : [public_6399364]
        push eax
        push edi
        call dword ptr ds : [public_6399360]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_632ad49
        push 0x8007000E
        call public_6392140
        mov eax, dword ptr ss : [esp+0x18]
        public_632ad49 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [edx]
        mov edi, dword ptr ss : [esp+0x10]
        sub esp, 0x10
        mov edx, esp
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx+0xC], eax
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        mov byte ptr ss : [esp+0x58], 3
        call dword ptr ds : [ecx+0x4C]
        mov edi, eax
        lea eax, ss:[esp+0x10]
        push eax
        mov byte ptr ss : [esp+0x48], 2
        call dword ptr ds : [public_6399368]
        test eax, eax
        jge public_632ad94
        push eax
        call public_6392140
        public_632ad94 : nop
        test edi, edi
        sete byte ptr ss : [esp+0xB]
        test esi, esi
        je public_632ada6
        mov ecx, esi
        call public_632aed0
        public_632ada6 : nop
        mov cl, byte ptr ss : [esp+0xB]
        mov byte ptr ss : [esp+0xB], cl
        mov esi, offset public_63a4644
        public_632adb3 : nop
        mov dword ptr ss : [esp+0x24], esi
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        mov dword ptr ss : [esp+0x44], 4
        je public_632adcd
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_632adcd : nop
        mov al, byte ptr ss : [esp+0xB]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0xC
        public_632ade4 : nop
        mov dword ptr ss : [esp+0x24], esi
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        mov dword ptr ss : [esp+0x44], 5
        je public_632adfe
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_632adfe : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        pop edi
        xor al, al
        mov dword ptr fs : [0], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x632ac30)
    }
}

#undef public_632acc0
#undef public_632acf5
#undef public_632acf7
#undef public_632ad0e
#undef public_632ad22
#undef public_632ad24
#undef public_632ad49
#undef public_632ad94
#undef public_632ada6
#undef public_632adb3
#undef public_632adcd
#undef public_632ade4
#undef public_632adfe
