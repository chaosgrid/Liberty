#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f95cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1688);

#define public_6f95d24 _public_6f95d24
#define public_6f95d34 _public_6f95d34
#define public_6f95d3f _public_6f95d3f
#define public_6f95d43 _public_6f95d43
#define public_6f95d47 _public_6f95d47
#define public_6f95d51 _public_6f95d51
#define public_6f95d5c _public_6f95d5c
#define public_6f95d61 _public_6f95d61
#define public_6f95d85 _public_6f95d85
#define public_6f95dae _public_6f95dae
#define public_6f95dc8 _public_6f95dc8
#define public_6f95dd1 _public_6f95dd1
#define public_6f95dd5 _public_6f95dd5
#define public_6f95dd7 _public_6f95dd7

PROC_DECLARE(0x6f95cd0, internal_6f95cd0, public_6f95cd0);
extern "C" NAKED register_t __cdecl internal_6f95cd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1688 @0x6f95cd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1688
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov al, byte ptr ss : [esp+0x24]
        push esi
        push edi
        xor edx, edx
        xor edi, edi
        mov byte ptr ss : [esp+8], al
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [public_6fd3c14]
        cmp eax, dword ptr ds : [public_6fd3c18]
        mov dword ptr ss : [esp+0x20], edx
        je public_6f95dd5
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        lea esi, ds:[eax+0x2C]
        public_6f95d24 : nop
        mov al, byte ptr ds : [esi-0xC]
        test al, al
        jne public_6f95d47
        mov eax, dword ptr ds : [esi-4]
        mov ecx, dword ptr ds : [esi]
        cmp eax, ecx
        je public_6f95d3f
        public_6f95d34 : nop
        cmp dword ptr ds : [eax], ebx
        je public_6f95d43
        add eax, 4
        cmp eax, ecx
        jne public_6f95d34
        public_6f95d3f : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, ecx
        public_6f95d43 : nop
        cmp eax, ecx
        je public_6f95d85
        public_6f95d47 : nop
        mov eax, dword ptr ds : [esi-0x18]
        mov ecx, dword ptr ds : [esi-0x14]
        cmp eax, ecx
        je public_6f95d5c
        public_6f95d51 : nop
        cmp dword ptr ds : [eax], ebp
        je public_6f95d61
        add eax, 4
        cmp eax, ecx
        jne public_6f95d51
        public_6f95d5c : nop
        mov ecx, dword ptr ds : [esi-0x14]
        mov eax, ecx
        public_6f95d61 : nop
        cmp eax, ecx
        je public_6f95d85
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ds:[esi-0x2C]
        push 1
        mov dword ptr ss : [esp+0x3C], ecx
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_6f937c0
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x14]
        public_6f95d85 : nop
        mov eax, dword ptr ds : [public_6fd3c18]
        add esi, 0x34
        lea ecx, ds:[esi-0x2C]
        cmp ecx, eax
        jne public_6f95d24
        test edi, edi
        pop ebp
        pop ebx
        je public_6f95dd5
        mov eax, edx
        sub eax, edi
        sar eax, 2
        test eax, eax
        je public_6f95dd5
        mov esi, eax
        dec esi
        jne public_6f95dae
        xor eax, eax
        jmp public_6f95dc8
        public_6f95dae : nop
        call dword ptr ds : [public_6fb3370]
        mov edi, dword ptr ss : [esp+0xC]
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        public_6f95dc8 : nop
        test eax, eax
        mov ecx, edi
        jbe public_6f95dd1
        lea ecx, ds:[edi+eax*4]
        public_6f95dd1 : nop
        mov esi, dword ptr ds : [ecx]
        jmp public_6f95dd7
        public_6f95dd5 : nop
        xor esi, esi
        public_6f95dd7 : nop
        push edi
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f95cd0)
    }
}

#undef public_6f95d24
#undef public_6f95d34
#undef public_6f95d3f
#undef public_6f95d43
#undef public_6f95d47
#undef public_6f95d51
#undef public_6f95d5c
#undef public_6f95d61
#undef public_6f95d85
#undef public_6f95dae
#undef public_6f95dc8
#undef public_6f95dd1
#undef public_6f95dd5
#undef public_6f95dd7
