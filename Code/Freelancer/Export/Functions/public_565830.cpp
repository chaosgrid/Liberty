#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_565830);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1f7b);

#define public_565875 _public_565875
#define public_565882 _public_565882
#define public_565894 _public_565894
#define public_5658a4 _public_5658a4
#define public_5658bc _public_5658bc

PROC_DECLARE(0x565830, internal_565830, public_565830);
extern "C" NAKED register_t __cdecl internal_565830()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1f7b @0x565832*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1f7b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi]
        xor edi, edi
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], edi
        je public_565894
        cmp dword ptr ds : [esi+8], 0xFFFFFFFF
        je public_565882
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, edi
        je public_565875
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x44]
        mov dword ptr ds : [esi+0xC], edi
        public_565875 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        public_565882 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_565894 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, edi
        je public_5658a4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10], edi
        public_5658a4 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        je public_5658bc
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x10], edi
        public_5658bc : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x565830)
    }
}

#undef public_565875
#undef public_565882
#undef public_565894
#undef public_5658a4
#undef public_5658bc
