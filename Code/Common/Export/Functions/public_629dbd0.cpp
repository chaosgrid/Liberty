#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629dbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6393a6b);

#define public_629dc07 _public_629dc07
#define public_629dc2d _public_629dc2d

PROC_DECLARE(0x629dbd0, internal_629dbd0, public_629dbd0);
extern "C" NAKED register_t __cdecl internal_629dbd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393a6b @0x629dbd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393a6b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov eax, dword ptr ds : [esi+8]
        lea edi, ds:[esi+8]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_629dc07
        push ebx
        mov ecx, edi
        call public_6341610
        public_629dc07 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        cmp dword ptr ds : [edi], ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        je public_629dc2d
        push ebx
        mov ecx, edi
        call public_6341610
        public_629dc2d : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x629dbd0)
    }
}

#undef public_629dc07
#undef public_629dc2d
