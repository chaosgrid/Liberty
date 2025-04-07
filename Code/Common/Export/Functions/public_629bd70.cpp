#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b540);
CLANG_FORWARD_PROC_SYMBOL(public_62930d0);
CLANG_FORWARD_PROC_SYMBOL(public_629aed0);
CLANG_FORWARD_PROC_SYMBOL(public_629b010);
CLANG_FORWARD_PROC_SYMBOL(public_629bd70);
CLANG_FORWARD_PROC_SYMBOL(public_6307f80);
CLANG_FORWARD_JUMP_SYMBOL(public_6393933);

#define public_629be3d _public_629be3d
#define public_629be4e _public_629be4e
#define public_629be89 _public_629be89
#define public_629beb3 _public_629beb3
#define public_629bec2 _public_629bec2
#define public_629bee7 _public_629bee7

PROC_DECLARE(0x629bd70, internal_629bd70, public_629bd70);
extern "C" NAKED register_t __cdecl internal_629bd70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393933 @0x629bd72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393933
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        push ebx
        push esi
        push edi
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        push edx
        push eax
        push 0x100
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], esi
        call public_62930d0
        mov cl, byte ptr ss : [esp+0x2C]
        xor ebx, ebx
        mov byte ptr ds : [esi+0x4C], bl
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        lea edi, ds:[esi+0x4C]
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ds : [esi+0x60], cl
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        push 1
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 1
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov dword ptr ds : [esi+0x7C], ebx
        mov dword ptr ds : [esi+0x80], ebx
        mov dword ptr ds : [esi], offset public_639d50c
        mov dword ptr ds : [esi+0x34], 3
        call public_629aed0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        jne public_629be4e
        cmp byte ptr ds : [edi], bl
        je public_629bee7
        mov ecx, dword ptr ds : [esi+0x28]
        cmp ecx, ebx
        je public_629bec2
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [esi+0x80]
        cmp eax, ebx
        je public_629be3d
        mov ecx, dword ptr ds : [eax+8]
        push 1
        push ecx
        call public_628b540
        add esp, 8
        public_629be3d : nop
        push edi
        mov ecx, esi
        push 0x11
        mov byte ptr ds : [edi], bl
        call public_629b010
        jmp public_629bee7
        public_629be4e : nop
        call public_6307f80
        fcomp qword ptr ds : [esi+0x58]
        fnstsw ax
        test ah, 1
        jne public_629bee7
        mov eax, dword ptr ds : [esi+0x74]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], eax
        call dword ptr ds : [edx+0x44]
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 0x41
        jne public_629bee7
        mov eax, dword ptr ds : [esi+0x80]
        cmp eax, ebx
        je public_629be89
        cmp dword ptr ds : [eax+0xC], ebx
        jne public_629bee7
        public_629be89 : nop
        cmp byte ptr ds : [edi], 1
        je public_629bee7
        mov ecx, dword ptr ds : [esi+0x28]
        cmp ecx, ebx
        je public_629bec2
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [esi+0x80]
        cmp eax, ebx
        je public_629beb3
        mov ecx, dword ptr ds : [eax+8]
        push ebx
        push ecx
        call public_628b540
        add esp, 8
        public_629beb3 : nop
        push edi
        mov ecx, esi
        push 0x11
        mov byte ptr ds : [edi], 1
        call public_629b010
        jmp public_629bee7
        public_629bec2 : nop
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639d660 @0x629bec8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d660
        push 0x195
/*FIXUP push offset public_639d634 @0x629bed2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d634
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x629bedc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_629bee7 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x629bd70)
    }
}

#undef public_629be3d
#undef public_629be4e
#undef public_629be89
#undef public_629beb3
#undef public_629bec2
#undef public_629bee7
