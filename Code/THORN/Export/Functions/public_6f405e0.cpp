#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a980);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58f7e);

#define public_6f4065f _public_6f4065f
#define public_6f40668 _public_6f40668
#define public_6f4068b _public_6f4068b
#define public_6f40694 _public_6f40694
#define public_6f406b1 _public_6f406b1
#define public_6f406c9 _public_6f406c9

PROC_DECLARE(0x6f405e0, internal_6f405e0, public_6f405e0);
extern "C" NAKED register_t __cdecl internal_6f405e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58f7e @0x6f405e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58f7e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [edi], offset public_6f5b034
        mov eax, dword ptr ds : [edi+0x74]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x70]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 3
        call public_6f4a980
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        xor ebx, ebx
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6f57e26
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x2C]
        add esp, 8
        cmp eax, ebx
        je public_6f40668
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f4065f
        cmp cl, 0xFF
        je public_6f4065f
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f40668
        public_6f4065f : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f40668 : nop
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x30], ebx
        mov dword ptr ds : [edi+0x34], ebx
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebx
        je public_6f40694
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f4068b
        cmp cl, 0xFF
        je public_6f4068b
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f40694
        public_6f4068b : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f40694 : nop
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x20], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov eax, dword ptr ds : [edi+0x14]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x1C], bl
        je public_6f406b1
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x14], ebx
        public_6f406b1 : nop
        mov eax, dword ptr ds : [edi+0x10]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_6f406c9
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+0x10], ebx
        public_6f406c9 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f405e0)
    }
}

#undef public_6f4065f
#undef public_6f40668
#undef public_6f4068b
#undef public_6f40694
#undef public_6f406b1
#undef public_6f406c9
