#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_5484c0);

#define public_53d973 _public_53d973
#define public_53d9a0 _public_53d9a0
#define public_53d9c5 _public_53d9c5

PROC_DECLARE(0x53d940, internal_53d940, public_53d940);
extern "C" NAKED register_t __cdecl internal_53d940()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push 0
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_53d9a0
        mov ecx, dword ptr ds : [eax+0x1C]
        cmp ecx, 2
        jne public_53d973
        mov ecx, dword ptr ds : [esi+8]
        xor edx, edx
        mov dl, byte ptr ds : [esi+4]
        push ecx
        mov ecx, eax
        push edx
        call public_5484c0
        pop esi
        ret 8
        public_53d973 : nop
        cmp ecx, 1
        jne public_53d9c5
/*FIXUP push offset public_5df50c @0x53d978*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5df50c
        push 0x5E8
/*FIXUP push offset public_5dec60 @0x53d982*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dec60
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x53d98c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop esi
        ret 8
        public_53d9a0 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5df4c8 @0x53d9a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5df4c8
        push 0x5F0
/*FIXUP push offset public_5dec60 @0x53d9b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dec60
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x53d9ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_53d9c5 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x53d940)
    }
}

#undef public_53d973
#undef public_53d9a0
#undef public_53d9c5
