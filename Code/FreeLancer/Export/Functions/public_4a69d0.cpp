#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bccab);

#define public_4a6a41 _public_4a6a41
#define public_4a6a43 _public_4a6a43
#define public_4a6a83 _public_4a6a83

PROC_DECLARE(0x4a69d0, internal_4a69d0, public_4a69d0);
extern "C" NAKED register_t __cdecl internal_4a69d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bccab @0x4a69d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bccab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x364
        mov edi, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_4a6a41
        mov ecx, esi
        call public_59f860
        mov dword ptr ds : [esi+0x32C], offset public_5cbed8
        mov dword ptr ds : [esi], offset public_5d443c
        mov dword ptr ds : [esi+0x7C], offset public_5d442c
        mov dword ptr ds : [esi+0x32C], offset public_5d4424
        mov byte ptr ds : [public_67dcc8], 1
        mov byte ptr ds : [esi+0x338], 0
        jmp public_4a6a43
        public_4a6a41 : nop
        xor esi, esi
        public_4a6a43 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        push ecx
        add edi, 0xC
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], edi
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_4a6a83
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        xor eax, eax
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_4a6a83 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x4a69d0)
    }
}

#undef public_4a6a41
#undef public_4a6a43
#undef public_4a6a83
