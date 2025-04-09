#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420750);
CLANG_FORWARD_PROC_SYMBOL(public_50d300);
CLANG_FORWARD_PROC_SYMBOL(public_510d10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfd0b);

#define public_510d5f _public_510d5f
#define public_510d61 _public_510d61
#define public_510da0 _public_510da0
#define public_510da2 _public_510da2
#define public_510dde _public_510dde
#define public_510de0 _public_510de0
#define public_510e97 _public_510e97
#define public_510e99 _public_510e99

PROC_DECLARE(0x510d10, internal_510d10, public_510d10);
extern "C" NAKED register_t __cdecl internal_510d10()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bfd0b @0x510d18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfd0b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, 0x447A0000
        push 0x30C
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], offset public_5db658
        mov dword ptr ds : [esi+8], edi
        call public_5b7e84
        xor ebx, ebx
        add esp, 4
        cmp eax, ebx
        je public_510d5f
        mov ecx, eax
        call public_50d300
        jmp public_510d61
        public_510d5f : nop
        xor eax, eax
        public_510d61 : nop
        push 0x40
        mov dword ptr ds : [esi+0x14], eax
        call public_5b7e84
        add esp, 4
        cmp eax, ebx
        je public_510da0
        mov cl, byte ptr ss : [esp+0x2C]
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov byte ptr ds : [eax+0x14], bl
        mov dword ptr ds : [eax+0x10], ebx
        mov byte ptr ds : [eax+0x14], bl
        mov dword ptr ds : [eax+0x34], ebx
        mov dword ptr ds : [eax+0x38], 0x40A00000
        mov dword ptr ds : [eax+0x3C], 0x44480000
        jmp public_510da2
        public_510da0 : nop
        xor eax, eax
        public_510da2 : nop
        push 0x40
        mov dword ptr ds : [esi+0x18], eax
        call public_5b7e84
        add esp, 4
        cmp eax, ebx
        mov ebp, 0x3F800000
        je public_510dde
        mov dl, byte ptr ss : [esp+0x2C]
        mov byte ptr ds : [eax], dl
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov byte ptr ds : [eax+0x14], bl
        mov dword ptr ds : [eax+0x10], ebx
        mov byte ptr ds : [eax+0x14], bl
        mov dword ptr ds : [eax+0x34], ebx
        mov dword ptr ds : [eax+0x38], ebp
        mov dword ptr ds : [eax+0x3C], edi
        jmp public_510de0
        public_510dde : nop
        xor eax, eax
        public_510de0 : nop
        mov dword ptr ds : [esi+0x1C], eax
        mov eax, 0x40000000
        push 0x50
        mov dword ptr ds : [esi+0x20], ebp
        mov dword ptr ds : [esi+0x24], ebp
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x30], 0x40490FDB
        call public_5b7e84
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x2C], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x24], ebx
        je public_510e97
/*FIXUP push offset public_5c865c @0x510e17*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        mov ecx, edi
        mov dword ptr ds : [edi], ebx
        mov byte ptr ds : [edi+4], bl
        call public_420750
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+0x28]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ds:[edi+0x34]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edi+0x24], ebp
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edi+0x40], ebp
        mov dword ptr ds : [edi+0x44], ebx
        mov byte ptr ds : [edi+0x4C], bl
        mov dword ptr ds : [edi+0x48], ebx
        jmp public_510e99
        public_510e97 : nop
        xor edi, edi
        public_510e99 : nop
        mov dword ptr ds : [esi+0x10], edi
        mov edi, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x64], ebp
        fld dword ptr ds : [public_67509c]
        fsubr dword ptr ds : [public_5c75dc]
        fimul dword ptr ds : [edi+0x2B4]
        fadd dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi+0x2B8], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x510d10)
    }
}

#undef public_510d5f
#undef public_510d61
#undef public_510da0
#undef public_510da2
#undef public_510dde
#undef public_510de0
#undef public_510e97
#undef public_510e99
