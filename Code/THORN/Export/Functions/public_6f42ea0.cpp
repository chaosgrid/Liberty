#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f42ea0);
CLANG_FORWARD_JUMP_SYMBOL(public_6f59230);

#define public_6f42ede _public_6f42ede
#define public_6f42ef9 _public_6f42ef9
#define public_6f42f14 _public_6f42f14
#define public_6f42f2f _public_6f42f2f
#define public_6f42f49 _public_6f42f49

PROC_DECLARE(0x6f42ea0, internal_6f42ea0, public_6f42ea0);
extern "C" NAKED register_t __cdecl internal_6f42ea0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f59230 @0x6f42ea2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f59230
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
        mov eax, dword ptr ds : [esi+0x114]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], 4
        je public_6f42ede
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x114], ebx
        public_6f42ede : nop
        mov eax, dword ptr ds : [esi+0x110]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x14], 3
        je public_6f42ef9
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x110], ebx
        public_6f42ef9 : nop
        mov eax, dword ptr ds : [esi+0x10C]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x14], 2
        je public_6f42f14
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10C], ebx
        public_6f42f14 : nop
        mov eax, dword ptr ds : [esi+0x108]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x14], 1
        je public_6f42f2f
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x108], ebx
        public_6f42f2f : nop
        mov eax, dword ptr ds : [esi+0x104]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x14], bl
        je public_6f42f49
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x104], ebx
        public_6f42f49 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_6f405e0
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f42ea0)
    }
}

#undef public_6f42ede
#undef public_6f42ef9
#undef public_6f42f14
#undef public_6f42f2f
#undef public_6f42f49
