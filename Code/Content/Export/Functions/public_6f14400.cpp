#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f14400);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad848);

#define public_6f14460 _public_6f14460
#define public_6f14479 _public_6f14479
#define public_6f144a1 _public_6f144a1
#define public_6f144bb _public_6f144bb
#define public_6f144d8 _public_6f144d8
#define public_6f144e1 _public_6f144e1
#define public_6f144ef _public_6f144ef

PROC_DECLARE(0x6f14400, internal_6f14400, public_6f14400);
extern "C" NAKED register_t __cdecl internal_6f14400()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad848 @0x6f14402*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad848
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov al, byte ptr ss : [esp+0x20]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        push edi
        xor edi, edi
        push 0xC
        mov dword ptr ss : [esp+0x18], edi
        lea ebp, ds:[ecx+0x158]
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], edi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], edi
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+4]
        je public_6f14479
        nop 
        public_6f14460 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f14460
        public_6f14479 : nop
        mov ecx, esi
        call public_6ecfec0
        cmp esi, ebp
        je public_6f144d8
        push ebx
        mov ebx, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebp
        call public_6f1df30
        cmp edi, ebx
        mov ebp, dword ptr ss : [ebp+4]
        je public_6f144bb
        mov eax, dword ptr ss : [esp+0x10]
        public_6f144a1 : nop
        cmp eax, ebp
        je public_6f144bb
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f144a1
        public_6f144bb : nop
        push ebx
        push edi
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call public_6fa8370
        mov edx, dword ptr ss : [esp+0x10]
        push ebp
        push edx
        push ebx
        mov ecx, esi
        call public_6ed0230
        pop ebx
        public_6f144d8 : nop
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f144ef
        public_6f144e1 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+4]
        jne public_6f144e1
        public_6f144ef : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6f14400)
    }
}

#undef public_6f14460
#undef public_6f14479
#undef public_6f144a1
#undef public_6f144bb
#undef public_6f144d8
#undef public_6f144e1
#undef public_6f144ef
