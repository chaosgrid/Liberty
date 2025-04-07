#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f42cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_JUMP_SYMBOL(public_6f59185);

#define public_6f42cee _public_6f42cee
#define public_6f42cfe _public_6f42cfe
#define public_6f42d1b _public_6f42d1b
#define public_6f42d24 _public_6f42d24
#define public_6f42d50 _public_6f42d50

PROC_DECLARE(0x6f42cb0, internal_6f42cb0, public_6f42cb0);
extern "C" NAKED register_t __cdecl internal_6f42cb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f59185 @0x6f42cb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f59185
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
        mov dword ptr ds : [esi], offset public_6f5b134
        mov eax, dword ptr ds : [esi+0xE8]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], 2
        je public_6f42cee
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6f42cee : nop
        mov eax, dword ptr ds : [esi+0xCC]
        cmp eax, ebx
        je public_6f42cfe
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6f42cfe : nop
        mov eax, dword ptr ds : [esi+0xD8]
        cmp eax, ebx
        je public_6f42d24
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f42d1b
        cmp cl, 0xFF
        je public_6f42d1b
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f42d24
        public_6f42d1b : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f42d24 : nop
        mov dword ptr ds : [esi+0xD8], ebx
        mov dword ptr ds : [esi+0xDC], ebx
        mov dword ptr ds : [esi+0xE0], ebx
        mov eax, dword ptr ds : [esi+0xD0]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x14], bl
        je public_6f42d50
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xD0], ebx
        public_6f42d50 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_6f405e0
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f42cb0)
    }
}

#undef public_6f42cee
#undef public_6f42cfe
#undef public_6f42d1b
#undef public_6f42d24
#undef public_6f42d50
