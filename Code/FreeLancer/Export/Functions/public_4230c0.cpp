#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4230c0);

#define public_4230f3 _public_4230f3
#define public_423103 _public_423103
#define public_42311c _public_42311c
#define public_423127 _public_423127
#define public_423133 _public_423133
#define public_423147 _public_423147
#define public_42315f _public_42315f
#define public_423172 _public_423172

PROC_DECLARE(0x4230c0, internal_4230c0, public_4230c0);
extern "C" NAKED register_t __cdecl internal_4230c0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0xDE1
        call public_421ed0
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x20]
        lea ebx, ds:[edi+edi*2]
        shl ebx, 2
        lea esi, ds:[ebx+eax]
        lea eax, ds:[ecx-1]
        add esp, 4
        cmp eax, 1
        jle public_423127
        dec eax
        mov dword ptr ss : [esp+0x18], eax
        public_4230f3 : nop
        push 7
        call public_421670
        add esp, 4
        test edi, edi
        jle public_42311c
        mov ebp, edi
        public_423103 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        push edx
        push eax
        push ecx
        call public_421cc0
        add esp, 0xC
        add esi, 0xC
        dec ebp
        jne public_423103
        public_42311c : nop
        call public_421690
        dec dword ptr ss : [esp+0x18]
        jne public_4230f3
        public_423127 : nop
        test edi, edi
        jle public_423172
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], edi
        public_423133 : nop
        push 3
        mov esi, ebp
        call public_421670
        mov edi, dword ptr ss : [esp+0x20]
        add esp, 4
        test edi, edi
        jle public_42315f
        public_423147 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        push edx
        push eax
        push ecx
        call public_421cc0
        add esp, 0xC
        add esi, ebx
        dec edi
        jne public_423147
        public_42315f : nop
        call public_421690
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 0xC
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_423133
        public_423172 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4230c0)
    }
}

#undef public_4230f3
#undef public_423103
#undef public_42311c
#undef public_423127
#undef public_423133
#undef public_423147
#undef public_42315f
#undef public_423172
