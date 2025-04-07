#include "Alchemy-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_62474b0);

#define public_6206dc9 _public_6206dc9
#define public_6206df8 _public_6206df8
#define public_6206e16 _public_6206e16
#define public_6206e57 _public_6206e57
#define public_6206e6d _public_6206e6d
#define public_6206e7a _public_6206e7a

PROC_DECLARE(0x6206d80, internal_6206d80, public_6206d80);
extern "C" NAKED register_t __cdecl internal_6206d80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62474b0 @0x6206d82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62474b0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        push edi
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0xC]
        mov esi, dword ptr ss : [esp+0x2C]
        push esi
        mov ecx, dword ptr ds : [esi]
        call dword ptr ds : [ecx+0x30]
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x38]
        xor ebx, ebx
        xor ebp, ebp
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], eax
        jle public_6206e7a
        public_6206dc9 : nop
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebp
        push esi
        mov byte ptr ss : [esp+0x2C], 1
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        je public_6206df8
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x2C], ebx
        public_6206df8 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push ebp
        push esi
        call dword ptr ds : [eax+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        je public_6206e16
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x28], ebx
        public_6206e16 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x44]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x10]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        push edi
        call dword ptr ds : [edx+0x14]
        mov byte ptr ss : [esp+0x20], bl
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        je public_6206e57
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x28], ebx
        public_6206e57 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        cmp eax, ebx
        je public_6206e6d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6206e6d : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc ebp
        cmp ebp, eax
        jl public_6206dc9
        public_6206e7a : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6206d80)
    }
}

#undef public_6206dc9
#undef public_6206df8
#undef public_6206e16
#undef public_6206e57
#undef public_6206e6d
#undef public_6206e7a
