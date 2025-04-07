#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f830);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6176b);

#define public_6d0f892 _public_6d0f892
#define public_6d0f8c3 _public_6d0f8c3
#define public_6d0f8d1 _public_6d0f8d1

PROC_DECLARE(0x6d0f830, internal_6d0f830, public_6d0f830);
extern "C" NAKED register_t __cdecl internal_6d0f830()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6176b @0x6d0f832*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6176b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_6d0f8d1
        push ebp
        push edi
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov ebp, dword ptr ds : [public_6d6447c]
        mov byte ptr ss : [esp+0x18], 1
        je public_6d0f892
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_6d0f892
        add eax, 8
        test eax, eax
        je public_6d0f892
        push eax
        mov ecx, esi
        call ebp
        public_6d0f892 : nop
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ds : [ecx], 0
        mov dword ptr ds : [ecx+4], 0
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        mov byte ptr ss : [esp+0x18], 3
        je public_6d0f8c3
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_6d0f8c3
        add eax, 8
        test eax, eax
        je public_6d0f8c3
        push eax
        call ebp
        public_6d0f8c3 : nop
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], eax
        mov cl, byte ptr ds : [edi+0x14]
        pop edi
        mov byte ptr ds : [esi+0x14], cl
        pop ebp
        public_6d0f8d1 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d0f830)
    }
}

#undef public_6d0f892
#undef public_6d0f8c3
#undef public_6d0f8d1
