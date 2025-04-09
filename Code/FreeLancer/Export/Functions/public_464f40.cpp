#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_464f40);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb064);

#define public_464fa8 _public_464fa8
#define public_464fcd _public_464fcd
#define public_465000 _public_465000
#define public_465024 _public_465024
#define public_465051 _public_465051
#define public_465075 _public_465075
#define public_4650a0 _public_4650a0
#define public_4650b5 _public_4650b5

PROC_DECLARE(0x464f40, internal_464f40, public_464f40);
extern "C" NAKED register_t __cdecl internal_464f40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb064 @0x464f42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb064
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
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [edi], offset public_5cfac4
        mov dword ptr ds : [edi+0x7C], offset public_5cfab8
        mov eax, dword ptr ds : [public_5c62c4]
        push eax
        push 4
        push 0xC
        lea ecx, ds:[edi+0x364]
        push ecx
        mov dword ptr ss : [esp+0x38], 4
        call public_5b7ec6
        mov ebx, dword ptr ds : [edi+0x35C]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        lea esi, ds:[edi+0x358]
        mov byte ptr ss : [esp+0x28], 3
        mov dword ptr ss : [esp+0x10], eax
        je public_464fcd
        public_464fa8 : nop
        push 0
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_46d680
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_464fa8
        public_464fcd : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        xor ebp, ebp
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov ebx, dword ptr ds : [edi+0x350]
        mov eax, dword ptr ds : [ebx]
        lea esi, ds:[edi+0x34C]
        add esp, 4
        cmp eax, ebx
        mov byte ptr ss : [esp+0x28], 2
        mov dword ptr ss : [esp+0x10], eax
        je public_465024
        lea esp, ss:[esp]
        public_465000 : nop
        push ebp
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_46d680
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_465000
        public_465024 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov ebx, dword ptr ds : [edi+0x344]
        mov eax, dword ptr ds : [ebx]
        lea esi, ds:[edi+0x340]
        add esp, 4
        cmp eax, ebx
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_465075
        public_465051 : nop
        push ebp
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_46d680
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_465051
        public_465075 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov ebx, dword ptr ds : [edi+0x338]
        mov esi, dword ptr ds : [ebx]
        lea ebp, ds:[edi+0x334]
        add esp, 4
        cmp esi, ebx
        mov byte ptr ss : [esp+0x28], 0
        je public_4650b5
        mov edi, edi
        public_4650a0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebp
        call public_46d680
        cmp esi, ebx
        jne public_4650a0
        public_4650b5 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov ecx, edi
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x464f40)
    }
}

#undef public_464fa8
#undef public_464fcd
#undef public_465000
#undef public_465024
#undef public_465051
#undef public_465075
#undef public_4650a0
#undef public_4650b5
