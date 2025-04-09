#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f3820);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf16a);

#define public_4f3875 _public_4f3875
#define public_4f38a2 _public_4f38a2

PROC_DECLARE(0x4f3820, internal_4f3820, public_4f3820);
extern "C" NAKED register_t __cdecl internal_4f3820()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf16a @0x4f3822*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf16a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        xor ecx, ecx
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_4f38a2
        push edi
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+4], ecx
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x14], 1
        je public_4f3875
        add eax, 0xFFFFFFF8
        cmp eax, ecx
        je public_4f3875
        add eax, 8
        cmp eax, ecx
        je public_4f3875
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c62a8]
        public_4f3875 : nop
        lea eax, ds:[edi+8]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        add edi, 0x14
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [edi]
        add esi, 0x14
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        pop edi
        public_4f38a2 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4f3820)
    }
}

#undef public_4f3875
#undef public_4f38a2
