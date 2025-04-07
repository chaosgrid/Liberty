#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d50b0);
CLANG_FORWARD_PROC_SYMBOL(public_65d5360);
CLANG_FORWARD_PROC_SYMBOL(public_65d5410);
CLANG_FORWARD_PROC_SYMBOL(public_65d5460);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_JUMP_SYMBOL(public_65e004b);

#define public_65d50f8 _public_65d50f8
#define public_65d5101 _public_65d5101
#define public_65d5124 _public_65d5124
#define public_65d512d _public_65d512d
#define public_65d5150 _public_65d5150
#define public_65d5159 _public_65d5159
#define public_65d5173 _public_65d5173
#define public_65d5197 _public_65d5197

PROC_DECLARE(0x65d50b0, internal_65d50b0, public_65d50b0);
extern "C" NAKED register_t __cdecl internal_65d50b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65e004b @0x65d50b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65e004b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_65e1404
        mov eax, dword ptr ds : [esi+0x48]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x28], ebx
        je public_65d5101
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_65d50f8
        cmp cl, 0xFF
        je public_65d50f8
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_65d5101
        public_65d50f8 : nop
        push eax
        call public_65d6cb8
        add esp, 4
        public_65d5101 : nop
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, ebx
        je public_65d512d
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_65d5124
        cmp cl, 0xFF
        je public_65d5124
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_65d512d
        public_65d5124 : nop
        push eax
        call public_65d6cb8
        add esp, 4
        public_65d512d : nop
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov eax, dword ptr ds : [esi+0x28]
        cmp eax, ebx
        je public_65d5159
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_65d5150
        cmp cl, 0xFF
        je public_65d5150
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_65d5159
        public_65d5150 : nop
        push eax
        call public_65d6cb8
        add esp, 4
        public_65d5159 : nop
        lea edi, ds:[esi+0x18]
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov ebp, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_65d5197
        public_65d5173 : nop
        lea eax, ss:[esp+0x18]
        push ebx
        push eax
        lea ecx, ss:[esp+0x18]
        call public_65d5460
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push ecx
        push edx
        mov ecx, edi
        call public_65d5410
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_65d5173
        public_65d5197 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_65d6cb8
        add esi, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        add esp, 4
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        push eax
        mov ecx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x20]
        push ecx
        push eax
        mov ecx, esi
        call public_65d5360
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_65d6cb8
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebx
        push edx
        mov dword ptr ds : [esi+0x10], ebx
        call public_65d6cb8
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x65d50b0)
    }
}

#undef public_65d50f8
#undef public_65d5101
#undef public_65d5124
#undef public_65d512d
#undef public_65d5150
#undef public_65d5159
#undef public_65d5173
#undef public_65d5197
