#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_634caf0);
CLANG_FORWARD_PROC_SYMBOL(public_635c090);
CLANG_FORWARD_PROC_SYMBOL(public_635d2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6363280);
CLANG_FORWARD_JUMP_SYMBOL(public_63981eb);

#define public_635c0d0 _public_635c0d0
#define public_635c10f _public_635c10f
#define public_635c113 _public_635c113

PROC_DECLARE(0x635c090, internal_635c090, public_635c090);
extern "C" NAKED register_t __cdecl internal_635c090()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63981eb @0x635c092*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63981eb
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
        mov dword ptr ds : [esi], offset public_63a5680
        mov eax, dword ptr ds : [esi+0xC]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_635c0d0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        lea ecx, ds:[eax+0x20]
        call public_6363280
        mov dword ptr ds : [esi+0xC], edi
        public_635c0d0 : nop
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x18]
        push eax
        call public_634caf0
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [edx+0x18]
        mov eax, dword ptr ds : [eax+0x14]
        push esi
        mov ecx, eax
        call public_635d2e0
        mov eax, dword ptr ds : [esi+0x2C]
        lea ecx, ds:[esi+0x30]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        je public_635c113
        cmp eax, edi
        je public_635c10f
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+0x2C], edi
        public_635c10f : nop
        mov word ptr ds : [esi+0x28], di
        public_635c113 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov word ptr ds : [esi+0x2A], di
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x635c090)
    }
}

#undef public_635c0d0
#undef public_635c10f
#undef public_635c113
