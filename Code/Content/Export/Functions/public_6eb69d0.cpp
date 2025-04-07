#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb69d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb69ec _public_6eb69ec
#define public_6eb69f4 _public_6eb69f4
#define public_6eb69ff _public_6eb69ff
#define public_6eb6a07 _public_6eb6a07
#define public_6eb6a2e _public_6eb6a2e
#define public_6eb6a81 _public_6eb6a81
#define public_6eb6a9a _public_6eb6a9a
#define public_6eb6ac3 _public_6eb6ac3

PROC_DECLARE(0x6eb69d0, internal_6eb69d0, public_6eb69d0);
extern "C" NAKED register_t __cdecl internal_6eb69d0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        cmp esi, edi
        je public_6eb6ac3
        mov ebx, dword ptr ds : [edi+4]
        test ebx, ebx
        jne public_6eb69ec
        xor ecx, ecx
        jmp public_6eb69f4
        public_6eb69ec : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, ebx
        sar ecx, 2
        public_6eb69f4 : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_6eb69ff
        xor eax, eax
        jmp public_6eb6a07
        public_6eb69ff : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 2
        public_6eb6a07 : nop
        cmp ecx, eax
        ja public_6eb6a2e
        mov eax, dword ptr ds : [edi+8]
        push edx
        push eax
        push ebx
        call public_6f6a640
        add esp, 0xC
        mov ecx, edi
        call public_6fa3db0
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_6eb6ac3
        public_6eb6a2e : nop
        mov ecx, edi
        call public_6fa3db0
        mov ecx, esi
        mov ebx, eax
        call public_6eb6b30
        cmp ebx, eax
        ja public_6eb6a81
        mov ebx, dword ptr ds : [edi+4]
        push ebp
        mov ecx, esi
        call public_6fa3db0
        lea ebp, ds:[ebx+eax*4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        push ebp
        push ebx
        call public_6f6a640
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi+8]
        add esp, 0xC
        push ecx
        push edx
        push ebp
        mov ecx, esi
        call public_6eed270
        mov ecx, edi
        call public_6fa3db0
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        pop ebp
        jmp public_6eb6ac3
        public_6eb6a81 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov ecx, edi
        call public_6fa3db0
        test eax, eax
        jge public_6eb6a9a
        xor eax, eax
        public_6eb6a9a : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_6eb6ac3 : nop
        mov edx, dword ptr ds : [edi+0x10]
        mov ebx, dword ptr ds : [public_6fb3088]
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], eax
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], edx
        mov eax, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], eax
        mov cl, byte ptr ds : [edi+0x24]
        mov byte ptr ds : [esi+0x24], cl
        mov dl, byte ptr ds : [edi+0x25]
        lea ecx, ds:[edi+0x2C]
        mov byte ptr ds : [esi+0x25], dl
        mov eax, dword ptr ds : [edi+0x28]
        push ecx
        lea ecx, ds:[esi+0x2C]
        mov dword ptr ds : [esi+0x28], eax
        call ebx
        lea edx, ds:[edi+0x44]
        push edx
        lea ecx, ds:[esi+0x44]
        call ebx
        lea eax, ds:[edi+0x5C]
        push eax
        lea ecx, ds:[esi+0x5C]
        call ebx
        mov ecx, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], ecx
        mov edx, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x78], edx
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x7C], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eb69d0)
    }
}

#undef public_6eb69ec
#undef public_6eb69f4
#undef public_6eb69ff
#undef public_6eb6a07
#undef public_6eb6a2e
#undef public_6eb6a81
#undef public_6eb6a9a
#undef public_6eb6ac3
