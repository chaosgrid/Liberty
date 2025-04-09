#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e5810);
CLANG_FORWARD_PROC_SYMBOL(public_4e5ab0);
CLANG_FORWARD_PROC_SYMBOL(public_4f5580);
CLANG_FORWARD_PROC_SYMBOL(public_4f5c20);
CLANG_FORWARD_PROC_SYMBOL(public_4f6650);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf399);

#define public_4f55b6 _public_4f55b6
#define public_4f55be _public_4f55be
#define public_4f55d0 _public_4f55d0
#define public_4f55dd _public_4f55dd
#define public_4f55fc _public_4f55fc
#define public_4f562f _public_4f562f
#define public_4f5631 _public_4f5631
#define public_4f564a _public_4f564a
#define public_4f56be _public_4f56be
#define public_4f5742 _public_4f5742
#define public_4f574b _public_4f574b
#define public_4f575b _public_4f575b
#define public_4f5772 _public_4f5772

PROC_DECLARE(0x4f5580, internal_4f5580, public_4f5580);
extern "C" NAKED register_t __cdecl internal_4f5580()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf399 @0x4f5582*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf399
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        push ebx
        push ebp
        mov edx, ecx
        mov eax, dword ptr ds : [edx+0xC]
        push esi
        lea esi, ds:[edx+8]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x10], ebx
        jne public_4f55b6
        xor ecx, ecx
        jmp public_4f55be
        public_4f55b6 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        public_4f55be : nop
        mov edi, dword ptr ss : [esp+0x4C]
        xor eax, eax
        cmp ecx, ebx
        jle public_4f55dd
        mov edx, dword ptr ds : [edx+0xC]
        nop 
        lea esp, ss:[esp]
        public_4f55d0 : nop
        mov ebp, dword ptr ds : [edx+eax*4]
        cmp dword ptr ss : [ebp+0x10], edi
        je public_4f55fc
        inc eax
        cmp eax, ecx
        jl public_4f55d0
        public_4f55dd : nop
        push 0x14
        call public_5b7e84
        add esp, 4
        cmp eax, ebx
        je public_4f562f
        mov cl, byte ptr ss : [esp+0x4C]
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0xC], ebx
        jmp public_4f5631
        public_4f55fc : nop
        cmp eax, 0xFFFFFFFF
        je public_4f55dd
        mov eax, dword ptr ds : [edx+eax*4]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [eax+8]
        lea esi, ds:[eax+8]
        mov ebp, eax
        mov eax, dword ptr ds : [eax+4]
        push eax
        push ecx
        push ecx
        call public_4f6650
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        push eax
        push edi
        mov ecx, ebp
        call public_4e5810
        mov dword ptr ds : [esi], edi
        jmp public_4f564a
        public_4f562f : nop
        xor eax, eax
        public_4f5631 : nop
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        push edx
        mov dword ptr ds : [eax+0x10], edi
        mov eax, dword ptr ds : [esi+8]
        push 1
        push eax
        mov ecx, esi
        call public_537260
        public_4f564a : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_4f5772
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_4f5772
        add eax, 0xC
        cmp eax, ebx
        je public_4f5772
        mov esi, dword ptr ds : [eax+4]
        cmp esi, ebx
        je public_4f5772
        mov ecx, dword ptr ds : [esi+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_4f5772
        push 0xE0
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c64f4]
        lea edi, ds:[esi+0xE4]
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x50], edi
        call dword ptr ds : [public_5c64f0]
        mov esi, eax
        cmp esi, ebx
        je public_4f5772
        public_4f56be : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x60]
        mov edx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [eax]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        cmp al, bl
        je public_4f575b
        mov al, byte ptr ss : [esp+0x4C]
        or ecx, 0xFFFFFFFF
        mov byte ptr ss : [esp+0x1C], al
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebp
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        call dword ptr ds : [public_5c7088]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        lea edx, ss:[esp+0x1C]
        push edx
        push 1
        push eax
        mov dword ptr ss : [esp+0x50], ebx
        call public_4e5ab0
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        je public_4f574b
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_4f5742
        cmp cl, 0xFF
        je public_4f5742
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4f574b
        public_4f5742 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4f574b : nop
        mov edi, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        public_4f575b : nop
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c64f0]
        mov esi, eax
        cmp esi, ebx
        jne public_4f56be
        public_4f5772 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        call public_4f5c20
        mov ecx, dword ptr ss : [esp+0x3C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x4f5580)
    }
}

#undef public_4f55b6
#undef public_4f55be
#undef public_4f55d0
#undef public_4f55dd
#undef public_4f55fc
#undef public_4f562f
#undef public_4f5631
#undef public_4f564a
#undef public_4f56be
#undef public_4f5742
#undef public_4f574b
#undef public_4f575b
#undef public_4f5772
