#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62a47a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a5600);
CLANG_FORWARD_PROC_SYMBOL(public_62a69f0);
CLANG_FORWARD_PROC_SYMBOL(public_62a7040);
CLANG_FORWARD_PROC_SYMBOL(public_62bbd70);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6393e16);

#define public_62a47f0 _public_62a47f0
#define public_62a4807 _public_62a4807
#define public_62a482d _public_62a482d
#define public_62a4843 _public_62a4843
#define public_62a486b _public_62a486b

PROC_DECLARE(0x62a47a0, internal_62a47a0, public_62a47a0);
extern "C" NAKED register_t __cdecl internal_62a47a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393e16 @0x62a47a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393e16
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x18], esi
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x14]
        push eax
        push ecx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x38], 2
        call public_62a7040
        mov eax, dword ptr ds : [esi+0x38]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        lea ebp, ds:[esi+0x34]
        mov dword ptr ss : [esp+0x10], eax
        je public_62a4807
        public_62a47f0 : nop
        mov eax, ebx
        mov ebx, dword ptr ds : [ebx]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebp
        call public_6271cc0
        cmp ebx, dword ptr ss : [esp+0x10]
        jne public_62a47f0
        public_62a4807 : nop
        mov ecx, esi
        call public_62a5600
        mov ecx, dword ptr ds : [esi+0x30]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x10], ecx
        je public_62a482d
        call public_62bbd70
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6391d5a
        add esp, 4
        public_62a482d : nop
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x2C], 1
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_62a486b
        public_62a4843 : nop
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_632ca20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebp
        call public_6271cc0
        mov eax, dword ptr ss : [esp+0x14]
        cmp dword ptr ss : [esp+0x10], eax
        jne public_62a4843
        public_62a486b : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        add esp, 4
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x38], bl
        call public_62a7040
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_6391d5a
        add esp, 8
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 3
        call public_62a69f0
        mov edi, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        call public_632c410
        mov ecx, dword ptr ds : [eax]
        push edi
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_62a69f0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x62a47a0)
    }
}

#undef public_62a47f0
#undef public_62a4807
#undef public_62a482d
#undef public_62a4843
#undef public_62a486b
