#include "Alchemy-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6247520);

#define public_6207579 _public_6207579
#define public_62075a8 _public_62075a8
#define public_62075c6 _public_62075c6
#define public_6207607 _public_6207607
#define public_620761d _public_620761d
#define public_620762a _public_620762a

PROC_DECLARE(0x6207530, internal_6207530, public_6207530);
extern "C" NAKED register_t __cdecl internal_6207530()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247520 @0x6207532*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247520
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
        jle public_620762a
        public_6207579 : nop
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
        je public_62075a8
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x2C], ebx
        public_62075a8 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push ebp
        push esi
        call dword ptr ds : [eax+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        je public_62075c6
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x28], ebx
        public_62075c6 : nop
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
        je public_6207607
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x28], ebx
        public_6207607 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        cmp eax, ebx
        je public_620761d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_620761d : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc ebp
        cmp ebp, eax
        jl public_6207579
        public_620762a : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6207530)
    }
}

#undef public_6207579
#undef public_62075a8
#undef public_62075c6
#undef public_6207607
#undef public_620761d
#undef public_620762a
