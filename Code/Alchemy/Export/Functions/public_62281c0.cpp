#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222e00);
CLANG_FORWARD_PROC_SYMBOL(public_6222ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6222ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6222f80);
CLANG_FORWARD_PROC_SYMBOL(public_62281c0);
CLANG_FORWARD_PROC_SYMBOL(public_6228350);
CLANG_FORWARD_PROC_SYMBOL(public_6229dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6229de0);
CLANG_FORWARD_JUMP_SYMBOL(public_6249128);

#define public_622824c _public_622824c
#define public_62282fb _public_62282fb
#define public_622830e _public_622830e

PROC_DECLARE(0x62281c0, internal_62281c0, public_62281c0);
extern "C" NAKED register_t __cdecl internal_62281c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249128 @0x62281c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249128
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        xor ebx, ebx
        push edi
        push ebx
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_6256468 @0x62281e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256468
        push esi
        call dword ptr ds : [eax+0x54]
        mov ecx, dword ptr ds : [esi]
/*FIXUP push offset public_6256468 @0x62281ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256468
        push esi
        call dword ptr ds : [ecx+0x60]
        push 1
/*FIXUP push offset public_6256468 @0x62281fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256468
        push esi
        lea ecx, ss:[esp+0x28]
        call public_6222e00
        lea edx, ss:[esp+0x10]
        push 4
        push edx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x18], 0x3F8CCCCD
        call public_6222ee0
        push 4
        lea ecx, ss:[esp+0x20]
        mov edi, dword ptr ss : [esp+0x44]
        lea eax, ds:[edi+4]
        push eax
        call public_6222ee0
        lea ecx, ss:[esp+0xC]
        add edi, 0x1C
        push ecx
        mov ecx, edi
        call public_6229dc0
        mov byte ptr ss : [esp+0x38], 1
        public_622824c : nop
        lea edx, ss:[esp+0x40]
        mov ecx, edi
        push edx
        call public_6229de0
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x40], ebx
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, edx
        setne al
        cmp al, bl
        je public_622830e
        mov dword ptr ss : [esp+0x44], ebx
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x44]
        push edx
        push ecx
        mov byte ptr ss : [esp+0x40], 2
        call dword ptr ds : [eax+0x80]
        lea edx, ss:[esp+0x14]
        mov eax, dword ptr ss : [esp+0x44]
        push edx
        push 0xF54EF296
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x48]
        lea ecx, ss:[esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_6222f80
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x24], 0
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x28], ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x2C], eax
        mov edx, dword ptr ds : [eax]
        push ecx
/*FIXUP push offset _public_6228350 @0x62282c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6228350
        push eax
        call dword ptr ds : [edx+0x5C]
        lea edx, ss:[esp+0x18]
        push 2
        push edx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x20], ebx
        call public_6222ee0
        mov byte ptr ss : [esp+0x38], 1
        mov eax, dword ptr ss : [esp+0x44]
        cmp eax, ebx
        je public_62282fb
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x44], ebx
        public_62282fb : nop
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x34]
        mov dword ptr ss : [esp+0xC], eax
        jmp public_622824c
        public_622830e : nop
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_6256178 @0x6228310*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256178
        push esi
        call dword ptr ds : [eax+0x60]
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call public_6222ec0
        mov ecx, dword ptr ss : [esp+0x30]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x62281c0)
    }
}

#undef public_622824c
#undef public_62282fb
#undef public_622830e
