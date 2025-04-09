#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbbfb);

#define public_474ace _public_474ace
#define public_474ad0 _public_474ad0
#define public_474b11 _public_474b11

PROC_DECLARE(0x474a30, internal_474a30, public_474a30);
extern "C" NAKED register_t __cdecl internal_474a30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bbbfb @0x474a32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbbfb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0x354
        mov edi, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_474ace
        mov ecx, esi
        call public_59f860
        mov dword ptr ds : [esi+0x32C], offset public_5cbed8
        mov dword ptr ds : [esi], offset public_5d07bc
        mov dword ptr ds : [esi+0x7C], offset public_5d07ac
        mov dword ptr ds : [esi+0x32C], offset public_5d07a4
        mov dword ptr ds : [esi+0x338], ebx
        mov dword ptr ds : [esi+0x340], ebx
        mov dword ptr ds : [esi+0x344], ebx
        mov dword ptr ds : [esi+0x348], ebx
        mov dword ptr ds : [esi+0x334], ebx
        mov dword ptr ds : [esi+0x34C], ebx
        mov dword ptr ds : [esi+0x350], ebx
        mov byte ptr ds : [esi+0x331], bl
        mov dword ptr ds : [esi+0x33C], ebx
        inc dword ptr ds : [public_67dccc]
        jmp public_474ad0
        public_474ace : nop
        xor esi, esi
        public_474ad0 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        push ecx
        add edi, 0xC
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], edi
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_474b11
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_474b11 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x474a30)
    }
}

#undef public_474ace
#undef public_474ad0
#undef public_474b11
