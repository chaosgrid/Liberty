#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd0cb);

#define public_4b4950 _public_4b4950
#define public_4b4952 _public_4b4952
#define public_4b497d _public_4b497d
#define public_4b497f _public_4b497f

PROC_DECLARE(0x4b48a0, internal_4b48a0, public_4b48a0);
extern "C" NAKED register_t __cdecl internal_4b48a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd0cb @0x4b48a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd0cb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        push 0x494
        mov ebp, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        xor edi, edi
        or ebx, 0xFFFFFFFF
        cmp esi, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_4b4950
        mov ecx, esi
        call public_59f860
        mov al, byte ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x32C], offset public_5cbed8
        mov byte ptr ds : [esi+0x330], al
        mov dword ptr ds : [esi+0x334], edi
        mov dword ptr ds : [esi+0x338], edi
        mov dword ptr ds : [esi+0x33C], edi
        mov dword ptr ds : [esi], offset public_5d51e4
        mov dword ptr ds : [esi+0x7C], offset public_5d51d4
        mov dword ptr ds : [esi+0x32C], offset public_5d51cc
        mov dword ptr ds : [esi+0x344], edi
        mov dword ptr ds : [esi+0x348], edi
        mov dword ptr ds : [esi+0x340], edi
        mov dword ptr ds : [esi+0x484], ebx
        mov dword ptr ds : [esi+0x488], ebx
        mov dword ptr ds : [esi+0x48C], ebx
        mov dword ptr ds : [esi+0x490], 0xBF800000
        jmp public_4b4952
        public_4b4950 : nop
        xor esi, esi
        public_4b4952 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        add ebp, 0xC
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ds : [esi+0x10], ebp
        call dword ptr ds : [edx+0x24]
        test al, al
        jne public_4b497d
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        xor eax, eax
        jmp public_4b497f
        public_4b497d : nop
        mov eax, esi
        public_4b497f : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x4b48a0)
    }
}

#undef public_4b4950
#undef public_4b4952
#undef public_4b497d
#undef public_4b497f
