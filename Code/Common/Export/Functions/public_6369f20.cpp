#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6369f20);
CLANG_FORWARD_JUMP_SYMBOL(public_63986c7);

#define public_6369f65 _public_6369f65
#define public_6369f72 _public_6369f72
#define public_6369f95 _public_6369f95
#define public_6369f9c _public_6369f9c
#define public_6369fbc _public_6369fbc
#define public_6369fc3 _public_6369fc3
#define public_6369fe3 _public_6369fe3
#define public_6369fea _public_6369fea
#define public_636a009 _public_636a009
#define public_636a010 _public_636a010
#define public_636a033 _public_636a033
#define public_636a03a _public_636a03a

PROC_DECLARE(0x6369f20, internal_6369f20, public_6369f20);
extern "C" NAKED register_t __cdecl internal_6369f20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63986c7 @0x6369f22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63986c7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x90]
        lea ecx, ds:[esi+0x94]
        xor ebx, ebx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], 4
        je public_6369f72
        cmp eax, ebx
        je public_6369f65
        push eax
        call public_6343fb0
        add esp, 4
        public_6369f65 : nop
        mov dword ptr ds : [esi+0x90], ebx
        mov word ptr ds : [esi+0x8C], bx
        public_6369f72 : nop
        mov word ptr ds : [esi+0x8E], bx
        mov eax, dword ptr ds : [esi+0x68]
        lea edx, ds:[esi+0x6C]
        cmp eax, edx
        mov byte ptr ss : [esp+0x14], 3
        je public_6369f9c
        cmp eax, ebx
        je public_6369f95
        push eax
        call public_6343fb0
        add esp, 4
        public_6369f95 : nop
        mov dword ptr ds : [esi+0x68], ebx
        mov word ptr ds : [esi+0x64], bx
        public_6369f9c : nop
        mov word ptr ds : [esi+0x66], bx
        mov eax, dword ptr ds : [esi+0x60]
        lea ecx, ds:[esi+0x64]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x14], 2
        je public_6369fc3
        cmp eax, ebx
        je public_6369fbc
        push eax
        call public_6343fb0
        add esp, 4
        public_6369fbc : nop
        mov dword ptr ds : [esi+0x60], ebx
        mov word ptr ds : [esi+0x5C], bx
        public_6369fc3 : nop
        mov word ptr ds : [esi+0x5E], bx
        mov eax, dword ptr ds : [esi+0x2C]
        lea edx, ds:[esi+0x30]
        cmp eax, edx
        mov byte ptr ss : [esp+0x14], 1
        je public_6369fea
        cmp eax, ebx
        je public_6369fe3
        push eax
        call public_6343fb0
        add esp, 4
        public_6369fe3 : nop
        mov dword ptr ds : [esi+0x2C], ebx
        mov word ptr ds : [esi+0x28], bx
        public_6369fea : nop
        mov word ptr ds : [esi+0x2A], bx
        mov eax, dword ptr ds : [esi+0x24]
        lea ecx, ds:[esi+0x28]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x14], bl
        je public_636a010
        cmp eax, ebx
        je public_636a009
        push eax
        call public_6343fb0
        add esp, 4
        public_636a009 : nop
        mov dword ptr ds : [esi+0x24], ebx
        mov word ptr ds : [esi+0x20], bx
        public_636a010 : nop
        mov word ptr ds : [esi+0x22], bx
        mov eax, dword ptr ds : [esi+0x1C]
        lea edx, ds:[esi+0x20]
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        je public_636a03a
        cmp eax, ebx
        je public_636a033
        push eax
        call public_6343fb0
        add esp, 4
        public_636a033 : nop
        mov dword ptr ds : [esi+0x1C], ebx
        mov word ptr ds : [esi+0x18], bx
        public_636a03a : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov word ptr ds : [esi+0x1A], bx
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6369f20)
    }
}

#undef public_6369f65
#undef public_6369f72
#undef public_6369f95
#undef public_6369f9c
#undef public_6369fbc
#undef public_6369fc3
#undef public_6369fe3
#undef public_6369fea
#undef public_636a009
#undef public_636a010
#undef public_636a033
#undef public_636a03a
