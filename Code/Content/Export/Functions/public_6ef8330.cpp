#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8330);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef834d _public_6ef834d
#define public_6ef8355 _public_6ef8355
#define public_6ef8360 _public_6ef8360
#define public_6ef8368 _public_6ef8368
#define public_6ef837a _public_6ef837a
#define public_6ef838f _public_6ef838f
#define public_6ef83d0 _public_6ef83d0
#define public_6ef83e9 _public_6ef83e9
#define public_6ef8412 _public_6ef8412
#define public_6ef8449 _public_6ef8449
#define public_6ef8451 _public_6ef8451
#define public_6ef845c _public_6ef845c
#define public_6ef8464 _public_6ef8464
#define public_6ef8498 _public_6ef8498
#define public_6ef8507 _public_6ef8507
#define public_6ef8523 _public_6ef8523
#define public_6ef854c _public_6ef854c

PROC_DECLARE(0x6ef8330, internal_6ef8330, public_6ef8330);
extern "C" NAKED register_t __cdecl internal_6ef8330()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        mov esi, ecx
        cmp esi, ebx
        push edi
        je public_6ef8412
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        jne public_6ef834d
        xor ecx, ecx
        jmp public_6ef8355
        public_6ef834d : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edi
        sar ecx, 2
        public_6ef8355 : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_6ef8360
        xor eax, eax
        jmp public_6ef8368
        public_6ef8360 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 2
        public_6ef8368 : nop
        cmp ecx, eax
        ja public_6ef838f
        mov eax, dword ptr ds : [ebx+8]
        push edx
        push eax
        push edi
        call public_6f6a640
        add esp, 0xC
        public_6ef837a : nop
        mov ecx, ebx
        call public_6fa3db0
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_6ef8412
        public_6ef838f : nop
        mov ecx, ebx
        call public_6fa3db0
        mov ecx, esi
        mov edi, eax
        call public_6eb6b30
        cmp edi, eax
        ja public_6ef83d0
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, esi
        call public_6fa3db0
        lea ebp, ds:[edi+eax*4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        push ebp
        push edi
        call public_6f6a640
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ebx+8]
        add esp, 0xC
        push ecx
        push edx
        push ebp
        mov ecx, esi
        call public_6eed270
        jmp public_6ef837a
        public_6ef83d0 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov ecx, ebx
        call public_6fa3db0
        test eax, eax
        jge public_6ef83e9
        xor eax, eax
        public_6ef83e9 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_6ef8412 : nop
        mov edx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [esi+0x14], eax
        mov ecx, dword ptr ds : [ebx+0x18]
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [ebx+0x1C]
        mov dword ptr ds : [esi+0x1C], edx
        mov eax, dword ptr ds : [ebx+0x20]
        lea ebp, ds:[ebx+0x24]
        lea edi, ds:[esi+0x24]
        cmp edi, ebp
        mov dword ptr ds : [esi+0x20], eax
        je public_6ef854c
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6ef8449
        xor ecx, ecx
        jmp public_6ef8451
        public_6ef8449 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        sar ecx, 2
        public_6ef8451 : nop
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        jne public_6ef845c
        xor eax, eax
        jmp public_6ef8464
        public_6ef845c : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, edx
        sar eax, 2
        public_6ef8464 : nop
        cmp ecx, eax
        ja public_6ef8498
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push ecx
        push eax
        call public_6f6a640
        add esp, 0xC
        mov ecx, ebp
        call public_6fa3db0
        mov edx, dword ptr ds : [edi+4]
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [edi+8], eax
        mov edx, dword ptr ds : [ebx+0x34]
        pop edi
        mov dword ptr ds : [esi+0x34], edx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6ef8498 : nop
        mov ecx, edi
        call public_6eb6b30
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], eax
        call public_6fa3db0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        ja public_6ef8507
        mov ecx, edi
        lea ebp, ds:[ebx+0x24]
        call public_6fa3db0
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [edi+4]
        lea eax, ds:[ecx+eax*4]
        push edx
        push eax
        push ecx
        mov dword ptr ss : [esp+0x20], eax
        call public_6f6a640
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push eax
        push ecx
        push edx
        mov ecx, edi
        call public_6eed270
        mov ecx, ebp
        call public_6fa3db0
        mov ecx, dword ptr ds : [edi+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [edi+8], edx
        mov edx, dword ptr ds : [ebx+0x34]
        pop edi
        mov dword ptr ds : [esi+0x34], edx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6ef8507 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        lea ebp, ds:[ebx+0x24]
        add esp, 4
        mov ecx, ebp
        call public_6fa3db0
        test eax, eax
        jge public_6ef8523
        xor eax, eax
        public_6ef8523 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, edi
        call public_6eed270
        mov dword ptr ds : [edi+0xC], eax
        mov dword ptr ds : [edi+8], eax
        public_6ef854c : nop
        mov edx, dword ptr ds : [ebx+0x34]
        pop edi
        mov dword ptr ds : [esi+0x34], edx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ef8330)
    }
}

#undef public_6ef834d
#undef public_6ef8355
#undef public_6ef8360
#undef public_6ef8368
#undef public_6ef837a
#undef public_6ef838f
#undef public_6ef83d0
#undef public_6ef83e9
#undef public_6ef8412
#undef public_6ef8449
#undef public_6ef8451
#undef public_6ef845c
#undef public_6ef8464
#undef public_6ef8498
#undef public_6ef8507
#undef public_6ef8523
#undef public_6ef854c
