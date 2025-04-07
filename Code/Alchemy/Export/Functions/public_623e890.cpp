#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e890);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624a6a6);

#define public_623e8d4 _public_623e8d4
#define public_623e8e5 _public_623e8e5
#define public_623e8f2 _public_623e8f2
#define public_623e903 _public_623e903
#define public_623e918 _public_623e918
#define public_623e92a _public_623e92a

PROC_DECLARE(0x623e890, internal_623e890, public_623e890);
extern "C" NAKED register_t __cdecl internal_623e890()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a6a6 @0x623e892*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a6a6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        mov eax, dword ptr ds : [esi+0x14]
        mov byte ptr ss : [esp+0x14], 1
        cmp eax, edi
        je public_623e8e5
        public_623e8d4 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x14], ecx
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax+4], edi
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        jne public_623e8d4
        public_623e8e5 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, edi
        je public_623e903
        public_623e8f2 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x1C], edx
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax+4], edi
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, edi
        jne public_623e8f2
        public_623e903 : nop
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_623e918
        push eax
        call public_62460e0
        add esp, 4
        public_623e918 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], edi
        cmp eax, edi
        je public_623e92a
        push eax
        call public_62460e0
        add esp, 4
        public_623e92a : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0x10], edi
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x623e890)
    }
}

#undef public_623e8d4
#undef public_623e8e5
#undef public_623e8f2
#undef public_623e903
#undef public_623e918
#undef public_623e92a
