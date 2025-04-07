#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac518);

#define public_6ef7e87 _public_6ef7e87
#define public_6ef7ea0 _public_6ef7ea0
#define public_6ef7ed0 _public_6ef7ed0
#define public_6ef7eea _public_6ef7eea
#define public_6ef7f07 _public_6ef7f07
#define public_6ef7f11 _public_6ef7f11
#define public_6ef7f1f _public_6ef7f1f

PROC_DECLARE(0x6ef7e30, internal_6ef7e30, public_6ef7e30);
extern "C" NAKED register_t __cdecl internal_6ef7e30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac518 @0x6ef7e32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac518
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+0x18]
        push esi
        mov esi, ecx
        push edi
        push 0xC
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov edi, eax
        mov dword ptr ds : [edi], edi
        mov dword ptr ds : [edi+4], edi
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], eax
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f1df30
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        je public_6ef7ea0
        public_6ef7e87 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+8], eax
        jne public_6ef7e87
        public_6ef7ea0 : nop
        push ebp
        mov ecx, esi
        call public_6ecfec0
        mov ebp, dword ptr ss : [esp+0x24]
        cmp esi, ebp
        je public_6ef7f07
        push ebx
        mov ebx, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, ebp
        call public_6f1df30
        cmp edi, ebx
        mov ebp, dword ptr ss : [ebp+4]
        je public_6ef7eea
        mov eax, dword ptr ss : [esp+0x28]
        lea ecx, ds:[ecx]
        public_6ef7ed0 : nop
        cmp eax, ebp
        je public_6ef7eea
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], eax
        jne public_6ef7ed0
        public_6ef7eea : nop
        push ebx
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_6fa8370
        mov edx, dword ptr ss : [esp+0x28]
        push ebp
        push edx
        push ebx
        mov ecx, esi
        call public_6ed0230
        pop ebx
        public_6ef7f07 : nop
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        pop ebp
        je public_6ef7f1f
        public_6ef7f11 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+4]
        jne public_6ef7f11
        public_6ef7f1f : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6ef7e30)
    }
}

#undef public_6ef7e87
#undef public_6ef7ea0
#undef public_6ef7ed0
#undef public_6ef7eea
#undef public_6ef7f07
#undef public_6ef7f11
#undef public_6ef7f1f
