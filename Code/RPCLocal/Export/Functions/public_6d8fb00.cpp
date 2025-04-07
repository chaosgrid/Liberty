#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8fb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d901f0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_JUMP_SYMBOL(public_6db262e);

#define public_6d8fb40 _public_6d8fb40
#define public_6d8fb57 _public_6d8fb57
#define public_6d8fb60 _public_6d8fb60
#define public_6d8fb67 _public_6d8fb67
#define public_6d8fb74 _public_6d8fb74
#define public_6d8fb89 _public_6d8fb89
#define public_6d8fbae _public_6d8fbae
#define public_6d8fbbe _public_6d8fbbe

PROC_DECLARE(0x6d8fb00, internal_6d8fb00, public_6d8fb00);
extern "C" NAKED register_t __cdecl internal_6d8fb00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db262e @0x6d8fb02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db262e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0xC], ebp
        mov dword ptr ss : [ebp], offset public_6db3c90
        mov eax, dword ptr ss : [ebp+0x40]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x1C], 2
        je public_6d8fb67
        lea esp, ss:[esp]
        public_6d8fb40 : nop
        mov edi, dword ptr ds : [esi+8]
        test edi, edi
        je public_6d8fb60
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        je public_6d8fb57
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d8fb57 : nop
        push edi
        call public_6db1dc2
        add esp, 4
        public_6d8fb60 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0x40]
        jne public_6d8fb40
        public_6d8fb67 : nop
        lea edi, ss:[ebp+0x3C]
        push ebx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6d8fb89
        public_6d8fb74 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6d901f0
        cmp esi, ebx
        jne public_6d8fb74
        public_6d8fb89 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6db1dc2
        xor esi, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov eax, dword ptr ss : [ebp+0x34]
        add esp, 4
        cmp eax, esi
        pop ebx
        je public_6d8fbae
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d8fbae : nop
        mov eax, dword ptr ss : [ebp+0x2C]
        cmp eax, esi
        je public_6d8fbbe
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d8fbbe : nop
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_6da1370
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d8fb00)
    }
}

#undef public_6d8fb40
#undef public_6d8fb57
#undef public_6d8fb60
#undef public_6d8fb67
#undef public_6d8fb74
#undef public_6d8fb89
#undef public_6d8fbae
#undef public_6d8fbbe
