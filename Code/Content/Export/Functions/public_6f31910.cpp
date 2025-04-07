#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6be0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31910);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae9d3);

#define public_6f31988 _public_6f31988
#define public_6f3198a _public_6f3198a

PROC_DECLARE(0x6f31910, internal_6f31910, public_6f31910);
extern "C" NAKED register_t __cdecl internal_6f31910()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae9d3 @0x6f31912*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae9d3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push 0xC
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_6f31988
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        push edi
        mov ecx, esi
        call public_6eb6be0
        lea eax, ds:[edi+0x18]
        push eax
        lea ebx, ds:[esi+8]
        push edi
        push ebx
        mov byte ptr ss : [esp+0x24], 1
        mov dword ptr ds : [esi], offset public_6fb940c
        call dword ptr ds : [public_6fb34d8]
        add edi, 0x34
        push edi
        push ebx
        call dword ptr ds : [public_6fb3434]
        mov eax, dword ptr ds : [public_6fd0884]
        add esp, 0x14
        inc eax
        pop edi
        mov dword ptr ds : [public_6fd0884], eax
        pop ebx
        jmp public_6f3198a
        public_6f31988 : nop
        xor esi, esi
        public_6f3198a : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], esi
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        test esi, esi
        setne al
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f31910)
    }
}

#undef public_6f31988
#undef public_6f3198a
