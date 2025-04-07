#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4e7ce);

#define public_6d4e7e6 _public_6d4e7e6
#define public_6d4e7f1 _public_6d4e7f1
#define public_6d4e7f7 _public_6d4e7f7
#define public_6d4e818 _public_6d4e818
#define public_6d4e82e _public_6d4e82e
#define public_6d4e83d _public_6d4e83d
#define public_6d4e840 _public_6d4e840
#define public_6d4e84e _public_6d4e84e
#define public_6d4e851 _public_6d4e851
#define public_6d4e861 _public_6d4e861
#define public_6d4e88b _public_6d4e88b
#define public_6d4e891 _public_6d4e891

PROC_DECLARE(0x6d4e7ce, internal_6d4e7ce, public_6d4e7ce);
extern "C" NAKED register_t __cdecl internal_6d4e7ce()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [esi+0x54]
        mov ebx, dword ptr ds : [esi+0x64]
        push edi
        xor edi, edi
        mov dword ptr ss : [ebp-0x10], edx
        inc edi
        public_6d4e7e6 : nop
        inc edi
        cmp ebx, 1
        mov eax, edi
        jle public_6d4e7f7
        lea ecx, ds:[ebx-1]
        public_6d4e7f1 : nop
        imul eax, edi
        dec ecx
        jne public_6d4e7f1
        public_6d4e7f7 : nop
        cmp eax, edx
        jle public_6d4e7e6
        dec edi
        cmp edi, 2
        mov dword ptr ss : [ebp-8], edi
        jge public_6d4e818
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0x37
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4e818 : nop
        test ebx, ebx
        mov dword ptr ss : [ebp-0xC], 1
        jle public_6d4e840
        mov eax, edi
        mov edi, dword ptr ss : [ebp+0xC]
        mov ecx, ebx
        mov edx, ebx
        rep stosd
        public_6d4e82e : nop
        mov eax, dword ptr ss : [ebp-0xC]
        imul eax, dword ptr ss : [ebp-8]
        dec edx
        mov dword ptr ss : [ebp-0xC], eax
        jne public_6d4e82e
        jmp public_6d4e840
        public_6d4e83d : nop
        mov esi, dword ptr ss : [ebp+8]
        public_6d4e840 : nop
        and byte ptr ss : [ebp-1], 0
        and dword ptr ss : [ebp-8], 0
        test ebx, ebx
        jle public_6d4e891
        jmp public_6d4e851
        public_6d4e84e : nop
        mov esi, dword ptr ss : [ebp+8]
        public_6d4e851 : nop
        cmp dword ptr ds : [esi+0x28], 2
        mov eax, dword ptr ss : [ebp-8]
        jne public_6d4e861
        mov eax, dword ptr ds : [eax*4+public_6d621a8]
        public_6d4e861 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        lea ecx, ds:[ecx+eax*4]
        mov eax, dword ptr ss : [ebp-0xC]
        mov esi, dword ptr ds : [ecx]
        cdq 
        idiv esi
        lea edi, ds:[esi+1]
        imul eax, edi
        cmp eax, dword ptr ss : [ebp-0x10]
        jg public_6d4e88b
        inc dword ptr ss : [ebp-8]
        cmp dword ptr ss : [ebp-8], ebx
        mov dword ptr ds : [ecx], edi
        mov dword ptr ss : [ebp-0xC], eax
        mov byte ptr ss : [ebp-1], 1
        jl public_6d4e84e
        public_6d4e88b : nop
        cmp byte ptr ss : [ebp-1], 0
        jne public_6d4e83d
        public_6d4e891 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4e7ce)
    }
}

#undef public_6d4e7e6
#undef public_6d4e7f1
#undef public_6d4e7f7
#undef public_6d4e818
#undef public_6d4e82e
#undef public_6d4e83d
#undef public_6d4e840
#undef public_6d4e84e
#undef public_6d4e851
#undef public_6d4e861
#undef public_6d4e88b
#undef public_6d4e891
