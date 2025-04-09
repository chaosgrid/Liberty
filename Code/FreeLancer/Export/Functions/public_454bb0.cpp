#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4539e0);
CLANG_FORWARD_PROC_SYMBOL(public_454bb0);
CLANG_FORWARD_PROC_SYMBOL(public_454d70);
CLANG_FORWARD_PROC_SYMBOL(public_4554c0);
CLANG_FORWARD_PROC_SYMBOL(public_456af0);
CLANG_FORWARD_PROC_SYMBOL(public_456b40);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9fd8);

#define public_454bea _public_454bea
#define public_454c11 _public_454c11
#define public_454c45 _public_454c45
#define public_454c67 _public_454c67
#define public_454c74 _public_454c74
#define public_454c81 _public_454c81
#define public_454ca0 _public_454ca0
#define public_454cad _public_454cad
#define public_454cba _public_454cba

PROC_DECLARE(0x454bb0, internal_454bb0, public_454bb0);
extern "C" NAKED register_t __cdecl internal_454bb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9fd8 @0x454bb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9fd8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x18], edi
        mov al, byte ptr ds : [edi+0x2C]
        xor ebx, ebx
        cmp al, bl
        mov dword ptr ss : [esp+0x2C], 4
        jne public_454bea
        push 1
        call public_4554c0
        public_454bea : nop
        mov eax, dword ptr ds : [edi+0xB4]
        cmp eax, ebx
        je public_454c11
        mov ecx, dword ptr ds : [eax-4]
        lea esi, ds:[eax-4]
/*FIXUP push offset _public_454d70 @0x454bfa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_454d70
        push ecx
        push 0x40
        push eax
        call public_5b7ec6
        push esi
        call public_5b7e1d
        add esp, 4
        public_454c11 : nop
        mov esi, dword ptr ds : [public_5c6288]
        lea ecx, ds:[edi+0xD4]
        mov dword ptr ds : [edi+0xB4], ebx
        mov dword ptr ss : [esp+0x14], ecx
        call esi
        lea ecx, ds:[edi+0xEC]
        mov dword ptr ss : [esp+0x10], ecx
        call esi
        mov ecx, dword ptr ds : [edi+0x108]
        cmp ecx, ebx
        je public_454c45
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_454c45 : nop
        lea eax, ds:[edi+0x120]
        push eax
        mov dword ptr ds : [edi+0x108], ebx
        call dword ptr ds : [public_5c60c8]
        mov eax, dword ptr ds : [edi+0x134]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp esi, eax
        je public_454c81
        public_454c67 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_454c74
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_454c74 : nop
        mov dword ptr ds : [esi+8], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x134]
        jne public_454c67
        public_454c81 : nop
        lea ebp, ds:[edi+0x130]
        mov ecx, ebp
        call public_456af0
        mov eax, dword ptr ds : [edi+0x128]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_454cba
        lea ebx, ds:[ebx]
        public_454ca0 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_454cad
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_454cad : nop
        mov dword ptr ds : [esi+8], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x128]
        jne public_454ca0
        public_454cba : nop
        lea esi, ds:[edi+0x124]
        mov ecx, esi
        call public_456af0
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x38], 3
        call public_456b40
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        add esp, 4
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov ebp, dword ptr ds : [esi+4]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 2
        call public_53e430
        mov eax, dword ptr ds : [eax]
        push ebp
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        call public_456b40
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        lea ecx, ds:[edi+0x114]
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ss : [esp+0x2C], 1
        call public_4539e0
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [public_5c6098]
        mov byte ptr ss : [esp+0x2C], bl
        call esi
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call esi
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x454bb0)
    }
}

#undef public_454bea
#undef public_454c11
#undef public_454c45
#undef public_454c67
#undef public_454c74
#undef public_454c81
#undef public_454ca0
#undef public_454cad
#undef public_454cba
