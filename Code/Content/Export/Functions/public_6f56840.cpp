#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f56840);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f5686d _public_6f5686d
#define public_6f56873 _public_6f56873
#define public_6f56892 _public_6f56892
#define public_6f568a1 _public_6f568a1
#define public_6f568ac _public_6f568ac

PROC_DECLARE(0x6f56840, internal_6f56840, public_6f56840);
extern "C" NAKED register_t __cdecl internal_6f56840()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [esi]
        mov ebp, ecx
        mov byte ptr ss : [ebp], al
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f5686d
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6f5686d : nop
        test eax, eax
        jge public_6f56873
        xor eax, eax
        public_6f56873 : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 3
        push edx
        call public_6fa912a
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+8]
        mov edx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, ebx
        je public_6f568ac
        push edi
        public_6f56892 : nop
        test edx, edx
        je public_6f568a1
        mov ecx, 6
        mov esi, eax
        mov edi, edx
        rep movsd
        public_6f568a1 : nop
        add eax, 0x18
        add edx, 0x18
        cmp eax, ebx
        jne public_6f56892
        pop edi
        public_6f568ac : nop
        pop esi
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f56840)
    }
}

#undef public_6f5686d
#undef public_6f56873
#undef public_6f56892
#undef public_6f568a1
#undef public_6f568ac
