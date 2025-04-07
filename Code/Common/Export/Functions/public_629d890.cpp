#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_63939f8);

#define public_629d8e8 _public_629d8e8

PROC_DECLARE(0x629d890, internal_629d890, public_629d890);
extern "C" NAKED register_t __cdecl internal_629d890()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63939f8 @0x629d898*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63939f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        lea ecx, ds:[esi+8]
        xor edx, edx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [edi+8]
        cmp eax, edx
        mov dword ptr ss : [esp+0x10], edx
        je public_629d8e8
        add eax, 0xFFFFFF64
        cmp eax, edx
        je public_629d8e8
        add eax, 0x9C
        cmp eax, edx
        je public_629d8e8
        push eax
        call public_6341610
        public_629d8e8 : nop
        lea edx, ds:[edi+0x10]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], ecx
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov eax, esi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x629d890)
    }
}

#undef public_629d8e8
