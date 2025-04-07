#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ebd0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6393b19);

#define public_629ec38 _public_629ec38
#define public_629ec5b _public_629ec5b

PROC_DECLARE(0x629ebd0, internal_629ebd0, public_629ebd0);
extern "C" NAKED register_t __cdecl internal_629ebd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393b19 @0x629ebd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393b19
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        xor edx, edx
        cmp esi, edx
        mov dword ptr ss : [esp+0x10], edx
        je public_629ec5b
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [edi+8]
        cmp eax, edx
        mov byte ptr ss : [esp+0x14], 1
        je public_629ec38
        add eax, 0xFFFFFF64
        cmp eax, edx
        je public_629ec38
        add eax, 0x9C
        cmp eax, edx
        je public_629ec38
        push eax
        call public_6341610
        public_629ec38 : nop
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
        pop edi
        public_629ec5b : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x629ebd0)
    }
}

#undef public_629ec38
#undef public_629ec5b
