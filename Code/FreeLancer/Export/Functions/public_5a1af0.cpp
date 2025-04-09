#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_59dc00);
CLANG_FORWARD_PROC_SYMBOL(public_5a1af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4fd6);

#define public_5a1b40 _public_5a1b40
#define public_5a1b4f _public_5a1b4f
#define public_5a1b77 _public_5a1b77
#define public_5a1b83 _public_5a1b83
#define public_5a1b8a _public_5a1b8a
#define public_5a1bb6 _public_5a1bb6
#define public_5a1be0 _public_5a1be0
#define public_5a1bee _public_5a1bee

PROC_DECLARE(0x5a1af0, internal_5a1af0, public_5a1af0);
extern "C" NAKED register_t __cdecl internal_5a1af0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4fd6 @0x5a1af2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4fd6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_5d54cc
        lea edi, ds:[esi+0x7C]
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 1
        call public_4144f0
        mov cl, byte ptr ds : [esi+0x6C]
        mov ebp, dword ptr ds : [esi+0xC]
        and cl, 0xFC
        test ebp, ebp
        mov byte ptr ds : [esi+0x6C], cl
        je public_5a1b4f
        lea ebx, ds:[ebx]
        public_5a1b40 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x28]
        mov ebp, dword ptr ss : [ebp+8]
        test ebp, ebp
        jne public_5a1b40
        public_5a1b4f : nop
        push esi
        call public_59dc00
        add esp, 4
        mov dword ptr ss : [esp+0x14], edi
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 3
        call public_4144f0
        mov ebx, dword ptr ds : [edi+0x14]
        mov ebp, dword ptr ds : [edi+0x10]
        cmp ebp, ebx
        mov byte ptr ss : [esp+0x20], 2
        je public_5a1b8a
        public_5a1b77 : nop
        mov ecx, dword ptr ss : [ebp]
        test ecx, ecx
        je public_5a1b83
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_5a1b83 : nop
        add ebp, 8
        cmp ebp, ebx
        jne public_5a1b77
        public_5a1b8a : nop
        mov eax, dword ptr ds : [edi+0x10]
        push eax
        call public_5b7e1d
        xor ebx, ebx
        mov dword ptr ds : [edi+0x10], ebx
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov eax, dword ptr ds : [edi]
        add esp, 4
        cmp eax, ebx
        je public_5a1bb6
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], ebx
        public_5a1bb6 : nop
        mov dword ptr ds : [esi], offset public_5d5544
        dec dword ptr ds : [public_67dcd4]
        mov cl, byte ptr ds : [esi+0x6C]
        mov edi, dword ptr ds : [esi+0xC]
        and cl, 0xFC
        cmp edi, ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x6C], cl
        je public_5a1bee
        lea ebx, ds:[ebx]
        public_5a1be0 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edi, dword ptr ds : [edi+8]
        cmp edi, ebx
        jne public_5a1be0
        public_5a1bee : nop
        push esi
        call public_59dc00
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x5a1af0)
    }
}

#undef public_5a1b40
#undef public_5a1b4f
#undef public_5a1b77
#undef public_5a1b83
#undef public_5a1b8a
#undef public_5a1bb6
#undef public_5a1be0
#undef public_5a1bee
