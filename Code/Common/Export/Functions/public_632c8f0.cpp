#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632c8f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_632c935 _public_632c935
#define public_632c968 _public_632c968
#define public_632c989 _public_632c989
#define public_632c994 _public_632c994
#define public_632c9ca _public_632c9ca
#define public_632c9fd _public_632c9fd
#define public_632ca1a _public_632ca1a

PROC_DECLARE(0x632c8f0, internal_632c8f0, public_632c8f0);
extern "C" NAKED register_t __cdecl internal_632c8f0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [esi+0x14]
        cmp eax, ecx
        push edi
        lea edi, ds:[esi+0x14]
        jne public_632c989
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ds:[eax-4]
        mov dword ptr ds : [esi+0x20], ecx
        mov edx, dword ptr ds : [eax]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        jne public_632c968
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, dword ptr ds : [esi+0x20]
        jne public_632c935
        mov eax, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        public_632c935 : nop
        xor eax, eax
        xor ecx, ecx
        lea ebp, ds:[esi+4]
        mov dword ptr ss : [ebp], eax
        mov dword ptr ss : [ebp+4], ecx
        xor edx, edx
        mov dword ptr ss : [ebp+8], edx
        xor ebx, ebx
        mov dword ptr ss : [ebp+0xC], ebx
        mov ebp, edi
        mov dword ptr ss : [ebp], eax
        mov dword ptr ss : [ebp+4], ecx
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [ebp+8], edx
        push ecx
        mov dword ptr ss : [ebp+0xC], ebx
        call public_6391d5a
        add esp, 4
        jmp public_632c989
        public_632c968 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [eax]
        mov ebp, edi
        mov dword ptr ss : [ebp], edx
        lea ebx, ds:[edx+0x1000]
        mov ecx, edx
        mov dword ptr ss : [ebp+4], ebx
        add ecx, 0x1000
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+0xC], eax
        public_632c989 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_632c994
        add dword ptr ds : [esi+0x1C], 0xFFFFFFF8
        public_632c994 : nop
        dec eax
        test eax, eax
        mov dword ptr ds : [esi+0x2C], eax
        jne public_632ca1a
        mov eax, dword ptr ds : [esi+0x20]
        lea edx, ds:[eax-4]
        mov dword ptr ds : [esi+0x20], edx
        mov eax, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        jne public_632c9fd
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, dword ptr ds : [esi+0x20]
        jne public_632c9ca
        mov ecx, dword ptr ds : [eax]
        push ecx
        call public_6391d5a
        add esp, 4
        public_632c9ca : nop
        xor eax, eax
        lea ebp, ds:[esi+4]
        mov dword ptr ss : [ebp], eax
        xor ecx, ecx
        xor edx, edx
        mov dword ptr ds : [edi], eax
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ds : [edi+8], edx
        mov edx, dword ptr ds : [esi+0x24]
        xor ebx, ebx
        push edx
        mov dword ptr ss : [ebp+0xC], ebx
        mov dword ptr ds : [edi+0xC], ebx
        call public_6391d5a
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_632c9fd : nop
        mov esi, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi]
        mov eax, ecx
        mov dword ptr ds : [edi], ecx
        lea edx, ds:[ecx+0x1000]
        add eax, 0x1000
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], esi
        public_632ca1a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x632c8f0)
    }
}

#undef public_632c935
#undef public_632c968
#undef public_632c989
#undef public_632c994
#undef public_632c9ca
#undef public_632c9fd
#undef public_632ca1a
