#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b350);
CLANG_FORWARD_PROC_SYMBOL(public_623ce20);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624a528);

#define public_623ce43 _public_623ce43
#define public_623ce45 _public_623ce45
#define public_623ce61 _public_623ce61
#define public_623ce75 _public_623ce75
#define public_623ce8d _public_623ce8d
#define public_623cea2 _public_623cea2
#define public_623ceb7 _public_623ceb7
#define public_623cecc _public_623cecc
#define public_623cee1 _public_623cee1
#define public_623cef6 _public_623cef6
#define public_623cf0b _public_623cf0b
#define public_623cf38 _public_623cf38
#define public_623cf48 _public_623cf48

PROC_DECLARE(0x623ce20, internal_623ce20, public_623ce20);
extern "C" NAKED register_t __cdecl internal_623ce20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a528 @0x623ce22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a528
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        xor ebx, ebx
        cmp ecx, ebx
        push esi
        je public_623ce43
        lea esi, ds:[ecx+4]
        jmp public_623ce45
        public_623ce43 : nop
        xor esi, esi
        public_623ce45 : nop
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x70]
        mov dword ptr ss : [esp+0x14], 1
        cmp eax, ebx
        je public_623ce61
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x70], ebx
        public_623ce61 : nop
        mov eax, dword ptr ds : [esi+0x6C]
        mov byte ptr ss : [esp+0x14], bl
        cmp eax, ebx
        je public_623ce75
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x6C], ebx
        public_623ce75 : nop
        mov eax, dword ptr ds : [esi+0x68]
        mov dword ptr ss : [esp+0x14], 8
        cmp eax, ebx
        je public_623ce8d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x68], ebx
        public_623ce8d : nop
        mov eax, dword ptr ds : [esi+0x60]
        mov byte ptr ss : [esp+0x14], 7
        cmp eax, ebx
        je public_623cea2
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x60], ebx
        public_623cea2 : nop
        mov eax, dword ptr ds : [esi+0x5C]
        mov byte ptr ss : [esp+0x14], 6
        cmp eax, ebx
        je public_623ceb7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x5C], ebx
        public_623ceb7 : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov byte ptr ss : [esp+0x14], 5
        cmp eax, ebx
        je public_623cecc
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x58], ebx
        public_623cecc : nop
        mov eax, dword ptr ds : [esi+0x54]
        mov byte ptr ss : [esp+0x14], 4
        cmp eax, ebx
        je public_623cee1
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x54], ebx
        public_623cee1 : nop
        mov eax, dword ptr ds : [esi+0x50]
        mov byte ptr ss : [esp+0x14], 3
        cmp eax, ebx
        je public_623cef6
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x50], ebx
        public_623cef6 : nop
        mov eax, dword ptr ds : [esi+0x4C]
        mov byte ptr ss : [esp+0x14], 2
        cmp eax, ebx
        je public_623cf0b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x4C], ebx
        public_623cf0b : nop
        mov dword ptr ds : [esi+0x28], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], 9
        mov dword ptr ds : [esi+0x30], offset public_624bd80
        je public_623cf38
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, ebx
        je public_623cf38
        push eax
        call public_62460e0
        add esp, 4
        public_623cf38 : nop
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, ebx
        je public_623cf48
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x24], ebx
        public_623cf48 : nop
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi+4], offset public_624bd84
        call public_620b350
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x623ce20)
    }
}

#undef public_623ce43
#undef public_623ce45
#undef public_623ce61
#undef public_623ce75
#undef public_623ce8d
#undef public_623cea2
#undef public_623ceb7
#undef public_623cecc
#undef public_623cee1
#undef public_623cef6
#undef public_623cf0b
#undef public_623cf38
#undef public_623cf48
