#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_594de0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4979);

#define public_591a7d _public_591a7d
#define public_591a88 _public_591a88
#define public_591aa5 _public_591aa5
#define public_591aae _public_591aae
#define public_591ac4 _public_591ac4
#define public_591ac6 _public_591ac6

PROC_DECLARE(0x5919f0, internal_5919f0, public_5919f0);
extern "C" NAKED register_t __cdecl internal_5919f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4979 @0x5919f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4979
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov al, byte ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        or ecx, 0xFFFFFFFF
        xor ebx, ebx
        mov byte ptr ss : [esp+0x14], al
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        call dword ptr ds : [public_5c7088]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x38]
        lea esi, ss:[ebp+4]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], ebx
        call public_594de0
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, dword ptr ds : [esi+4]
        je public_591a7d
        add eax, 0xC
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_5c6fa4]
        add esp, 8
        test al, al
        jne public_591a7d
        lea eax, ss:[esp+0x34]
        jmp public_591a88
        public_591a7d : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], ecx
        lea eax, ss:[esp+0x10]
        public_591a88 : nop
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        je public_591aae
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_591aa5
        cmp cl, 0xFF
        je public_591aa5
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_591aae
        public_591aa5 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_591aae : nop
        cmp esi, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        je public_591ac4
        mov eax, dword ptr ds : [esi+0x1C]
        jmp public_591ac6
        public_591ac4 : nop
        xor eax, eax
        public_591ac6 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x5919f0)
    }
}

#undef public_591a7d
#undef public_591a88
#undef public_591aa5
#undef public_591aae
#undef public_591ac4
#undef public_591ac6
