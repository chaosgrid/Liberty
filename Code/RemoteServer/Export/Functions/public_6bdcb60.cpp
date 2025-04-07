#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdcb60);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a49b);

#define public_6bdcbbc _public_6bdcbbc
#define public_6bdcbbe _public_6bdcbbe
#define public_6bdcbcc _public_6bdcbcc
#define public_6bdcbe7 _public_6bdcbe7
#define public_6bdcbff _public_6bdcbff
#define public_6bdcc03 _public_6bdcc03

PROC_DECLARE(0x6bdcb60, internal_6bdcb60, public_6bdcb60);
extern "C" NAKED register_t __cdecl internal_6bdcb60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a49b @0x6bdcb62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a49b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [edi], 0
        jne public_6bdcbcc
        push 0xC
        call public_6c09d26
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6bdcbbc
        mov al, byte ptr ss : [esp+0x1C]
        push 0xC
        mov byte ptr ds : [esi], al
        call public_6c09d26
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        jmp public_6bdcbbe
        public_6bdcbbc : nop
        xor esi, esi
        public_6bdcbbe : nop
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov dword ptr ds : [edi], esi
        je public_6bdcc03
        public_6bdcbcc : nop
        push ebx
        mov ebx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6c09d26
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6bdcbe7
        mov edi, eax
        public_6bdcbe7 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6bdcbff
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edx
        public_6bdcbff : nop
        inc dword ptr ds : [ebx+8]
        pop ebx
        public_6bdcc03 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6bdcb60)
    }
}

#undef public_6bdcbbc
#undef public_6bdcbbe
#undef public_6bdcbcc
#undef public_6bdcbe7
#undef public_6bdcbff
#undef public_6bdcc03
