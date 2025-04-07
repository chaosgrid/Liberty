#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6209ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6209fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6210900);
CLANG_FORWARD_PROC_SYMBOL(public_6212db0);
CLANG_FORWARD_PROC_SYMBOL(public_621cdd0);
CLANG_FORWARD_PROC_SYMBOL(public_62455b0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624896b);

#define public_621ce26 _public_621ce26
#define public_621ce55 _public_621ce55
#define public_621ce57 _public_621ce57
#define public_621cea8 _public_621cea8
#define public_621ced7 _public_621ced7
#define public_621ced9 _public_621ced9
#define public_621cf2a _public_621cf2a
#define public_621cf59 _public_621cf59
#define public_621cf5b _public_621cf5b
#define public_621cfac _public_621cfac
#define public_621cfce _public_621cfce
#define public_621cfd0 _public_621cfd0
#define public_621d01f _public_621d01f

PROC_DECLARE(0x621cdd0, internal_621cdd0, public_621cdd0);
extern "C" NAKED register_t __cdecl internal_621cdd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624896b @0x621cdd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624896b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        call public_62455b0
        xor ebp, ebp
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ds : [esi+0x6C], ebp
        mov dword ptr ds : [esi+0x70], ebp
        mov dword ptr ds : [esi+0x74], ebp
        mov dword ptr ds : [esi+0x78], ebp
        mov dword ptr ds : [esi+0x7C], ebp
        mov dword ptr ds : [esi], offset public_624d518
        mov eax, dword ptr ds : [esi+0x6C]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x20], 5
        je public_621ce26
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x6C], ebp
        public_621ce26 : nop
        push 0x20
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], edi
        cmp edi, ebp
        mov byte ptr ss : [esp+0x20], 6
        je public_621ce55
        mov ecx, edi
        call public_6212db0
        mov dword ptr ds : [edi], offset public_624bac8
        mov dword ptr ds : [edi+0x1C], 1
        jmp public_621ce57
        public_621ce55 : nop
        xor edi, edi
        public_621ce57 : nop
        mov dword ptr ss : [esp+0xC], ebp
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0x20], 7
        call public_6209fd0
        lea edx, ss:[esp+0xC]
        push edx
        push 0x40A00000
        call public_6209ad0
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        add esp, 8
        push ecx
        push ebp
        push edi
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ds : [esi+0x6C], edi
        mov byte ptr ss : [esp+0x20], 5
        call public_6209fd0
        mov eax, dword ptr ds : [esi+0x70]
        cmp eax, ebp
        je public_621cea8
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x70], ebp
        public_621cea8 : nop
        push 0x20
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], edi
        cmp edi, ebp
        mov byte ptr ss : [esp+0x20], 8
        je public_621ced7
        mov ecx, edi
        call public_6212db0
        mov dword ptr ds : [edi], offset public_624bac8
        mov dword ptr ds : [edi+0x1C], 1
        jmp public_621ced9
        public_621ced7 : nop
        xor edi, edi
        public_621ced9 : nop
        mov dword ptr ss : [esp+0xC], ebp
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0x20], 9
        call public_6209fd0
        lea eax, ss:[esp+0xC]
        push eax
        push 0x40A00000
        call public_6209ad0
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edi]
        add esp, 8
        push edx
        push ebp
        push edi
        call dword ptr ds : [ecx+0x14]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ds : [esi+0x70], edi
        mov byte ptr ss : [esp+0x20], 5
        call public_6209fd0
        mov eax, dword ptr ds : [esi+0x74]
        cmp eax, ebp
        je public_621cf2a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x74], ebp
        public_621cf2a : nop
        push 0x20
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], edi
        cmp edi, ebp
        mov byte ptr ss : [esp+0x20], 0xA
        je public_621cf59
        mov ecx, edi
        call public_6212db0
        mov dword ptr ds : [edi], offset public_624bac8
        mov dword ptr ds : [edi+0x1C], 1
        jmp public_621cf5b
        public_621cf59 : nop
        xor edi, edi
        public_621cf5b : nop
        mov dword ptr ss : [esp+0xC], ebp
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0x20], 0xB
        call public_6209fd0
        lea edx, ss:[esp+0xC]
        push edx
        push 0x40A00000
        call public_6209ad0
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        add esp, 8
        push ecx
        push ebp
        push edi
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ds : [esi+0x74], edi
        mov byte ptr ss : [esp+0x20], 5
        call public_6209fd0
        mov eax, dword ptr ds : [esi+0x78]
        cmp eax, ebp
        je public_621cfac
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x78], ebp
        public_621cfac : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, ebp
        mov byte ptr ss : [esp+0x20], 0xC
        je public_621cfce
        mov ecx, eax
        call public_6206ce0
        mov edi, eax
        jmp public_621cfd0
        public_621cfce : nop
        xor edi, edi
        public_621cfd0 : nop
        mov dword ptr ss : [esp+0xC], ebp
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0x20], 0xD
        call public_6209fd0
        lea eax, ss:[esp+0xC]
        push eax
        push ebp
        call public_6209ad0
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edi]
        add esp, 8
        push edx
        push ebp
        push edi
        call dword ptr ds : [ecx+0x14]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ds : [esi+0x78], edi
        mov byte ptr ss : [esp+0x20], 5
        call public_6209fd0
        mov eax, dword ptr ds : [esi+0x7C]
        lea edi, ds:[esi+0x7C]
        cmp eax, ebp
        je public_621d01f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], ebp
        public_621d01f : nop
        push edi
        push 0x41700000
        call public_6210900
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        mov eax, esi
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x621cdd0)
    }
}

#undef public_621ce26
#undef public_621ce55
#undef public_621ce57
#undef public_621cea8
#undef public_621ced7
#undef public_621ced9
#undef public_621cf2a
#undef public_621cf59
#undef public_621cf5b
#undef public_621cfac
#undef public_621cfce
#undef public_621cfd0
#undef public_621d01f
