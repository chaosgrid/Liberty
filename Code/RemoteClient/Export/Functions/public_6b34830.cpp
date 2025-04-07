#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b38630);
CLANG_FORWARD_PROC_SYMBOL(public_6b38680);
CLANG_FORWARD_PROC_SYMBOL(public_6b386f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b3f670);
CLANG_FORWARD_PROC_SYMBOL(public_6b3f6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a588);

#define public_6b34893 _public_6b34893
#define public_6b348a4 _public_6b348a4
#define public_6b348d2 _public_6b348d2
#define public_6b348e2 _public_6b348e2
#define public_6b34941 _public_6b34941
#define public_6b34990 _public_6b34990
#define public_6b349c5 _public_6b349c5
#define public_6b349d9 _public_6b349d9
#define public_6b349df _public_6b349df
#define public_6b349f0 _public_6b349f0
#define public_6b34a0b _public_6b34a0b
#define public_6b34a18 _public_6b34a18

PROC_DECLARE(0x6b34830, internal_6b34830, public_6b34830);
extern "C" NAKED register_t __cdecl internal_6b34830()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a588 @0x6b34832*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a588
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        lea eax, ss:[esp]
        push eax
        push 0x29
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [ecx+8]
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b34a18
        mov ecx, dword ptr ss : [esp]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x58], eax
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+0x5C], eax
        mov ebp, dword ptr ds : [esi+0x18]
        test ebp, ebp
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        lea edi, ds:[eax+0x20]
        mov ebx, 6
        je public_6b348a4
        public_6b34893 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6b6b07c]
        mov ebp, dword ptr ss : [ebp]
        add ebx, eax
        test ebp, ebp
        jne public_6b34893
        public_6b348a4 : nop
        push ebx
        mov dword ptr ds : [edi], ebx
        call public_6b6a134
        mov ecx, dword ptr ds : [edi]
        add esp, 4
        push ecx
        push eax
        lea ecx, ds:[esi+0x18]
        mov dword ptr ds : [edi+4], eax
        call dword ptr ds : [public_6b6b090]
        mov edi, dword ptr ds : [esi+0x30]
        test edi, edi
        mov edx, dword ptr ss : [esp+0x10]
        lea ebp, ds:[edx+0x28]
        mov ebx, 6
        je public_6b348e2
        public_6b348d2 : nop
        mov ecx, edi
        call dword ptr ds : [public_6b6b07c]
        mov edi, dword ptr ds : [edi]
        add ebx, eax
        test edi, edi
        jne public_6b348d2
        public_6b348e2 : nop
        push ebx
        mov dword ptr ss : [ebp], ebx
        call public_6b6a134
        mov ecx, dword ptr ss : [ebp]
        add esp, 4
        push ecx
        push eax
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [ebp+4], eax
        call dword ptr ds : [public_6b6b090]
        lea edi, ds:[esi+0x48]
        push edi
        call dword ptr ds : [public_6b6b1e4]
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        push eax
        push edi
        call public_6b3f670
        mov dl, byte ptr ss : [esp+0x3C]
        xor ebx, ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], dl
        call public_6b38680
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        mov al, byte ptr ds : [esi+0x14]
        xor edi, edi
        test al, al
        mov dword ptr ss : [esp+0x30], ebx
        jbe public_6b34990
        public_6b34941 : nop
        push 8
        call public_6b6a134
        mov edx, dword ptr ds : [esi+0x10]
        xor ecx, ecx
        mov cx, di
        mov dword ptr ss : [esp+0x40], eax
        add esp, 4
        shl ecx, 3
        mov edx, dword ptr ds : [ecx+edx]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax+ecx+4]
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x3C]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x28]
        call public_6b38630
        movzx ax, byte ptr ds : [esi+0x14]
        inc edi
        cmp di, ax
        jb public_6b34941
        public_6b34990 : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        call public_6b3f6c0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x30], edx
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push eax
        call dword ptr ds : [edx+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6b349df
        public_6b349c5 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_6b349d9
        push ecx
        call public_6b6a092
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        public_6b349d9 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6b349c5
        public_6b349df : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov edi, eax
        je public_6b34a0b
        nop 
        public_6b349f0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6b386f0
        cmp esi, edi
        jne public_6b349f0
        mov eax, dword ptr ss : [esp+0x20]
        public_6b34a0b : nop
        push eax
        call public_6b6a092
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6b34a18 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x6b34830)
    }
}

#undef public_6b34893
#undef public_6b348a4
#undef public_6b348d2
#undef public_6b348e2
#undef public_6b34941
#undef public_6b34990
#undef public_6b349c5
#undef public_6b349d9
#undef public_6b349df
#undef public_6b349f0
#undef public_6b34a0b
#undef public_6b34a18
