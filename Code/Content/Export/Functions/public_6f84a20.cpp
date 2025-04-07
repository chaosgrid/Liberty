#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1198);

#define public_6f84a60 _public_6f84a60
#define public_6f84a92 _public_6f84a92
#define public_6f84aaa _public_6f84aaa
#define public_6f84ab1 _public_6f84ab1
#define public_6f84abc _public_6f84abc
#define public_6f84ac4 _public_6f84ac4
#define public_6f84ad0 _public_6f84ad0
#define public_6f84ae6 _public_6f84ae6
#define public_6f84afa _public_6f84afa
#define public_6f84b0d _public_6f84b0d
#define public_6f84b68 _public_6f84b68
#define public_6f84b92 _public_6f84b92
#define public_6f84bb9 _public_6f84bb9
#define public_6f84bbd _public_6f84bbd

PROC_DECLARE(0x6f84a20, internal_6f84a20, public_6f84a20);
extern "C" NAKED register_t __cdecl internal_6f84a20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1198 @0x6f84a22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1198
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        mov al, byte ptr ss : [esp+3]
        push esi
        push edi
        mov edi, ecx
        mov byte ptr ss : [esp+0x10], al
        xor ecx, ecx
        xor eax, eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov esi, dword ptr ds : [edi+8]
        cmp esi, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x28], ecx
        je public_6f84a92
        public_6f84a60 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f937c0
        mov eax, dword ptr ds : [edi+0xC]
        add esi, 4
        cmp esi, eax
        jne public_6f84a60
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        public_6f84a92 : nop
        lea esi, ds:[edi+4]
        lea edx, ss:[esp+0x10]
        cmp esi, edx
        je public_6f84bbd
        test eax, eax
        push ebx
        jne public_6f84aaa
        xor ebx, ebx
        jmp public_6f84ab1
        public_6f84aaa : nop
        mov ebx, ecx
        sub ebx, eax
        sar ebx, 2
        public_6f84ab1 : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_6f84abc
        xor edi, edi
        jmp public_6f84ac4
        public_6f84abc : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, edx
        sar edi, 2
        public_6f84ac4 : nop
        cmp ebx, edi
        pop ebx
        ja public_6f84b0d
        cmp eax, ecx
        je public_6f84ae6
        lea ecx, ds:[ecx]
        public_6f84ad0 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6f84ad0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        public_6f84ae6 : nop
        test eax, eax
        jne public_6f84afa
        mov edx, dword ptr ds : [esi+4]
        xor ecx, ecx
        lea ecx, ds:[edx+ecx*4]
        mov dword ptr ds : [esi+8], ecx
        jmp public_6f84bbd
        public_6f84afa : nop
        mov edx, dword ptr ds : [esi+4]
        sub ecx, eax
        sar ecx, 2
        lea ecx, ds:[edx+ecx*4]
        mov dword ptr ds : [esi+8], ecx
        jmp public_6f84bbd
        public_6f84b0d : nop
        mov ecx, esi
        call public_6eb6b30
        lea ecx, ss:[esp+0x10]
        mov edi, eax
        call public_6fa3db0
        cmp eax, edi
        ja public_6f84b68
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, esi
        call public_6fa3db0
        mov edx, dword ptr ds : [esi+4]
        lea edi, ds:[edi+eax*4]
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        push edi
        push eax
        call public_6f6a640
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 0xC
        push ecx
        push edx
        push edi
        mov ecx, esi
        call public_6eed270
        lea ecx, ss:[esp+0x10]
        call public_6fa3db0
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_6f84bb9
        public_6f84b68 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_6ea1490
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0x10]
        call public_6fa3db0
        test eax, eax
        jge public_6f84b92
        xor eax, eax
        public_6f84b92 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 4
        push eax
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr ds : [esi+4], eax
        call public_6eed270
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_6f84bb9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_6f84bbd : nop
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6f84a20)
    }
}

#undef public_6f84a60
#undef public_6f84a92
#undef public_6f84aaa
#undef public_6f84ab1
#undef public_6f84abc
#undef public_6f84ac4
#undef public_6f84ad0
#undef public_6f84ae6
#undef public_6f84afa
#undef public_6f84b0d
#undef public_6f84b68
#undef public_6f84b92
#undef public_6f84bb9
#undef public_6f84bbd
