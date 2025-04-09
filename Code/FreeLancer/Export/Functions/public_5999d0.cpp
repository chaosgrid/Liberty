#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5999d0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4bac);

#define public_599a28 _public_599a28
#define public_599a37 _public_599a37
#define public_599a3e _public_599a3e
#define public_599a4c _public_599a4c

PROC_DECLARE(0x5999d0, internal_5999d0, public_5999d0);
extern "C" NAKED register_t __cdecl internal_5999d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4bac @0x5999d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4bac
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
        je public_599a4c
        push edi
        mov dword ptr ds : [esi+4], 0
        mov edi, dword ptr ss : [esp+0x20]
        mov al, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov edx, 1
        mov byte ptr ss : [esp+0x14], dl
        je public_599a3e
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_599a28
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_599a28 : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_599a37
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax]
        public_599a37 : nop
        mov dword ptr ds : [esi+4], 0
        public_599a3e : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov dword ptr ds : [esi+4], eax
        pop edi
        je public_599a4c
        inc dword ptr ds : [eax+4]
        public_599a4c : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5999d0)
    }
}

#undef public_599a28
#undef public_599a37
#undef public_599a3e
#undef public_599a4c
