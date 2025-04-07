#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef75a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac499);

#define public_6ef75d5 _public_6ef75d5
#define public_6ef75e1 _public_6ef75e1
#define public_6ef75ec _public_6ef75ec
#define public_6ef75ee _public_6ef75ee
#define public_6ef7600 _public_6ef7600
#define public_6ef760b _public_6ef760b

PROC_DECLARE(0x6ef75a0, internal_6ef75a0, public_6ef75a0);
extern "C" NAKED register_t __cdecl internal_6ef75a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fac499 @0x6ef75a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac499
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov esi, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x2C]
        cmp esi, ebp
        mov dword ptr ss : [esp+0x18], 0
        je public_6ef760b
        mov ebx, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ss : [esp+0x20]
        public_6ef75d5 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ecx
        je public_6ef75ec
        mov edx, dword ptr ds : [esi]
        public_6ef75e1 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ef75ee
        add eax, 4
        cmp eax, ecx
        jne public_6ef75e1
        public_6ef75ec : nop
        mov eax, ecx
        public_6ef75ee : nop
        cmp ecx, eax
        je public_6ef7600
        mov eax, dword ptr ds : [edi+8]
        push esi
        push 1
        push eax
        mov ecx, edi
        call public_6f96770
        public_6ef7600 : nop
        add esi, 8
        cmp esi, ebp
        jne public_6ef75d5
        mov esi, dword ptr ss : [esp+0x28]
        public_6ef760b : nop
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ef75a0)
    }
}

#undef public_6ef75d5
#undef public_6ef75e1
#undef public_6ef75ec
#undef public_6ef75ee
#undef public_6ef7600
#undef public_6ef760b
