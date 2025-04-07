#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438220);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_4427e0);
CLANG_FORWARD_PROC_SYMBOL(public_483ae0);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4c3df0);
CLANG_FORWARD_PROC_SYMBOL(public_4c3f00);
CLANG_FORWARD_PROC_SYMBOL(public_4c3f10);
CLANG_FORWARD_PROC_SYMBOL(public_4c4040);
CLANG_FORWARD_PROC_SYMBOL(public_4c4cc0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ce0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4f50);
CLANG_FORWARD_PROC_SYMBOL(public_4c6250);
CLANG_FORWARD_PROC_SYMBOL(public_4c6f70);
CLANG_FORWARD_PROC_SYMBOL(public_4f6190);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc072);

#define public_483b7c _public_483b7c
#define public_483c30 _public_483c30
#define public_483c39 _public_483c39
#define public_483cc6 _public_483cc6
#define public_483ce2 _public_483ce2
#define public_483d08 _public_483d08
#define public_483d24 _public_483d24

PROC_DECLARE(0x483ae0, internal_483ae0, public_483ae0);
extern "C" NAKED register_t __cdecl internal_483ae0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bc072 @0x483ae8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc072
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x974]
        push edi
        add ecx, 0x3A8
        push ecx
        lea eax, ds:[esi+0x330]
        push eax
        lea edx, ds:[esi+0x34C]
        push edx
        call public_4c6f70
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x974]
        lea ecx, ds:[eax+0x3A8]
        push ecx
        lea edx, ds:[eax+0x330]
        push edx
        add eax, 0x34C
        push eax
        call public_4c6f70
        mov ebp, dword ptr ds : [esi+0x9F8]
        sub ebp, dword ptr ds : [esi+0x9FC]
        sub ebp, edi
        add esp, 0x18
        add ebp, eax
        call public_4c4ce0
        cmp eax, ebp
        jge public_483b7c
        mov eax, dword ptr ds : [public_671c74]
        push 0
        push eax
        call public_489e80
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 
        public_483b7c : nop
        mov edi, dword ptr ds : [public_66873c]
        push ebx
        push edi
        mov ecx, offset public_668708
        call public_43a510
        mov ecx, dword ptr ds : [esi+0x97C]
        push 1
        push ecx
        push edi
        mov ecx, eax
        call public_438220
        mov eax, dword ptr ds : [esi+0x974]
        add eax, 0x34C
        push eax
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c6190]
        mov edx, dword ptr ds : [esi+0x348]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x10], edx
        call public_4c3f00
        mov edi, eax
        mov al, byte ptr ds : [edi]
        push 0x10
        mov byte ptr ss : [esp+0x20], al
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ebx
        mov ebx, dword ptr ds : [edi+4]
        mov ecx, edi
        call dword ptr ds : [public_5c63b8]
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x20]
        mov edi, eax
        call dword ptr ds : [public_5c63b4]
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ecx
        push edx
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c63b0]
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x3C], 1
        mov edi, 0x3F800000
        je public_483c39
        nop 
        public_483c30 : nop
        mov dword ptr ds : [eax+0xC], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_483c30
        public_483c39 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        call public_4c3f10
        add esp, 4
        lea ecx, ds:[esi+0x330]
        call public_4c6250
        mov ecx, dword ptr ds : [esi+0x974]
        add ecx, 0x330
        call public_4c6250
        call public_4c4ce0
        sub eax, ebp
        push eax
        call public_4c4cc0
        lea ecx, ss:[esp+0x2C]
        push ecx
        call public_4c4040
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_4c3df0
        push edi
        call public_4c4f50
        push 1
        call public_4427e0
        add esp, 0x14
        mov ecx, offset public_674c0c
        call public_4f6190
        xor ebx, ebx
        push ebx
        push 0x6B
        call public_5763b0
        mov eax, dword ptr ds : [public_671c60]
        push ebx
        push eax
        call public_489e80
        mov eax, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ds : [eax]
        add esp, 0x10
        cmp esi, eax
        mov byte ptr ss : [esp+0x3C], bl
        mov edi, eax
        je public_483ce2
        public_483cc6 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c63ac]
        cmp esi, edi
        jne public_483cc6
        mov eax, dword ptr ss : [esp+0x20]
        public_483ce2 : nop
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        mov edi, eax
        pop ebx
        je public_483d24
        public_483d08 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c6188]
        cmp esi, edi
        jne public_483d08
        mov eax, dword ptr ss : [esp+0x28]
        public_483d24 : nop
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x483ae0)
    }
}

#undef public_483b7c
#undef public_483c30
#undef public_483c39
#undef public_483cc6
#undef public_483ce2
#undef public_483d08
#undef public_483d24
