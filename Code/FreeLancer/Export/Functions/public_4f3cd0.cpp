#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf23f);

#define public_4f3d31 _public_4f3d31
#define public_4f3d57 _public_4f3d57

PROC_DECLARE(0x4f3cd0, internal_4f3cd0, public_4f3cd0);
extern "C" NAKED register_t __cdecl internal_4f3cd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf23f @0x4f3cd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf23f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x38]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_5d9784
        mov dword ptr ds : [edi], offset public_5d96cc
        mov dword ptr ds : [esi+0xB4], offset public_5d96bc
        mov ebp, dword ptr ds : [public_5c62a8]
        lea ecx, ds:[esi+0x364]
        mov dword ptr ds : [public_674bc8], 0
        cmp dword ptr ds : [ecx], 0
        mov dword ptr ss : [esp+0x1C], 1
        je public_4f3d31
        push 0
        call ebp
        public_4f3d31 : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 0
        call public_59fa50
        lea ecx, ds:[esi+0x28]
        mov dword ptr ds : [esi], offset public_5d6eac
        cmp dword ptr ds : [ecx], 0
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_4f3d57
        push 0
        call ebp
        public_4f3d57 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4f3cd0)
    }
}

#undef public_4f3d31
#undef public_4f3d57
