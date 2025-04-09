#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5256a0);

#define public_525754 _public_525754

PROC_DECLARE(0x5256a0, internal_5256a0, public_5256a0);
extern "C" NAKED register_t __cdecl internal_5256a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], eax
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0xBC], eax
        mov dword ptr ds : [esi+0xC0], eax
        mov dword ptr ds : [esi+0xC4], eax
        mov dword ptr ds : [esi+0xC8], eax
        mov dword ptr ds : [esi+0xCC], eax
        mov dword ptr ds : [esi+0xD0], eax
        mov dword ptr ds : [esi+0xD4], eax
        mov dword ptr ds : [esi+0xD8], eax
        mov dword ptr ds : [esi+0xDC], eax
        xor ecx, ecx
        mov dword ptr ds : [esi+0xE0], eax
        cmp dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+0x18], 0x42480000
        mov dword ptr ds : [esi+0x1C], 0x40A00000
        mov dword ptr ds : [esi+0x10], 0xA
        mov dword ptr ds : [esi+0x20], 0x43160000
        mov dword ptr ds : [esi+0x24], 0x42960000
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], ecx
        mov byte ptr ds : [esi+0x34], cl
        mov byte ptr ds : [esi+0x35], cl
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+0xA8], ecx
        mov dword ptr ds : [esi+0xB0], ecx
        jne public_525754
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5dcf08 @0x525735*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcf08
        push 0x8AB
/*FIXUP push offset public_5dc47c @0x52573f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc47c
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x525749*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_525754 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5256a0)
    }
}

#undef public_525754
