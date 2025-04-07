#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f26460);
CLANG_FORWARD_PROC_SYMBOL(public_6f276f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ea40);
CLANG_FORWARD_PROC_SYMBOL(public_6f60020);
CLANG_FORWARD_PROC_SYMBOL(public_6f93280);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafab8);

#define public_6f60090 _public_6f60090
#define public_6f6011b _public_6f6011b
#define public_6f60191 _public_6f60191
#define public_6f6019f _public_6f6019f
#define public_6f601b3 _public_6f601b3
#define public_6f601ca _public_6f601ca

PROC_DECLARE(0x6f60020, internal_6f60020, public_6f60020);
extern "C" NAKED register_t __cdecl internal_6f60020()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafab8 @0x6f60022*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafab8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f93280
        mov ebp, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x38]
        xor ebx, ebx
        push ebx
        push ebp
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        lea edx, ss:[esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push eax
        push ecx
        push edx
        mov dword ptr ss : [esp+0x44], ebx
        call public_6f5ea40
        mov eax, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [eax]
        add esp, 0x1C
        cmp esi, eax
        je public_6f6019f
        mov edi, dword ptr ss : [esp+0x3C]
        lea esp, ss:[esp]
        public_6f60090 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ebx
        je public_6f6011b
        dec eax
        jne public_6f60191
        mov dword ptr ss : [esp+0x44], ebx
        lea eax, ss:[esp+0x44]
        push eax
        push 5
        mov byte ptr ss : [esp+0x30], 2
        call public_6f24870
        mov ecx, dword ptr ds : [public_6fbbb9c]
        mov edx, dword ptr ss : [ebp]
        add esp, 8
        push ebx
        push ebx
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x54]
        push edx
        lea eax, ds:[esi+0x18]
        push eax
        call public_6f26460
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [ecx+0x114], 1
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x40]
        push ecx
        mov dword ptr ss : [esp+0x44], edx
        push eax
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, edi
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x44]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x28], bl
        je public_6f60191
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        jmp public_6f60191
        public_6f6011b : nop
        mov dword ptr ss : [esp+0x44], ebx
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x28], 1
        call public_6f28e10
        lea eax, ss:[esp+0x44]
        push eax
        push 0x13
        call public_6f24870
        add esp, 8
        lea ecx, ds:[esi+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x48]
        lea edx, ds:[esi+0x24]
        push edx
        call public_6f276f0
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [eax+0x114], 1
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+0x44]
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        lea eax, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x48], ecx
        push eax
        mov ecx, edi
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x44]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x28], bl
        je public_6f60191
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_6f60191 : nop
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x18]
        cmp esi, eax
        jne public_6f60090
        public_6f6019f : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov edi, eax
        je public_6f601ca
        public_6f601b3 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6ecfe80
        cmp esi, edi
        jne public_6f601b3
        public_6f601ca : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f60020)
    }
}

#undef public_6f60090
#undef public_6f6011b
#undef public_6f60191
#undef public_6f6019f
#undef public_6f601b3
#undef public_6f601ca
