#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f24cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30620);
CLANG_FORWARD_PROC_SYMBOL(public_6f35c00);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f3b90a _public_6f3b90a
#define public_6f3b94d _public_6f3b94d
#define public_6f3b961 _public_6f3b961
#define public_6f3b966 _public_6f3b966

PROC_DECLARE(0x6f3b8b0, internal_6f3b8b0, public_6f3b8b0);
extern "C" NAKED register_t __cdecl internal_6f3b8b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub eax, 0
        push edi
        je public_6f3b961
        dec eax
        jne public_6f3b966
        mov eax, dword ptr ss : [esp+8]
        push eax
        call dword ptr ds : [public_6f5a00c]
        mov edi, dword ptr ds : [public_6f5a000]
        call edi
        test eax, eax
        jne public_6f3b90a
        mov ecx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f600d4 @0x6f3b8e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f600d4
        push 0x6A6
/*FIXUP push offset public_6f6004c @0x6f3b8ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6004c
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f3b8f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        mov eax, 1
        pop edi
        ret 0xC
        public_6f3b90a : nop
        push esi
        push 0xC
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f3b94d
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6f600c4
        mov dword ptr ds : [esi], offset public_6f5af08
        call edi
        mov edx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6f600c4 @0x6f3b938*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f600c4
        push esi
        push eax
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        call public_6f24c80
        public_6f3b94d : nop
        call public_6f30620
        call public_6f35c00
        pop esi
        mov eax, 1
        pop edi
        ret 0xC
        public_6f3b961 : nop
        call public_6f24cb0
        public_6f3b966 : nop
        mov eax, 1
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6f3b8b0)
    }
}

#undef public_6f3b90a
#undef public_6f3b94d
#undef public_6f3b961
#undef public_6f3b966
