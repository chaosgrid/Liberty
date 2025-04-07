#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef8b10 _public_6ef8b10
#define public_6ef8b25 _public_6ef8b25
#define public_6ef8b31 _public_6ef8b31
#define public_6ef8b64 _public_6ef8b64
#define public_6ef8bb6 _public_6ef8bb6
#define public_6ef8bd3 _public_6ef8bd3
#define public_6ef8bf9 _public_6ef8bf9
#define public_6ef8bfc _public_6ef8bfc
#define public_6ef8c67 _public_6ef8c67
#define public_6ef8cbd _public_6ef8cbd
#define public_6ef8cd6 _public_6ef8cd6
#define public_6ef8cfa _public_6ef8cfa
#define public_6ef8cfd _public_6ef8cfd
#define public_6ef8d05 _public_6ef8d05
#define public_6ef8d33 _public_6ef8d33

PROC_DECLARE(0x6ef8af0, internal_6ef8af0, public_6ef8af0);
extern "C" NAKED register_t __cdecl internal_6ef8af0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        cmp ebp, eax
        je public_6ef8d33
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push esi
        push edi
        lea edi, ss:[ebp+0x28]
        lea esi, ds:[ebx+0x28]
        nop 
        public_6ef8b10 : nop
        cmp ebx, ebp
        je public_6ef8bfc
        mov ecx, dword ptr ds : [edi-0x24]
        test ecx, ecx
        jne public_6ef8b25
        mov dword ptr ss : [esp+0x10], ecx
        jmp public_6ef8b31
        public_6ef8b25 : nop
        mov eax, dword ptr ds : [edi-0x20]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [esp+0x10], eax
        public_6ef8b31 : nop
        mov ecx, ebx
        call public_6fa3db0
        cmp dword ptr ss : [esp+0x10], eax
        ja public_6ef8b64
        mov eax, dword ptr ds : [esi-0x24]
        mov ecx, dword ptr ds : [edi-0x20]
        push eax
        mov eax, dword ptr ds : [edi-0x24]
        push ecx
        push eax
        call public_6f6a640
        add esp, 0xC
        mov ecx, ebp
        call public_6fa3db0
        mov edx, dword ptr ds : [esi-0x24]
        lea eax, ds:[edx+eax*4]
        jmp public_6ef8bf9
        public_6ef8b64 : nop
        mov ecx, ebp
        call public_6fa3db0
        mov ecx, ebx
        mov ebp, eax
        call public_6eb6b30
        cmp ebp, eax
        ja public_6ef8bb6
        mov ecx, ebx
        call public_6fa3db0
        mov ecx, dword ptr ds : [edi-0x24]
        mov edx, dword ptr ds : [esi-0x24]
        push edx
        lea ebp, ds:[ecx+eax*4]
        push ebp
        push ecx
        call public_6f6a640
        mov eax, dword ptr ds : [esi-0x20]
        mov ecx, dword ptr ds : [edi-0x20]
        add esp, 0xC
        push eax
        push ecx
        push ebp
        mov ecx, ebx
        call public_6eed270
        mov ebp, dword ptr ss : [esp+0x18]
        mov ecx, ebp
        call public_6fa3db0
        mov edx, dword ptr ds : [esi-0x24]
        lea eax, ds:[edx+eax*4]
        jmp public_6ef8bf9
        public_6ef8bb6 : nop
        mov ecx, dword ptr ds : [esi-0x24]
        push ecx
        call public_6fa8fe0
        mov ebp, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov ecx, ebp
        call public_6fa3db0
        test eax, eax
        jge public_6ef8bd3
        xor eax, eax
        public_6ef8bd3 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi-0x24], eax
        mov ecx, dword ptr ds : [edi-0x20]
        mov edx, dword ptr ds : [edi-0x24]
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_6eed270
        mov dword ptr ds : [esi-0x1C], eax
        public_6ef8bf9 : nop
        mov dword ptr ds : [esi-0x20], eax
        public_6ef8bfc : nop
        mov eax, dword ptr ds : [edi-0x18]
        mov dword ptr ds : [esi-0x18], eax
        mov ecx, dword ptr ds : [edi-0x14]
        mov dword ptr ds : [esi-0x14], ecx
        mov edx, dword ptr ds : [edi-0x10]
        mov dword ptr ds : [esi-0x10], edx
        mov eax, dword ptr ds : [edi-0xC]
        mov dword ptr ds : [esi-0xC], eax
        mov ecx, dword ptr ds : [edi-8]
        lea edx, ds:[esi-4]
        lea eax, ds:[edi-4]
        cmp edx, eax
        mov dword ptr ds : [esi-8], ecx
        je public_6ef8d05
        lea ecx, ds:[edi-4]
        lea ebx, ds:[esi-4]
        call public_6fa3db0
        mov ecx, ebx
        mov ebp, eax
        call public_6fa3db0
        cmp ebp, eax
        ja public_6ef8c67
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        push eax
        call public_6f6a640
        add esp, 0xC
        lea ecx, ds:[edi-4]
        call public_6fa3db0
        mov ecx, dword ptr ds : [esi]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+4], edx
        jmp public_6ef8cfd
        public_6ef8c67 : nop
        lea ecx, ds:[edi-4]
        call public_6fa3db0
        mov ecx, ebx
        mov ebp, eax
        call public_6eb6b30
        cmp ebp, eax
        ja public_6ef8cbd
        mov ebp, dword ptr ds : [edi]
        mov ecx, ebx
        call public_6fa3db0
        mov ecx, dword ptr ds : [esi]
        lea eax, ss:[ebp+eax*4]
        push ecx
        push eax
        push ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f6a640
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        push edx
        push eax
        push ecx
        mov ecx, ebx
        call public_6eed270
        lea ecx, ds:[edi-4]
        call public_6fa3db0
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[edx+eax*4]
        jmp public_6ef8cfa
        public_6ef8cbd : nop
        mov ecx, dword ptr ds : [esi]
        push ecx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[edi-4]
        call public_6fa3db0
        test eax, eax
        jge public_6ef8cd6
        xor eax, eax
        public_6ef8cd6 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_6eed270
        mov dword ptr ds : [esi+8], eax
        public_6ef8cfa : nop
        mov dword ptr ds : [esi+4], eax
        public_6ef8cfd : nop
        mov ebp, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x20]
        public_6ef8d05 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ss : [esp+0x1C]
        add ebp, 0x38
        add ebx, 0x38
        add esi, 0x38
        add edi, 0x38
        cmp ebp, eax
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x18], ebp
        jne public_6ef8b10
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ebp
        pop ecx
        ret 
        public_6ef8d33 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef8af0)
    }
}

#undef public_6ef8b10
#undef public_6ef8b25
#undef public_6ef8b31
#undef public_6ef8b64
#undef public_6ef8bb6
#undef public_6ef8bd3
#undef public_6ef8bf9
#undef public_6ef8bfc
#undef public_6ef8c67
#undef public_6ef8cbd
#undef public_6ef8cd6
#undef public_6ef8cfa
#undef public_6ef8cfd
#undef public_6ef8d05
#undef public_6ef8d33
