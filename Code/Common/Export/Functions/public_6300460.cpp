#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9d50);
CLANG_FORWARD_PROC_SYMBOL(public_6300460);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6395ea4);

#define public_63004a0 _public_63004a0
#define public_63004c4 _public_63004c4
#define public_63004f0 _public_63004f0
#define public_63004f9 _public_63004f9
#define public_630051c _public_630051c
#define public_6300525 _public_6300525
#define public_6300548 _public_6300548
#define public_6300551 _public_6300551

PROC_DECLARE(0x6300460, internal_6300460, public_6300460);
extern "C" NAKED register_t __cdecl internal_6300460()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395ea4 @0x6300462*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395ea4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        lea edi, ds:[ecx+4]
        mov dword ptr ss : [esp+0x14], edi
        mov ebp, dword ptr ds : [edi+0x38]
        mov eax, dword ptr ss : [ebp]
        lea esi, ds:[edi+0x34]
        xor ebx, ebx
        cmp eax, ebp
        mov dword ptr ss : [esp+0x28], 2
        mov dword ptr ss : [esp+0x10], eax
        je public_63004c4
        mov edi, edi
        public_63004a0 : nop
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_632ca20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_62b9d50
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_63004a0
        public_63004c4 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x28]
        add esp, 4
        cmp eax, ebx
        je public_63004f9
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_63004f0
        cmp cl, 0xFF
        je public_63004f0
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_63004f9
        public_63004f0 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_63004f9 : nop
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x30], ebx
        mov eax, dword ptr ds : [edi+0x18]
        cmp eax, ebx
        je public_6300525
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_630051c
        cmp cl, 0xFF
        je public_630051c
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6300525
        public_630051c : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6300525 : nop
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x20], ebx
        mov eax, dword ptr ds : [edi+8]
        cmp eax, ebx
        je public_6300551
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6300548
        cmp cl, 0xFF
        je public_6300548
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6300551
        public_6300548 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6300551 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+0x10], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6300460)
    }
}

#undef public_63004a0
#undef public_63004c4
#undef public_63004f0
#undef public_63004f9
#undef public_630051c
#undef public_6300525
#undef public_6300548
#undef public_6300551
