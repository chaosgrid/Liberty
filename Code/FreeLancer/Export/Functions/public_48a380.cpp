#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_45cef0);
CLANG_FORWARD_PROC_SYMBOL(public_48a380);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_48a3ad _public_48a3ad
#define public_48a3c6 _public_48a3c6
#define public_48a3d9 _public_48a3d9
#define public_48a3e8 _public_48a3e8

PROC_DECLARE(0x48a380, internal_48a380, public_48a380);
extern "C" NAKED register_t __cdecl internal_48a380()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ds : [public_5c628c]
        push edi
        push eax
        mov ecx, offset public_671f80
        call ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_671f7c], ecx
        mov ecx, dword ptr ds : [public_66d3f0]
        test ecx, ecx
        je public_48a3ad
        call public_45cef0
        public_48a3ad : nop
        mov edi, dword ptr ds : [public_671ff4]
        test edi, edi
        je public_48a3e8
        mov byte ptr ds : [public_67dcc8], 0
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_48a3d9
        push esi
        public_48a3c6 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_48a3c6
        pop esi
        public_48a3d9 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax]
        public_48a3e8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, offset public_671f98
        call ebx
        push 0
        push 0
/*FIXUP push offset public_5d0234 @0x48a3f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0234
/*FIXUP push offset public_5d0234 @0x48a3fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0234
        mov dword ptr ds : [public_671ff8], 6
        call public_59db20
        add esp, 0x10
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x48a380)
    }
}

#undef public_48a3ad
#undef public_48a3c6
#undef public_48a3d9
#undef public_48a3e8
