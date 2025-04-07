#include "Common-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_63973c1);

#define public_632c004 _public_632c004
#define public_632c035 _public_632c035
#define public_632c056 _public_632c056
#define public_632c05c _public_632c05c
#define public_632c07d _public_632c07d
#define public_632c07f _public_632c07f

PROC_DECLARE(0x632bf80, internal_632bf80, public_632bf80);
extern "C" NAKED register_t __cdecl internal_632bf80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63973c1 @0x632bf82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63973c1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x7E8
        mov eax, dword ptr ss : [esp+0x7F8]
        push ebx
        xor ebx, ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+8], offset public_63a4644
        mov byte ptr ss : [esp+0x10], bl
        mov byte ptr ss : [esp+0x18], bl
        lea ecx, ss:[esp+0xC]
        push ecx
/*FIXUP push offset public_63ed97c @0x632bfc2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ed97c
        push 7
        push ebx
/*FIXUP push offset public_63ed96c @0x632bfca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ed96c
        mov dword ptr ss : [esp+0x808], ebx
        call dword ptr ds : [public_63993ac]
        cmp eax, ebx
        jl public_632c05c
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+8]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        cmp eax, ebx
        sete al
        cmp al, bl
        je public_632c05c
        cmp byte ptr ss : [esp+0x10], bl
        je public_632c004
        mov byte ptr ss : [esp+7], bl
        jmp public_632c035
        public_632c004 : nop
        mov edx, dword ptr ss : [esp+0x800]
        push 0x3E7
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        call dword ptr ds : [public_6399340]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        cmp eax, ebx
        sete byte ptr ss : [esp+7]
        public_632c035 : nop
        mov dword ptr ss : [esp+8], offset public_63a4644
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x7F4], 1
        je public_632c056
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_632c056 : nop
        mov al, byte ptr ss : [esp+7]
        jmp public_632c07f
        public_632c05c : nop
        mov dword ptr ss : [esp+8], offset public_63a4644
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x7F4], 2
        je public_632c07d
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_632c07d : nop
        xor al, al
        public_632c07f : nop
        mov ecx, dword ptr ss : [esp+0x7EC]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x7F4
        ret 8
        UNREACHABLE_TRAP(0x632bf80)
    }
}

#undef public_632c004
#undef public_632c035
#undef public_632c056
#undef public_632c05c
#undef public_632c07d
#undef public_632c07f
